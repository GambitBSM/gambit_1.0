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
///  \date 2014 Mar, Sep
///
///  \author Abram Krislock
///          (abram.krislock@fysik.su.se)
///  \date 2013 Dec
//
///  \author Christoph Weniger
///          (c.weniger@uva.nl)
///  \date 2014 Mar
///
///  \author Anders Kvellestad
///          (anderkve@fys.uio.no)
///  \date 2014 Oct
///
///  *********************************************

#ifndef __shared_types_hpp__
#define __shared_types_hpp__

#include "type_macros.hpp"        // Macro definitions
#include "model_types.hpp"        // Definitions required to understand model parameter objects
#include "base_functions.hpp"     // GAMBIT BaseFunction Objects
#include "SLHA_readers.hpp"       // SLHA readers from contributed packages

// 'By hand' types from different backends
#include "backend_types/DarkSUSY.hpp"
#include "backend_types/SuperIso.hpp"
#include "backend_types/libFarrayTest.hpp"
#include "backend_types/FastSim.hpp"
#include "backend_types/libfirst.hpp"
#include "backend_types/micrOMEGAs.hpp"

// Choices about the default versions of backends to use for loading types (specific versions
// of types can always be used by employing the qualified type BACKENDNAME_SAFEVERSION::TYPE)
#define  Default_BOSSMinimalExample 1_1
#define  Default_Pythia 8_186

// BOSSed (class-loaded) types from different backends 
#include "backend_types/BOSSMinimalExample_1_0/loaded_types.hpp"
#include "backend_types/BOSSMinimalExample_1_1/loaded_types.hpp"
#include "backend_types/BOSSMinimalExample_1_2/loaded_types.hpp"
#include "backend_types/Pythia_8_186/loaded_types.hpp"

// Spectrum object from flexiblesusy backend
#include "Spectrum.hpp"  // Abstract base class
#include "MSSMSpec.hpp"  // MSSM derived container 

// GAMBIT BaseFunction Objects
#include "base_functions.hpp"

// Other types that don't belong in any of the existing includes.  Should be progressively
// organised into new headers and included from here as their number grows.
namespace Gambit
{
  typedef flexiblesusy::MSSMSpec MSSMSpec; 
 
  // Pointer to a function that takes an integer by reference and returns a double.
  // Just used for example purposes in ExampleBit_A and ExampleBit_B.
  typedef double(*fptr)(int&);
  
}

#endif //__shared_types_hpp__


