//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Example of how to use the macros in 
///  'backend_macros.hpp' to set up a frontend for
///  a specific library.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Anders Kvellestad
///          ()
///  \date 2013 Mar, Apr
///
///  \author Pat Scott 
///          (patscott@physics.mcgill.ca)
///  \date 2013 Apr
///  \date 2014 May
///
///  *********************************************

// Specify the path to the shared library along with a backend name. */
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

// Define models that this backend is allowed to be used with.
//BE_ALLOW_MODELS(test_parent_I, NormalDist, CMSSM_I)

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

// Initialisation function (dependencies)
BE_INI_DEPENDENCY(nevents, int)
BE_INI_CONDITIONAL_DEPENDENCY(bar, double, CMSSM_I)

// Convenience functions (registration)
BE_CONV_FUNCTION(awesomenessByAnders, double, (int), "awesomeness")

// Initialisation function (definition)
BE_INI_FUNCTION
{
  logger().send("Initialising backend LibFirst, v1.1.");
  awesomenessByAnders(*Dep::nevents); 
}
DONE

// Convenience functions (definitions)
BE_NAMESPACE
{
  double awesomenessByAnders(int a)
  {
    logger().send("Message from 'awesomenessByAnders' backend convenience function in libfirst wrapper",LogTags::info);
    initialize(a);
    someFunction();
    return returnResult();
  }
}
DONE


// End
#undef LIBPATH 
#undef BACKENDNAME
#undef VERSION
#undef SAFE_VERSION

