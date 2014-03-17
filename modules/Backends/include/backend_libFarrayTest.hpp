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

BE_VARIABLE(FORTRAN_COMMONBLOCK(libFarrayTest_CB_type,commonBlock), "commonblock_", "libFarrayTestCommonBlock")

BE_FUNCTION(printStuff, void, (), "printstuff_", "libFarrayTest_printStuff")

BE_FUNCTION(set_d, void, (), "set_d_", "libFarrayTest_set_d")

BE_FUNCTION(fptrRoutine, void, (   ARG_FARRAY(double,1), int&,                     \
                                        ARG_FARRAY_FPTR(double,(ARG_FARRAY(double,1)))  \
                                    ), "fptrroutine_", "libFarrayTest_fptrRoutine")

BE_FUNCTION(doubleFuncArray1, double, (ARG_FARRAY(double,1)), "doublefuncarray1_", "libFarrayTest_doubleFuncArray1", 1)

BE_FUNCTION(doubleFuncArray2, double, (ARG_FARRAY(double,1)), "doublefuncarray2_", "libFarrayTest_doubleFuncArray2", 1)

BE_FUNCTION(doubleFunc, double, (double&), "doublefunc_", "libFarrayTest_doubleFunc")


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

