/* 
 * Example of how to use the macros in 'backend_macros.hpp' 
 * to set up a frontend for a specific library.
 * 
 * \author Aldo Saavedra
 * \date 2014-02-27  
 * 
 */

#ifdef BACKENDRENAME
  #define BACKENDNAME BACKENDRENAME
#else
  #define BACKENDNAME FastSim
#endif
#define VERSION 1.0
#define SAFE_VERSION 1_0

/* The following macro loads the library using dlopen 
 * when this header file is included somewhere. */

LOAD_LIBRARY

/* Next we use macros BE_VARIABLE and BE_FUNCTION to load pointers 
 * (using dlsym) to the variables and functions within the library.
 *  
 * The macros also create functors that wrap the library variables and functions.
 * These are used by the Core for dependency resolution and to set up a suitable 
 * interface to the library functions/variables at module level. */

/* Syntax for BE_FUNCTION:
 * BE_FUNCTION([choose function name], [type], [arguement types], "[exact symbol name]", "[choose capability name]")
 * 
 * The last argument (capability name) is optional. 
 * If left out (as done in some of the examples below) it will default to "[backend name]_[function name]_capability"
 * (e.g. "LibFirst_initialize_capability") */
  
BE_FUNCTION(FastSim_Init_Test, int, (int), "_Z17FastSim_Init_Testi", "fast_sim_init")
//BE_FUNCTION(FastSim_Init, int, (Event&), "_Z12FastSim_Initi", "evgen")
//BE_FUNCTION(someFunction, void, (), "_Z12someFunctionv", "someFunction")
//BE_FUNCTION(returnResult, double, (), "_Z12returnResultv")
//BE_FUNCTION(byRefExample, double, (double&), "_Z12byRefExampleRd", "refex")
//BE_FUNCTION(byRefExample2, void, (double&, double), "_Z13byRefExample2Rdd", "refex2")

/* We have now created the following:
 *
 * - Function pointers
 * Gambit::Backends::LibFirst::initialize       type: void (*)(int)
 * Gambit::Backends::LibFirst::someFunction     type: void (*)()
 * Gambit::Backends::LibFirst::returnResult     type: double (*)()
 *
 * - Functors
 * Gambit::Backends::LibFirst::Functown::initialize       type: Gambit::backend_functor<void,int>
 * Gambit::Backends::LibFirst::Functown::someFunction     type: Gambit::backend_functor<void>
 * Gambit::Backends::LibFirst::Functown::returnResult     type: Gambit::backend_functor<double>  */


/* Syntax for BE_VARIABLE:
 * BE_VARIABLE([choose variable name], [type], "[exact symbol name]", "[choose capability name]")  */

//BE_VARIABLE(SomeInt, int, "someInt", "SomeInt")
//BE_VARIABLE(SomeDouble, double, "someDouble", "SomeDouble")

/* We have now created the following:
 *
 * - Pointers
 * Gambit::Backends::LibFirst::SomeInt      type: int*
 * Gambit::Backends::LibFirst::SomeDouble   type: double*
 *
 * - Functors
 * Gambit::Backends::LibFirst::Functown::SomeInt      type: Gambit::backend_functor<int>
 * Gambit::Backends::LibFirst::Functown::SomeDouble   type: Gambit::backend_functor<double> */


/* At this point we have a minimal interface to the loaded library.
 * Any additional convenince functions could be constructed below 
 * using the available pointers. All convenience functions must be
 * registred/wrapped via the macro BE_CONV_FUNCTION (see below). */


//namespace Gambit
//{
//  namespace Backends
//  {
//    namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
//    {

//      /* Convenience functions go here */

//      double awesomenessByAnders(int a)
//      {
//        initialize(a);
//        someFunction();
//        return returnResult();
//      }

//    } /* end namespace BACKENDNAME_SAFE_VERSION */                                          
//  } /* end namespace Backends */                                                
//} /* end namespace Gambit */                                                   


/* Now register any convenience functions and wrap them in functors. 
 *
 * Syntax for BE_CONV_FUNCTION:
 * BE_CONV_FUNCTION([function name], type, "[choose capability name]")
 * 
 * As with BE_FUNCTION, the last argument is optional. */

//BE_CONV_FUNCTION(awesomenessByAnders, double, "awesomeness")


BE_INI_FUNCTION{}
DONE


// Undefine macros to avoid conflict with other backends
#include "backend_undefs.hpp"

