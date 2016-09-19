//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Rollcall header for ColliderBit module.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///
///  \author Abram Krislock
///          (a.m.b.krislock@fys.uio.no)
///
///  \author Aldo Saavedra
///
///  \author Christopher Rogan
///          (christophersrogan@gmail.com)
///  \date 2015 Apr
///
///  \author Pat Scott
///          (p.scott@imperial.ac.uk)
///  \date 2015 Jul
///
///  *********************************************

#ifndef __ColliderBit_Higgs_rollcall_hpp__
#define __ColliderBit_Higgs_rollcall_hpp__

#include <string>

#include "gambit/cmake/cmake_variables.hpp"
#include "gambit/Elements/shared_types.hpp"
#include "gambit/ColliderBit/ColliderBit_types.hpp"
#include "gambit/ColliderBit/ColliderBit_macros.hpp"



  ///////////// Higgs physics /////////////////////


  // FeynHiggs Higgs production cross-sections
  #define CAPABILITY FH_HiggsProd            
  START_CAPABILITY
    #define FUNCTION FH_HiggsProd
    START_FUNCTION(fh_HiggsProd)
    BACKEND_REQ(FHHiggsProd, (libfeynhiggs), void, (int&, fh_real&, Farray< fh_real,1,52>&))
    BACKEND_OPTION( (FeynHiggs), (libfeynhiggs) )
    ALLOW_MODELS(MSSM63atQ, MSSM63atMGUT)
    #undef FUNCTION
  #undef CAPABILITY


  // HiggsBounds input model parameters as effective couplings
  #define CAPABILITY HB_ModelParameters_effC
  START_CAPABILITY
  
    // SM-like Higgs model parameters, for BSM models with no additional Higgs particles.
    #define FUNCTION SMlikeHiggs_HS_ModelParameters_effC
    START_FUNCTION(hb_ModelParameters_effC)
    ALLOW_MODELS(SingletDM, SingletDMZ3)
    MODEL_CONDITIONAL_DEPENDENCY(SingletDM_spectrum, /*TAG*/ Spectrum, SingletDM, SingletDMZ3)
    DEPENDENCY(Higgs_decay_rates, DecayTable::Entry)
    DEPENDENCY(Higgslike_ModelParameters, Gambit::ColliderBit::gambit_Higgs_ModelParameters)
    #undef FUNCTION
   #undef CAPABILITY


  // HiggsBounds input model parameters
  #define CAPABILITY HB_ModelParameters
  START_CAPABILITY

    // SM Higgs model parameters
    #define FUNCTION SMHiggs_ModelParameters  
    START_FUNCTION(hb_ModelParameters)
    DEPENDENCY(SM_spectrum, Spectrum)
    DEPENDENCY(Higgs_decay_rates, DecayTable::Entry)
    #undef FUNCTION

    // SM-like Higgs model parameters, for BSM models with no additional Higgs particles.
    #define FUNCTION SMlikeHiggs_ModelParameters
    START_FUNCTION(hb_ModelParameters)
    ALLOW_MODELS(SingletDM, SingletDMZ3)
    MODEL_CONDITIONAL_DEPENDENCY(SingletDM_spectrum, Spectrum, SingletDM, SingletDMZ3)
    DEPENDENCY(Higgs_decay_rates, DecayTable::Entry)
    #undef FUNCTION

    // MSSM Higgs model parameters
    #define FUNCTION MSSMHiggs_ModelParameters
    START_FUNCTION(hb_ModelParameters)
    DEPENDENCY(SMINPUTS, SMInputs)
    DEPENDENCY(MSSM_spectrum, Spectrum)
    DEPENDENCY(decay_rates, DecayTable)
    DEPENDENCY(Higgs_Couplings, fh_Couplings) // temporary dependency 
    DEPENDENCY(FH_HiggsProd, fh_HiggsProd)    // temporary dependency 
    ALLOW_MODELS(MSSM63atQ, MSSM63atMGUT)
    #undef FUNCTION

  #undef CAPABILITY 


  // Lilith input model parameters
  #define CAPABILITY Lilith_ModelParameters
  START_CAPABILITY

    // SM Higgs model parameters
    #define FUNCTION SMHiggs_Lilith_ModelParameters
    START_FUNCTION(lilith_ModelParameters)
    DEPENDENCY(SMINPUTS, SMInputs)
    DEPENDENCY(SM_spectrum, /*TAG*/ Spectrum)
    DEPENDENCY(Higgs_decay_rates, DecayTable::Entry)
    DEPENDENCY(Higgslike_ModelParameters, Gambit::ColliderBit::gambit_Higgs_ModelParameters)
    #undef FUNCTION

    #define FUNCTION SMlikeHiggs_Lilith_ModelParameters
    START_FUNCTION(lilith_ModelParameters)
    ALLOW_MODELS(SingletDM, SingletDMZ3)
    MODEL_CONDITIONAL_DEPENDENCY(SingletDM_spectrum, /*TAG*/ Spectrum, SingletDM, SingletDMZ3)
    DEPENDENCY(Higgs_decay_rates, DecayTable::Entry)
    DEPENDENCY(Higgslike_ModelParameters, Gambit::ColliderBit::gambit_Higgs_ModelParameters)
    #undef FUNCTION

  #undef CAPABILITY

  
  #define CAPABILITY Higgslike_ModelParameters
    START_CAPABILITY
     #define FUNCTION SMHiggs_gambit_ModelParameters
     START_FUNCTION(Gambit::ColliderBit::gambit_Higgs_ModelParameters)
     DEPENDENCY(SMINPUTS, SMInputs)
     DEPENDENCY(SM_spectrum, /*TAG*/ Spectrum)
     DEPENDENCY(Higgs_decay_rates, DecayTable::Entry)
     #undef FUNCTION
     #define FUNCTION SMlikeHiggs_gambit_ModelParameters
     START_FUNCTION(Gambit::ColliderBit::gambit_Higgs_ModelParameters)
     ALLOW_MODELS(SingletDM, SingletDMZ3)
     MODEL_CONDITIONAL_DEPENDENCY(SingletDM_spectrum, /*TAG*/ Spectrum, SingletDM, SingletDMZ3)
     DEPENDENCY(Higgs_decay_rates, DecayTable::Entry)
     #undef FUNCTION

  #undef CAPABILITY


  // Get a LEP chisq from HiggsBounds
  #define CAPABILITY LEP_Higgs_LogLike
  START_CAPABILITY
    #define FUNCTION calc_HB_LEP_LogLike
    START_FUNCTION(double)
    DEPENDENCY(HB_ModelParameters, hb_ModelParameters)
       BACKEND_REQ(HiggsBounds_neutral_input_part, (libhiggsbounds), void, 
       (double*, double*, int*, double*, double*, double*, Farray<double, 1,3, 1,3>&,
        double*, double*, double*, double*, double*, double*, double*,
        double*, double*, double*, double*, double*, double*, double*,
        double*, double*, double*, double*, double*, double*, double*,
        double*, double*, double*, double*, double*, double*, double*,
        double*, double*, Farray<double, 1,3, 1,3>&))
       BACKEND_REQ(HiggsBounds_charged_input, (libhiggsbounds), void,
       (double*, double*, double*, double*,
        double*, double*, double*, double*))
       BACKEND_REQ(HiggsBounds_set_mass_uncertainties, (libhiggsbounds), void, (double*, double*))
       BACKEND_REQ(run_HiggsBounds_classic, (libhiggsbounds), void, (int&, int&, double&, int&))            
       BACKEND_REQ(HB_calc_stats, (libhiggsbounds), void, (double&, double&, double&, int&))
       BACKEND_OPTION( (HiggsBounds), (libhiggsbounds) )
    #undef FUNCTION
  #undef CAPABILITY


  #define CAPABILITY calc_HS_LHC_LogLike
    START_CAPABILITY
      #define FUNCTION calc_HS_LHC_LogLike
      START_FUNCTION(ddpair)
      DEPENDENCY(HB_ModelParameters, hb_ModelParameters)
         BACKEND_REQ(HiggsBounds_neutral_input_part_HS, (libhiggssignals), void, 
         (double*, double*, int*, double*, double*, double*, Farray<double, 1,3, 1,3>&,
          double*, double*, double*, double*, double*, double*, double*,
          double*, double*, double*, double*, double*, double*, double*,
          double*, double*, double*, double*, double*, double*, double*,
          double*, double*, double*, double*, double*, double*, double*,
          double*, double*, Farray<double, 1,3, 1,3>&))
        BACKEND_REQ(HiggsBounds_charged_input_HS, (libhiggssignals), void,
        (double*, double*, double*, double*,
         double*, double*, double*, double*))
        BACKEND_REQ(run_HiggsSignals, (libhiggssignals), void, (int&, double&, double&, double&, int&, double&))
        BACKEND_REQ(HiggsSignals_neutral_input_MassUncertainty, (libhiggssignals), void, (double*))
        BACKEND_REQ(setup_rate_uncertainties, (libhiggssignals), void, (double*, double*))
        BACKEND_OPTION( (HiggsSignals, 1.4), (libhiggssignals) )
     #undef FUNCTION
     #define FUNCTION calc_HS_LHC_LogLike_effC
      START_FUNCTION(ddpair)
      DEPENDENCY(HB_ModelParameters_effC, hb_ModelParameters_effC)
      BACKEND_REQ(HiggsBounds_neutral_input_effC_HS, (libhiggssignals), void,(double*, double*, double*,
      double*, double*, double*, double*, double*, double*, double*,
      double*, double*, double*, double*, double*, double*, double*, double*, double*, double*, Farray<double, 1,3, 1,3>&,
      double*, Farray<double, 1,3, 1,3>&))
      BACKEND_REQ(HiggsBounds_charged_input_HS, (libhiggssignals), void,(double*, double*, double*, double*,
      double*, double*, double*, double*))
      BACKEND_REQ(run_HiggsSignals, (libhiggssignals), void, (int&, double&, double&, double&, int&, double&))
      BACKEND_REQ(setup_rate_uncertainties, (libhiggssignals), void, (double*, double*))
      BACKEND_OPTION( (HiggsSignals, 1.4), (libhiggssignals) )
     #undef FUNCTION

  #undef CAPABILITY


  #define CAPABILITY calc_Lilith_LHC_LogLike
    START_CAPABILITY
     #define FUNCTION calc_Lilith_LHC_LogLike
      START_FUNCTION(double)
      DEPENDENCY(Lilith_ModelParameters, lilith_ModelParameters)
      ALLOW_MODEL_DEPENDENCE(StandardModel_Higgs)
//      MODEL_GROUP(higgs_running,   (StandardModel_Higgs_running))
//      MODEL_GROUP(singlet_running, (SingletDM_running))
        BACKEND_REQ(lilith_computelikelihood, (lilith), float, (PyObject*)) // use .so functions
        BACKEND_REQ(lilith_readuserinput, (lilith), PyObject*, (PyObject*, char*)) // use .so functions
        BACKEND_REQ(get_lilithcalc,(lilith),PyObject*,())
        BACKEND_REQ(internal_lilith_readuserinput,(lilith),PyObject*, (PyObject*,char*)) // internal functions
        BACKEND_REQ(internal_lilith_computelikelihood,(lilith),float, (PyObject*)) // internal functions
        BACKEND_OPTION( (Lilith, 1.1.3), (lilith) )
     #undef FUNCTION
  #undef CAPABILITY



  #define CAPABILITY calc_gambit_LHC_LogLike
    START_CAPABILITY
     #define FUNCTION calc_gambit_LHC_LogLike
      START_FUNCTION(double)
      DEPENDENCY(SMINPUTS, SMInputs)
      DEPENDENCY(SM_spectrum,  Spectrum)
      DEPENDENCY(Higgs_decay_rates, DecayTable::Entry)
      DEPENDENCY(Higgslike_ModelParameters, Gambit::ColliderBit::gambit_Higgs_ModelParameters)
      ALLOW_MODEL_DEPENDENCE(StandardModel_Higgs)
//      MODEL_GROUP(higgs_running,   (StandardModel_Higgs_running))
//      MODEL_GROUP(singlet_running, (SingletDM_running))
     #undef FUNCTION
  #undef CAPABILITY



  #define CAPABILITY LHC_Higgs_LogLike
    START_CAPABILITY
    #define FUNCTION HS_LHC_LogLike
      START_FUNCTION(double)
      DEPENDENCY(calc_HS_LHC_LogLike, ddpair)
    #undef FUNCTION
    #define FUNCTION Lilith_LHC_LogLike
      START_FUNCTION(double)
      DEPENDENCY(calc_Lilith_LHC_LogLike, double)
    #undef FUNCTION
    #define FUNCTION gambit_LHC_LogLike
      START_FUNCTION(double)
      DEPENDENCY(calc_gambit_LHC_LogLike, double)
    #undef FUNCTION
     #define FUNCTION combined_LHC_LogLike
      START_FUNCTION(double)
      ALLOW_MODEL_DEPENDENCE(StandardModel_Higgs)
      DEPENDENCY(calc_HS_LHC_LogLike, ddpair)
      DEPENDENCY(calc_Lilith_LHC_LogLike, double)
      DEPENDENCY(calc_gambit_LHC_LogLike, double)
     #undef FUNCTION
  #undef CAPABILITY






#endif /* defined __ColliderBit_rollcall_hpp__ */
