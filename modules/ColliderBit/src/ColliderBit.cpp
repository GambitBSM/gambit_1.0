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

// #define HESITATE shallIGoOn

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
    enum specialEvents {INIT = -1, END_SUBPROCESS = -2, FINALIZE = -3};
    /// Delphes stuff
    /// @TODO BOSS delphes? Euthanize delphes?
    bool resetDelphesFlag = true;
    std::string delphesConfigFilename;
    /// BuckFast stuff
    bool resetBuckFastFlag = true;
    /// Pythia stuff
    bool resetPythiaFlag = true;
    /// Analysis stuff
    bool resetAnalysisFlag = true;
    std::vector<std::string> pythiaNames;
    std::vector<std::string>::const_iterator iter;
    int pythiaConfigurations, pythiaNumber;
    std::string slhaFilename;
    /// General collider sim info stuff
    double* xsecArray;
    double* xsecerrArray;
    #define SHARED_OVER_OMP iter,pythiaNumber,pythiaConfigurations,xsecArray,xsecerrArray


    /// *************************************************
    /// Rollcalled functions properly hooked up to Gambit
    /// *************************************************


    /// *** Initialization for analyses ***

    void specifyAnalysisPointerVector (AnalysisPointerVector &result) {
      using namespace Pipes::specifyAnalysisPointerVector;
      if(resetAnalysisFlag) {
        result.clear();

        logger() << "\n==================\n";
        logger() << "ColliderBit says,\n";
        logger() << "\t\"specifyAnalysisPointerVector() was called.\"\n";
        logger() << LogTags::info << endl << EOM;

        std::vector<std::string> analysisNames;
        #pragma omp critical (runOptions)
        {
          GET_COLLIDER_RUNOPTION(analysisNames, std::vector<std::string>)
        }

        logger() << "\n==================\n";
        logger() << "ColliderBit says,\n";
        logger() << "\t\"Setting up analyses...\"\n";
        for(auto name : analysisNames) {
          logger() << "\t  Analysis name " << name << endl;
          result.push_back( mkAnalysis(name) );
        }
        logger() << "ColliderBit says,\n";
        logger() << "\t\"specifyAnalysisPointerVector() has finished.\"\n";
        logger() << LogTags::info << endl << EOM;
      }
    }



    /// *** Detector Simulators ***

    void getDelphes(shared_ptr<Gambit::ColliderBit::DelphesBase> &result) {
      using namespace Pipes::getDelphes;
      std::vector<std::string> delphesOptions;
      if(resetDelphesFlag) {
        #pragma omp critical (Delphes)
        {
          GET_COLLIDER_RUNOPTION(delphesOptions, std::vector<std::string>)
          result.reset( mkDelphes("DelphesVanilla", delphesOptions) );
          resetDelphesFlag = false;
        }
      }
    }


    void getBuckFast(shared_ptr<Gambit::ColliderBit::BuckFastBase> &result) {
      using namespace Pipes::getBuckFast;
      std::string buckFastOption;
      if(resetBuckFastFlag) {
        #pragma omp critical (BuckFast)
        {
	  GET_COLLIDER_RUNOPTION(buckFastOption, std::string)
          result.reset( mkBuckFast(buckFastOption) );
          resetBuckFastFlag = false;
        }
      }
    }



    /// *** Loop Managers ***

    void operatePythia() {
      using namespace Pipes::operatePythia;
      int nEvents = 0;

      logger() << "\n==================\n";
      logger() << "ColliderBit says,\n";
      logger() << "\t\"operatePythia() was called.\"\n";
      logger() << LogTags::info << endl << EOM;

      #pragma omp critical (runOptions)
      {
        /// Retrieve runOptions from the YAML file safely...
        GET_COLLIDER_RUNOPTION(pythiaNames, std::vector<std::string>)
        /// @todo Subprocess specific nEvents
        GET_COLLIDER_RUNOPTION(nEvents, int)
        /// @todo Get the Spectrum and Decay info from SpecBit and DecayBit
        GET_COLLIDER_RUNOPTION(slhaFilename, std::string)
      }

      xsecArray = new double[omp_get_max_threads()];
      xsecerrArray = new double[omp_get_max_threads()];
      /// For every collider requested in the yaml file:
      for(iter=pythiaNames.cbegin(); iter!=pythiaNames.cend(); ++iter) {
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
            #pragma omp for
            for (int i=1; i<=nEvents; ++i) {
              Loop::executeIteration(i);
            }
            Loop::executeIteration(END_SUBPROCESS);
          }
          std::cout<<"\n\n\n\n Operation of Pythia named "<<*iter
                   <<" number "<<std::to_string(pythiaNumber)<<" has finished.";
          for (int i=0; i<omp_get_max_threads(); ++i)
            std::cout<<"\n  Thread "<<i<<": xsec = "<<xsecArray[i] <<" +- "<<xsecerrArray[i];
          #ifdef HESITATE
          std::cout<<"\n\n [Press Enter]";
          std::getchar();
          #endif
        }
      }
      Loop::executeIteration(FINALIZE);

      resetDelphesFlag = true;
      resetBuckFastFlag = true;
      logger() << "==================" << endl;
      logger() << "ColliderBit says,";
      logger() << "\"operatePythia() completed.\"" << endl;
      logger() << LogTags::info << endl << EOM;
    }



    /// *** Hard Scattering Collider Simulators ***

    void getPythia(shared_ptr<Gambit::ColliderBit::PythiaBase> &result) {
      using namespace Pipes::getPythia;

      if (resetPythiaFlag and *Loop::iteration > INIT) {
        /// Should be within omp parallel block now.
        std::vector<std::string> pythiaOptions;
        std::string pythiaConfigName;
        pythiaConfigName = "pythiaOptions";
        if(pythiaConfigurations) {
          pythiaConfigName += "_";
          pythiaConfigName += std::to_string(pythiaNumber);
        }
        /// If the PythiaBase subclass is hard-coded (for some reason), okay with no options.
        #pragma omp critical (runOptions)
        {
          if (runOptions->hasKey(*iter, pythiaConfigName))
            pythiaOptions = runOptions->getValue<std::vector<std::string>>(*iter, pythiaConfigName);
        }
        pythiaOptions.push_back("SLHA:file = " + slhaFilename);
        pythiaOptions.push_back("Random:seed = " + std::to_string(omp_get_thread_num()));

        result.reset( mkPythia(*iter, pythiaOptions) );
        pythiaOptions.clear();
        resetPythiaFlag = false;
      } else if (*Loop::iteration == END_SUBPROCESS) {
        xsecArray[omp_get_thread_num()] = result->pythia()->info.sigmaGen();
        xsecerrArray[omp_get_thread_num()] = result->pythia()->info.sigmaErr();
        result.reset();
        resetPythiaFlag = true;
      }
    }



    /// *** Hard Scattering Event Generators ***

    void generatePythia8Event(Pythia8::Event &result) {
      using namespace Pipes::generatePythia8Event;
      if (*Loop::iteration <= INIT) return;
      result.clear();

      /// Get the next event from Pythia8
      result = (*Dep::HardScatteringSim)->nextEvent();
    }


    /// @todo Split into convertPythia8PartonEvent and convertPythia8ParticleEvent strategies
    void convertPythia8Event(HEPUtils::Event &result) {
      using namespace Pipes::convertPythia8Event;
      if (*Loop::iteration <= INIT) return;
      result.clear();

      /// Get the next event from Pythia8
      const auto &pevt = (*Dep::HardScatteringSim)->nextEvent();

      std::vector<fastjet::PseudoJet> jetparticles;
      std::vector<fastjet::PseudoJet> bhadrons, taus;

      jetparticles.clear();
      bhadrons.clear();
      taus.clear();

      Pythia8::Vec4 ptot;
      ptot.reset();

      // Make a first pass to gather unstable final B hadrons and taus
      for (int i = 0; i < pevt.size(); ++i) {
        const Pythia8::Particle& p = pevt[i];

        // Find last b-hadrons in b decay chains as the best proxy for b-tagging
        /// @todo Needs to also work for parton events
        if (isFinalB(i, pevt)) bhadrons.push_back(mk_pseudojet(p.p()));

        // Find last tau in tau replica chains as a proxy for tau-tagging
        // Also require that the tau are prompt
        /// @todo Only accept hadronically decaying taus?
        if (isFinalTau(i, pevt) && !fromHadron(i, pevt)) {
          /// @todo Nothing is done with taus after this....
          taus.push_back(mk_pseudojet(p.p()));
          HEPUtils::Particle* gp = new HEPUtils::Particle(mk_p4(p.p()), p.id());
          gp->set_prompt();
          result.add_particle(gp); // Will be automatically categorised
        }
      }

      for (int i = 0; i < pevt.size(); ++i) {
        const Pythia8::Particle& p = pevt[i];

        // Only consider final state particles within ATLAS/CMS acceptance
	
        if (!p.isFinal()){
	  continue;
	}
        if (abs(p.eta()) > 5.0){
	  continue;
	}

	if(p.id()==1000022 || p.id()==12 || p.id()==14 || p.id()==16)continue;
	ptot += p.p();
	
        // Add to total final state momentum
	//@todo need to add a proper system for handling invisible particle pid codes
   
        // Promptness: for leptons and photons we're only interested if they don't come from hadron/tau decays
        /// @todo Don't exclude hadronic tau decay products from jet finding: ATLAS treats them as jets
        /// @todo Should we set up Pythia to make taus stable?
	//MJW removes tau check to try matching with DELPHES
        const bool prompt = !fromHadron(i, pevt);// && !fromTau(i, pevt);

        if (prompt) {
          HEPUtils::Particle* gp = new HEPUtils::Particle(mk_p4(p.p()), p.id());
          gp->set_prompt();
          result.add_particle(gp); // Will be automatically categorised
        } else {
          // Choose jet constituents
          jetparticles.push_back(mk_pseudojet(p.p()));
        }

      }

      /// Jet finding
      /// Currently hard-coded to use anti-kT R=0.4 jets above 10 GeV
      /// @todo choose jet algorithm via _settings?
      const fastjet::JetDefinition jet_def(fastjet::antikt_algorithm, 0.4);
      fastjet::ClusterSequence cseq(jetparticles, jet_def);
      std::vector<fastjet::PseudoJet> pjets = sorted_by_pt(cseq.inclusive_jets(20));

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
        result.add_jet(new HEPUtils::Jet(HEPUtils::mk_p4(pj), isB));
      }

   
      //result.calc_missingmom();
      result.set_missingmom(-mk_p4(ptot));

    }



    /// *** Standard Event Format Functions ***

    void reconstructDelphesEvent(HEPUtils::Event &result) {
      using namespace Pipes::reconstructDelphesEvent;
      if (*Loop::iteration == FINALIZE) resetDelphesFlag = true;
      if (*Loop::iteration <= INIT) return;
      result.clear();

      #pragma omp critical (Delphes)
      {
        (*Dep::DetectorSim)->processEvent(*Dep::HardScatteringEvent, result);
      }
    }


    void reconstructBuckFastEvent(HEPUtils::Event &result) {
      using namespace Pipes::reconstructBuckFastEvent;
      if (*Loop::iteration == FINALIZE) resetBuckFastFlag = true;
      if (*Loop::iteration <= INIT) return;
      result.clear();

      (*Dep::SimpleSmearingSim)->processEvent(*Dep::HardScatteringEvent, result);
    }



    /// *** Analysis Accumulators ***

    void runAnalyses(ColliderLogLikes& result)
    {
      using namespace Pipes::runAnalyses;
      if (*Loop::iteration == INIT or *Loop::iteration == END_SUBPROCESS) return;

      if (*Loop::iteration == FINALIZE)
      {
        // The final iteration: get log likelihoods for the analyses
        result.clear();
        for (auto anaPtr = Dep::ListOfAnalyses->begin(); anaPtr != Dep::ListOfAnalyses->end(); ++anaPtr)
        {
          cout << "SR number test " << (*anaPtr)->get_results()[0].n_signal << endl;
          result.push_back((*anaPtr)->get_results());
        }
        resetAnalysisFlag = true;
      }
      else
      {
        #pragma omp critical (accumulatorUpdate)
        {
          // Loop over analyses and run them
          for (auto anaPtr = Dep::ListOfAnalyses->begin(); anaPtr != Dep::ListOfAnalyses->end(); ++anaPtr)
            (*anaPtr)->analyze(*Dep::ReconstructedEvent);
        }
      }
    }


    /// Loop over all analyses (and SRs within one analysis) and fill a vector of observed likelihoods
    void calcLogLike(double& result) {
      using namespace Pipes::calcLogLike;
      ColliderLogLikes analysisResults = (*Dep::AnalysisNumbers);
      cout << "In calcLogLike" << endl;

      std::vector<double> observedLikelihoods;
      for (size_t analysis = 0; analysis < analysisResults.size(); ++analysis) {
        for (size_t SR = 0; SR < analysisResults[analysis].size(); ++SR) {
          SignalRegionData srData = analysisResults[analysis][SR];

          /// Actual observed number of events
          int n_obs = (int) srData.n_observed;

          /// A contribution to the predicted number of events that is known exactly
          /// (e.g. from data-driven background estimate)
          double n_predicted_exact = 0.;

          // A contribution to the predicted number of events that is not known exactly
          double n_predicted_uncertain = srData.n_signal + srData.n_background;

	  /// A fractional uncertainty on n_predicted_uncertain
	  /// (e.g. 0.2 from 20% uncertainty on efficencty wrt signal events)
          double bkg_ratio = srData.background_sys/srData.n_background;
          double sig_ratio = (srData.n_signal != 0) ? srData.signal_sys/srData.n_signal : 0;
          double uncertainty = sqrt(bkg_ratio*bkg_ratio + sig_ratio*sig_ratio);


          if (*BEgroup::lnlike_marg_poisson == "lnlike_marg_poisson_lognormal_error") {
            /// Use a log-normal distribution for the nuisance parameter (more correct)
            result = BEreq::lnlike_marg_poisson_lognormal_error(n_obs,n_predicted_exact,n_predicted_uncertain,uncertainty);
          }
          else if (*BEgroup::lnlike_marg_poisson == "lnlike_marg_poisson_gaussian_error") {
            /// Use a Gaussian distribution for the nuisance parameter (marginally faster)

            result = BEreq::lnlike_marg_poisson_gaussian_error(n_obs,n_predicted_exact,n_predicted_uncertain,uncertainty);
          }
          cout << "COLLIDER_RESULT " << analysis << " " << SR << " " << result << endl;


        } // end SR loop
      } // end ana loop

      /// @TODO Need to combine { ana+SR } to return the single most stringent likelihood / other combined-as-well-as-we-can LL number
    }


  }
}

#undef DEBUG
	
