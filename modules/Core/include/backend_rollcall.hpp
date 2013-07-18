//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
//
//  Compile-time registration of available back-
//  ends.  Add to this if you want to add a new
//  backend.
//
//  To add a new backend, just add another line:
//   #include "backend_your_backend_name.hpp"
//
//  If you have a backend that you want to 
//  use in a standalone code, instead of
//  including this file, just include 
//  backend_name.hpp in your driver program.
//
//  *********************************************
//
//  Authors
//  =======
//
//  (add name and date if you modify)
//
//  \author Pat Scott
//  \date   2013-03-27
//
//  \author Ben Farmer
//  \date   2013-05-29
//
//  *********************************************

#ifndef __backend_rollcall_hpp__
#define __backend_rollcall_hpp__


// Just include these backends 'as-is'

#include "backend_libfirst.hpp"
#include "backend_libfortran.hpp"
#include "backend_fakeSoftSUSY.hpp"
#include "backend_DarkSUSY.hpp"

// Get a bit fancy and include duplicate backends 

//#define BACKENDRENAME LibSecond
//  #include "backend_libfirst.hpp"
//#undef BACKENDRENAME

//#define BACKENDRENAME LibThird
//  #include "backend_libfirst.hpp"
//#undef BACKENDRENAME


#endif /* defined __backend_rollcall_hpp__ */
