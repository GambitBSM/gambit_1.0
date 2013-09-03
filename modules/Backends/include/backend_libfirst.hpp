/* 
 * Example of how to use the macros in 'backend_macros.hpp' 
 * to set up a backend for a specific library.
 * 
 * \author Anders Kvellestad
 * \date 2013-03-26  
 * 
 * Modified: 2013-04-05
 * Pat Scott 2013-04-22
 * Anders Kvellestad 2013-04-25
 */

/* Specify the path to the shared library along with a backend name. */

#define LIBPATH      "Backends/lib/libfirst.so"
#ifdef BACKENDRENAME
  #define BACKENDNAME BACKENDRENAME
#else
  #define BACKENDNAME LibFirst
#endif
#define VERSION 1.0


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

BE_FUNCTION(initialize, void, (int), "_Z10initializei")
BE_FUNCTION(someFunction, void, (), "_Z12someFunctionv")
BE_FUNCTION(returnResult, double, (), "_Z12returnResultv")
BE_FUNCTION(byRefExample, double, (double&), "_Z12byRefExampleRd", "refex")
BE_FUNCTION(byRefExample2, void, (double&, double), "_Z13byRefExample2Rdd", "refex2")

//BE_FUNCTION(initialize, void, (int), "_Z10initializei", "LibFirst_initialize_capability")
//BE_FUNCTION(someFunction, void, (), "_Z12someFunctionv", "LibFirst_someFunction_capability")
//BE_FUNCTION(returnResult, double, (), "_Z12returnResultv", "LibFirst_returnResult_capability")

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
 * BE_VARIABLE([choose variable name], [type], "[exact symbol name]")  */

BE_VARIABLE(SomeInt, int, "someInt")
BE_VARIABLE(SomeDouble, double, "someDouble")

/* We have now created the following:
 *
 * - Pointers
 * Gambit::Backends::LibFirst::SomeInt      type: int*
 * Gambit::Backends::LibFirst::SomeDouble   type: double*
 *
 * - Functions
 * Gambit::Backends::LibFirst::getSomeInt   type: int ()    
 * Gambit::Backends::LibFirst::setSomeInt   type: void (int)
 *
 * - Functors
 * Gambit::Backends::LibFirst::Functown::getSomeInt   type: Gambit::backend_functor<int>
 * Gambit::Backends::LibFirst::Functown::setSomeInt   type: Gambit::backend_functor<void,int>  */


/* At this point we have a minimal interface to the loaded library.
 * Any additional convenince functions could be constructed below 
 * using the available pointers/functions. All convenience functions must be
 * registred/wrapped via the macro BE_CONV_FUNCTION (see below). */


namespace Gambit
{
  namespace Backends
  {
    namespace BACKENDNAME
    {

      /* Convenience functions go here */

      double awesomenessByAnders(int a)
      {
        initialize(a);
        someFunction();
        return returnResult();
      }

    } /* end namespace BACKENDNAME */                                          
  } /* end namespace Backends */                                                
} /* end namespace Gambit */                                                   


/* Now register any convenience functions and wrap them in functors. 
 *
 * Syntax for BE_CONV_FUNCTION:
 * BE_CONV_FUNCTION([function name], type, "[choose capability name]")
 * 
 * As with BE_FUNCTION, the last argument is optional. */

BE_CONV_FUNCTION(awesomenessByAnders, double, "awesomeness")


// Undefine macros to avoid conflict with other backends
#undef LIBPATH 
#undef BACKENDNAME
#undef VERSION

