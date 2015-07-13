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
///  \author Chris Rogan
///          (crogan@cern.ch)
///  \date 2014 Aug
///  \date 2015 May
///
///  \author Pat Scott
///          (p.scott@imperial.ac.uk)
///  \date 2015 Jul
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

namespace Gambit
{

  namespace ColliderBit
  {


    /// ********************************************
    /// Non-rollcalled Functions and Local Variables
    /// ********************************************

    /// Event labels
    enum specialEvents {BASE_INIT=-1, INIT = -2, START_SUBPROCESS = -3, END_SUBPROCESS = -4, FINALIZE = -5};
    /// Analysis stuff
    HEPUtilsAnalysisContainer* globalAnalyses = new HEPUtilsAnalysisContainer();
    std::vector<std::string> analysisNames;
    /// Delphes stuff
    /// @TODO BOSS delphes? Euthanize delphes?
    std::string delphesConfigFilename;
    /// Pythia stuff
    std::vector<std::string> pythiaNames;
    std::vector<std::string>::const_iterator iter;
    int pythiaConfigurations, pythiaNumber;
    /// General collider sim info stuff
    #define SHARED_OVER_OMP iter,pythiaNumber,pythiaConfigurations,globalAnalyses


    /// *************************************************
    /// Rollcalled functions properly hooked up to Gambit
    /// *************************************************
    /// *** Loop Managers ***

    void operatePythia()
    {
      using namespace Pipes::operatePythia;
      int nEvents = 0;
      globalAnalyses->clear();

      // Do the base-level initialisation   
      Loop::executeIteration(BASE_INIT);

      #pragma omp critical (runOptions)
      {
        /// Retrieve runOptions from the YAML file safely...
        GET_COLLIDER_RUNOPTION(pythiaNames, std::vector<std::string>);
        /// @todo Subprocess specific nEvents
        GET_COLLIDER_RUNOPTION(nEvents, int);
      }

      // For every collider requested in the yaml file:
      for (iter = pythiaNames.cbegin(); iter != pythiaNames.cend(); ++iter) 
      {
        pythiaNumber = 0;
        #pragma omp critical (runOptions)
        {
          // Defaults to 1 if option unspecified
          pythiaConfigurations = runOptions->getValueOrDef<int>(1, *iter);
        }

        while (pythiaNumber < pythiaConfigurations)
        {
          ++pythiaNumber;
          Loop::executeIteration(INIT);
          #pragma omp parallel shared(SHARED_OVER_OMP)
          {
            Loop::executeIteration(START_SUBPROCESS);
            #pragma omp for
            for (int i = 1; i <= nEvents; ++i) Loop::executeIteration(i);
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

    void getPythia(Gambit::ColliderBit::SpecializablePythia &result)
    {
      using namespace Pipes::getPythia;

      static bool SLHA_debug_mode = false;      
      static std::vector<std::string> filenames;
      static unsigned int counter = -1;               

      if (*Loop::iteration == BASE_INIT)
      {      
        // If there are no debug filenames set, look for them.
        if (filenames.empty())              
        {                          
          #pragma omp_critical (runOptions)
          {
            SLHA_debug_mode = runOptions->hasKey("debug_SLHA_filenames");          
            if (SLHA_debug_mode) filenames = runOptions->getValue<std::vector<str> >("debug_SLHA_filenames");  
          }
        }
        // Increment the counter if there are debug SLHA files and this is the first thread.
        if (SLHA_debug_mode)
        { 
          if (omp_get_thread_num() == 0) counter++;
          if (filenames.size() == counter) invalid_point().raise("No more SLHA files. My work is done.");
        }
      }

      else if (*Loop::iteration == START_SUBPROCESS)
      {
        // TODO Surely, I must call result.clear()?

        // Each thread gets its own Pythia instance.
        // Thus, the actual Pythia initialization is 
        // *after* INIT, within omp parallel.
        std::vector<std::string> pythiaOptions;
        std::string pythiaConfigName;
        
        // Setup new Pythia
        pythiaConfigName = "pythiaOptions_" + std::to_string(pythiaNumber);

        // If the SpecializablePythia specialization is hard-coded, okay with no options.
        #pragma omp critical (runOptions)
        {
          if (runOptions->hasKey(*iter, pythiaConfigName))
            pythiaOptions = runOptions->getValue<std::vector<std::string>>(*iter, pythiaConfigName);
        }
        pythiaOptions.push_back("Random:seed = " + std::to_string(54321 + omp_get_thread_num()));
          cout << LOCAL_INFO << endl;

        result.resetSpecialization(*iter);
          cout << LOCAL_INFO << endl;

        if (SLHA_debug_mode)
        {
          // Run Pythia reading an SLHA file.
          logger() << "Reading SLHA file: " << filenames.at(counter) << EOM;
          pythiaOptions.push_back("SLHA:file = " + filenames.at(counter));         
          result.init(pythiaOptions);
        }
        else
        {
          // Run Pythia using an SLHAea object constructed from dependencies on the spectrum and decays.
          cout << LOCAL_INFO << endl;
          SLHAstruct slha = Dep::decay_rates->as_slhaea();
          if (ModelInUse("MSSM78atQ") or ModelInUse("MSSM78atMGUT"))
          {
            // MSSM-specific
            SLHAstruct spectrum;
            #pragma omp critical (spectrum_as_slhaea)
            {
              spectrum = (*Dep::MSSM_spectrum)->getSLHAea();
            }
            SLHAea::Block block("MODSEL");
            block.push_back("BLOCK MODSEL              # Model selection");
            SLHAea::Line line;
            line << 1 << 0 << "# General MSSM";
            block.push_back(line);
            slha.insert(slha.begin(), spectrum.begin(), spectrum.end());
            slha.push_front(block);
          }
          else
          {
            ColliderBit_error().raise(LOCAL_INFO, "No spectrum object available for this model."); 
          }
          cout << slha << endl;
          pythiaOptions.push_back("SLHA:file = slhaea");
          result.init(pythiaOptions, &slha);
          cout << LOCAL_INFO << endl;
        }
        /// @TODO Can we test for xsec veto here? Might be analysis dependent, so see TODO below.
      }
    }



    /// *** Detector Simulators ***

    void getDelphes(Gambit::ColliderBit::DelphesVanilla &result) {
      using namespace Pipes::getDelphes;
      std::vector<std::string> delphesOptions;
      if (*Loop::iteration == INIT)
      {
        result.clear();
        #pragma omp critical (Delphes)
        {
          /// Setup new Delphes
          GET_COLLIDER_RUNOPTION(delphesOptions, std::vector<std::string>);
          result.init(delphesOptions);
        }
      }
    }


    void getBuckFast(Gambit::ColliderBit::BuckFastSmear &result)
    {
      using namespace Pipes::getBuckFast;
      std::string buckFastOption;
      if (*Loop::iteration == INIT)
      {
        result.clear();
        #pragma omp critical (BuckFast)
        {
          /// Setup new BuckFast
          /// @note There's really nothing to do. BuckFast doesn't even have class variables.
          result.init();
        }
      }
    }



    /// *** Initialization for analyses ***

    void getAnalysisContainer(Gambit::ColliderBit::HEPUtilsAnalysisContainer& result) {
      using namespace Pipes::getAnalysisContainer;
      if (*Loop::iteration == INIT)
      {
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

      if (*Loop::iteration == START_SUBPROCESS)
      {
        /// Each thread gets its own Analysis container.
        /// Thus, their initialization is *after* INIT, within omp parallel.
        /// @TODO Can we test for xsec veto here? Might be analysis dependent...
        result.init(analysisNames);
        return;
      }
      
      if (*Loop::iteration == END_SUBPROCESS)
      {
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

    void generatePythia8Event(Pythia8::Event& result)
    {
      using namespace Pipes::generatePythia8Event;
      if (*Loop::iteration <= BASE_INIT) return;
      result.clear();

      /// Get the next event from Pythia8
      (*Dep::HardScatteringSim).nextEvent(result);
    }



    /// Convert a hadron-level Pythia8::Event into an unsmeared HEPUtils::Event
    /// @todo Overlap between jets and prompt containers: need some isolation in MET calculation
    void convertPythia8ParticleEvent(HEPUtils::Event& result)
    {
      using namespace Pipes::convertPythia8ParticleEvent;
      if (*Loop::iteration <= BASE_INIT) return;
      result.clear();

      /// Get the next event from Pythia8
      const Pythia8::Event& pevt = *Dep::HardScatteringEvent;

      std::vector<fastjet::PseudoJet> bhadrons; //< for input to FastJet b-tagging
      std::vector<HEPUtils::Particle*> bpartons;
      std::vector<HEPUtils::Particle*> tauCandidates;
      HEPUtils::P4 pout; //< Sum of momenta outside acceptance

      // Make a first pass of non-final particles to gather b-hadrons and taus
      for (int i = 0; i < pevt.size(); ++i) {
        const Pythia8::Particle& p = pevt[i];

        // Find last b-hadrons in b decay chains as the best proxy for b-tagging
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

        // Veto leptonic taus
        if(p.idAbs()==15) {
          std::vector<int> tauDaughterList = p.daughterList();
          HEPUtils::P4 tmpMomentum;
          bool isGoodTau=true;

          for (size_t daughter = 0; daughter < tauDaughterList.size(); daughter++) {
            const Pythia8::Particle& pDaughter = pevt[tauDaughterList[daughter]];
            int daughterID = pDaughter.idAbs();
            if (daughterID == MCUtils::PID::ELECTRON || daughterID == MCUtils::PID::MUON
                || daughterID == MCUtils::PID::WPLUSBOSON || daughterID == MCUtils::PID::TAU)
              isGoodTau=false;
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

        HEPUtils::P4 jetMom=HEPUtils::mk_p4(pj);
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
      // HEPUtils::P4 pvis;
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
      if (*Loop::iteration <= BASE_INIT) return;
      result.clear();

      /// Get the next event from Pythia8
      std::vector<HEPUtils::Particle*> tauCandidates;
      const auto& pevt = *Dep::HardScatteringEvent;

      // Make a first pass of non-final particles to gather taus
      for (int i = 0; i < pevt.size(); ++i) {
        const Pythia8::Particle& p = pevt[i];

        // Find last tau in prompt tau replica chains as a proxy for tau-tagging
        if(p.idAbs()==15) {
          std::vector<int> tauDaughterList = p.daughterList();
          HEPUtils::P4 tmpMomentum;
          bool isGoodTau=true;

          for (size_t daughter = 0; daughter < tauDaughterList.size(); daughter++) {
            const Pythia8::Particle& pDaughter = pevt[tauDaughterList[daughter]];
            int daughterID = pDaughter.idAbs();
            if (daughterID == MCUtils::PID::ELECTRON || daughterID == MCUtils::PID::MUON
                || daughterID == MCUtils::PID::WPLUSBOSON || daughterID == MCUtils::PID::TAU)
              isGoodTau=false;
            if(!daughterID == MCUtils::PID::TAU)tmpMomentum+= mk_p4(pDaughter.p());
          }

          if(isGoodTau){
            HEPUtils::Particle* tmpTau = new HEPUtils::Particle(mk_p4(p.p()), p.id());
            tauCandidates.push_back(tmpTau);
          }
        }
      }

      std::vector<fastjet::PseudoJet> jetparticles; //< Pseudojets for input to FastJet
      HEPUtils::P4 pout; //< Sum of momenta outside acceptance

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
          HEPUtils::P4 jetMom = HEPUtils::mk_p4(pj);
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
      // HEPUtils::P4 pvis;
      // for (size_t i = 0; i < visibles.size(); ++i) {
      //   pvis += visibles[i]->mom();
      // }
      // for (size_t i = 0; i < result.jets.size(); ++i) {
      //   pvis += result.jets[i]->mom();
      // }
      // set_missingmom(-pvis);
      //
      // From sum of invisibles, including those out of range
      for (const HEPUtils::Particle* p : result.invisible_particles())
        pout += p->mom();
      result.set_missingmom(pout);
    }


    /// *** Standard Event Format Functions ***

    void reconstructDelphesEvent(HEPUtils::Event& result) {
      using namespace Pipes::reconstructDelphesEvent;
      if (*Loop::iteration <= BASE_INIT) return;
      result.clear();

      #pragma omp critical (Delphes)
      {
        (*Dep::DetectorSim).processEvent(*Dep::HardScatteringEvent, result);
      }
    }

    void reconstructBuckFastEvent(HEPUtils::Event& result) {
      using namespace Pipes::reconstructBuckFastEvent;
      if (*Loop::iteration <= BASE_INIT) return;
      result.clear();

      (*Dep::SimpleSmearingSim).processEvent(*Dep::ConvertedScatteringEvent, result);
    }



    /// *** Analysis Accumulators ***

    void runAnalyses(ColliderLogLikes& result)
    {
      using namespace Pipes::runAnalyses;
// Pat: merge conflict resolved here by accepting from ColliderBit_development.  Abram please check. <<<<<<< HEAD
      if (*Loop::iteration == FINALIZE) {
//=======

      //if (*Loop::iteration == INIT) {

        //// for (auto anaPtr = Dep::ListOfAnalyses->begin(); anaPtr != Dep::ListOfAnalyses->end(); ++anaPtr) {
        ////   (*anaPtr)->set_xsec(-1, -1);
        //// }

      //} else if (*Loop::iteration == END_SUBPROCESS) {

        //for (auto anaPtr = Dep::ListOfAnalyses->begin(); anaPtr != Dep::ListOfAnalyses->end(); ++anaPtr)
        //{
          ///// @TODO Clean this crap up... xsecArrays should be more Gambity.
          ///// @TODO THIS IS HARDCODED FOR ONLY ONE THREAD!!!
          ///// @todo Shouldn't add_xsec really be set_xsec in this context? (It's not analysis combination)
          //(*anaPtr)->add_xsec(xsecArray[0], xsecerrArray[0]);
        //}

      //} else if (*Loop::iteration == FINALIZE) {

//>>>>>>> master
        // The final iteration: get log likelihoods for the analyses
        result.clear();
        for (auto anaPtr = globalAnalyses->analyses.begin();
             anaPtr != globalAnalyses->analyses.end(); ++anaPtr)
        {
          cout << "Set xsec from ana = " << (*anaPtr)->xsec() << " pb" << endl;
// Pat: merge conflict resolved here by accepting from ColliderBit_development.  Abram please check. <<<<<<< HEAD
          // Finalize is currently only used to report a cut flow.... rename?
          (*anaPtr)->finalize();
//=======
//>>>>>>> master
          result.push_back((*anaPtr)->get_results());
        }
        return;
      }

      if (*Loop::iteration <= BASE_INIT) return;

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
    
    
    /// *** Higgs physics ***

    /// FeynHiggs Higgs production cross-sections
    void FH_HiggsProd(fh_HiggsProd &result) 
    {
      using namespace Pipes::FH_HiggsProd;
      
      Farray<fh_real, 1,52> prodxs;

      fh_HiggsProd HiggsProd;
      int error;
      fh_real sqrts;

      // Tevatron
      sqrts = 2.;
      error = 1;
      BEreq::FHHiggsProd(error, sqrts, prodxs);
      for(int i = 0; i < 52; i++) HiggsProd.prodxs_Tev[i] = prodxs(i+1);
      // LHC7
      sqrts = 7.;
      error = 1;
      BEreq::FHHiggsProd(error, sqrts, prodxs);
      for(int i = 0; i < 52; i++) HiggsProd.prodxs_LHC7[i] = prodxs(i+1);
      // LHC8
      sqrts = 8.;
      error = 1;
      BEreq::FHHiggsProd(error, sqrts, prodxs);
      for(int i = 0; i < 52; i++) HiggsProd.prodxs_LHC8[i] = prodxs(i+1);

      result = HiggsProd;
    }

    /// SM Higgs only model parameters
    void SMHiggs_ModelParameters(hb_ModelParameters &result)
    {
      using namespace Pipes::SMHiggs_ModelParameters;
      
      for(int i = 0; i < 3; i++)
      {
        result.Mh[i] = 0.; 
        result.deltaMh[i] = 0.;
        result.hGammaTot[i] = 0.; 
        result.CP[i] = 0.; 
        result.CS_lep_hjZ_ratio[i] = 0.; 
        result.CS_lep_bbhj_ratio[i] = 0.; 
        result.CS_lep_tautauhj_ratio[i] = 0.;
        for(int j = 0; j < 3; j++) result.CS_lep_hjhi_ratio[i][j] = 0.; 
        result.CS_gg_hj_ratio[i] = 0.; 
        result.CS_bb_hj_ratio[i] = 0.;
        result.CS_bg_hjb_ratio[i] = 0.; 
        result.CS_ud_hjWp_ratio[i] = 0.;
        result.CS_cs_hjWp_ratio[i] = 0.;
        result.CS_ud_hjWm_ratio[i] = 0.;
        result.CS_cs_hjWm_ratio[i] = 0.; 
        result.CS_gg_hjZ_ratio[i] = 0.;
        result.CS_dd_hjZ_ratio[i] = 0.;
        result.CS_uu_hjZ_ratio[i] = 0.;
        result.CS_ss_hjZ_ratio[i] = 0.; 
        result.CS_cc_hjZ_ratio[i] = 0.;
        result.CS_bb_hjZ_ratio[i] = 0.; 
        result.CS_tev_vbf_ratio[i] = 0.;
        result.CS_tev_tthj_ratio[i] = 0.; 
        result.CS_lhc7_vbf_ratio[i] = 0.;
        result.CS_lhc7_tthj_ratio[i] = 0.;
        result.CS_lhc8_vbf_ratio[i] = 0.;
        result.CS_lhc8_tthj_ratio[i] = 0.; 
        result.BR_hjss[i] = 0.;
        result.BR_hjcc[i] = 0.;
        result.BR_hjbb[i] = 0.; 
        result.BR_hjmumu[i] = 0.;
        result.BR_hjtautau[i] = 0.;
        result.BR_hjWW[i] = 0.;
        result.BR_hjZZ[i] = 0.; 
        result.BR_hjZga[i] = 0.;
        result.BR_hjgaga[i] = 0.; 
        result.BR_hjgg[i] = 0.; 
        result.BR_hjinvisible[i] = 0.;
        for(int j = 0; j < 3; j++) result.BR_hjhihi[i][j] = 0.;
      }
      
      result.MHplus = 0.;
      result.deltaMHplus = 0.;
      result.HpGammaTot = 0.; 
      result.CS_lep_HpjHmi_ratio = 0.;
      result.BR_tWpb = 0.;
      result.BR_tHpjb = 0.;
      result.BR_Hpjcs = 0.; 
      result.BR_Hpjcb = 0.;
      result.BR_Hptaunu = 0.;

      const Spectrum* fullspectrum = *Dep::SM_spectrum;
      const SubSpectrum* spec = fullspectrum->get_UV(); 
      const DecayTable::Entry* decays = &(*Dep::Higgs_decay_rates);

      result.Mh[0] = spec->phys.get_Pole_Mass(25,0); 

      result.deltaMh[0] = 0.; // Need to get theoretical error on mass
      result.hGammaTot[0] = decays->width_in_GeV; 
      result.CP[0] = 1; 
      result.CS_lep_hjZ_ratio[0] = 1.; 
      result.CS_lep_bbhj_ratio[0] = 1.; 
      result.CS_lep_tautauhj_ratio[0] = 1.;
      result.CS_gg_hj_ratio[0] = 1.; 
      result.CS_bb_hj_ratio[0] = 1.;
      result.CS_bg_hjb_ratio[0] = 1.; 
      result.CS_ud_hjWp_ratio[0] = 1.;
      result.CS_cs_hjWp_ratio[0] = 1.;
      result.CS_ud_hjWm_ratio[0] = 1.;
      result.CS_cs_hjWm_ratio[0] = 1.; 
      result.CS_gg_hjZ_ratio[0] = 1.;
      result.CS_dd_hjZ_ratio[0] = 1.;
      result.CS_uu_hjZ_ratio[0] = 1.;
      result.CS_ss_hjZ_ratio[0] = 1.; 
      result.CS_cc_hjZ_ratio[0] = 1.;
      result.CS_bb_hjZ_ratio[0] = 1.; 
      result.CS_tev_vbf_ratio[0] = 1.;
      result.CS_tev_tthj_ratio[0] = 1.; 
      result.CS_lhc7_vbf_ratio[0] = 1.;
      result.CS_lhc7_tthj_ratio[0] = 1.;
      result.CS_lhc8_vbf_ratio[0] = 1.;
      result.CS_lhc8_tthj_ratio[0] = 1.; 
      result.BR_hjss[0] = decays->BF("s", "sbar");
      result.BR_hjcc[0] = decays->BF("c", "cbar");
      result.BR_hjbb[0] = decays->BF("b", "bbar"); 
      result.BR_hjmumu[0] = decays->BF("mu+", "mu-");
      result.BR_hjtautau[0] = decays->BF("tau+", "tau-");
      result.BR_hjWW[0] = decays->BF("W+", "W-");
      result.BR_hjZZ[0] = decays->BF("Z0", "Z0"); 
      result.BR_hjZga[0] = decays->BF("gamma", "Z0");
      result.BR_hjgaga[0] = decays->BF("gamma", "gamma"); 
      result.BR_hjgg[0] = decays->BF("g", "g");
    }

    /// MSSM Higgs model parameters
    void MSSMHiggs_ModelParameters(hb_ModelParameters &result)
    {     
      using namespace Pipes::MSSMHiggs_ModelParameters;
      #define PDB Models::ParticleDB()

      // unpack FeynHiggs Couplings
      fh_Couplings FH_input = *Dep::FH_Couplings;

      std::vector<std::string> sHneut;
      sHneut.push_back("h0_1");
      sHneut.push_back("h0_2");
      sHneut.push_back("A0");

      const Spectrum* fullspectrum = *Dep::MSSM_spectrum;
      const SubSpectrum* spec = fullspectrum->get_UV(); 
      const DecayTable decaytable = *Dep::decay_rates;

      const DecayTable::Entry* Hneut_decays[3];
      for(int i = 0; i < 3; i++)
      {
        // Higgs masses and errors
        result.Mh[i] = spec->phys.get_Pole_Mass(sHneut[i]); 
        result.deltaMh[i] = 0.;
      }

      // invisible LSP?
      double lsp_mass = spec->phys.get_Pole_Mass("~chi0_1");
      int i_snu = 0;
      for(int i = 1; i <= 3; i++)
      {
        if(spec->phys.get_Pole_Mass("~nu",i)  < lsp_mass)
        {
          i_snu = i;
          lsp_mass = spec->phys.get_Pole_Mass("~nu",i);
        }
      }

      bool inv_lsp = true;
      if(spec->phys.get_Pole_Mass("~chi+",1) < lsp_mass) inv_lsp = false;
      if(spec->phys.get_Pole_Mass("~g") < lsp_mass) inv_lsp = false;
      if(inv_lsp)
      {
        for(int i = 1; i <= 6; i++)
        {
          if(spec->phys.get_Pole_Mass("~d",i) < lsp_mass)
          {
            inv_lsp = false;
            break;
          }
          if(spec->phys.get_Pole_Mass("~u",i) < lsp_mass)
          {
            inv_lsp = false;
            break;
          }
          if(spec->phys.get_Pole_Mass("~e-",i) < lsp_mass)
          {
            inv_lsp = false;
            break;
          }
        }
      }

      for(int i = 0; i < 3; i++)
      {
        // Branching ratios and total widths
        Hneut_decays[i] = &(decaytable(sHneut[i]));
      
        result.hGammaTot[i] = Hneut_decays[i]->width_in_GeV; 
      
        result.BR_hjss[i] = Hneut_decays[i]->BF("s", "sbar");
        result.BR_hjcc[i] = Hneut_decays[i]->BF("c", "cbar");
        result.BR_hjbb[i] = Hneut_decays[i]->BF("b", "bbar"); 
        result.BR_hjmumu[i] = Hneut_decays[i]->BF("mu+", "mu-");
        result.BR_hjtautau[i] = Hneut_decays[i]->BF("tau+", "tau-");
        result.BR_hjWW[i] = Hneut_decays[i]->BF("W+", "W-");
        result.BR_hjZZ[i] = Hneut_decays[i]->BF("Z0", "Z0");         
        result.BR_hjZga[i] = Hneut_decays[i]->BF("gamma", "Z0");
        result.BR_hjgaga[i] = Hneut_decays[i]->BF("gamma", "gamma"); 
        result.BR_hjgg[i] = Hneut_decays[i]->BF("g", "g");
        for(int j = 0; j < 3; j++)
        {
          if(2.*result.Mh[j] < result.Mh[i])
          {
            result.BR_hjhihi[i][j] = Hneut_decays[i]->BF(sHneut[j],sHneut[j]); 
          } 
          else
          {
            result.BR_hjhihi[i][j] = 0.;
          }
        }
        result.BR_hjinvisible[i] = 0.;
        if(inv_lsp)
        {
          // sneutrino is LSP - need to figure out how to get correct invisible BF...
          if(i_snu > 0)
          {
            result.BR_hjinvisible[i] += Hneut_decays[i]->BF(PDB.long_name("~nu",i_snu),PDB.long_name("~nubar",i_snu));
          }
          else
          {
            result.BR_hjinvisible[i] = Hneut_decays[i]->BF("~chi0_1","~chi0_1");
          }
        }
      }

      result.MHplus = spec->phys.get_Pole_Mass("H+"); 
      result.deltaMHplus = 0.;
      
      const DecayTable::Entry* Hplus_decays = &(decaytable("H+"));
      const DecayTable::Entry* top_decays = &(decaytable("t"));
      
      result.HpGammaTot = Hplus_decays->width_in_GeV; 
      result.BR_tWpb    = top_decays->BF("W+", "b");
      result.BR_tHpjb   = top_decays->BF("H+", "b");
      result.BR_Hpjcs   = Hplus_decays->BF("c", "sbar"); 
      result.BR_Hpjcb   = Hplus_decays->BF("c", "bbar");
      result.BR_Hptaunu = Hplus_decays->BF("tau+", "nu_tau");

      // check SM partial width h0_1 -> b bbar
      // shouldn't be zero...
      double g2hjbb[3];
      for(int i = 0; i < 3; i++)
      {
        if(FH_input.gammas_sm[H0FF(i,4,3,3)+4] <= 0.)
          g2hjbb[i] = 0.;
        else 
          g2hjbb[i] = FH_input.gammas[H0FF(i,4,3,3)+4]/FH_input.gammas_sm[H0FF(i,4,3,3)+4];
      }

      // using partial width ratio approximation for 
      // h -> b bbar CS ratios
      for(int i = 0; i < 3; i++)
      {
        result.CS_bg_hjb_ratio[i] = g2hjbb[i]; 
        result.CS_bb_hj_ratio[i]  = g2hjbb[i];
      }

      // cross-section ratios for b bbar and tau+ tau- final states
      for(int i = 0; i < 3; i++)
      {
        fh_complex c_g2hjbb_L = FH_input.couplings[H0FF(i,4,3,3)];
        fh_complex c_g2hjbb_R = FH_input.couplings[H0FF(i,4,3,3)+Roffset];
        fh_complex c_g2hjbb_SM_L = FH_input.couplings_sm[H0FF(i,4,3,3)];
        fh_complex c_g2hjbb_SM_R = FH_input.couplings_sm[H0FF(i,4,3,3)+RSMoffset];
      
        fh_complex c_g2hjtautau_L = FH_input.couplings[H0FF(i,2,3,3)];
        fh_complex c_g2hjtautau_R = FH_input.couplings[H0FF(i,2,3,3)+Roffset];
        fh_complex c_g2hjtautau_SM_L = FH_input.couplings_sm[H0FF(i,2,3,3)];
        fh_complex c_g2hjtautau_SM_R = FH_input.couplings_sm[H0FF(i,2,3,3)+RSMoffset];
      
        double R_g2hjbb_L = sqrt(c_g2hjbb_L.re*c_g2hjbb_L.re+
               c_g2hjbb_L.im*c_g2hjbb_L.im)/
          sqrt(c_g2hjbb_SM_L.re*c_g2hjbb_SM_L.re+
               c_g2hjbb_SM_L.im*c_g2hjbb_SM_L.im);
        double R_g2hjbb_R = sqrt(c_g2hjbb_R.re*c_g2hjbb_R.re+
               c_g2hjbb_R.im*c_g2hjbb_R.im)/
          sqrt(c_g2hjbb_SM_R.re*c_g2hjbb_SM_R.re+
               c_g2hjbb_SM_R.im*c_g2hjbb_SM_R.im);
        
        double R_g2hjtautau_L = sqrt(c_g2hjtautau_L.re*c_g2hjtautau_L.re+
                   c_g2hjtautau_L.im*c_g2hjtautau_L.im)/
          sqrt(c_g2hjtautau_SM_L.re*c_g2hjtautau_SM_L.re+
               c_g2hjtautau_SM_L.im*c_g2hjtautau_SM_L.im);
        double R_g2hjtautau_R = sqrt(c_g2hjtautau_R.re*c_g2hjtautau_R.re+
                   c_g2hjtautau_R.im*c_g2hjtautau_R.im)/
          sqrt(c_g2hjtautau_SM_R.re*c_g2hjtautau_SM_R.re+
               c_g2hjtautau_SM_R.im*c_g2hjtautau_SM_R.im);
      
        double g2hjbb_s = (R_g2hjbb_L+R_g2hjbb_R)*(R_g2hjbb_L+R_g2hjbb_R)/4.;
        double g2hjbb_p = (R_g2hjbb_L-R_g2hjbb_R)*(R_g2hjbb_L-R_g2hjbb_R)/4.;
        double g2hjtautau_s = (R_g2hjtautau_L+R_g2hjtautau_R)*(R_g2hjtautau_L+R_g2hjtautau_R)/4.;
        double g2hjtautau_p = (R_g2hjtautau_L-R_g2hjtautau_R)*(R_g2hjtautau_L-R_g2hjtautau_R)/4.;
      
        // check CP of state
        if(g2hjbb_p < 1e-10)
          result.CP[i] = 1;
        else if(g2hjbb_s < 1e-10)
          result.CP[i] = -1;
        else
          result.CP[i] = 0.;
      
        result.CS_lep_bbhj_ratio[i]     = g2hjbb_s + g2hjbb_p; 
        result.CS_lep_tautauhj_ratio[i] = g2hjtautau_s + g2hjtautau_p;
      }
      
      // cross-section ratios for di-boson final states
      for(int i = 0; i < 3; i++)
      {
        fh_complex c_gWW = FH_input.couplings[H0VV(i,4)];
        fh_complex c_gWW_SM = FH_input.couplings_sm[H0VV(i,4)];
        fh_complex c_gZZ = FH_input.couplings[H0VV(i,3)];
        fh_complex c_gZZ_SM = FH_input.couplings_sm[H0VV(i,3)];
      
        double g2hjWW = (c_gWW.re*c_gWW.re+c_gWW.im*c_gWW.im)/
          (c_gWW_SM.re*c_gWW_SM.re+c_gWW_SM.im*c_gWW_SM.im);
      
        double g2hjZZ = (c_gZZ.re*c_gZZ.re+c_gZZ.im*c_gZZ.im)/
          (c_gZZ_SM.re*c_gZZ_SM.re+c_gZZ_SM.im*c_gZZ_SM.im);
      
        result.CS_lep_hjZ_ratio[i] = g2hjZZ; 
      
        result.CS_gg_hjZ_ratio[i] = 0.;
        result.CS_dd_hjZ_ratio[i] = g2hjZZ;
        result.CS_uu_hjZ_ratio[i] = g2hjZZ;
        result.CS_ss_hjZ_ratio[i] = g2hjZZ; 
        result.CS_cc_hjZ_ratio[i] = g2hjZZ;
        result.CS_bb_hjZ_ratio[i] = g2hjZZ;
      
        result.CS_ud_hjWp_ratio[i] = g2hjWW;
        result.CS_cs_hjWp_ratio[i] = g2hjWW;
        result.CS_ud_hjWm_ratio[i] = g2hjWW;
        result.CS_cs_hjWm_ratio[i] = g2hjWW; 
      
        result.CS_tev_vbf_ratio[i]   = g2hjWW;
        result.CS_lhc7_vbf_ratio[i]  = g2hjWW;
        result.CS_lhc8_tthj_ratio[i] = g2hjWW; 
      }

      // higgs to higgs + V xsection ratios
      // retrive SMInputs dependency 
      const SMInputs& sminputs = *Dep::SMINPUTS;

      double norm = sminputs.GF*sqrt(2.)*sminputs.mZ*sminputs.mZ;
      for(int i = 0; i < 3; i++)
      for(int j = 0; j < 3; j++)
      {
        fh_complex c_gHV = FH_input.couplings[H0HV(i,j)];
        double g2HV = c_gHV.re*c_gHV.re+c_gHV.im*c_gHV.im;
        result.CS_lep_hjhi_ratio[i][j] = g2HV/norm; 
      }

      // gluon fusion x-section ratio
      for(int i = 0; i < 3; i++)
      {
        if(FH_input.gammas_sm[H0VV(i,5)] <= 0.)
          result.CS_gg_hj_ratio[i] = 0.; 
        else
          result.CS_gg_hj_ratio[i] = FH_input.gammas[H0VV(i,5)]/
            FH_input.gammas_sm[H0VV(i,5)]; 
      }

      // unpack FeynHiggs x-sections
      fh_HiggsProd FH_prod = *Dep::FH_HiggsProd;

      // h t tbar xsection ratios
      for(int i = 0; i < 3; i++)
      {
        result.CS_tev_tthj_ratio[i] = 0.; 
        result.CS_lhc7_tthj_ratio[i] = 0.;
        result.CS_lhc8_tthj_ratio[i] = 0.; 
        if(FH_prod.prodxs_Tev[i+30] > 0.)
          result.CS_tev_tthj_ratio[i]  = FH_prod.prodxs_Tev[i+27]/FH_prod.prodxs_Tev[i+30];
        if(FH_prod.prodxs_Tev[i+30] > 0.)
          result.CS_lhc7_tthj_ratio[i] = FH_prod.prodxs_LHC7[i+27]/FH_prod.prodxs_LHC7[i+30];
        if(FH_prod.prodxs_Tev[i+30] > 0.)
          result.CS_lhc8_tthj_ratio[i] = FH_prod.prodxs_LHC8[i+27]/FH_prod.prodxs_LHC8[i+30];
      }
      // LEP H+ H- x-section ratio
      result.CS_lep_HpjHmi_ratio = 1.;
    }

    /// Get a LEP chisq from HiggsBounds
    void HB_LEPchisq(double &result) 
    {
      using namespace Pipes::HB_LEPchisq;
   
      hb_ModelParameters ModelParam = *Dep::HB_ModelParameters;
      
      Farray<double, 1,3, 1,3> CS_lep_hjhi_ratio;
      Farray<double, 1,3, 1,3> BR_hjhihi;
      for(int i = 0; i < 3; i++) for(int j = 0; j < 3; j++)
      {
        CS_lep_hjhi_ratio(i+1,j+1) = ModelParam.CS_lep_hjhi_ratio[i][j];
        BR_hjhihi(i+1,j+1) = ModelParam.BR_hjhihi[i][j];
      }
      
      BEreq::HiggsBounds_neutral_input_part(&ModelParam.Mh[0], &ModelParam.hGammaTot[0], &ModelParam.CP[0], 
              &ModelParam.CS_lep_hjZ_ratio[0], &ModelParam.CS_lep_bbhj_ratio[0], 
              &ModelParam.CS_lep_tautauhj_ratio[0], CS_lep_hjhi_ratio, 
              &ModelParam.CS_gg_hj_ratio[0], &ModelParam.CS_bb_hj_ratio[0],
              &ModelParam.CS_bg_hjb_ratio[0], &ModelParam.CS_ud_hjWp_ratio[0],
              &ModelParam.CS_cs_hjWp_ratio[0], &ModelParam.CS_ud_hjWm_ratio[0],
              &ModelParam.CS_cs_hjWm_ratio[0], &ModelParam.CS_gg_hjZ_ratio[0],
              &ModelParam.CS_dd_hjZ_ratio[0], &ModelParam.CS_uu_hjZ_ratio[0],
              &ModelParam.CS_ss_hjZ_ratio[0], &ModelParam.CS_cc_hjZ_ratio[0],
              &ModelParam.CS_bb_hjZ_ratio[0], &ModelParam.CS_tev_vbf_ratio[0],
              &ModelParam.CS_tev_tthj_ratio[0], &ModelParam.CS_lhc7_vbf_ratio[0],
              &ModelParam.CS_lhc7_tthj_ratio[0], &ModelParam.CS_lhc8_vbf_ratio[0],
              &ModelParam.CS_lhc8_tthj_ratio[0], &ModelParam.BR_hjss[0],
              &ModelParam.BR_hjcc[0], &ModelParam.BR_hjbb[0], 
              &ModelParam.BR_hjmumu[0], &ModelParam.BR_hjtautau[0],
              &ModelParam.BR_hjWW[0], &ModelParam.BR_hjZZ[0], 
              &ModelParam.BR_hjZga[0], &ModelParam.BR_hjgaga[0], 
              &ModelParam.BR_hjgg[0], &ModelParam.BR_hjinvisible[0], BR_hjhihi);

      BEreq::HiggsBounds_charged_input(&ModelParam.MHplus, &ModelParam.HpGammaTot, &ModelParam.CS_lep_HpjHmi_ratio,
               &ModelParam.BR_tWpb, &ModelParam.BR_tHpjb, &ModelParam.BR_Hpjcs, 
               &ModelParam.BR_Hpjcb, &ModelParam.BR_Hptaunu);
      
      BEreq::HiggsBounds_set_mass_uncertainties(&ModelParam.deltaMh[0],&ModelParam.deltaMHplus);
      
      // run Higgs bounds 'classic'
      double HBresult, obsratio;
      int chan, ncombined;
      BEreq::run_HiggsBounds_classic(HBresult,chan,obsratio,ncombined);
      
      // extract the LEP chisq
      double chisq_withouttheory,chisq_withtheory;
      int chan2;
      double theor_unc = 1.5; // theory uncertainty
      BEreq::HB_calc_stats(theor_unc,chisq_withouttheory,chisq_withtheory,chan2);
      
      result = chisq_withouttheory;
      std::cout << "Calculating LEP chisq: " << chisq_withouttheory << " (no theor), " << chisq_withtheory << " (with theor)" << endl;

    }

    /// Get an LHC chisq from HiggsSignals
    void HS_LHCchisq(double &result) 
    {
      using namespace Pipes::HS_LHCchisq;
      
      hb_ModelParameters ModelParam = *Dep::HB_ModelParameters;
      
      Farray<double, 1,3, 1,3> CS_lep_hjhi_ratio;
      Farray<double, 1,3, 1,3> BR_hjhihi;
      for(int i = 0; i < 3; i++) for(int j = 0; j < 3; j++)
      {
        CS_lep_hjhi_ratio(i+1,j+1) = ModelParam.CS_lep_hjhi_ratio[i][j];
        BR_hjhihi(i+1,j+1) = ModelParam.BR_hjhihi[i][j];
      }
      
      BEreq::HiggsBounds_neutral_input_part_HS(&ModelParam.Mh[0], &ModelParam.hGammaTot[0], &ModelParam.CP[0], 
                 &ModelParam.CS_lep_hjZ_ratio[0], &ModelParam.CS_lep_bbhj_ratio[0], 
                 &ModelParam.CS_lep_tautauhj_ratio[0], CS_lep_hjhi_ratio, 
                 &ModelParam.CS_gg_hj_ratio[0], &ModelParam.CS_bb_hj_ratio[0],
                 &ModelParam.CS_bg_hjb_ratio[0], &ModelParam.CS_ud_hjWp_ratio[0],
                 &ModelParam.CS_cs_hjWp_ratio[0], &ModelParam.CS_ud_hjWm_ratio[0],
                 &ModelParam.CS_cs_hjWm_ratio[0], &ModelParam.CS_gg_hjZ_ratio[0],
                 &ModelParam.CS_dd_hjZ_ratio[0], &ModelParam.CS_uu_hjZ_ratio[0],
                 &ModelParam.CS_ss_hjZ_ratio[0], &ModelParam.CS_cc_hjZ_ratio[0],
                 &ModelParam.CS_bb_hjZ_ratio[0], &ModelParam.CS_tev_vbf_ratio[0],
                 &ModelParam.CS_tev_tthj_ratio[0], &ModelParam.CS_lhc7_vbf_ratio[0],
                 &ModelParam.CS_lhc7_tthj_ratio[0], &ModelParam.CS_lhc8_vbf_ratio[0],
                 &ModelParam.CS_lhc8_tthj_ratio[0], &ModelParam.BR_hjss[0],
                 &ModelParam.BR_hjcc[0], &ModelParam.BR_hjbb[0], 
                 &ModelParam.BR_hjmumu[0], &ModelParam.BR_hjtautau[0],
                 &ModelParam.BR_hjWW[0], &ModelParam.BR_hjZZ[0], 
                 &ModelParam.BR_hjZga[0], &ModelParam.BR_hjgaga[0], 
                 &ModelParam.BR_hjgg[0], &ModelParam.BR_hjinvisible[0], BR_hjhihi);
      
      BEreq::HiggsBounds_charged_input_HS(&ModelParam.MHplus, &ModelParam.HpGammaTot, &ModelParam.CS_lep_HpjHmi_ratio,
            &ModelParam.BR_tWpb, &ModelParam.BR_tHpjb, &ModelParam.BR_Hpjcs, 
            &ModelParam.BR_Hpjcb, &ModelParam.BR_Hptaunu);
      
      BEreq::HiggsSignals_neutral_input_MassUncertainty(&ModelParam.deltaMh[0]);

      // add uncertainties to cross-sections and branching ratios
      // double dCS[5];
      // double dBR[5];
      // BEreq::setup_rate_uncertainties(dCS,dBR);

      // run HiggsSignals
      int mode = 1;
      double csqmu, csqmh, csqtot, Pvalue;
      int nobs;
      BEreq::run_HiggsSignals(mode, csqmu, csqmh, csqtot, nobs, Pvalue);


      result = csqtot;
      std::cout << "Calculating LHC chisq: " << csqmu << " (signal strength only), " << csqmh << " (mass only), ";
      std::cout << csqtot << " (both), Nobs: " << nobs << ", Pvalue: " << Pvalue << endl;

    }


  }
}
#undef DEBUG
