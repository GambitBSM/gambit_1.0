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

#include "SLHA_types.hpp"

#define MODULE SUSYspecBit
START_MODULE
 
  #define CAPABILITY PointInit
  START_CAPABILITY
    #define FUNCTION PointInit_Default
    START_INI_FUNCTION                      // Same as both START_FUNCTION(void) and START_FUNCTION(void, INIT_FUNCTION)
    #undef FUNCTION                         // Dependencies are not permitted, nor are loop manager requirements.
  #undef CAPABILITY
 
  #define CAPABILITY testSLHA               // Test "observable", for running Pythia8 SLHA reader
  START_CAPABILITY
    #define FUNCTION testSLHA               // Name of specific function providing the observable
    START_FUNCTION(int)                     // Returns int 
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY NMSSMspectrum          // Retrieves physical NMSSM spectrum
  START_CAPABILITY

    #define FUNCTION getNMSSMspectrum             
    START_FUNCTION(eaSLHA)                     
    #undef FUNCTION

    #define FUNCTION getNMSSMspectrum_Py8             
    START_FUNCTION(Py8SLHA)                     
    #undef FUNCTION

  #undef CAPABILITY

  #define CAPABILITY MSSMspectrum           // Retrieves physical MSSM spectrum
  START_CAPABILITY

    #define FUNCTION getMSSMspectrum             
    START_FUNCTION(eaSLHA)                     
    #undef FUNCTION

    #define FUNCTION getMSSMspectrum_Py8             
    START_FUNCTION(Py8SLHA)                     
    ALLOW_MODELS(CMSSM_demo,MSSM_demo,MSSM)
    #undef FUNCTION
 
  #undef CAPABILITY


  #define CAPABILITY MSSMslha_testLogL      // Dummy function for testing the MSSMspectrum function
  START_CAPABILITY

    #define FUNCTION MSSMtestLogL_Py8             
    START_FUNCTION(double)                     
    DEPENDENCY(MSSMspectrum, Py8SLHA)
    #undef FUNCTION

    #define FUNCTION MSSMtestLogL             
    START_FUNCTION(double)                     
    DEPENDENCY(MSSMspectrum, eaSLHA)
    #undef FUNCTION

  #undef CAPABILITY


  // Old stuff...

  // #define CAPABILITY MSSMspectrum           // Observable: low-scale MSSM spectrum
  // START_CAPABILITY

  //   #define FUNCTION genMSSMspec            // Name of specific function providing the observable
  //   START_FUNCTION(MSSMspecQ)               // Returns special MSSMspecQ object
  //   DEPENDENCY(SMparameters, SMpars)        // Dependency: needs SM parameters
  //   DEPENDENCY(MSSMsoftmasses, MSSMsoftmassesQ) // Dependency: needs MSSM soft masses
  //     #define BACKEND_REQ_deprecated BEgenMSSMspectrum // BEgenMSSMspectrum must be obtained from an external (backend) code, with
  //     START_BACKEND_REQ_deprecated(MSSMspecQ)          // type MSSMspecQ.  Only one type is permitted per BACKEND_REQ per FUNCTION.
  //     BACKEND_OPTION(FakeSoftSUSY, 1.0)     // Specify that backend FakeSoftSUSY v1.0 is permitted to provide the CMSSMspectrum.
  //     #undef BACKEND_REQ_deprecated                    // If there are no BACKEND_OPTION statements, all backends are considered viable.
  //      
  //   #undef FUNCTION
  //   
  //   /* Not sure what will happen with this yet, since cannot specify model dependency. */
  //   #define FUNCTION CMSSMspec              // Name of specific function providing the observable
  //   START_FUNCTION(MSSMspecQ)               // Returns special MSSMspecQ object
  //   DEPENDENCY(SMparameters, SMpars)        // Dependency: needs SM parameters
  //   DEPENDENCY(CMSSMparameters, CMSSMpars)  // Dependency: needs CMSSM parameters
  //     #define BACKEND_REQ_deprecated BECMSSMspectrum   // BECMSSMspectrum must be obtained from an external (backend) code, with
  //     START_BACKEND_REQ_deprecated(MSSMspecQ)          // type MSSMspecQ.  Only one type is permitted per BACKEND_REQ per FUNCTION.
  //     BACKEND_OPTION(FakeSoftSUSY, 1.0)     // Specify that backend FakeSoftSUSY v1.0 is permitted to provide the CMSSMspectrum.
  //     #undef BACKEND_REQ_deprecated                    // If there are no BACKEND_OPTION statements, all backends are considered viable.
  //      
  //   #undef FUNCTION
  //   
  // #undef CAPABILITY
  // 
  // // Temporary! SM parameters should be supplied elsewhere
  // #define CAPABILITY SMparameters           // Observable: Standard Model parameters
  // START_CAPABILITY
  //   #define FUNCTION setSMpars              // Name of specific function providing the observable
  //   START_FUNCTION(SMpars)                  // Returns special SMpars object  
  //   #undef FUNCTION
  // #undef CAPABILITY
  // 
  // // Temporary! CMSSM parameters should be supplied elsewhere
  // #define CAPABILITY CMSSMparameters           // Observable: Standard Model parameters
  // START_CAPABILITY
  //   #define FUNCTION setCMSSMpars              // Name of specific function providing the observable
  //   START_FUNCTION(CMSSMpars)                  // Returns special SMpars object  
  //   #undef FUNCTION
  // #undef CAPABILITY
  // 
  // // Temporary! General MSSM soft masses should be supplied elsewhere
  // #define CAPABILITY MSSMsoftmasses           // Observable: Standard Model parameters
  // START_CAPABILITY
  //   #define FUNCTION setsoftmasses              // Name of specific function providing the observable
  //   START_FUNCTION(MSSMsoftmassesQ)                  // Returns special SMpars object  
  //   #undef FUNCTION
  // #undef CAPABILITY
  

#undef MODULE

#endif /* defined(__SUSYspecBit_rollcall_hpp__) */

