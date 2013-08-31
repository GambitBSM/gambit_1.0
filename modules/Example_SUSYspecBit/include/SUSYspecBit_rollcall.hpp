//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Rollcall header for module SUSYspecBit.
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
///  \author Ben Farmer 
///          (ben.farmer@gmail.com)
///    \date 2013 May 
///
///  *********************************************


#ifndef __SUSYspecBit_rollcall_hpp__
#define __SUSYspecBit_rollcall_hpp__

#include <common_return_types.hpp> // Contains definition of MSSMspecQ type.
#include <MSSM_classes.hpp> 

#define MODULE SUSYspecBit
START_MODULE
  
  #define CAPABILITY MSSMspectrum           // Observable: low-scale MSSM spectrum
  START_CAPABILITY

    #define FUNCTION genMSSMspec            // Name of specific function providing the observable
    START_FUNCTION(MSSMspecQ)               // Returns special MSSMspecQ object
    DEPENDENCY(SMparameters, SMpars)        // Dependency: needs SM parameters
    DEPENDENCY(MSSMsoftmasses, MSSMsoftmassesQ) // Dependency: needs MSSM soft masses
      #define BACKEND_REQ BEgenMSSMspectrum // BEgenMSSMspectrum must be obtained from an external (backend) code, with
      START_BACKEND_REQ(MSSMspecQ)          // type MSSMspecQ.  Only one type is permitted per BACKEND_REQ per FUNCTION.
      BACKEND_OPTION(fakeSoftSUSY, 1.0)     // Specify that backend fakeSoftSUSY v1.0 is permitted to provide the CMSSMspectrum.
      #undef BACKEND_REQ                    // If there are no BACKEND_OPTION statements, all backends are considered viable.
       
    #undef FUNCTION
    
    /* Not sure what will happen with this yet, since cannot specify model dependency. */
    #define FUNCTION CMSSMspec              // Name of specific function providing the observable
    START_FUNCTION(MSSMspecQ)               // Returns special MSSMspecQ object
    DEPENDENCY(SMparameters, SMpars)        // Dependency: needs SM parameters
    DEPENDENCY(CMSSMparameters, CMSSMpars)  // Dependency: needs CMSSM parameters
      #define BACKEND_REQ BECMSSMspectrum   // BECMSSMspectrum must be obtained from an external (backend) code, with
      START_BACKEND_REQ(MSSMspecQ)          // type MSSMspecQ.  Only one type is permitted per BACKEND_REQ per FUNCTION.
      BACKEND_OPTION(fakeSoftSUSY, 1.0)     // Specify that backend fakeSoftSUSY v1.0 is permitted to provide the CMSSMspectrum.
      #undef BACKEND_REQ                    // If there are no BACKEND_OPTION statements, all backends are considered viable.
       
    #undef FUNCTION
    
  #undef CAPABILITY
  
  // Temporary! SM parameters should be supplied elsewhere
  #define CAPABILITY SMparameters           // Observable: Standard Model parameters
  START_CAPABILITY
    #define FUNCTION setSMpars              // Name of specific function providing the observable
    START_FUNCTION(SMpars)                  // Returns special SMpars object  
    #undef FUNCTION
  #undef CAPABILITY
  
  // Temporary! CMSSM parameters should be supplied elsewhere
  #define CAPABILITY CMSSMparameters           // Observable: Standard Model parameters
  START_CAPABILITY
    #define FUNCTION setCMSSMpars              // Name of specific function providing the observable
    START_FUNCTION(CMSSMpars)                  // Returns special SMpars object  
    #undef FUNCTION
  #undef CAPABILITY
  
  // Temporary! General MSSM soft masses should be supplied elsewhere
  #define CAPABILITY MSSMsoftmasses           // Observable: Standard Model parameters
  START_CAPABILITY
    #define FUNCTION setsoftmasses              // Name of specific function providing the observable
    START_FUNCTION(MSSMsoftmassesQ)                  // Returns special SMpars object  
    #undef FUNCTION
  #undef CAPABILITY
  

#undef MODULE

#endif /* defined(__SUSYspecBit_rollcall_hpp__) */

