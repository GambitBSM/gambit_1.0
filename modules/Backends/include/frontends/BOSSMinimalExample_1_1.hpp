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
#include "backend_types/BOSSMinimalExample_1_1/identification.hpp"

// Begin
LOAD_LIBRARY

// Set models that this backend can be used with.  If absent, all models are allowed.

// Functions
//BE_FUNCTION(initialize, void, (int), "_Z10initializei", "LibFirst_initialize_capability")

// Variables

// Initialisation function (dependencies)

// Convenience functions (registration)

// Initialisation function (definition)
BE_INI_FUNCTION
{}
DONE

// Convenience functions (definitions)
BE_NAMESPACE
{}
DONE

// End
#include "backend_undefs.hpp"

