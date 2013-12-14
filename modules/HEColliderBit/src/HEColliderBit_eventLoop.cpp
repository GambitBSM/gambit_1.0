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

#include "gambit_module_headers.hpp"
#include "HEColliderBit_eventLoop.hpp"


namespace Gambit
{

  namespace HEColliderBit
  {
    /// Proper backending must wait until the class loader is ready.
    /// Until then, let's just hard code these as local variables.
    /// \todo Replace BLAH_* with the proper types from HEColliderMain.cpp
    /// \todo Check up on the initializations of these guys.
    /// \todo These may not actually be instantiated until within the 
    ///       parallelized event loop....
    BLAH_py8Backend myPythia();
    BLAH_delphesBackend myDelphes();
    BLAH_fastSimBackend myAldoDet();

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
      /// \todo Fill in a simple (possibly crappy demonstration) event loop
    }

    /// \todo Set up the accumulators and the other rollcall functions
    /// \note I'll take a look at these todos after lunch!! --Abram
  }

}
