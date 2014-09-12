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
      debugMe("specifyAnalysisList");
      result.addAnalysis( mkAnalysis("ATLAS_0LEP") );
      result.addAnalysis( mkAnalysis("ATLAS_0LEPStop_20invfb") );
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
    
    void getLogLike(double &result) {
      debugMe("getLogLike");
      using namespace Pipes::getLogLike;
      
      if (*Loop::iteration == 0)
      {
        //Nothing to do (analyses are already initialised)
	
      }

      else if (*Loop::iteration == nEvents){
        //The final iteration: get log likelihoods for the analyses
        vector<shared_ptr<Analysis>> analyses=(*Dep::ListOfAnalyses).analyses;
        for (shared_ptr<Analysis> ana : analyses)ana->loglikelihood();
      }
      else 
      #pragma omp critical (accumulator_update)
      {
        //counter += 1.;
	//cout << "Doing analysis in event loop" << endl;
        vector<shared_ptr<Analysis>> analyses=(*Dep::ListOfAnalyses).analyses;
        //Loop over analyses and run them
        for (shared_ptr<Analysis> ana : analyses)ana->analyze(*Dep::GambitColliderEvent);       
      }
      //result = ana->results();
      #pragma omp critical (print)
      {
        #ifdef DEBUG
        std::cout<<"\n    iteration number: "<<*Loop::iteration;
        std::cout<<"\n    event met: "<<(*Dep::GambitColliderEvent).met();
        std::cout<<"\n    analysisCounter result: "<<result;
        #endif
        logger() << "  " << *Loop::iteration << ", ";
        logger() << (*Dep::GambitColliderEvent).met() << ", ";
        logger() << omp_get_thread_num() << ", ";
        logger() << result << EOM;
      }
    }

    // Adds an integral event count to a total number of accumulated events.
    // At the end, scales the result by some adjustment factor.
    /*    void simpleCounter(double &result) {
      debugMe("simpleCounter");
      using namespace Pipes::simpleCounter;
      if (*Loop::iteration == 0)
      {
        counter = 0.;
      }
      #pragma omp critical (accumulator_update)
      {
        counter += 1.;
      }
      result = counter * (*Dep::scaleFactor);
      #pragma omp critical (print)
      {
        #ifdef DEBUG
        std::cout<<"\n    iteration number: "<<*Loop::iteration;
        std::cout<<"\n    event met: "<<(*Dep::GambitColliderEvent).met();
        std::cout<<"\n    simpleCounter result: "<<result;
        #endif
        logger() << "  " << *Loop::iteration << ", ";
        logger() << (*Dep::GambitColliderEvent).met() << ", ";
        logger() << omp_get_thread_num() << ", ";
        logger() << result << EOM;
      }
      }*/

  }
}
