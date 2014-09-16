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
///          (abram.krislock@fysik.su.se)
///    \date 2013 Dec
//  //  Aldo Saavedra
//  //  2014 March 2nd
///
///  *********************************************

#include <string>
#include <iostream>
#include <fstream>
#include <memory>
#include <numeric>
#include <vector>

#include "gambit_module_headers.hpp"
#include "ColliderBit_types.hpp"
#include "ColliderBit_rollcall.hpp"

// Now pulling in some of the code from extras/HEColliderMain.cpp
// I will leave the KFactorHooks alone for now, since the work on
// xsec calculation is ongoing.

namespace Gambit {
  namespace ColliderBit {

    /// ********************************************
    /// Non-rollcalled Functions and Local Variables
    /// ********************************************

    /// @todo Put in actual analyses rather than a simple counter
    double counter = 0.;
    /// @todo backend Pythia properly
    std::vector<Pythia8Backend*> pythiaVector;
    std::string slhaFilename = "";
    Delphes3Backend* delphes = 0;
    std::string delphesConfigFilename = "";
    bool isScatteringReady = false;
    bool isDetectorReady = false;
    unsigned nEvents = 0;

    void debugMe(std::string label) {
      #ifdef DEBUG
      std::cout<<"\n\nHECollider is here: "<<label;
      std::cout<<"\n    Checking locals: ";
      std::cout<<"\n    counter: "<<counter;
      std::cout<<"\n    nEvents: "<<nEvents;
      std::cout<<"\n    slhaFilename: "<<slhaFilename;
      std::cout<<"\n    delphesConfigFilename: "<<delphesConfigFilename;
      std::cout<<"\n    delphes (points to): "<<delphes;
      std::cout<<"\n    isDetectorReady: "<<isDetectorReady;
      std::cout<<"\n    pythiaVector (points to): ";
      for (auto ptr : pythiaVector)
        std::cout<<"\n        "<<ptr;
      std::cout<<"\n    isScatteringReady: "<<isScatteringReady;
      std::cout<<"\n\n [Press Enter]";
      std::getchar();
      #endif
    }

    /// *************************************************
    /// Rollcalled functions properly hooked up to Gambit
    /// *************************************************

    /// *** Initialization for managers ***
    /// @todo More subprocesses. For current testing, only ~g and ~q.
    /// \todo Will this get passed into the loop properly?
    void getSubprocessGroup(SubprocessGroup &result) {
      debugMe("getSubprocessGroup");
      result = SubprocessGroup(0.6, //< xsec estimate
                               {{1000021, 1000001, 1000002, 1000003, 1000004,
                                     2000001, 2000002, 2000003, 2000004}},
                               {{1000021, 1000001, 1000002, 1000003, 1000004,
                                     2000001, 2000002, 2000003, 2000004}});

    }

    void specifyAnalysisList (AnalysisList &result) {
      using namespace Pipes::specifyAnalysisList;
      debugMe("specifyAnalysisList");

      vector<std::string> analysisNames;

      try {
        analysisNames = runOptions->getValue<std::vector<string>>("AnalysisList");
        for(int i=0;i<analysisNames.size();i++){
          cout << "Analysis name " << analysisNames[i] << endl;
          result.addAnalysis( mkAnalysis(analysisNames[i]) );
        }
      } catch (...) {
        ColliderBit_error().raise(LOCAL_INFO,"Specify 'AnalysisList' in yaml file.");
      }

      /*result.addAnalysis( mkAnalysis("ATLAS_0LEP") );
        result.addAnalysis( mkAnalysis("ATLAS_0LEPStop_20invfb") );
        result.addAnalysis( mkAnalysis("ATLAS_1LEPStop_20invfb") );
        result.addAnalysis( mkAnalysis("ATLAS_2bStop_20invfb") );
        result.addAnalysis( mkAnalysis("ATLAS_2LEPStop_20invfb") );
        result.addAnalysis( mkAnalysis("ATLAS_3LEPEW_20invfb") );*/
    }

    /// *** Finalization for analyses ***

    /// @todo Scaling will depend on nEvents, xsec, and analysis luminosity
    void getScaleFactor(double &result) {
      debugMe("getScaleFactor");
      result = 1.5;
    }


    /// *** Loop Managers ***
    void manageXsecDependentLoop() {
      debugMe("manageXsecDependentLoop");
      using namespace Pipes::manageXsecDependentLoop;
      /// \todo Will need to remind myself how Andy's code works.
      /// \todo Check out HEColliderMain.cpp in extras folder.
      /// \todo Delete this entire module function if vanilla loops are better.
      logger() << "==================" << endl;
      logger() << "ColliderBit says,";
      logger() << "\"manageXsecDependentLoop() was called.\"" << endl;
      logger() << LogTags::info << endl << EOM;
      ColliderBit_error().raise(LOCAL_INFO,"Xsec dependent loop not implemented.");
    }

    void manageVanillaLoop() {
      debugMe("manageVanillaLoop");
      using namespace Pipes::manageVanillaLoop;
      logger() << "==================" << endl;
      logger() << "ColliderBit says,";
      logger() << "\"manageVanillaLoop() was called.\"" << endl;
      logger() << "*** NOTE: Each iteration will report:" << endl;
      logger() << "  iteration, event met, thread, counts" << endl;
      logger() << LogTags::info << endl << EOM;

      try {
        nEvents = runOptions->getValue<unsigned>("nEvents");
      } catch (...) {
        ColliderBit_error().raise(LOCAL_INFO,"Specify 'nEvents' in yaml file.");
      }

      Loop::executeIteration(0);
      #pragma omp parallel shared(pythiaVector)
      {
        #pragma omp for
        for (unsigned it=1; it<nEvents-1; it++) {
          Loop::executeIteration(it);
        }
      }
      Loop::executeIteration(nEvents);

      isScatteringReady = false;
      isDetectorReady = false;

      logger() << "==================" << endl;
      logger() << "ColliderBit says,";
      logger() << "\"manageVanillaLoop() completed.\"" << endl;
      logger() << LogTags::info << endl << EOM;
    }


    /// Hard Scattering Event Generators
    void generatePythia8Event(Pythia8::Event &result) {
      debugMe("generatePythia8Event");
      using namespace Pipes::generatePythia8Event;
      result.clear();

      if (!isScatteringReady) {
        pythiaVector.clear();
        try {
          slhaFilename = runOptions->getValue<std::string>("slhaFilename");
        } catch (...) {
          ColliderBit_error().raise(LOCAL_INFO, "Specify 'slhaFilename' in yaml file.");
        }
        #pragma omp parallel shared(pythiaVector,slhaFilename)
        {
          Pythia8Backend* temp = new Pythia8Backend(omp_get_thread_num(), slhaFilename, *Dep::subprocessGroup);
          #pragma omp critical (pythiaVector)
          {
            pythiaVector.push_back(temp);
          }
        }
        isScatteringReady = true;
      }

      /// Get the next event from Pythia8
      pythiaVector[omp_get_thread_num()]->nextEvent(result);
    }


    /// Standard Event Format Functions
    void reconstructDelphesEvent(HEP_Simple_Lib::Event &result) {
      debugMe("reconstructDelphesEvent");
      using namespace Pipes::reconstructDelphesEvent;
      result.clear();

      #pragma omp critical (Delphes)
      {
        if (!isDetectorReady) {
          try {
            delphesConfigFilename = runOptions->getValue<std::string>("delphesConfigFilename");
          } catch (...) {
            ColliderBit_error().raise(LOCAL_INFO, "Specify 'delphesConfigFilename' in yaml file.");
          }
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
      debugMe("convertPythia8Event");
      using namespace Pipes::convertPythia8Event;
      result.clear();
      /// Feed the Pythia8 event to the converter
      fillGambitEvent(*Dep::hardScatteringEvent, result);
    }


    /// Analysis Accumulators

    void runAnalyses(vector<vector<SignalRegionData>>& result) {
      debugMe("runAnalyses");
      using namespace Pipes::runAnalyses;

      if (*Loop::iteration == 0) {
        // Nothing to do (analyses are already initialised)
      }

      else if (*Loop::iteration == nEvents) {
        // The final iteration: get log likelihoods for the analyses
        vector<shared_ptr<Analysis>> analyses = (*Dep::ListOfAnalyses).analyses;
        vector<vector<SignalRegionData>> finalnumbers;
        for (shared_ptr<Analysis> ana : analyses) {
          // ana->collect_results();
          cout << "SR number test " << ana->get_results()[0].n_signal << endl;
          finalnumbers.push_back(ana->get_results());
        }
        result = finalnumbers;
      }

      else
        #pragma omp critical (accumulator_update)
        {
          //counter += 1.;
          //cout << "Doing analysis in event loop" << endl;
          vector<shared_ptr<Analysis>> analyses=(*Dep::ListOfAnalyses).analyses;
          // Loop over analyses and run them
          for (shared_ptr<Analysis> ana : analyses) ana->analyze(*Dep::GambitColliderEvent);
        }
      //result = ana->results();
      #pragma omp critical (print)
      {
        #ifdef DEBUG
        std::cout<<"\n    iteration number: "<<*Loop::iteration;
        std::cout<<"\n    event met: "<<(*Dep::GambitColliderEvent).met();
        #endif
      }
    }


    void calcLogLike(double& result) {
      debugMe("calcLogLike");
      using namespace Pipes::calcLogLike;
      vector< vector<SignalRegionData> >  analysisResults = (*Dep::AnalysisNumbers);
      //Loop over all analyses (and SRs within one analysis) and fill a vector of observed likelihoods
      cout << "In calcLogLike" << endl;

      vector <double> observedLikelihoods;
      for(int analysis=0;analysis<analysisResults.size();analysis++){
        for(int SR=0;SR<analysisResults[analysis].size();SR++){
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
