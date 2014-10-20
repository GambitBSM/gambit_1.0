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

#include "gambit_module_headers.hpp"
#include "ColliderBit_rollcall.hpp"

// Now pulling in some of the code from extras/HEColliderMain.cpp
// I will leave the KFactorHooks alone for now, since the work on
// xsec calculation is ongoing.

namespace Gambit {
  namespace ColliderBit {

    /// ********************************************
    /// Non-rollcalled Functions and Local Variables
    /// ********************************************

    /// Event labels
    enum specialEvents {INIT = -1, FINALIZE = -999};
    /// Delphes stuff
    /// @todo BOSS delphes? Euthanize delphes?
    Delphes3Backend* delphes = 0;
    std::string delphesConfigFilename = "";
    bool isDetectorReady = false;
    /// Pythia stuff
    bool isPythiaReady = false;
    std::vector<std::string> pythiaNames;
    std::vector<std::string>::const_iterator iter;
    std::string slhaFilename;
    /// Events to run  TODO: may no longer need to be global
    int nEvents = 0;

    void debugMe(const std::string label) {
      #ifdef DEBUG
      std::cout<<"\n\nHECollider is here: "<<label;
      std::cout<<"\n    Checking locals: ";
      std::cout<<"\n    nEvents: "<<nEvents;
      std::cout<<"\n    delphesConfigFilename: "<<delphesConfigFilename;
      std::cout<<"\n    delphes (points to): "<<delphes;
      std::cout<<"\n    isDetectorReady: "<<isDetectorReady;
      std::cout<<"\n    isPythiaReady: "<<isPythiaReady;
      std::cout<<"\n\n [Press Enter]";
      std::getchar();
      #endif
    }

    /// *************************************************
    /// Rollcalled functions properly hooked up to Gambit
    /// *************************************************

    /// *** Initialization for analyses ***
    void specifyAnalysisPointerVector (AnalysisPointerVector &result) {
      using namespace Pipes::specifyAnalysisPointerVector;
      debugMe("specifyAnalysisPointerVector");
      result.clear();

      std::vector<std::string> analysisNames;
      GET_COLLIDER_RUNOPTION(analysisNames, std::vector<std::string>)

      for(auto name : analysisNames){
        cout << "Analysis name " << name << endl;
        result.push_back( mkAnalysis(name) );
      }
    }


    /// *** Loop Managers ***
    void operatePythia() {
      using namespace Pipes::operatePythia;
      debugMe("operatePythia");

      logger() << "==================" << endl;
      logger() << "ColliderBit says,";
      logger() << "\"operatePythia() was called.\"" << endl;
      logger() << "*** NOTE: Each iteration will report:" << endl;
      logger() << "  iteration, event met, thread, counts" << endl;
      logger() << LogTags::info << endl << EOM;

      /// Retrieve runOptions from the YAML file safely... 
      GET_COLLIDER_RUNOPTION(pythiaNames, std::vector<std::string>)
      /// @todo Subprocess specific nEvents
      GET_COLLIDER_RUNOPTION(nEvents, int)
      /// @todo Get the Spectrum and Decay info from SpecBit and DecayBit
      GET_COLLIDER_RUNOPTION(slhaFilename, std::string)

      /// TODO TODO What should the new loop look like....???
      Loop::executeIteration(INIT);
      /// For every collider requested in the yaml file:
      for(iter=pythiaNames.cbegin(); iter!=pythiaNames.cend(); iter++) {
        #pragma omp parallel
        {
          isPythiaReady = false;
          #pragma omp for
          for (int it=0; it<nEvents; it++) {
            Loop::executeIteration(it);
          }
        }
      }
      Loop::executeIteration(FINALIZE);

      isDetectorReady = false;
      logger() << "==================" << endl;
      logger() << "ColliderBit says,";
      logger() << "\"manageVanillaLoop() completed.\"" << endl;
      logger() << LogTags::info << endl << EOM;
    }


    /// Hard Scattering Collider Simulators
    void getPythia(PythiaPtr &result) {
      using namespace Pipes::getPythia;
      if (*Loop::iteration <= INIT) return;
      debugMe("getPythia");

      if (!isPythiaReady) {
        /// Should be within omp parallel block now.
        std::vector<std::string> pythiaOptions;
        try {
          pythiaOptions = runOptions->getValue<std::vector<std::string>>(*iter);
        } catch (...) {
          std::cout<<"  NOTE: Error downgraded to warning.\n";
          std::cout<<"  However, you may want to check the options for:\n";
          std::cout<<"    "<<*iter<<"\n\n";
        }  //< If the PythiaBase subclass is hard-coded, okay with no options.
        pythiaOptions.push_back("SLHA:file = " + slhaFilename);
        pythiaOptions.push_back("Random:seed = " + std::to_string(omp_get_thread_num()));

        result.reset( mkPythia(*iter, pythiaOptions) );
        pythiaOptions.clear();
        isPythiaReady = true;
      }
    }

    /// Hard Scattering Event Generators
    void generatePythia8Event(Pythia8::Event &result) {
      using namespace Pipes::generatePythia8Event;
      if (*Loop::iteration <= INIT) return;
      debugMe("generatePythia8Event");
      result.clear();

      /// Get the next event from Pythia8
      result = (*Dep::hardScatteringSim)->nextEvent();
    }


    /// Standard Event Format Functions
    void reconstructDelphesEvent(HEP_Simple_Lib::Event &result) {
      using namespace Pipes::reconstructDelphesEvent;
      if (*Loop::iteration <= INIT) return;
      debugMe("reconstructDelphesEvent");
      result.clear();

      #pragma omp critical (Delphes)
      {
        if (!isDetectorReady) {
          GET_COLLIDER_RUNOPTION(delphesConfigFilename, std::string)
          delete delphes;
          delphes = new Delphes3Backend(delphesConfigFilename);
          isDetectorReady = true;
        }
        /// Feed the Pythia8 event to Delphes for detector simulation
        /// \note Delphes (ROOT) is not thread safe. Critical block necessary.
        delphes->processEvent(*Dep::hardScatteringEvent, result);
      }
    }


    void convertPythia8Event(HEP_Simple_Lib::Event &result) {
      using namespace Pipes::convertPythia8Event;
      if (*Loop::iteration <= INIT) return;  //< Only whatever init Gambit needs
      debugMe("convertPythia8Event");
      result.clear();

      Pythia8::Vec4 ptot;
      std::vector<fastjet::PseudoJet> jetparticles;
      std::vector<fastjet::PseudoJet> bhadrons, taus;

      const auto pevt = *Dep::hardScatteringEvent;
      ptot.reset();
      jetparticles.clear();
      bhadrons.clear();
      taus.clear();

      // Make a first pass to gather unstable final B hadrons and taus
      for (int i = 0; i < pevt.size(); ++i) {
        const Pythia8::Particle& p = pevt[i];

        // Find last b-hadrons in b decay chains as the best proxy for b-tagging
        if (isFinalB(i, pevt)) bhadrons.push_back(mk_pseudojet(p.p()));

        // Find last tau in tau replica chains as a proxy for tau-tagging
        // Also require that the tau are prompt
        /// @todo Only accept hadronically decaying taus?
        if (isFinalTau(i, pevt) && !fromHadron(i, pevt)) {
          /// @todo Nothing is done with taus after this....
          taus.push_back(mk_pseudojet(p.p()));
          HEP_Simple_Lib::Particle* gp = new HEP_Simple_Lib::Particle(mk_p4(p.p()), p.id());
          gp->set_prompt();
          result.add_particle(gp); // Will be automatically categorised
        }
      }

      for (int i = 0; i < pevt.size(); ++i) {
        const Pythia8::Particle& p = pevt[i];

        // Only consider final state particles within ATLAS/CMS acceptance
        if (!p.isFinal()) continue;
        if (abs(p.eta()) > 5.0) continue;
        // Add to total final state momentum
        ptot += p.p();

        // Promptness: for leptons and photons we're only interested if they don't come from hadron/tau decays
        /// @todo Don't exclude hadronic tau decay products from jet finding: ATLAS treats them as jets
        /// @todo Should we set up Pythia to make taus stable?
        const bool prompt = !fromHadron(i, pevt) && !fromTau(i, pevt);

        if (prompt) {
          HEP_Simple_Lib::Particle* gp = new HEP_Simple_Lib::Particle(mk_p4(p.p()), p.id());
          gp->set_prompt();
          result.add_particle(gp); // Will be automatically categorised
        } else {
          // Choose jet constituents
          jetparticles.push_back(mk_pseudojet(p.p()));
        }

      }

      /// Jet finding
      /// Currently hard-coded to use anti-kT R=0.4 jets above 30 GeV
      /// @todo choose jet algorithm via _settings?
      const fastjet::JetDefinition jet_def(fastjet::antikt_algorithm, 0.4);
      fastjet::ClusterSequence cseq(jetparticles, jet_def);
      std::vector<fastjet::PseudoJet> pjets = sorted_by_pt(cseq.inclusive_jets(30));

      /// Do jet b-tagging, etc. and add to the Event
      for (auto& pj : pjets) {
        bool isB = false;
        for (auto& pb : bhadrons) {
          if (pj.delta_R(pb) < 0.3) {
            isB = true;
            break;
          }
        }
        /// Add to the event
        result.addJet(new HEP_Simple_Lib::Jet(MCUtils::mk_p4(pj), isB));
      }

      /// MET (note: NOT just equal to sum of prompt invisibles)
      result.set_missingmom(-mk_p4(ptot));
    }


    /// Analysis Accumulators

    void runAnalyses(ColliderLogLikes& result) {
      using namespace Pipes::runAnalyses;
      if (*Loop::iteration == INIT) return;  //< Only whatever init Gambit needs
      debugMe("runAnalyses");

      if (*Loop::iteration == FINALIZE) {
        // The final iteration: get log likelihoods for the analyses
        result.clear();
        for (auto anaPtr : *Dep::ListOfAnalyses) {
          // ana->collect_results();
          cout << "SR number test " << anaPtr->get_results()[0].n_signal << endl;
          result.push_back(anaPtr->get_results());
        }
      } else {
        #pragma omp critical (accumulatorUpdate)
        {
          // Loop over analyses and run them
          for (auto anaPtr : *Dep::ListOfAnalyses)
            anaPtr->analyze(*Dep::GambitColliderEvent);
        }
      }

      #pragma omp critical (print)
      {
        #ifdef DEBUG
        std::cout<<"\n    iteration number: "<<*Loop::iteration;
        std::cout<<"\n    event met: "<<(*Dep::GambitColliderEvent).met();
        #endif
      }
    }


    void calcLogLike(double& result) {
      using namespace Pipes::calcLogLike;
      debugMe("calcLogLike");

      ColliderLogLikes analysisResults = (*Dep::AnalysisNumbers);
      //Loop over all analyses (and SRs within one analysis) and fill a vector of observed likelihoods
      cout << "In calcLogLike" << endl;

      std::vector<double> observedLikelihoods;
      for(unsigned analysis=0; analysis<analysisResults.size(); analysis++){
        for(unsigned SR=0; SR<analysisResults[analysis].size(); SR++){
          SignalRegionData srData=analysisResults[analysis][SR];
          int n_obs = (int)srData.n_observed;                      // Actual observed number of events
          double n_predicted_exact = 0.;     // A contribution to the predicted number of events that is know exactly (e.g. from data-driven background estimate)
          double n_predicted_uncertain = srData.n_background + srData.n_background; // A contribution to the predicted number of events that is not know exactly
          double uncertainty=0.;
          if(srData.n_signal!=0){
            uncertainty = sqrt((srData.background_sys/srData.n_background)*(srData.background_sys/srData.n_background) * (srData.signal_sys/srData.n_signal)*(srData.signal_sys/srData.n_signal));           // A fractional uncertainty on n_predicted_uncertain (e.g. 0.2 from 20% uncertainty on efficencty wrt signal events)
          }
          else {
            uncertainty = (srData.background_sys/srData.n_background);
          }

          if (*BEgroup::lnlike_marg_poisson == "lnlike_marg_poisson_lognormal_error")
            {
              // Use a log-normal distribution for the nuisance parameter (more correct)
              result = BEreq::lnlike_marg_poisson_lognormal_error(n_obs,n_predicted_exact,n_predicted_uncertain,uncertainty);
            }
          else if (*BEgroup::lnlike_marg_poisson == "lnlike_marg_poisson_gaussian_error")
            {
              // Use a Gaussian distribution for the nuisance parameter (marginally faster)
              result = BEreq::lnlike_marg_poisson_gaussian_error(n_obs,n_predicted_exact,n_predicted_uncertain,uncertainty);

              cout << "COLLIDER RESULT" << result << endl;

            }


        }
      }

      return;
    }

  }
}
#undef DEBUG
