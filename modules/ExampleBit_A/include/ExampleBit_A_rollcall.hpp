//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
//
//  Rollcall header for module ExampleBit_A
//
//  Compile-time registration of available obser-
//  vables and likelihoods, as well as their
//  dependencies.
//
//  Add to this if you want to add an observable
//  or likelihood to this module.
//
//  *********************************************
//
//  Authors
//  =======
//
//  (add name and date if you modify)
//
//  Pat Scott
//  2012 Nov 15++ 
//  2013 Jan 18, Feb 04
//
//  *********************************************

#ifndef __ExampleBit_A_rollcall_hpp__
#define __ExampleBit_A_rollcall_hpp__

#include <observable.hpp>

#define MODULE ExampleBit_A
START_MODULE

  #define FUNCTION nevents                 // Observable: Number of events in some hypothetical process
   START_FUNCTION(double)                  // Function calculates a double precision variable
   DEPENDENCY(xsection, double)            // Dependencies: Number of events depends on cross-section
   DEPENDENCY(charge, double)              // and charge. 
  #undef FUNCTION

  #define FUNCTION nevents_like            // Likelihood: Likelihood of seeing number of events 
   START_FUNCTION(double)                  // Function calculates a double precision variable                  
   DEPENDENCY(nevents, double)             // Dependency: Likelihood calculation requires number of events       
  #undef FUNCTION
 
  #define FUNCTION authors_dogs_name       // Observable: name of the author of ExampleBitA's dog    
   START_FUNCTION(std::string)             // Function calculates a string variable 
  #undef FUNCTION

#undef MODULE


#endif /* defined(__ExampleBit_A_rollcall_hpp__) */

