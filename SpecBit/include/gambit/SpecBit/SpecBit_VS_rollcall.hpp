//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Rollcall declarations for module functions
///  contained in SpecBit_VS.cpp
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///
///  \author James McKay
///          (j.mckay14@imperial.ac.uk)
///    \date Nov 2015
///
///
///  *********************************************

#ifndef __SpecBit_SingletDMZ3_hpp__
#define __SpecBit_SingletDMZ3_hpp__



  #define CAPABILITY vacuum_stability
  START_CAPABILITY

    #define FUNCTION find_min_lambda
    START_FUNCTION(dbl_dbl_bool)
    DEPENDENCY(SMINPUTS, SMInputs)
    //DEPENDENCY(SingletDM_pole_mh, double)
    DEPENDENCY(SingletDM_spectrum, Spectrum)
    ALLOW_MODEL_DEPENDENCE(StandardModel_Higgs_running, SingletDM_running,SingletDMZ3)
    MODEL_GROUP(higgs,   (StandardModel_Higgs_running))
    MODEL_GROUP(singlet, (SingletDM_running,SingletDMZ3))
    ALLOW_MODEL_COMBINATION(higgs, singlet)
    #undef FUNCTION



  #undef CAPABILITY


  #define CAPABILITY VS_likelihood
  START_CAPABILITY

    #define FUNCTION get_likelihood
    START_FUNCTION(double)
    DEPENDENCY(vacuum_stability, dbl_dbl_bool)
    #undef FUNCTION

  #undef CAPABILITY


  #define CAPABILITY expected_lifetime
    START_CAPABILITY
    #define FUNCTION get_expected_lifetime
    START_FUNCTION(double)
    DEPENDENCY(vacuum_stability, dbl_dbl_bool)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY check_perturb_min_lambda
    START_CAPABILITY
    #define FUNCTION get_check_perturb_min_lambda
    START_FUNCTION(double)
    DEPENDENCY(vacuum_stability, dbl_dbl_bool)
    #undef FUNCTION
  #undef CAPABILITY


#endif

