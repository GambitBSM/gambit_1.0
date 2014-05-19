/* 
 * Example of how to use the macros in 'backend_macros.hpp' 
 * to set up a frontend for a specific library.
 * 
 * \author Anders Kvellestad
 * \date 2013-03-26  
 * 
 * Modified: 2013-04-05
 * Pat Scott 2013-04-22
 * Anders Kvellestad 2013, Nov
 */

/* Specify the path to the shared library along with a backend name. */

#define LIBPATH      "Backends/lib/libfirst.so"
#ifdef BACKENDRENAME
  #define BACKENDNAME BACKENDRENAME
#else
  #define BACKENDNAME LibFirst
#endif
#define VERSION 1.1
#define SAFE_VERSION 1_1

// Begin
LOAD_LIBRARY

// Functions
BE_FUNCTION(initialize, void, (int), "_Z10initializei", "LibFirst_initialize_capability")
BE_FUNCTION(someFunction, void, (), "_Z12someFunctionv", "someFunction")
BE_FUNCTION(returnResult, double, (), "_Z12returnResultv","LibFirst_returnResult_capability")
BE_FUNCTION(byRefExample, double, (double&), "_Z12byRefExampleRd", "refex")
BE_FUNCTION(byRefExample2, void, (double&, double), "_Z13byRefExample2Rdd", "refex2")

// Variables
BE_VARIABLE(GENERAL_VAR(int,SomeInt), "someInt", "SomeInt")
BE_VARIABLE(GENERAL_VAR(double,SomeDouble), "someDouble", "SomeDouble")
BE_VARIABLE(GENERAL_VAR(dblarr,SomeArray), "someArray", "SomeArray")
BE_VARIABLE(GENERAL_VAR(std::vector<double>,SomeVector), "someVector", "test_vector")


namespace Gambit
{
  namespace Backends
  {
    namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
    {

      // Convenience functions - declaration
      double awesomenessByAnders(int a)
      {
        logger().send("Message from 'awesomenessByAnders' backend convenience function in libfirst wrapper",LogTags::info);
        initialize(a);
        someFunction();
        return returnResult();
      }

    }  
  }   
}  

// Convenience functions - registration
BE_CONV_FUNCTION(awesomenessByAnders, double, (int), "awesomeness")

// End
#undef LIBPATH 
#undef BACKENDNAME
#undef VERSION
#undef SAFE_VERSION

