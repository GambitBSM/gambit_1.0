//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  DarkBit related functions that should not be
///  used except for testing etc.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///
///  \author Christoph Weniger
///          (c.weniger@uva.nl)
///  \date 2015 May
///  \date 2016 Feb
///
///  *********************************************

#include "gambit/Elements/gambit_module_headers.hpp"
#include "gambit/DarkBit/DarkBit_rollcall.hpp"

namespace Gambit
{
  namespace DarkBit
  {

    /*! \brief Relic density directly from a call of initialized DarkSUSY.
    */
    void RD_oh2_DarkSUSY(double &result)
    {
      using namespace Pipes::RD_oh2_DarkSUSY;
      // Input
      int omtype;  // 0: no coann; 1: all coann
      int fast;  // 0: standard; 1: fast; 2: dirty

      // Set options via ini-file
      /// Option omtype<int>: 0 no coann, 1 all coann (default 1)
      omtype = runOptions->getValueOrDef<int>(1, "omtype");
      /// Option fast<int>: 0 standard, 1 fast, 2 dirty (default 0)
      fast = runOptions->getValueOrDef<int>(0, "fast");

      // Output
      double xf;  // freeze-out temperature
      int ierr;  // error flag
      int iwar;  // warming flag
      int nfc;  // number of fnct calls to effective annihilation cross section
      logger() << "Starting DarkSUSY relic density calculation..." << EOM;
      double oh2 = BEreq::dsrdomega(omtype,fast,xf,ierr,iwar,nfc);
      result = oh2;
      logger() << "...done, at last!" << oh2 << EOM;
      logger() << "RD_oh2_DarkSUSY: oh2 is " << oh2 << EOM;
    }

  }
}
