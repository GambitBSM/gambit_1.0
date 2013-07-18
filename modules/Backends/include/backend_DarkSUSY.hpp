/* 
 * DarkSUSY Backend
 * 
 * \author Anders Kvellestad
 * \date 2013-03-26  
 * 
 * Modified: 2013-04-05
 * Pat Scott 2013-04-22
 * Anders Kvellestad 2013-04-25
 * Torsten Bringmann, Christoph Weniger June 2013
 */

#include <backend_macros.hpp>

/* Specify the path to the shared library along with a backend name. */

#define LIBPATH      "libdarksusy.so"
#ifdef BACKENDRENAME
  #define BACKENDNAME BACKENDRENAME
#else
  #define BACKENDNAME DarkSUSY
#endif
#define VERSION 0.1


/* The following macro loads the library (using dlmopen) in LIBPATH 
 * when this header file is included somewhere. */

LOAD_LIBRARY

/* Next we use macros BE_VARIABLE and BE_FUNCTION to load pointers 
 * (using dlsym) to the variables and functions within the library.
 *  
 * The macros also set up a minimal interface providing 'get/set'
 * functions for the library variables and function pointers 
 * for the library functions.
 *  
 * These functions are then wrapped in functors that the core can connect 
 * to the modules via the rollcall system */
 
/* Syntax for BE_FUNCTION:
 * BE_FUNCTION([choose function name], [type], [arguement types], "[exact symbol name]", "[choose capability name]")
 * 
 * The last argument (capability name) is optional. 
 * If left out (as done below) it will default to "[backend name]_[function name]_capability"
 * (e.g. "LibFirst_initialize_capability")  */

// BE_FUNCTION(initialize, void, (int), "_Z10initializei")
// BE_FUNCTION(someFunction, void, (), "_Z12someFunctionv")
// BE_FUNCTION(returnResult, double, (), "_Z12returnResultv")

BE_FUNCTION(dsinit, void, (), "dsinit_", "dsinit")
BE_FUNCTION(dssusy, void, (int&,int&), "dssusy_", "dssusy")
BE_FUNCTION(dsrdomega, double, (int&,int&,double&,int&,int&,int&), "dsrdomega_", "dsrdomega")

//BE_FUNCTION(initialize, void, (int), "_Z10initializei", "LibFirst_initialize_capability")
//BE_FUNCTION(someFunction, void, (), "_Z12someFunctionv", "LibFirst_someFunction_capability")
//BE_FUNCTION(returnResult, double, (), "_Z12returnResultv", "LibFirst_returnResult_capability")

/* We have now created the following:
 *
 * - Function pointers
 * GAMBIT::Backends::LibFirst::initialize       type: void (*)(int)
 * GAMBIT::Backends::LibFirst::someFunction     type: void (*)()
 * GAMBIT::Backends::LibFirst::returnResult     type: double (*)()
 *
 * - Functors
 * GAMBIT::Backends::LibFirst::Functown::initialize       type: GAMBIT::backend_functor<void,int>
 * GAMBIT::Backends::LibFirst::Functown::someFunction     type: GAMBIT::backend_functor<void>
 * GAMBIT::Backends::LibFirst::Functown::returnResult     type: GAMBIT::backend_functor<double>  */


/* Syntax for BE_VARIABLE:
 * BE_VARIABLE([choose variable name], [type], "[exact symbol name]")  */

BE_VARIABLE(mssmpar, DS_MSSMPAR, "mssmpar_")
BE_VARIABLE(mspctm, DS_MSPCTM, "mspctm_")
// BE_VARIABLE(SomeInt, int, "someInt")
// BE_VARIABLE(SomeDouble, double, "someDouble")

/* We have now created the following:
 *
 * - Pointers
 * GAMBIT::Backends::LibFirst::SomeInt      type: int*
 * GAMBIT::Backends::LibFirst::SomeDouble   type: double*
 *
 * - Functions
 * GAMBIT::Backends::LibFirst::getSomeInt   type: int ()    
 * GAMBIT::Backends::LibFirst::setSomeInt   type: void (int)
 *
 * - Functors
 * GAMBIT::Backends::LibFirst::Functown::getSomeInt   type: GAMBIT::backend_functor<int>
 * GAMBIT::Backends::LibFirst::Functown::setSomeInt   type: GAMBIT::backend_functor<void,int>  */


/* At this point we have a minimal interface to the loaded library.
 * Any additional convenince functions could be constructed below 
 * using the available pointers/functions. All convenience functions must be
 * registred/wrapped via the macro BE_CONV_FUNCTION (see below). */


// namespace GAMBIT
// {
//   namespace Backends
//   {
//     namespace BACKENDNAME
//     {
// 
//       /* Convenience functions go here */
// 
//       double awesomenessByAnders(int a)
//       {
//         initialize(a);
//         someFunction();
//         return returnResult();
//       }
// 
//     } /* end namespace BACKENDNAME */                                          
//   } /* end namespace Backends */                                                
// } /* end namespace GAMBIT */                                                   


/* Now register any convenience functions and wrap them in functors. 
 *
 * Syntax for BE_CONV_FUNCTION:
 * BE_CONV_FUNCTION([function name], type, "[choose capability name]")
 * 
 * As with BE_FUNCTION, the last argument is optional. */

// BE_CONV_FUNCTION(awesomenessByAnders, double, "awesomeness")


// Undefine macros to avoid conflict with other backends
#undef LIBPATH 
#undef BACKENDNAME
#undef VERSION

