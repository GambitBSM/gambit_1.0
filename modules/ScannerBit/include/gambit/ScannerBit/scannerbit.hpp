//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
///  \file
///
///  ScannerBit executable-level header file.
///  Include this in your main program that calls
///  ScannerBit.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///
///  \author Pat Scott
///          (patscott@physics.mcgill.ca)
///  \date 2014 Mar
///
///  *********************************************

#ifndef __ScannerBit_hpp__
#define __ScannerBit_hpp__

#include "gambit/ScannerBit/scanner_utils.hpp"
#include "gambit/ScannerBit/scan.hpp"
#include "gambit/Utils/static_members.hpp"
#include "gambit/Utils/ini_code_struct.hpp"

namespace Gambit
{

  namespace Scanner
  {

    namespace Ini
    {

      void register_ScannerBit_handlers()
      {
        error e = scan_error();
        warning w = scan_warning();
      }

      ini_code ScannerBit_handlers(LOCAL_INFO, &register_ScannerBit_handlers);

    }

  }

}

#endif //#ifndef __ScannerBit_hpp__
