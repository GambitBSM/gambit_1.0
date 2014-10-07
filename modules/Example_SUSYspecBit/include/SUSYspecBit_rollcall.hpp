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

#define MODULE SUSYspecBit
START_MODULE
 
  #define CAPABILITY PointInit
  START_CAPABILITY
    #define FUNCTION PointInit_Default
    START_FUNCTION(void,INIT_FUNCTION)      
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
 

#undef MODULE

#endif /* defined(__SUSYspecBit_rollcall_hpp__) */

