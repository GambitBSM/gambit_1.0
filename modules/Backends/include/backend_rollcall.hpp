//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Compile-time registration of available back-
///  ends.  Add to this if you want to add a new
///  backend.
///
///  To add a new backend, just add another line:
///   #include "backend_your_backend_name.hpp"
///
///  If you have a backend that you want to 
///  use in a standalone code, instead of
///  including this file, just include 
///  backend_name.hpp in your driver program.
///
///  *********************************************


#ifndef __backend_rollcall_hpp__
#define __backend_rollcall_hpp__

// Define the static members of utility classes
#include "static_members.hpp"

// Include the backend macro definitions
#include "backend_macros.hpp"

// Just include these backends 'as-is'

#include "backend_libfirst.hpp"
#include "backend_libfortran.hpp"
#include "backend_fakeSoftSUSY.hpp"
#include "backend_DarkSUSY.hpp"
#include "backend_SuperIso.hpp"
#include "backend_libFarrayTest.hpp"
#include "backend_micromegas.hpp"

//Aldo
#include "backend_FastSim.hpp"

//Anders
#include "backend_Pythia8.hpp"

// Get a bit fancy and include duplicate backends 

//#define BACKENDRENAME LibSecond
//  #include "backend_libfirst.hpp"
//#undef BACKENDRENAME

//#define BACKENDRENAME LibThird
//  #include "backend_libfirst.hpp"
//#undef BACKENDRENAME


#endif /* defined __backend_rollcall_hpp__ */
