/* 
 * Example of how to use the macros in 'backend_general.hpp' 
 * to set up a backend for a specific library.
 * 
 * \author Anders Kvellestad
 * \date 2013-03-26  
 * 
 * Modified: 2013-04-05
 * Pat Scott 2013-04-22
 */

#include <backend_macros.hpp>

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
 * These macros also set up a minimal interface providing 'get/set'
 * functions for the library variables and function pointers 
 * for the library functions.
 *  
 * Syntax for BE_VARIABLE:
 * BE_VARIABLE([choose variable name], [type], "[exact symbol name]", [choose pointer name])  */

BE_VARIABLE(SomeInt, int, "someInt", pSomeInt)
BE_VARIABLE(SomeDouble, double, "someDouble", pSomeDouble)

/* We have now set up the pointers
 *
 * GAMBIT::Backends::BACKENDNAME::pSomeInt     (int *)
 * GAMBIT::Backends::BACKENDNAME::pSomeDouble  (double *)
 * 
 * and the corresponding get/set functions
 * 
 * int  GAMBIT::Backends::BACKENDNAME::getSomeInt()
 * void GAMBIT::Backends::BACKENDNAME::setSomeInt(int)
 *
 * double GAMBIT::Backends::BACKENDNAME::getSomeDouble()
 * void   GAMBIT::Backends::BACKENDNAME::setSomeDouble(double)  */
  

/* Syntax for BE_FUNCTION:
 * BE_FUNCTION([choose function name], [type], [arguement types], "[exact symbol name]")  */

BE_FUNCTION(initialize, void, (int), "_Z10initializei")
BE_FUNCTION(someFunction, void, (), "_Z12someFunctionv")
BE_FUNCTION(returnResult, double, (), "_Z12returnResultv")

/* We have now created the following function pointers:
 *
 * GAMBIT::Backends::BACKENDNAME::initialize       (* void)(int)
 * GAMBIT::Backends::BACKENDNAME::someFunction     (* void)()
 * GAMBIT::Backends::BACKENDNAME::returnResult     (* double)()
 *
 * Calling the function of a function pointer is 
 * exactly like calling the function itself, e.g.
 *
 * GAMBIT::Backends::BACKENDNAME::initialize(10)
 */ 


/* At this point we have a minimal interface to the loaded library.
 * Any additional convenince functions could be constructed below 
 * using the available pointers. All convenience functions must be
 * registred/wrapped via the macro 
 * BE_CONV_FUNCTION([function name], [function type])
 * (see below). */


namespace GAMBIT
{
  namespace Backends
  {
    namespace BACKENDNAME
    {

      /* Convenience functions go here */

      double doAll(int a)
      {
        initialize(a);
        someFunction();
        return returnResult();
      }

    } /* end namespace BACKENDNAME */                                          
  } /* end namespace Backends */                                                
} /* end namespace GAMBIT */                                                   


/* Wrap convenience functions in functors */
BE_CONV_FUNCTION(doAll, double)




// Undefine macros to avoid conflict with other backends
#undef LIBPATH 
#undef BACKENDNAME

