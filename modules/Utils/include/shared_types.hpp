//  *********************************************
//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Types for which any of the following apply: 
///  1. The type is returned or read in by a backend.
///  2. The type is used internally in convenience 
///     functions of more than one backend.
///  3. The type is returned or used internally by
///     more than one module or model.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Pat Scott  
///          (patscott@physics.mcgill.ca)
///  \date 2013 Apr, Oct
///  \date 2014 Mar
///
///  \author Abram Krislock
///          (abram.krislock@fysik.su.se)
///  \date 2013 Dec
//
///  \author Christoph Weniger
///          (c.weniger@uva.nl)
///  \date 2014 Mar
///
///  *********************************************

#ifndef __shared_types_hpp__
#define __shared_types_hpp__

// Definitions required to understand model parameter objects
#include "model_types.hpp"

// All the types from the different backends
#include "SLHA_types.hpp"
#include "DarkSUSY_types.hpp"
#include "SuperIso_types.hpp"
#include "libFarrayTest_types.hpp"
#include "FastSim_types.hpp"
#include "libfirst_types.hpp"
//#include "Pythia_types.hpp"

// Spectrum object from flexiblesusy backend
#include "Spectrum.hpp"

// GAMBIT BaseFunction Objects
#include "base_functions.hpp"

// Other types that don't belong in any of the existing includes.  Should be progressively
// organised into new headers and included from here as their number grows.
namespace Gambit
{
  
  // Pointer to a function that takes an integer by reference and returns a double.
  // Just used for example purposes in ExampleBit_A and ExampleBit_B.
  typedef double(*fptr)(int&);

  // Placeholder type for SM parameters. Will be used all over GAMBIT so will
  // need to think hard about how this works (different energy scales,
  // renormalisation schemese etc, automatic conversion?)
  struct SMpars
  {
    double alphaem;
    double alphas;
    double mZ;
    double mtop;
    // ...etc...
  };
  
  // Placeholder for CMSSM parameters object
  struct CMSSMpars
  {
    double m0;
    double m12;
    // ...etc...
  };

}

#endif //__shared_types_hpp__


