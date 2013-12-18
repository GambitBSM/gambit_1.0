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
///
///  *********************************************

#include <string>
#include <iostream>
#include <fstream>
#include <memory>
#include <numeric>

#include "gambit_module_headers.hpp"
#include "HEColliderBit_eventLoop.hpp"

#include "omp.h"
#define MAIN_SHARED slhaFileName,delphesConfigFile,myDelphes
#define MAIN_PRIVATE genEvent,recoEvent,myPythia

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

    /// Proper backending must wait until the class loader is ready.
    /// Until then, let's just hard code these as local variables.
    /// \todo Check up on the initializations of these guys.
    /// \todo These may not actually be instantiated until within the 
    ///       parallelized event loop....
    Pythia8Backend* myPythia;
    Delphes3Backend* myDelphes = new Delphes3Backend(delphesConfigFile);

    /// Initialization ... \todo Does Gambit call this automatically??
    void initialize()
    {
      std::cout << "\n\n -----\n Hi there. This is HEColliderBit testing an event loop.\n\n";
    }


    /// *************************************************
    /// Rollcalled functions properly hooked up to Gambit
    /// *************************************************
    
    /// *** Initialization for managers ***
    
    /// @todo Model info including SLHA will need to come from ModelBit
    void getslhaFileName(std::string &result) { result = "sps1aWithDecays.spc"; }

    /// @todo We'll eventually need more than just ATLAS, so Delphes/FastSim handling will need to be bound to analyses (and cached)
    /// @note That means that the class loaders had better be working by then...
    void getDelphesConfigFileName (std::string &result) { result = "delphes_card_ATLAS.tcl"; }

    /// @todo nEvents should really depend on the xsec calculation, which again is bound to analyses
    void getNEvents(int &result) { result = 2000; }


    /// *** Loop Managers ***
    void manageXsecDependentLoop() {
      using namespace Pipes::eventLoopManager;
      /// \todo Will need to remind myself how Andy's code works.
      /// \todo Check out HEColliderMain.cpp in extras folder.
    }

    void manageVanillaLoop() {
      using namespace Pipes::eventLoopManager;
      /// \todo Fill in a simple (possibly crappy demo) event loop
    }

    /// Hard Scattering Event Generators
    void generatePythia8Event(PythiaEvent &result) {
      using namespace Pipes::generatePythia8Event;
      result.clear();
      /// Run Pythia8
      myPythia->nextEvent(result);
    }

    /// Standard Event Format Functions
    void reconstructDelphesEvent(Event &result) {
      using namespace Pipes::reconstructDelphesEvent;
      result.clear();
      /// Feed the Pythia8 event to Delphes
      /// \note Delphes (ROOT) is not thread safe. Critical block necessary.
      #pragma omp critical (Delphes)
      {
        myDelphes->processEvent(*Dep::hardScatteringEvent, result);
      }
    }

    void convertPythia8Event(Event &result) {
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
      using namespace Pipes::eventAccumulator;
      /// \note Adjustment factors like this will probably come from outside.
      /// \todo Thus, make it a CAPABILITY, and have this depend on it, possibly conditionally.
      double scaleFactor = 1.5;

      if (*Loop::iteration == 0)                // In the first iteration of a loop
      {
        counter = 0.;                           // Zero the total accumulated counts
      }
      #pragma omp critical (accumulator_update) // Only let one thread at a time accumulate results
      {
        counter += 1.;                          // Add one event count to the total
      }
      result = counter * scaleFactor;           // Return the current, scaled total
      #pragma omp critical (print)
      { 
        cout<<"  Running simpleCounter in iteration "<<*Loop::iteration<<endl;
        cout<<"  Retrieved event met: "<<*Dep::GambitColliderEvent.met()<<endl;
        cout<<"  I have thread index: "<<omp_get_thread_num();
        cout<<"  Current total counts is: "<<result<<endl;
      }
    }

  }

}
