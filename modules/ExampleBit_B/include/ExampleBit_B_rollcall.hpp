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
///  Don't put typedefs or other type definitions
///  in this file; see 
///  Core/include/types_rollcall.hpp for further
///  instructions on how to add new types.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Pat Scott
///  \date 2012 Nov  
///  \date 2013 Jan, Feb, April, May
///
///  \author Anders Kvellestad
///          (anders.kvellestad@fys.uio.no)
///  \date 2013 Nov
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

#define MODULE ExampleBit_B
START_MODULE

  #define CAPABILITY PointInit
  START_CAPABILITY
    #define FUNCTION PointInit_Default
      START_FUNCTION(void)
    #undef FUNCTION
  #undef CAPABILITY
 
  #define CAPABILITY xsection               // Observable: cross-section for some hypothetical process
  START_CAPABILITY

    #define FUNCTION xsection               // Name of specific function providing the observable
    START_FUNCTION(double)                  // Function calculates a double precision variable
    ALLOW_MODELS(CMSSM_demo,NormalDist)
    #undef FUNCTION

  #undef CAPABILITY


  #define CAPABILITY charge                 // Observable: charge of some particle
  START_CAPABILITY

    #define FUNCTION exampleCharge          // Name of specific function providing the observable
    START_FUNCTION(int)                     // Function calculates an integer variable
    ALLOW_MODEL(NormalDist)
    ALLOW_MODELS(MSSM_demo, TWOHDM, UED)       // Function is only allowed to be used with the MSSM, 2HDM, UED and their descendents
    #undef FUNCTION

  #undef CAPABILITY


  #define CAPABILITY nevents_postcuts       // Observable: number of events for process after cuts 
  START_CAPABILITY
  //LATEX_LABEL($n_{\rm events, cut}$)      // Specify the LaTeX label of this quantity

    #define FUNCTION nevents_postcuts       // Name of specific function providing the observable
    START_FUNCTION(int)                     // Function calculates an integer variable                  
    DEPENDENCY(nevents, double)             // Dependency: post-cut events needs pre-cut events
    DEPENDENCY(function_pointer, fptr)      // Dependency: some function pointer
    
    BACKEND_REQ(awesomeness, (lib123), double, (int))
    BACKEND_REQ(refex, (), double, (double&))
    BACKEND_REQ(refex2, (), void, (double&, double))
    BACKEND_REQ(runMe, (), void, (double (*)(int&), int&))
    BACKEND_REQ(SomeInt, (model_dependent_reqs, libfirst1_only), int)
    BACKEND_REQ(someFunction, (libfirst1_only), void, ())

    ACTIVATE_BACKEND_REQ_FOR_MODELS( (CMSSM_demo, UED), (model_dependent_reqs) )
    BACKEND_OPTION( (LibFirst, 1.0), (libfirst1_only, lib123) )
    BACKEND_OPTION( (LibSecond), (lib123) )
    BACKEND_OPTION( (LibThird, 1.2, 1.3 , 1.5), (lib123) )

      //#define BACKEND_REQ_deprecated awesomeness       // awesomeness must be obtained from an external (backend) code, with
      //START_BACKEND_REQ_deprecated(double)             // type double.  Only one type is permitted per BACKEND_REQ per FUNCTION.
      //BACKEND_OPTION_deprecated(LibFirst, 1.0)         // Specify that backend LibFirst v1.0 is permitted to provide the awesomeness.
      //BACKEND_OPTION_deprecated(LibSecond)             // Omit version info to specify that any version of LibSecond can provide awesomeness.
      //BACKEND_OPTION_deprecated(LibThird,1.2,1.3 , 1.5)// Specify that v1.2/1.3/1.5 of LibThird are also a viable providers of awesomeness
      //#undef BACKEND_REQ_deprecated                    // If there are no BACKEND_OPTION_deprecated statements, all backends are considered viable.
      
      //#define BACKEND_REQ_deprecated SomeInt           // Demonstrating a new macro flag 'VAR/FUNC' for specifying whether the requirement
      //START_BACKEND_REQ_deprecated(int, VAR)           // is on a backend variable or a backend function. A backend function is assumed if no flag is given. 
      //BACKEND_OPTION_deprecated(LibFirst)              // 
      //ACTIVATE_FOR_MODEL(MSSM_demo)         // Demonstrating how backend requirements can be made conditional on one
      //ACTIVATE_FOR_MODELS(CMSSM_demo, UED)  // or more models.  Only one ACTIVATE_FOR_MODELS statement is allowed per BACKEND_REQ or CONDITIONAL_DEPENDENCY.
      //#undef BACKEND_REQ_deprecated

      //#define BACKEND_REQ_deprecated someFunction      // (This backend function is used to test that the above backend variable works.)
      //START_BACKEND_REQ_deprecated(void, FUNC)
      //BACKEND_OPTION_deprecated(LibFirst)
      //#undef BACKEND_REQ_deprecated

    #define CONDITIONAL_DEPENDENCY id     // A dependency that only counts under certain conditions (must come after all BACKEND_REQs)
    START_CONDITIONAL_DEPENDENCY(std::string)              // Type of the dependency; one type permitted per CONDITIONAL_DEPENDENCY.
    ACTIVATE_FOR_BACKEND(awesomeness, LibFirst, 1.1, 1.2)  // Dependency counts if awesomeness comes from LibFirst v1.0 or 1.2 
    ACTIVATE_FOR_BACKEND(awesomeness, LibThird)            // Dependency counts when any version of LibThird is used for awesomeness
    ACTIVATE_FOR_MODEL(MSSM_demo)                          // Dependency counts when scanning the MSSM or one of its sub-models
    #undef CONDITIONAL_DEPENDENCY

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

  #define CAPABILITY test_vector
  START_CAPABILITY
    #define FUNCTION exampleVec             // Observable: test vector of doubles
    START_FUNCTION(std::vector<double>)     // Function calculates a vector of doubles
    #undef FUNCTION
  #undef CAPABILITY


  // Some likelihood of type double that depends on postcuts
  #define CAPABILITY lnL_ExampleBitB
  START_CAPABILITY
    #define FUNCTION lnL_ExampleBitB
    START_FUNCTION(double)
    DEPENDENCY(nevents_postcuts, int)
    #undef FUNCTION
  #undef CAPABILITY


#undef MODULE

#endif // defined(__ExampleBit_B_rollcall_hpp__)

