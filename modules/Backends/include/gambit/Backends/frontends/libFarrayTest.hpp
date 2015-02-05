/* 
 * Another backend test...
 *
 * \author Lars A. Dal
 */

#ifdef BACKENDRENAME
  #define BACKENDNAME BACKENDRENAME
#else
  #define BACKENDNAME LibFarrayTest
#endif
#define VERSION 1.0
#define SAFE_VERSION 1_0

LOAD_LIBRARY

BE_VARIABLE(libFarrayTest_CB_type, commonBlock, "commonblock_", "libFarrayTestCommonBlock")
BE_VARIABLE(libFarrayTest_CB2_type, commonBlock2, "commonblock2_", "libFarrayTestCommonBlock2")

BE_FUNCTION(printStuff, void, (), "printstuff_", "libFarrayTest_printStuff")

BE_FUNCTION(fillArrays, void, (), "fillarrays_", "libFarrayTest_fillArrays")

BE_FUNCTION(fptrRoutine, void, (double*, int&, double(*)(double*)), "fptrroutine_", "libFarrayTest_fptrRoutine")

BE_FUNCTION(doubleFuncArray, double, (double*), "doublefuncarray_", "libFarrayTest_doubleFuncArray")


namespace Gambit
{
  namespace Backends
  {
    namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
    {

      /* Convenience functions go here */

    } /* end namespace BACKENDNAME_SAFE_VERSION */                                          
  } /* end namespace Backends */                                                
} /* end namespace Gambit */                                                   


//BE_CONV_FUNCTION(awesomenessByAnders, double, "awesomeness")

BE_INI_FUNCTION{}
DONE

// Undefine macros to avoid conflict with other backends
#include "gambit/Backends/backend_undefs.hpp"

