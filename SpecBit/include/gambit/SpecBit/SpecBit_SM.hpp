//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Rollcall declarations for module functions
///  contained in SpecBit_SM.cpp
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///
///  \author Ben Farmer
///          (benjamin.farmer@fysik.su.se)
///    \date 2014 Sep - Dec, 2015 Jan - Mar
///  
///  *********************************************

#ifndef __SpecBit_SM_hpp__
#define __SpecBit_SM_hpp__

  #define CAPABILITY qedqcd_subspectrum
  START_CAPABILITY                          

    // Create QedQcdWrapper version of Spectrum* from SMInputs structs
    #define FUNCTION get_QedQcd_spectrum
    START_FUNCTION(const SubSpectrum*)
    DEPENDENCY(SMINPUTS, SMInputs)
    #undef FUNCTION

  #undef CAPABILITY

  // Spectrum object for Standard Model information
  #define CAPABILITY SM_spectrum
  START_CAPABILITY

    // Create Spectrum object from SMInputs structs and SM Higgs parameters, 
    #define FUNCTION get_SM_spectrum
    START_FUNCTION(const Spectrum*)
    ALLOW_MODELS(StandardModel_Higgs)
    DEPENDENCY(SMINPUTS, SMInputs)
    #undef FUNCTION

  #undef CAPABILITY


#endif

