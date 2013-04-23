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
//  2013 Jan 18, Feb 04, April 22
//
//  *********************************************

#ifndef __ExampleBit_B_rollcall_hpp__
#define __ExampleBit_B_rollcall_hpp__

#include <module_macros.hpp>

#define MODULE ExampleBit_B
START_MODULE


  #define CAPABILITY xsection               // Observable: cross-section for some hypothetical process
  START_CAPABILITY

    #define FUNCTION xsection               // Name of specific function providing the observable
    START_FUNCTION(double)                  // Function calculates a double precision variable
    #undef FUNCTION

  #undef CAPABILITY


  #define CAPABILITY nevents_postcuts       // Observable: number of events for process after cuts 
  START_CAPABILITY
  //LATEX_LABEL($n_{\rm events, cut}$)      // Specify the LaTeX label of this quantity

    #define FUNCTION nevents_postcuts       // Name of specific function providing the observable
    START_FUNCTION(int)                     // Function calculates an integer variable                  
    DEPENDENCY(nevents, double)             // Dependency: post-cut events needs pre-cut events

      #define BACKEND_REQ doAll_capability  // A quantity doAll_capability that must be obtained from an external (backend) code,
      START_BACKEND_REQ(double)             // with type double.  Only one type is permitted per BACKEND_REQ per FUNCTION.

      //BACKEND_OPTION(LibFirst, 1.2)       // Specify that backend LibFirst v1.2 is permitted to provide the doAll_capability
      BACKEND_OPTION(LibFirst)              // Omit version info to specify that any version of LibFirst can provide the doAll_capability.

      BACKEND_CONDITIONAL_DEP(LibFirst, 1.2, dog, std::string) // Add an additional dependency only if doAll_capability comes from LibFirst v1.2    
      //BACKEND_CONDITIONAL_DEP(LibFirst, dog, std::string)    // Add an additional dependency if doAll_capability comes from any LibFirst
      //BACKEND_CONDITIONAL_DEP(LibSecond, dog, std::string)     // Add an additional dependency if doAll_capability comes from any LibSecond

      BACKEND_OPTION(LibThird)              // Specify that any version of LibThird is also a viable provider of doAll_capability
                                            // If you omit BACKEND_OPTION statements entirely, all backends are considered viable.
      #undef BACKEND_REQ

    #undef FUNCTION

  #undef CAPABILITY


  #define CAPABILITY dog
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

