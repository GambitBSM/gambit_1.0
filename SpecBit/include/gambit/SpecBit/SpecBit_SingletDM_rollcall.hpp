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
///
///  \author James McKay
///          (j.mckay14@imperial.ac.uk)
///  \date 2016 Mar
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

    #define FUNCTION get_SingletDM_spectrum_pole
    START_FUNCTION(const Spectrum*)
    DEPENDENCY(SMINPUTS, SMInputs)
    ALLOW_MODEL_DEPENDENCE(StandardModel_Higgs_running, SingletDM_running)
    MODEL_GROUP(higgs_running,   (StandardModel_Higgs_running))
    MODEL_GROUP(singlet_running, (SingletDM_running))
    ALLOW_MODEL_COMBINATION(higgs_running, singlet_running)
    #undef FUNCTION

    #define FUNCTION get_SingletDMZ3_spectrum
    START_FUNCTION(const Spectrum*)
    DEPENDENCY(SMINPUTS, SMInputs)
    ALLOW_MODEL_DEPENDENCE(StandardModel_Higgs_running, SingletDMZ3)
    MODEL_GROUP(higgs,   (StandardModel_Higgs_running))
    MODEL_GROUP(singlet, (SingletDMZ3))
    ALLOW_MODEL_COMBINATION(higgs, singlet)
    #undef FUNCTION

  #undef CAPABILITY

  #define CAPABILITY print_SingletDM_spectrum
  START_CAPABILITY
    // ============================== 
    // Convert spectrum into a standard map so that it can be printed
    #define FUNCTION get_SingletDM_spectrum_as_map 
    START_FUNCTION(map_str_dbl) // Just a string to double map. Can't have commas in macro input
    DEPENDENCY(SingletDM_spectrum, const Spectrum*)
    #undef FUNCTION    
  #undef CAPABILITY



  #define CAPABILITY check_perturb
  START_CAPABILITY

    #define FUNCTION check_perturb_SingletDM
    START_FUNCTION(double)
    DEPENDENCY(SMINPUTS, SMInputs)
    //DEPENDENCY(SingletDM_spectrum,const Spectrum*)
    ALLOW_MODEL_DEPENDENCE(StandardModel_Higgs_running, SingletDM_running)
    MODEL_GROUP(higgs,   (StandardModel_Higgs_running))
    MODEL_GROUP(singlet, (SingletDM_running))
    ALLOW_MODEL_COMBINATION(higgs, singlet)
    #undef FUNCTION

    #define FUNCTION check_perturb_SingletDMZ3
    START_FUNCTION(double)
    DEPENDENCY(SMINPUTS, SMInputs)
    ALLOW_MODEL_DEPENDENCE(StandardModel_Higgs_running,SingletDMZ3)
    MODEL_GROUP(higgs,   (StandardModel_Higgs_running))
    MODEL_GROUP(singlet, (SingletDMZ3))
    ALLOW_MODEL_COMBINATION(higgs, singlet)
    #undef FUNCTION

    #undef FUNCTION

  #undef CAPABILITY



#endif

