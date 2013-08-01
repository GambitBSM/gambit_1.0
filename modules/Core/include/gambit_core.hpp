//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  GAMBIT Core driver class.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Pat Scott
///  \date 2013 Aug
///
///  *********************************************

#ifndef __gambit_core_hpp__
#define __gambit_core_hpp__

#include "logs.hpp"
#include "util_classes.hpp"


namespace GAMBIT {
 
  /// Master driver class for a GAMBIT scan.
  class gambit_core
  {

    public:

      gambit_core(bool safe) : safe_mode_on(safe) {}

      ~gambit_core(){}

      bool safe_mode() { return safe_mode_on; }


    private:

      bool safe_mode_on;

  };


#ifdef IN_CORE
  gambit_core Core(true);
#else
  extern gambit_core Core;
#endif


}

#endif // defined __gambit_core_hpp__
