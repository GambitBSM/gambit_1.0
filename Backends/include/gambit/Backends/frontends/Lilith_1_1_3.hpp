//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Fronted header for the Lilith backend
///
///  Compile-time registration of available 
///  functions and variables from this backend.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author James McKay
///          (j.mckay14@imperial.ac.uk)
///  \date 2016 August
///
///  *********************************************

#define BACKENDNAME Lilith
#define VERSION 1.1.3
#define SAFE_VERSION 1_1_3

//#include "gambit/DarkBit/ProcessCatalog.hpp"
//#include "gambit/cmake/cmake_variables.hpp"
//#include "gambit/Elements/daFunk.hpp"
//#include "gambit/DarkBit/DarkBit_utils.hpp"
#include <Python.h>
#include <string>

// Load the library
LOAD_LIBRARY

//BE_FUNCTION(init, void, (int), "init", "init")

// Functions
BE_FUNCTION(initialize_lilith, PyObject*, (char*), "initialize_lilith", "initialize_lilith")

BE_FUNCTION(lilith_computelikelihood,float,(PyObject*),"lilith_computelikelihood","lilith_computelikelihood")

BE_FUNCTION(lilith_readuserinput, PyObject*, (PyObject*, char*),"lilith_readuserinput","lilith_readuserinput")

// Variables
BE_VARIABLE(lilithcalc,PyObject,"lilithcalc","lilithcalc")

// Convenience functions (registration)
//BE_CONV_FUNCTION(neutrino_yield, double, (const double&, const int&, void*&), "nuyield")




// Fraction of DM that is accounted for by model
// BE_INI_DEPENDENCY(RD_fraction, double)

// Undefine macros to avoid conflict with other backends
#include "gambit/Backends/backend_undefs.hpp"
