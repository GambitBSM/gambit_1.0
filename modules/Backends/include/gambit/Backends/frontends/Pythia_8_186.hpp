//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Example of a backend the loads classes.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Pat Scott 
///          (p.scott@imperial.ac.uk)
///  \date 2014 Oct
///
///  \author Anders Kvellestad
///          (anderkve@fys.uio.no)
///  \date 2014 Oct
///
///  *********************************************

#include "gambit/Backends/backend_types/Pythia_8_186/identification.hpp"

// Begin
LOAD_LIBRARY

// Set models that this backend can be used with.  If absent, all models are allowed.

// Functions

// Variables

// Initialisation function (dependencies)

// Convenience functions (registration)

// Initialisation function (definition)  // FIXME -- note for paper/documentation: all bossed classes appearing in backend ini or convenience functions
// must be fully qualified as e.g. Pythia_8_186::Pythia8::Particle for a specific version, or Gambit::Pythia8::Particle for the default version.  This is to
// make the user explicitly aware of which versions of the objects he/she is referring to, rather than relying on the default as in regular module functions.
// The reason for doing this is that typically, only the version of the objects corresponding to the the version of the backend for which the ini/convenience
// function is being written should be used here, and not the default version.
//BE_INI_FUNCTION{Pythia_8_186::Pythia8::Particle* rabbit = new Pythia_8_186::Pythia8::Particle; cout << "yohomie"; exit(1);} END_BE_INI_FUNCTION
BE_INI_FUNCTION{} END_BE_INI_FUNCTION

// Convenience functions (definitions)

// End
#include "gambit/Backends/backend_undefs.hpp"

