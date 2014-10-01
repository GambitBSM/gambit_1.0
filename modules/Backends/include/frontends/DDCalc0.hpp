//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Frontend header for the DDCalc0 backend.
///
///  Compile-time registration of available 
///  functions and variables from this backend.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Lars A. Dal
///          (l.a.dal@fys.uio.no)
///  \date 2014 Jul
///
///  *********************************************

// Identify backend
#define LIBPATH      "Backends/lib/libDDCalc0.so"
#ifdef BACKENDRENAME
  #define BACKENDNAME BACKENDRENAME
#else
  #define BACKENDNAME DDCalc0
#endif
#define VERSION 0.0
#define SAFE_VERSION 0_0

// Load it
LOAD_LIBRARY

// Import functions
BE_FUNCTION(InitializeDD, void, (bool*), "__ddcalc0_MOD_initialize", "DDCalc0_Initialize")
BE_FUNCTION(InitDetectorLUX2013, void, (bool*), "__ddcalc0_MOD_initdetectorlux2013", "DDCalc0_InitDetectorLUX2013")

BE_FUNCTION(SetWIMP, void, (double*,double*,double*,double*,double*,double*,double*,double*,double*,double*,double*,double*,double*,double*,double*), "__ddcalc0_MOD_setwimp", "DDCalc0_SetWIMP")
BE_FUNCTION(CalcRates, void, (), "__ddcalc0_MOD_calcrates", "DDCalc0_CalcRates")
BE_FUNCTION(LogLikelihood, double, (), "__ddcalc0_MOD_loglikelihood", "DDCalc0_LogLikelihood")
// All arguments of Initialize and SetWIMP are optional. Use NOARG(TYPE) as argument to skip unused arguments.

BE_INI_FUNCTION
{
  // Scan-level initialisation
  static bool scan_level = true;
  if (scan_level)
  {
    InitializeDD(NULL);
  }
  scan_level = false;
}
DONE                                                

// Undefine macros to avoid conflict with other backends
#include "backend_undefs.hpp"

