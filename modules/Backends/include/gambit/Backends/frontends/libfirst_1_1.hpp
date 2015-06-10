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

#ifdef BACKENDRENAME
  #define BACKENDNAME BACKENDRENAME
#else
  #define BACKENDNAME LibFirst
#endif
#define VERSION 1.1
#define SAFE_VERSION 1_1

// Begin
LOAD_LIBRARY

// Set models that this backend can be used with.  If absent, all models are allowed.
//BE_ALLOW_MODELS(test_parent_I)  // Ben: disabled since no longer using CMSSM_demo
BE_ALLOW_MODELS(CMSSM, CMSSM_demo)  // CW: Added CMSSM_demo back, since it is still used by ExampleBits and spartan.yaml

// Functions
BE_FUNCTION(initialize, void, (int), "_Z10initializei", "LibFirst_initialize_capability")
BE_FUNCTION(someFunction, void, (), "_Z12someFunctionv", "someFunction", (CMSSM, UED))
BE_FUNCTION(returnResult, double, (), "_Z12returnResultv","LibFirst_returnResult_capability")
BE_FUNCTION(byRefExample, double, (double&), "_Z12byRefExampleRd", "refex")
BE_FUNCTION(byRefExample2, void, (double&, double), "_Z13byRefExample2Rdd", "refex2")
BE_FUNCTION(nastyExample, double, (int, etc), "_Z12nastyExampleiz", "varex")

// Variables
BE_VARIABLE(int,SomeInt, "someInt", "SomeInt", (CMSSM, UED))
BE_VARIABLE(double,SomeDouble, "someDouble", "SomeDouble")
BE_VARIABLE(dblarr,SomeArray, "someArray", "SomeArray")
BE_VARIABLE(std::vector<double>,SomeVector, "someVector", "test_vector")

// Initialisation function (dependencies)
BE_INI_DEPENDENCY(nevents, int)
//BE_INI_CONDITIONAL_DEPENDENCY(bar, double, CMSSM)  // Ben: nothing seems to exist to fulfil this

// Convenience functions (registration)
BE_CONV_FUNCTION(awesomenessByAnders, double, (int), "awesomeness", (CMSSM, UED))
BE_CONV_FUNCTION(variadicConvenience, double, (int, etc), "varex2")

// Initialisation function (definition)
BE_INI_FUNCTION
{
  // Scan-level initialisation
  static bool scan_level = true;
  if (scan_level)
  {
    logger() << "Initialising backend LibFirst, v1.1.  My .so file is in " << backendDir << ".";
    logger() << (*InUse::awesomenessByAnders ? "Ready to bust out some awesomeness." : "No awesomeness shall be forthcoming.") << EOM;
  }
  scan_level = false;

  // Point-level initialisation
  if (*InUse::SomeDouble)
  {
    *SomeDouble = 2.1;
    logger() << "Initialised someDouble to " << *SomeDouble << EOM;
  }
  logger() << "M0 in libfirst v1.1 initialisation function: " << *Param["M0"] << EOM;
  awesomenessByAnders(*Dep::nevents); 
}
END_BE_INI_FUNCTION

// Convenience functions (definitions)
BE_NAMESPACE
{
  #include <cstdarg>

  double awesomenessByAnders(int a)
  {
    logger().send("Message from 'awesomenessByAnders' backend convenience function in libfirst wrapper",LogTags::info);
    initialize(a);
    someFunction();
    return returnResult();
  }

  double variadicConvenience(int count, ...)
  {
    double result = *SomeDouble;
    va_list args;
    va_start(args, count);
    for (int i = 0; i < count; ++i)
    {
      result += va_arg(args, double);
    }
    va_end(args);
    return result;
  }

}
END_BE_NAMESPACE

// End
#include "gambit/Backends/backend_undefs.hpp"

