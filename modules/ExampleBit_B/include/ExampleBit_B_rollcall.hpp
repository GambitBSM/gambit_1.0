//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Rollcall header for module ExampleBit_B.
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
///  \date 2012 Nov  
///  \date 2013 Jan, Feb, April, May
///
///  *********************************************
///
/// \def MODULE
/// Specifies that this is the MODULE named ExampleBit_B.
///
/// \def CAPABILITY
/// Specifies that ExampleBit_B (this MODULE) is 
/// capable of providing the service CAPABILITY.  
/// Usually a CAPABILITY means that the MODULE can 
/// compute some physical or statistical quantity 
/// referred to by CAPABILITY.   
///
/// \def FUNCTION
/// Specifies that ExampleBit_B (this MODULE) contains
/// a function named FUNCTION that can execute the
/// commands required to provided the current CAPABILITY.
///
/// \def BACKEND_REQ
/// Specifies that the current FUNCTION in 
/// ExampleBit_B (this MODULE) requires BACKEND_REQ from
/// a backend code.  The requirement BACKEND_REQ corresponds
/// to a capability that a valid backend function 
/// is expected to report in its corresponding 
/// registration header file.
///
/// \def CONDITIONAL_DEPENDENCY
/// Specifies that the current FUNCTION in 
/// ExampleBit_B (this MODULE) has a CONDITIONAL_DEPENDENCY
/// that is only active under certain conditions.
/// These conditions may include:
///  - a specific backend is in use in order to fill
///    a certain BACKEND_REQ
///  - a certain model is under analysis 


#ifndef __ExampleBit_B_rollcall_hpp__
#define __ExampleBit_B_rollcall_hpp__

typedef double(*fptr)(int&);                // A typedef used later in this file; should normally be placed in Utils/include/util_classes.hpp or in local modulename/include/modulename_classes.hpp

#define MODULE ExampleBit_B
START_MODULE
 
  #define CAPABILITY xsection               // Observable: cross-section for some hypothetical process
  START_CAPABILITY

    #define FUNCTION xsection               // Name of specific function providing the observable
    START_FUNCTION(double)                  // Function calculates a double precision variable
    ALLOW_MODELS(CMSSM_I,NormalDist_I)
    #undef FUNCTION

  #undef CAPABILITY


  #define CAPABILITY charge                 // Observable: charge of some particle
  START_CAPABILITY

    #define FUNCTION exampleCharge          // Name of specific function providing the observable
    START_FUNCTION(int)                     // Function calculates an integer variable
    ALLOW_MODEL(NormalDist_I)
    ALLOW_MODELS(MSSM_I, TWOHDM, UED)       // Function is only allowed to be used with the MSSM, 2HDM, UED and their descendents
    #undef FUNCTION

  #undef CAPABILITY


  #define CAPABILITY nevents_postcuts       // Observable: number of events for process after cuts 
  START_CAPABILITY
  //LATEX_LABEL($n_{\rm events, cut}$)      // Specify the LaTeX label of this quantity

    #define FUNCTION nevents_postcuts       // Name of specific function providing the observable
    START_FUNCTION(int)                     // Function calculates an integer variable                  
    DEPENDENCY(nevents, double)             // Dependency: post-cut events needs pre-cut events
    DEPENDENCY(function_pointer, fptr)      // Dependency: some function pointer
    DEPENDENCY(M1, double)                  // Dependency: some model parameter called M1
    
      #define BACKEND_REQ awesomeness       // awesomeness must be obtained from an external (backend) code, with
      START_BACKEND_REQ(double)             // type double.  Only one type is permitted per BACKEND_REQ per FUNCTION.
      BACKEND_OPTION(LibFirst, 1.0)         // Specify that backend LibFirst v1.0 is permitted to provide the awesomeness.
      BACKEND_OPTION(LibSecond)             // Omit version info to specify that any version of LibSecond can provide awesomeness.
      BACKEND_OPTION(LibThird,1.2,1.3 , 1.5)// Specify that v1.2/1.3/1.5 of LibThird are also a viable providers of awesomeness
      #undef BACKEND_REQ                    // If there are no BACKEND_OPTION statements, all backends are considered viable.
       
      #define BACKEND_REQ runMe             // runMe subroutine needs to come from a backend
      START_BACKEND_REQ(void)               
      #undef BACKEND_REQ

      #define CONDITIONAL_DEPENDENCY id     // A dependency that only counts under certain conditions (must come after all BACKEND_REQs)
      START_CONDITIONAL_DEPENDENCY(std::string)              // Type of the dependency; one type permitted per CONDITIONAL_DEPENDENCY.
      ACTIVATE_FOR_BACKEND(awesomeness, LibFirst, 1.1, 1.2)  // Dependency counts if awesomeness comes from LibFirst v1.0 or 1.2 
      ACTIVATE_FOR_BACKEND(awesomeness, LibThird)            // Dependency counts when any version of LibThird is used for awesomeness
      ACTIVATE_FOR_MODEL(MSSM_I)                             // Dependency counts when scanning the MSSM or one of its sub-models
      #undef CONDITIONAL_DEPENDENCY

      #define BACKEND_REQ refex
      START_BACKEND_REQ(double)             // A backend requirement added for the purposes of testing the ability to pass parameters
      #undef BACKEND_REQ                    // to backends both by reference and by value.

      #define BACKEND_REQ refex2
      START_BACKEND_REQ(void)               // A backend requirement added for the purposes of testing the ability to pass parameters
      #undef BACKEND_REQ                    // to backends both by reference and by value.

    #undef FUNCTION

  #undef CAPABILITY


  #define CAPABILITY id
  START_CAPABILITY

    #define FUNCTION identity               // Observable: name of a particle    
    START_FUNCTION(std::string)                
    #undef FUNCTION

  #undef CAPABILITY


  #define CAPABILITY nevents
  START_CAPABILITY

    #define FUNCTION nevents                // Observable: num. events, defined as integer to confuse the dep resolver
    START_FUNCTION(int)                     // Function calculates an integer variable
    #undef FUNCTION

  #undef CAPABILITY


  // Some likelihood of type double that depends on postcuts
  #define CAPABILITY lnL_ExampleBitB
    #define FUNCTION lnL_ExampleBitB
    START_FUNCTION(double)
    DEPENDENCY(nevents_postcuts, int)
    #undef FUNCTION
  #undef CAPABILITY


#undef MODULE

#endif // defined(__ExampleBit_B_rollcall_hpp__)

