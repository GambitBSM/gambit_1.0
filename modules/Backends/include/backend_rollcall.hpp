//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Compile-time registration of available back-
///  ends.  Add to this if you want to add a new
///  backend.
///
///  To add a new backend, just add another line:
///   #include "frontend_your_backend_name.hpp"
///
///  If you have a backend that you want to 
///  use in a standalone code directly, instead
///  of including this file, just include 
///  frontend_name.hpp in your driver program.
///
///  *********************************************


#ifndef __backend_rollcall_hpp__
#define __backend_rollcall_hpp__

// Include the backend macro definitions
#include "backend_macros.hpp"

// Just include these backends 'as-is'
#include "frontends/libfirst_1_0.hpp"
#include "frontends/libfirst_1_1.hpp"
#include "frontends/libfortran.hpp"
#include "frontends/fakeSoftSUSY.hpp"
#include "frontends/DarkSUSY.hpp"
#include "frontends/SuperIso.hpp"
#include "frontends/libFarrayTest.hpp"
#include "frontends/micromegas.hpp"
#include "frontends/FastSim.hpp"
#include "frontends/nulike.hpp"
//#include "frontend_Pythia8.hpp"

// Get a bit fancy and include duplicate backends 

//#define BACKENDRENAME LibSecond
//  #include "frontend_libfirst_1_0.hpp"
//#undef BACKENDRENAME

//#define BACKENDRENAME LibThird
//  #include "frontend_libfirst_1_0.hpp"
//#undef BACKENDRENAME


#endif /* defined __backend_rollcall_hpp__ */
