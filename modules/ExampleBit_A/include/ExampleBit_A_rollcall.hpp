//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Rollcall header for module ExampleBit_A.
///
///  Compile-time registration of available 
///  observables and likelihoods, as well as their
///  dependencies.
///
///  Add to this if you want to add an observable
///  or likelihood to this module.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Pat Scott 
///          (patscott@physics.mcgill.ca)
///  \date 2012 Nov 
///  \date 2013 Jan, Feb
///
///  *********************************************


#ifndef __ExampleBit_A_rollcall_hpp__
#define __ExampleBit_A_rollcall_hpp__

#include <module_macros.hpp>

typedef double(*fptr)(int&);                // A typedef used later in this file; should normally be placed in Utils/include/util_classes.hpp

#define MODULE ExampleBit_A
START_MODULE

  #define CAPABILITY nevents                // A physical observable or likelihood that this module can calculate.  There may be one or more 
  START_CAPABILITY                          //  functions in this module that can calculate this particular thing in different ways.

    #define FUNCTION nevents_dbl            // Name of an observable function: floating-point number of events in some hypothetical process
    START_FUNCTION(double)                  // Declare that this function calculates the nevents observable as a double precision variable
    DEPENDENCY(xsection, double)            // Dependencies: Number of events depends on cross-section
    DEPENDENCY(charge, int)                 // and charge. 
    #undef FUNCTION

    #define FUNCTION nevents_int            // Name of an observable function: integral number of events in some hypothetical process
    START_FUNCTION(int)                     // Declare that this function calculates the nevents observable as an integer variable
    DEPENDENCY(nevents, double)             // Dependencies: Integral number of events depends on floating-point nevents
    #undef FUNCTION

  #undef CAPABILITY


  #define CAPABILITY nevents_like           // A physical observable or likelihood that this module can calculate
  START_CAPABILITY

    #define FUNCTION nevents_like           // Likelihood: Likelihood of seeing number of events 
    START_FUNCTION(double)                  // Function calculates the nevents_like likelihood as a double precision variable                  
    DEPENDENCY(nevents, double)             // Dependency: Likelihood calculation requires number of events       
    #undef FUNCTION

  #undef CAPABILITY


  #define CAPABILITY function_pointer
  START_CAPABILITY

    #define FUNCTION function_pointer_retriever
    START_FUNCTION(fptr)

      #define BACKEND_REQ runMe            
      START_BACKEND_REQ(double)            
      #undef BACKEND_REQ

    #undef FUNCTION

  #undef CAPABILITY


  #define CAPABILITY id                     // A physical observable or likelihood that this module can calculate
  START_CAPABILITY

    #define FUNCTION identity               // Observable: particle id    
    START_FUNCTION(std::string)             // Function returns the identity of the particle as a string 
    #undef FUNCTION

  #undef CAPABILITY


#undef MODULE


#endif /* defined(__ExampleBit_A_rollcall_hpp__) */

