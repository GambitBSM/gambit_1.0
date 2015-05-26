//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Rollcall declarations for module functions
///  contained in SpecBit_SingletDM.cpp
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

#ifndef __SpecBit_SingletDM_hpp__
#define __SpecBit_SingletDM_hpp__

  // Spectrum object for SingletDM model
  #define CAPABILITY SingletDM_spectrum
  START_CAPABILITY                          

    // Create Spectrum object from SMInputs structs, SM Higgs parameters, 
    // and the SingletDM parameters
    #define FUNCTION get_SingletDM_spectrum
    START_FUNCTION(const Spectrum*)
    MODEL_GROUP(higgs,   (StandardModel_Higgs))
    MODEL_GROUP(singlet, (SingletDM))
    ALLOW_MODEL_COMBINATION(higgs, singlet)
    DEPENDENCY(SMINPUTS, SMInputs)
    #undef FUNCTION

  #undef CAPABILITY

#endif

