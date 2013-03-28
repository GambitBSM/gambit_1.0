//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
//
//  Rollcall header for module ExampleBit_B
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

#ifndef __ExampleBit_B_rollcall_hpp__
#define __ExampleBit_B_rollcall_hpp__

#include <observable.hpp>

#define MODULE ExampleBit_B
START_MODULE

  #define CAPABILITY xsection
  START_CAPABILITY

    #define FUNCTION xsection               // Observable: cross-section for some hypothetical process
    START_FUNCTION(double)                  // Function calculates a double precision variable
    #undef FUNCTION

  #undef CAPABILITY


  #define CAPABILITY nevents_postcuts
  START_CAPABILITY
  //LATEX_LABEL($n_{\rm events, cut}$)      // Specify the LaTeX label of this quantity

    #define FUNCTION nevents_postcuts       // Observable: number of events for process after cuts 
    START_FUNCTION(int)                     // Function calculates an integer variable                  
    DEPENDENCY(nevents, double)             // Dependency: post-cut events needs pre-cut events

      #define BACKEND_REQUIREMENT betest
      START_BACKEND_REQUIREMENT(double)
       
        #define VIABLE_BACKEND LibFirst
        START_VIABLE_BACKEND
        //BE_CONDITIONAL_DEP(dog, std::string)
        #undef VIABLE_BACKEND 

        #define VIABLE_BACKEND LibFirstCopy
        START_VIABLE_BACKEND
        #undef VIABLE_BACKEND 

      #undef BACKEND_REQUIREMENT

    #undef FUNCTION

  #undef CAPABILITY


  #define CAPABILITY authors_dogs_name
  START_CAPABILITY

    #define FUNCTION authors_dogs_name      // Observable: name of the author of ExampleBitB's dog    
    START_FUNCTION(std::string)                
    #undef FUNCTION

  #undef CAPABILITY


  #define CAPABILITY nevents
  START_CAPABILITY

    #define FUNCTION nevents                // Observable: num. events, defined as integer to confuse the dep resolver
    START_FUNCTION(int)                     // Function calculates an integer variable
    #undef FUNCTION

  #undef CAPABILITY


#undef MODULE


#endif /* defined(__ExampleBit_B_rollcall_hpp__) */

