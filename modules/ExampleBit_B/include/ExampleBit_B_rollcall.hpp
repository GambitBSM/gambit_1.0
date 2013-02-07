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

  #define FUNCTION xsection                // Observable: cross-section for some hypothetical process
   START_FUNCTION(double)                  // Function calculates a double precision variable
  #undef FUNCTION

  #define FUNCTION nevents_postcuts        // Observable: number of events for process after cuts 
   START_FUNCTION(int)                     // Function calculates an integer variable                  
   DEPENDENCY(nevents, double)             // Dependency: post-cut events needs pre-cut events        
  #undef FUNCTION
 
  #define FUNCTION authors_dogs_name       // Observable: name of the author of ExampleBitB's dog    
   START_FUNCTION(std::string)                
  #undef FUNCTION

  #define FUNCTION nevents                 // Observable: num. events, defined as integer just to annoy ExampleBit_A
   START_FUNCTION(int)                     // Function calculates an integer variable
   //LATEX_LABEL($n_{\rm events}$)         // Might want to later allow specification of LaTeX labels, etc like this
   //VIABLE_MODEL(CMSSM)	           // 
  #undef FUNCTION

#undef MODULE


#endif /* defined(__ExampleBit_B_rollcall_hpp__) */

