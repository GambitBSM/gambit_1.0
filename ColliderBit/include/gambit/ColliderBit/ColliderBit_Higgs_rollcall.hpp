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

    // MSSM Higgs model parameters
    #define FUNCTION MSSMHiggs_ModelParameters_alt
    START_FUNCTION(hb_ModelParameters)
    DEPENDENCY(SMINPUTS, SMInputs)
    DEPENDENCY(MSSM_spectrum, Spectrum)
    DEPENDENCY(higgs_couplings, HiggsCouplingsTable)
    ALLOW_MODELS(MSSM63atQ, MSSM63atMGUT)
    DEPENDENCY(FH_HiggsProd, fh_HiggsProd) //temp
    #undef FUNCTION

  #undef CAPABILITY


  #define CAPABILITY higgs_couplings
  START_CAPABILITY

    #define FUNCTION MSSM_higgs_couplings
    START_FUNCTION(HiggsCouplingsTable)
    DEPENDENCY(Reference_SM_Higgs_decay_rates, DecayTable::Entry)
    DEPENDENCY(Reference_SM_h02_decay_rates, DecayTable::Entry)
    DEPENDENCY(Reference_SM_A0_decay_rates, DecayTable::Entry)
    DEPENDENCY(Higgs_decay_rates, DecayTable::Entry)
    DEPENDENCY(h02_decay_rates, DecayTable::Entry)
    DEPENDENCY(A0_decay_rates, DecayTable::Entry)
    DEPENDENCY(H_plus_decay_rates, DecayTable::Entry)
    DEPENDENCY(t_decay_rates, DecayTable::Entry)
    ALLOW_MODELS(MSSM63atQ, MSSM63atMGUT)
    DEPENDENCY(FH_HiggsProd, fh_HiggsProd) //temp
    #undef FUNCTION

    #undef FUNCTION

  #undef CAPABILITY


  // Get a LEP Higgs chisq
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


  // Get an LHC Higgs chisq
  #define CAPABILITY LHC_Higgs_LogLike
  START_CAPABILITY

    #define FUNCTION calc_HS_LHC_LogLike
    START_FUNCTION(double)
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

  #undef CAPABILITY


#endif /* defined __ColliderBit_Higgs_rollcall_hpp__ */
