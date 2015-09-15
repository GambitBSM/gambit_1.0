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

  // Spectrum object for SingletDM model  (tree-level masses)
  #define CAPABILITY SingletDM_spectrum
  START_CAPABILITY                          

    // Create Spectrum object from SMInputs structs, SM Higgs parameters, 
    // and the SingletDM parameters
    #define FUNCTION get_SingletDM_spectrum
    START_FUNCTION(const Spectrum*)
    DEPENDENCY(SMINPUTS, SMInputs)
    ALLOW_MODEL_DEPENDENCE(StandardModel_Higgs, SingletDM)
    MODEL_GROUP(higgs,   (StandardModel_Higgs))
    MODEL_GROUP(singlet, (SingletDM))
    ALLOW_MODEL_COMBINATION(higgs, singlet)
    #undef FUNCTION

    // Spectrum object for SingletDM model (using flexiblesusy pole masses)

    // Create Spectrum object from SMInputs structs, SM Higgs parameters, 
    // and the SingletDM parameters
    #define FUNCTION get_SingletDM_spectrum_pole
    START_FUNCTION(const Spectrum*)
    DEPENDENCY(SMINPUTS, SMInputs)
    ALLOW_MODEL_DEPENDENCE(StandardModel_Higgs_running, SingletDM_running)
    MODEL_GROUP(higgs,   (StandardModel_Higgs_running))
    MODEL_GROUP(singlet, (SingletDM_running))
    ALLOW_MODEL_COMBINATION(higgs, singlet)
    #undef FUNCTION


  #undef CAPABILITY


// likelihood of vacuum decay (currently set up as an observable)

  #define CAPABILITY VS
    START_CAPABILITY
    #define FUNCTION VS_SSDM
    START_FUNCTION(double)
    DEPENDENCY(SMINPUTS, SMInputs)
    //DEPENDENCY(SingletDM_spectrum, Spectrum*)
    ALLOW_MODEL_DEPENDENCE(StandardModel_Higgs, SingletDM)
    MODEL_GROUP(higgs,   (StandardModel_Higgs))
    MODEL_GROUP(singlet, (SingletDM))
    ALLOW_MODEL_COMBINATION(higgs, singlet)
    #undef FUNCTION

  #undef CAPABILITY


#endif

