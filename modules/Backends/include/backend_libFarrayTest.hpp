/* 
 * Another backend test...
 *
 * \author Lars A. Dal
 */

#include "libFarrayTest_types.hpp"

#define LIBPATH      "Backends/lib/libFarrayTest.so"
#ifdef BACKENDRENAME
  #define BACKENDNAME BACKENDRENAME
#else
  #define BACKENDNAME LibFarrayTest
#endif
#define VERSION 1.0


LOAD_LIBRARY

BE_VARIABLE_FULL(FORT_COMMONB(libFarrayTest_CB_type,commonBlock), "commonblock_", "libFarrayTestCommonBlock")

BE_FUNCTION_FULL(printStuff, void, (), "__testmodule_MOD_printstuff", "libFarrayTest_printStuff")

BE_FUNCTION_FULL(set_d, void, (), "__testmodule_MOD_set_d", "libFarrayTest_set_d")

BE_FUNCTION_FULL(fptrRoutine, void, (   ARG_FARRAY(double,1), int&,                     \
                                        ARG_FARRAY_FPTR(double,(ARG_FARRAY(double,1)))  \
                                    ), "__testmodule_MOD_fptrroutine", "libFarrayTest_fptrRoutine")

BE_FUNCTION_FULL(doubleFuncArray1, double, (ARG_FARRAY(double,1)), "__testmodule_MOD_doublefuncarray1", "libFarrayTest_doubleFuncArray1", 1)

BE_FUNCTION_FULL(doubleFuncArray2, double, (ARG_FARRAY(double,1)), "__testmodule_MOD_doublefuncarray2", "libFarrayTest_doubleFuncArray2", 1)

BE_FUNCTION_FULL(doubleFunc, double, (double&), "__testmodule_MOD_doublefunc", "libFarrayTest_doubleFunc")


namespace Gambit
{
  namespace Backends
  {
    namespace BACKENDNAME
    {

      /* Convenience functions go here */

    } /* end namespace BACKENDNAME */                                          
  } /* end namespace Backends */                                                
} /* end namespace Gambit */                                                   


//BE_CONV_FUNCTION(awesomenessByAnders, double, "awesomeness")

// Undefine macros to avoid conflict with other backends
#undef LIBPATH 
#undef BACKENDNAME
#undef VERSION

