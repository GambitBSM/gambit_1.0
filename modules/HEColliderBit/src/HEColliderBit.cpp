//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Functions of HEColliderBit_eventLoop. Based 
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

#include "gambit_module_headers.hpp"
#include "HEColliderBit_types.hpp"
#include "HEColliderBit_rollcall.hpp"

// Now pulling in some of the code from extras/HEColliderMain.cpp
// I will leave the KFactorHooks alone for now, since the work on
// xsec calculation is ongoing.

namespace Gambit {
  namespace HEColliderBit {

    /// ********************************************
    /// Non-rollcalled Functions and Local Variables
    /// ********************************************
    
    /// @todo Put in actual analyses rather than a simple counter
    double counter = 0.;

    /// Initialization ... \todo Does Gambit call this automatically??
    void initialize()
    {
      std::cout << "\n\n -----\n Hi there. This is HEColliderBit testing";
      std::cout << " an event loop.\n\n";
    }


    /// *************************************************
    /// Rollcalled functions properly hooked up to Gambit
    /// *************************************************
    
    /// *** Initialization for managers ***
    
    /// @todo Model info including SLHA will need to come from ModelBit
    void getslhaFileName(std::string &result)
          { result = "sps1aWithDecays.spc"; }

    /// @todo We'll eventually need more than just ATLAS, so Delphes/FastSim handling will need to be bound to analyses (and cached)
    /// @note That means that the class loaders had better be working by then...
    void getDelphesConfigFileName (std::string &result)
          { result = "delphes_card_ATLAS.tcl"; }

    /// @todo nEvents should really depend on the xsec calculation, which again is bound to analyses
    void getNEvents(int &result)
          { result = 2000; }

    /// @todo More subprocesses. For current testing, only ~g and ~q.
    void getSubprocessGroup(SubprocessGroup &result) {
      result = SubprocessGroup(0.6, //< xsec estimate
                    {{1000021, 1000001, 1000002, 1000003, 1000004,
                               2000001, 2000002, 2000003, 2000004}},
                    {{1000021, 1000001, 1000002, 1000003, 1000004,
                               2000001, 2000002, 2000003, 2000004}});
      /// \todo Test boring event counter first.  Uncomment analysis later.
      // result.add_analysis( mkAnalysis("ATLAS_0LEP") );
    }


    /// *** Finalization for analyses ***

    /// @todo Scaling will depend on nEvents, xsec, and analysis luminosity
    void getScaleFactor(double &result)
          { result = 1.5; }


    /// *** Readied Simulation Tools ***
    
    /// Proper backending must wait until the class loader is ready.
    /// Until then, let's just hard code these.
    void readyPythiaBackend(Pythia8Backend* &result) {
      using namespace Pipes::readyPythiaBackend;
      result = new Pythia8Backend(omp_get_thread_num());
      result->set("SLHA:file", *Dep::slhaFileName);
      result->set("SUSY:idVecA", (*Dep::subprocessGroup).particlesInProcess1);
      result->set("SUSY:idVecB", (*Dep::subprocessGroup).particlesInProcess2);
    }

    void readyDelphesBackend(Delphes3Backend* &result) {
      using namespace Pipes::readyDelphesBackend;
      result = new Delphes3Backend(*Dep::delphesConfigFileName);
    }


    /// *** Loop Managers ***
    void manageXsecDependentLoop() {
      using namespace Pipes::manageXsecDependentLoop;
      /// \todo Will need to remind myself how Andy's code works.
      /// \todo Check out HEColliderMain.cpp in extras folder.
      /// \todo Delete this entire module function if vanilla loops are better.
      std::cout<<"*** 'manageXsecDependentLoop()' was called.\n";
      std::cout<<"    Are we still gonna do this one? I dunno...\n\n\n";
      exit(1);
    }

    void manageVanillaLoop() {
      using namespace Pipes::manageVanillaLoop;
      std::cout<<"*** 'manageVanillaLoop()' was called. \n";
      std::cout<<"    Now testing parallelized, Gambitized, HEColliderBit Loop.";
      std::cout<<"\n\n\n";

      #pragma omp parallel
      {
        #pragma omp for
        for (int it=0; it<*Dep::nEvents; it++) {
          Loop::executeIteration(it);
        }
      }
      std::cout<<"\n\n ** Success!! ** \n\n\n";
    }

    /// Hard Scattering Event Generators
    void generatePythia8Event(PythiaEvent &result) {
      using namespace Pipes::generatePythia8Event;
      result.clear();
      /// Get the next event from Pythia8
      (*Dep::readiedHardScatteringSim)->nextEvent(result);
    }

    /// Standard Event Format Functions
    void reconstructDelphesEvent(HEP_Simple_Lib::Event &result) {
      using namespace Pipes::reconstructDelphesEvent;
      result.clear();
      /// Feed the Pythia8 event to Delphes for detector simulation
      /// \note Delphes (ROOT) is not thread safe. Critical block necessary.
      #pragma omp critical (Delphes)
      {
        (*Dep::readiedDetectorSim)->processEvent(*Dep::hardScatteringEvent, result);
        cout<<"  ****** Delphes Reconstruction ****** \n";
      }
    }

    void convertPythia8Event(HEP_Simple_Lib::Event &result) {
      using namespace Pipes::convertPythia8Event;
      result.clear();
      /// Feed the Pythia8 event to the converter
      fillGambitEvent(*Dep::hardScatteringEvent, result);
    }

    /// Analysis Accumulators
    // Adds an integral event count to a total number of accumulated events.
    // At the end, scales the result by some adjustment factor.
    void simpleCounter(double &result)
    {
      using namespace Pipes::simpleCounter;
      if (*Loop::iteration == 0)
      {
        counter = 0.;
      }
      #pragma omp critical (accumulator_update)
      {
        counter += 1.;
      }
      result = counter * *Dep::scaleFactor;
      #pragma omp critical (print)
      { 
        cout<<"  Running simpleCounter in iteration "<<*Loop::iteration<<endl;
        cout<<"  Retrieved event met: "<<(*Dep::GambitColliderEvent).met()<<endl;
        cout<<"  I have thread index: "<<omp_get_thread_num()<<endl;
        cout<<"  Current total counts is: "<<result<<endl;
      }
    }

  }
}
