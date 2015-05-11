//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Functions of ColliderBit_eventLoop. Based
///  heavily on the ExampleBit_A Functions
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///
///  \author Abram Krislock
///          (a.m.b.krislock@fys.uio.no)
///  \author Aldo Saavedra
///
///  *********************************************

#include <string>
#include <iostream>
#include <fstream>
#include <memory>
#include <numeric>
#include <vector>

#include "gambit/Elements/gambit_module_headers.hpp"
#include "gambit/ColliderBit/ColliderBit_rollcall.hpp"

namespace Gambit {
  namespace ColliderBit {


    /// ********************************************
    /// Non-rollcalled Functions and Local Variables
    /// ********************************************

    /// Event labels
    enum specialEvents {INIT = -1, START_SUBPROCESS = -2, END_SUBPROCESS = -3, FINALIZE = -4};
    /// Analysis stuff
    HEPUtilsAnalysisContainer* globalAnalyses = new HEPUtilsAnalysisContainer();
    std::vector<std::string> analysisNames;
    /// Delphes stuff
    /// @TODO BOSS delphes? Euthanize delphes?
    bool resetDelphesFlag = true;
    std::string delphesConfigFilename;
    /// BuckFast stuff
    bool resetBuckFastFlag = true;
    /// Pythia stuff
    std::vector<std::string> pythiaNames;
    std::vector<std::string>::const_iterator iter;
    int pythiaConfigurations, pythiaNumber;
    std::string slhaFilename;
    /// General collider sim info stuff
    #define SHARED_OVER_OMP iter,pythiaNumber,pythiaConfigurations,globalAnalyses


    /// *************************************************
    /// Rollcalled functions properly hooked up to Gambit
    /// *************************************************
    /// *** Loop Managers ***

    void operatePythia() {
      using namespace Pipes::operatePythia;
      int nEvents = 0;
      globalAnalyses->clear();

      #pragma omp critical (runOptions)
      {
        /// Retrieve runOptions from the YAML file safely...
        GET_COLLIDER_RUNOPTION(pythiaNames, std::vector<std::string>);
        /// @todo Subprocess specific nEvents
        GET_COLLIDER_RUNOPTION(nEvents, int);
        /// @todo Get the Spectrum and Decay info from SpecBit and DecayBit
        GET_COLLIDER_RUNOPTION(slhaFilename, std::string);
      }

      /// For every collider requested in the yaml file:
      for (iter = pythiaNames.cbegin(); iter != pythiaNames.cend(); ++iter) {
        pythiaNumber = 0;
        /// Defaults to 1 if option unspecified
        #pragma omp critical (runOptions)
        {
          pythiaConfigurations = runOptions->getValueOrDef<int>(1, *iter);
        }

        while (pythiaNumber < pythiaConfigurations) {
          ++pythiaNumber;
          Loop::executeIteration(INIT);
          #pragma omp parallel shared(SHARED_OVER_OMP)
          {
            Loop::executeIteration(START_SUBPROCESS);
            #pragma omp for
            for (int i = 1; i <= nEvents; ++i) {
              Loop::executeIteration(i);
            }
            Loop::executeIteration(END_SUBPROCESS);
          }
          std::cout << "\n\n\n\n Operation of Pythia named " << *iter
                    << " number " << std::to_string(pythiaNumber) << " has finished." << std::endl;
          #ifdef HESITATE
          std::cout<<"\n\n [Press Enter]";
          std::getchar();
          #endif
        }
      }
      Loop::executeIteration(FINALIZE);
    }



    /// *** Hard Scattering Collider Simulators ***

    void getPythia(Gambit::ColliderBit::SpecializablePythia &result) {
      using namespace Pipes::getPythia;

      if (!result.ready and *Loop::iteration == START_SUBPROCESS) {
        /// Each thread gets its own Pythia instance.
        /// Thus, the initialization is *after* INIT, within omp parallel.
        std::vector<std::string> pythiaOptions;
        std::string pythiaConfigName;

        /// Setup new Pythia
        pythiaConfigName = "pythiaOptions";
        pythiaConfigName += "_";
        pythiaConfigName += std::to_string(pythiaNumber);
        /// If the SpecializablePythia specialization is hard-coded, okay with no options.
        #pragma omp critical (runOptions)
        {
          if (runOptions->hasKey(*iter, pythiaConfigName))
            pythiaOptions = runOptions->getValue<std::vector<std::string>>(*iter, pythiaConfigName);
        }
        pythiaOptions.push_back("SLHA:file = " + slhaFilename);
        pythiaOptions.push_back("Random:seed = " + std::to_string(12345 + omp_get_thread_num()));

        result.resetSpecialization(*iter);
        result.init(pythiaOptions);
        /// @TODO Can we test for xsec veto here? Might be analysis dependent, so see TODO below.
      } else if (*Loop::iteration == END_SUBPROCESS) {
        result.ready = false;
      }
    }



    /// *** Detector Simulators ***

    void getDelphes(Gambit::ColliderBit::DelphesBase* &result) {
      using namespace Pipes::getDelphes;
      std::vector<std::string> delphesOptions;
      if (resetDelphesFlag and *Loop::iteration == INIT) {
        #pragma omp critical (Delphes)
        {
          /// Setup new Delphes
          GET_COLLIDER_RUNOPTION(delphesOptions, std::vector<std::string>);
          /// Memory allocation: Delphes
          result = mkDelphes("DelphesVanilla", delphesOptions);
          resetDelphesFlag = false;
        }
      } else if (*Loop::iteration == FINALIZE) {
        /// Memory clean-up: Delphes
        delete result;
        result = 0;
        resetDelphesFlag = true;
      }
    }


    void getBuckFast(Gambit::ColliderBit::BuckFastBase* &result) {
      using namespace Pipes::getBuckFast;
      std::string buckFastOption;
      if (resetBuckFastFlag and *Loop::iteration == INIT) {
        #pragma omp critical (BuckFast)
        {
          /// Setup new BuckFast
          GET_COLLIDER_RUNOPTION(buckFastOption, std::string);
          /// Memory allocation: BuckFast
          result = mkBuckFast(buckFastOption);
          resetBuckFastFlag = false;
        }
      } else if (*Loop::iteration == FINALIZE) {
        /// Memory clean-up: BuckFast
        delete result;
        result = 0;
        resetBuckFastFlag = true;
      }
    }



    /// *** Initialization for analyses ***

    void getAnalysisContainer(Gambit::ColliderBit::HEPUtilsAnalysisContainer& result) {
      using namespace Pipes::getAnalysisContainer;
      if (*Loop::iteration == INIT) {
        #pragma omp critical (runOptions)
        {
          GET_COLLIDER_RUNOPTION(analysisNames, std::vector<std::string>);
        }
        #pragma omp critical (access_globalAnalyses)
        {
          if(!globalAnalyses->ready) {
            /// A global Analyses container exists to hold combined results from all threads.
            globalAnalyses->init(analysisNames);
          }
        }
        return;
      }

      if (*Loop::iteration == START_SUBPROCESS) {
        /// Each thread gets its own Analysis container.
        /// Thus, their initialization is *after* INIT, within omp parallel.
        /// @TODO Can we test for xsec veto here? Might be analysis dependent...
        result.init(analysisNames);
        return;
      }
      
      if (*Loop::iteration == END_SUBPROCESS) {
        const double xs = Dep::HardScatteringSim->xsec_pb();
        const double xserr = Dep::HardScatteringSim->xsecErr_pb();
        result.add_xsec(xs, xserr);
        #pragma omp critical (access_globalAnalyses)
        {
          globalAnalyses->add(result);
        }
        return;
      }
    }



    /// *** Hard Scattering Event Generators ***

    void generatePythia8Event(Pythia8::Event& result) {
      using namespace Pipes::generatePythia8Event;
      if (*Loop::iteration <= INIT) return;
      result.clear();

      /// Get the next event from Pythia8
      (*Dep::HardScatteringSim).nextEvent(result);
    }



    /// Convert a hadron-level Pythia8::Event into an unsmeared HEPUtils::Event
    /// @todo Overlap between jets and prompt containers: need some isolation in MET calculation
    void convertPythia8ParticleEvent(HEPUtils::Event& result) {
      using namespace Pipes::convertPythia8ParticleEvent;
      if (*Loop::iteration <= INIT) return;
      result.clear();

      /// Get the next event from Pythia8
      const auto& pevt = *Dep::HardScatteringEvent;

      std::vector<fastjet::PseudoJet> bhadrons; //< for input to FastJet b-tagging
      std::vector<Particle*> bpartons;
      std::vector<Particle*> tauCandidates;
      P4 pout; //< Sum of momenta outside acceptance

      // Make a first pass of non-final particles to gather b-hadrons and taus
      for (int i = 0; i < pevt.size(); ++i) {
        const Pythia8::Particle& p = pevt[i];

        // Find last b-hadrons in b decay chains as the best proxy for b-tagging
        //if (isFinalB(i, pevt)) bhadrons.push_back(mk_pseudojet(p.p()));

        if(p.idAbs()==5) {
          std::vector<int> bDaughterList = p.daughterList();
          bool isGoodB=true;
          for (size_t daughter = 0; daughter < bDaughterList.size(); daughter++) {
            const Pythia8::Particle& pDaughter = pevt[bDaughterList[daughter]];
            int daughterID = pDaughter.idAbs();
            if(daughterID == 5)isGoodB=false;
          }
          if(isGoodB){

            HEPUtils::Particle* tmpB = new HEPUtils::Particle(mk_p4(p.p()), p.id());
            bpartons.push_back(tmpB);
          }

        }

        if(p.idAbs()==15) {

          // Veto leptonic taus
          //bool isLeptonicTau = false;
          std::vector<int> tauDaughterList = p.daughterList();
          P4 tmpMomentum;
          bool isGoodTau=true;

          for (size_t daughter = 0; daughter < tauDaughterList.size(); daughter++) {
            const Pythia8::Particle& pDaughter = pevt[tauDaughterList[daughter]];
            int daughterID = pDaughter.idAbs();
            //std::cout << "DAUGHTER ID " << daughterID << std::endl;
            if (daughterID == MCUtils::PID::ELECTRON || daughterID == MCUtils::PID::MUON || daughterID == MCUtils::PID::WPLUSBOSON || daughterID == MCUtils::PID::TAU)isGoodTau=false;

            if(!daughterID == MCUtils::PID::TAU)tmpMomentum+= mk_p4(pDaughter.p());
          }

          if(isGoodTau){

            HEPUtils::Particle* tmpTau = new HEPUtils::Particle(mk_p4(p.p()), p.id());
            tauCandidates.push_back(tmpTau);
          }
        }
      }

      // Loop over final state particles for jet inputs and MET
      std::vector<fastjet::PseudoJet> jetparticles;
      for (int i = 0; i < pevt.size(); ++i) {
        const Pythia8::Particle& p = pevt[i];

        // Only consider final state particles
        if (!p.isFinal()) continue;

        // Add particle outside ATLAS/CMS acceptance to MET
        /// @todo Move out-of-acceptance MET contribution to BuckFast
        if (abs(p.eta()) > 5.0) {
          pout += mk_p4(p.p());
          continue;
        }

        // Promptness: for leptons and photons we're only interested if they don't come from hadron/tau decays
        const bool prompt = !fromHadron(i, pevt); //&& !fromTau(i, pevt);
        const bool visible = MCUtils::PID::isStrongInteracting(p.id()) || MCUtils::PID::isEMInteracting(p.id());

        // Add prompt and invisible particles as individual particles
        if (prompt || !visible) {
          HEPUtils::Particle* gp = new HEPUtils::Particle(mk_p4(p.p()), p.id());
          gp->set_prompt();
          result.add_particle(gp); // Will be automatically categorised
        }

        // All particles other than invisibles and muons are jet constituents
        if (visible && p.idAbs() != MCUtils::PID::MUON) jetparticles.push_back(mk_pseudojet(p.p()));
      }

      /// Jet finding
      /// Currently hard-coded to use anti-kT R=0.4 jets above 10 GeV (could remove pT cut entirely)
      /// @todo choose jet algorithm via _settings?
      const fastjet::JetDefinition jet_def(fastjet::antikt_algorithm, 0.4);
      fastjet::ClusterSequence cseq(jetparticles, jet_def);
      std::vector<fastjet::PseudoJet> pjets = sorted_by_pt(cseq.inclusive_jets(10));

      /// Do jet b-tagging, etc. and add to the Event
      /// @todo Use ghost tagging?
      /// @note We need to _remove_ this b-tag in the detector sim if outside the tracker acceptance!
      for (auto& pj : pjets) {
        /// @todo Replace with HEPUtils::any(bhadrons, [&](const auto& pb){ pj.delta_R(pb) < 0.4 })
        bool isB = false;

        /*for (auto& pb : bhadrons) {
          if (pj.delta_R(pb) < 0.4) {
          isB = true;
          break;
          }
          }*/
        P4 jetMom=HEPUtils::mk_p4(pj);

        for (auto& pb : bpartons) {

          if (jetMom.deltaR_eta(pb->mom()) < 0.4) {
            isB = true;
            break;
          }
        }

        bool isTau=false;
        for(auto& ptau : tauCandidates){

          if(jetMom.deltaR_eta(ptau->mom()) < 0.5){
            isTau=true;
            break;
          }
        }
        // Add to the event (use jet momentum for tau)
        if(isTau){
          HEPUtils::Particle* gp = new HEPUtils::Particle(HEPUtils::mk_p4(pj), MCUtils::PID::TAU);
          gp->set_prompt();
          result.add_particle(gp);
        }

        result.add_jet(new HEPUtils::Jet(HEPUtils::mk_p4(pj), isB));
      }

      /// Calculate missing momentum
      //
      // From balance of all visible momenta (requires isolation)
      // const std::vector<Particle*> visibles = result.visible_particles();
      // P4 pvis;
      // for (size_t i = 0; i < visibles.size(); ++i) {
      //   pvis += visibles[i]->mom();
      // }
      // for (size_t i = 0; i < result.jets.size(); ++i) {
      //   pvis += result.jets[i]->mom();
      // }
      // set_missingmom(-pvis);
      //
      // From sum of invisibles, including those out of range
      for (size_t i = 0; i < result.invisible_particles().size(); ++i) {
        pout += result.invisible_particles()[i]->mom();
      }
      result.set_missingmom(pout);
    }

    /// Convert a partonic (no hadrons) Pythia8::Event into an unsmeared HEPUtils::Event
    void convertPythia8PartonEvent(HEPUtils::Event& result) {
      using namespace Pipes::convertPythia8PartonEvent;
      if (*Loop::iteration <= INIT) return;
      result.clear();

      /// Get the next event from Pythia8
      std::vector<Particle*> tauCandidates;
      const auto& pevt = *Dep::HardScatteringEvent;

      // Make a first pass of non-final particles to gather taus
      for (int i = 0; i < pevt.size(); ++i) {
        const Pythia8::Particle& p = pevt[i];

        // Find last tau in prompt tau replica chains as a proxy for tau-tagging

        if(p.idAbs()==15) {

          std::vector<int> tauDaughterList = p.daughterList();
          P4 tmpMomentum;
          bool isGoodTau=true;

          for (size_t daughter = 0; daughter < tauDaughterList.size(); daughter++) {
            const Pythia8::Particle& pDaughter = pevt[tauDaughterList[daughter]];
            int daughterID = pDaughter.idAbs();

            if (daughterID == MCUtils::PID::ELECTRON || daughterID == MCUtils::PID::MUON || daughterID == MCUtils::PID::WPLUSBOSON || daughterID == MCUtils::PID::TAU)isGoodTau=false;

            if(!daughterID == MCUtils::PID::TAU)tmpMomentum+= mk_p4(pDaughter.p());
          }

          if(isGoodTau){
            HEPUtils::Particle* tmpTau = new HEPUtils::Particle(mk_p4(p.p()), p.id());
            tauCandidates.push_back(tmpTau);
          }
        }
      }

      std::vector<fastjet::PseudoJet> jetparticles; //< Pseudojets for input to FastJet
      P4 pout; //< Sum of momenta outside acceptance

      // Make a single pass over the event to gather final leptons, partons, and photons
      for (int i = 0; i < pevt.size(); ++i) {
        const Pythia8::Particle& p = pevt[i];

        // We only use "final" particles, i.e. those with no children. So Py8 must have hadronization disabled
        if (!p.isFinal()) continue;

        // Only consider partons within ATLAS/CMS acceptance
        /// @todo We should leave this for the detector sim / analysis to deal with
        if (abs(p.eta()) > 5.0) {
          pout += mk_p4(p.p());
          continue;
        }

        // Find electrons/muons/taus/photons to be treated as prompt (+ invisibles)
        /// @todo *Some* photons should be included in jets!!! Ignore for now since no FSR
        /// @todo Lepton dressing
        const bool prompt = isFinalPhoton(i, pevt) || (isFinalLepton(i, pevt)); // && abs(p.id()) != MCUtils::PID::TAU);
        const bool visible = MCUtils::PID::isStrongInteracting(p.id()) || MCUtils::PID::isEMInteracting(p.id());
        if (prompt || !visible) {
          HEPUtils::Particle* gp = new HEPUtils::Particle(mk_p4(p.p()), p.id());
          gp->set_prompt();
          result.add_particle(gp); // Will be automatically categorised
        }

        // Everything other than invisibles and muons, including taus & partons are jet constituents
        /// @todo Only include hadronic tau fraction?
        // if (visible && (isFinalParton(i, pevt) || isFinalTau(i, pevt))) {
        if (visible && p.idAbs() != MCUtils::PID::MUON) {
          fastjet::PseudoJet pj = mk_pseudojet(p.p());
          pj.set_user_index(abs(p.id()));
          jetparticles.push_back(pj);
        }

      }

      /// Jet finding
      /// Currently hard-coded to use anti-kT R=0.4 jets above 10 GeV (could remove pT cut entirely)
      /// @todo choose jet algorithm via _settings?
      const fastjet::JetDefinition jet_def(fastjet::antikt_algorithm, 0.4);
      fastjet::ClusterSequence cseq(jetparticles, jet_def);
      std::vector<fastjet::PseudoJet> pjets = sorted_by_pt(cseq.inclusive_jets(10));
      // Add to the event, with b-tagging info"
      for (const fastjet::PseudoJet& pj : pjets) {
        // Do jet b-tagging, etc. by looking for b quark constituents (i.e. user index = |parton ID| = 5)
        /// @note This b-tag is removed in the detector sim if outside the tracker acceptance!
        const bool isB = HEPUtils::any(pj.constituents(),
                                       [](const fastjet::PseudoJet& c){ return c.user_index() == MCUtils::PID::BQUARK; });
        result.add_jet(new HEPUtils::Jet(HEPUtils::mk_p4(pj), isB));

        bool isTau=false;
        for(auto& ptau : tauCandidates){
          P4 jetMom=HEPUtils::mk_p4(pj);
          if(jetMom.deltaR_eta(ptau->mom()) < 0.5){
            isTau=true;
            break;
          }
        }
        // Add to the event (use jet momentum for tau)
        if(isTau){
          HEPUtils::Particle* gp = new HEPUtils::Particle(HEPUtils::mk_p4(pj), MCUtils::PID::TAU);
          gp->set_prompt();
          result.add_particle(gp);
        }
      }

      /// Calculate missing momentum
      //
      // From balance of all visible momenta (requires isolation)
      // const std::vector<Particle*> visibles = result.visible_particles();
      // P4 pvis;
      // for (size_t i = 0; i < visibles.size(); ++i) {
      //   pvis += visibles[i]->mom();
      // }
      // for (size_t i = 0; i < result.jets.size(); ++i) {
      //   pvis += result.jets[i]->mom();
      // }
      // set_missingmom(-pvis);
      //
      // From sum of invisibles, including those out of range
      for (const Particle* p : result.invisible_particles())
        pout += p->mom();
      result.set_missingmom(pout);
    }


    /// Gambit facing interface function
    void convertPythia8Event(HEPUtils::Event &result) {

      //convertPythia8PartonEvent(result);
      convertPythia8ParticleEvent(result);

    }

    /// *** Standard Event Format Functions ***

    void reconstructDelphesEvent(HEPUtils::Event& result) {
      using namespace Pipes::reconstructDelphesEvent;
      if (*Loop::iteration <= INIT) return;
      result.clear();

      #pragma omp critical (Delphes)
      {
        (*Dep::DetectorSim)->processEvent(*Dep::HardScatteringEvent, result);
      }
    }

    void reconstructBuckFastEvent(HEPUtils::Event& result) {
      using namespace Pipes::reconstructBuckFastEvent;
      if (*Loop::iteration <= INIT) return;
      result.clear();

      (*Dep::SimpleSmearingSim)->processEvent(*Dep::ConvertedScatteringEvent, result);
    }



    /// *** Analysis Accumulators ***

    void runAnalyses(ColliderLogLikes& result)
    {
      using namespace Pipes::runAnalyses;
      if (*Loop::iteration == FINALIZE) {
        // The final iteration: get log likelihoods for the analyses
        result.clear();
        for (auto anaPtr = globalAnalyses->analyses.begin();
             anaPtr != globalAnalyses->analyses.end(); ++anaPtr)
        {
          cout << "Set xsec from ana = " << (*anaPtr)->xsec() << " pb" << endl;
          // Finalize is currently only used to report a cut flow.... rename?
          (*anaPtr)->finalize();
          result.push_back((*anaPtr)->get_results());
        }
        return;
      }

      if (*Loop::iteration <= INIT) return;

      // Loop over analyses and run them... Managed by HEPUtilsAnalysisContainer
      Dep::AnalysisContainer->analyze(*Dep::ReconstructedEvent);
    }



    /// Loop over all analyses (and SRs within one analysis) and fill a vector of observed likelihoods
    /// @todo Don't we also need to return a reference LL, or just the deltaLL?
    void calcLogLike(double& result) {
      using namespace Pipes::calcLogLike;
      ColliderLogLikes analysisResults = (*Dep::AnalysisNumbers);
      cout << "In calcLogLike" << endl;

      std::vector<double> observedLikelihoods;
      for (size_t analysis = 0; analysis < analysisResults.size(); ++analysis) {
        cout << "In analysis loop" << endl;
        for (size_t SR = 0; SR < analysisResults[analysis].size(); ++SR) {
          cout << "In signal region loop" << endl;
          SignalRegionData srData = analysisResults[analysis][SR];

          /// Actual observed number of events
          int n_obs = (int) srData.n_observed;

          // A contribution to the predicted number of events that is known exactly
          // (e.g. from data-driven background estimate)
          double n_predicted_exact = 0;

          // A contribution to the predicted number of events that is not known exactly
          double n_predicted_uncertain_b = srData.n_background;
          double n_predicted_uncertain_sb = srData.n_signal + srData.n_background;

          /// A fractional uncertainty on n_predicted_uncertain
          /// (e.g. 0.2 from 20% uncertainty on efficencty wrt signal events)
          double bkg_ratio = srData.background_sys/srData.n_background;
          double sig_ratio = (srData.n_signal != 0) ? srData.signal_sys/srData.n_signal : 0; ///< @todo Is this the best treatment?
          double uncertainty_b = bkg_ratio;
          double uncertainty_sb = sqrt(bkg_ratio*bkg_ratio + sig_ratio*sig_ratio);

          int n_predicted_total_b_int = (int) round(n_predicted_exact + n_predicted_uncertain_b);
          // int n_predicted_total_sb_int = (int) round(n_predicted_exact + n_predicted_uncertain_sb); //< we don't use this: predictions all use exp[b] as the "observed"

          double llb_exp, llsb_exp, llb_obs, llsb_obs;
          cout << "OBS " << n_obs << " EXACT " << n_predicted_exact << " UNCERTAIN_B " << n_predicted_uncertain_b << " UNCERTAINTY_B " << uncertainty_b << endl;
          cout << "OBS " << n_obs << " EXACT " << n_predicted_exact << " UNCERTAIN_S+B " << n_predicted_uncertain_sb << " UNCERTAINTY_S+B " << uncertainty_sb << endl;
          // Use a log-normal distribution for the nuisance parameter (more correct)
          if (*BEgroup::lnlike_marg_poisson == "lnlike_marg_poisson_lognormal_error") {
            llb_exp = BEreq::lnlike_marg_poisson_lognormal_error(n_predicted_total_b_int, n_predicted_exact, n_predicted_uncertain_b, uncertainty_b);
            llsb_exp = BEreq::lnlike_marg_poisson_lognormal_error(n_predicted_total_b_int, n_predicted_exact, n_predicted_uncertain_sb, uncertainty_sb);
            llb_obs = BEreq::lnlike_marg_poisson_lognormal_error(n_obs, n_predicted_exact, n_predicted_uncertain_b, uncertainty_b);
            llsb_obs = BEreq::lnlike_marg_poisson_lognormal_error(n_obs, n_predicted_exact, n_predicted_uncertain_sb, uncertainty_sb);
          }
          // Use a Gaussian distribution for the nuisance parameter (marginally faster)
          else if (*BEgroup::lnlike_marg_poisson == "lnlike_marg_poisson_gaussian_error") {
            llb_exp = BEreq::lnlike_marg_poisson_gaussian_error(n_predicted_total_b_int, n_predicted_exact, n_predicted_uncertain_b, uncertainty_b);
            llsb_exp = BEreq::lnlike_marg_poisson_gaussian_error(n_predicted_total_b_int, n_predicted_exact, n_predicted_uncertain_sb, uncertainty_sb);
            llb_obs = BEreq::lnlike_marg_poisson_gaussian_error(n_obs, n_predicted_exact, n_predicted_uncertain_b, uncertainty_b);
            llsb_obs = BEreq::lnlike_marg_poisson_gaussian_error(n_obs, n_predicted_exact, n_predicted_uncertain_sb, uncertainty_sb);
          }
          cout << "COLLIDER_RESULT " << analysis << " " << SR << " " << llb_exp << " " << llsb_exp << " " << llb_obs << " " << llsb_obs << endl;

          observedLikelihoods.push_back(result);
        } // end SR loop
      } // end ana loop

      /// @TODO Need to combine { ana+SR } to return the single most stringent likelihood (ratio) / other combined-as-well-as-we-can LL number

    }

  }
}
#undef DEBUG
