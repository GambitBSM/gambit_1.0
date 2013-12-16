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
///  \author Pat Scott
///          (patscott@physics.mcgill.ca)
///    \date 2012 Nov
///    \date 2013 Jan, Feb, May, Dec 
///
///  \author Christoph Weniger
///    \date 2013 Jan 
///
///  \author Anders Kvellestad
///          (anders.kvellestad@fys.uio.no)
///  \date 2013 Nov
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

    struct SubprocessGroup {
      SubprocessGroup()
        : xsec(-1), nevts(-1) { }
      SubprocessGroup(double xs, const vector<int>& parts1,
                      const vector<int>& parts2)
        : xsec(xs), nevts(-1), particlesInProcess1(parts1),
          particlesInProcess2(parts2) { }
      void addAnalysis(Analysis* a) { analyses.push_back(shared_ptr<Analysis>(a)); }
      double xsec;
      // string name; // or int id = 1000*sp_type + sp_instance
      int nevts;
      /// @todo Add some metric of CPU cost per event for this process type?
      /// The processes are selected by the IDs of the particles which
      /// must be in the process.
      vector<int> particlesInProcess1;
      vector<int> particlesInProcess2;
      vector<shared_ptr<Analysis>> analyses;
    };

    // Basic setup
    /// @todo Model info including SLHA will need to come from ModelBit
    const string slhaFileName = "sps1aWithDecays.spc"; //"mhmodBenchmark.slha";
    /// @todo We'll eventually need more than just ATLAS, so Delphes/FastSim handling will need to be bound to analyses (and cached)
    /// @note That means that the class loaders had better be working by then...
    const string delphesConfigFile = "delphes_card_ATLAS.tcl";

    /// Proper backending must wait until the class loader is ready.
    /// Until then, let's just hard code these as local variables.
    /// \todo Check up on the initializations of these guys.
    /// \todo These may not actually be instantiated until within the 
    ///       parallelized event loop....
    MyPythia* myPythia;
    MyDelphes* myDelphes = new Delphes3Backend(delphesConfigFile);
    /// \todo Look up how Aldo's FastSim works.
//    BLAH_fastSimBackend myAldoDet();

    /// Initialization ... \todo Does Gambit call this automatically??
    void initialize()
    {
      std::cout << "\n\n -----\n Hi there. This is HEColliderBit_eventLoop\n\n";
    }

    /// Other non-rollcalled local functions
    // Can't think of any at the moment.

    /// Rollcalled functions properly hooked up to Gambit
    void manageXsecDependentLoop()
    {
      using namespace Pipes::eventLoopManager;
      /// \todo Will need to remind myself how Andy's code works.
      /// \todo Check out HEColliderMain.cpp in extras folder.
    }

    void manageVanillaLoop()
    {
      using namespace Pipes::eventLoopManager;
      /// \todo Fill in a simple (possibly crappy demo) event loop
    }

    /// \todo Set up the accumulators and the other rollcall functions
  }

}
