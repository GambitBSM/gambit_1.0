//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Rollcall header for DecayBit.
///
///  Compile-time registration of available 
///  observables and likelihoods for calculating 
///  particle decay rates and branching fractions,
///  along with their dependencies.
///
///  Don't put typedefs or other type definitions
///  in this file; see 
///  Core/include/types_rollcall.hpp for further
///  instructions on how to add new types.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Pat Scott 
///          (p.scott@imperial.ac.uk)
///  \date 2014 Aug
///  \author Csaba Balazs
///  \date 2015 Jan-May
///
///  *********************************************


#ifndef __DecayBit_rollcall_hpp__
#define __DecayBit_rollcall_hpp__

#include "DecayBit_types.hpp"

#define MODULE DecayBit
START_MODULE

  #define CAPABILITY t_decay_rates
  START_CAPABILITY

    #define FUNCTION t_decays
    START_FUNCTION(DecayTable::Entry)
    #undef FUNCTION

    #define FUNCTION FH_t_decays
    START_FUNCTION(DecayTable::Entry)
    DEPENDENCY(FH_Couplings, fh_Couplings)
    ALLOW_MODELS(MSSM78atQ, MSSM78atMGUT)
    #undef FUNCTION

  #undef CAPABILITY

  #define CAPABILITY Higgs_decay_rates
  START_CAPABILITY

    #define FUNCTION SM_Higgs_decays
    START_FUNCTION(DecayTable::Entry)
    //DEPENDENCY(SM_Spectrum, const Spectrum*)
    #undef FUNCTION

    #define FUNCTION MSSM_h0_1_decays
    START_FUNCTION(DecayTable::Entry)
    BACKEND_REQ(cb_widthhl_hdec, (sh_reqd), widthhl_hdec_type)
    BACKEND_REQ(cb_wisusy_hdec, (sh_reqd), wisusy_hdec_type)
    BACKEND_REQ(cb_wisfer_hdec, (sh_reqd), wisfer_hdec_type)
    BACKEND_OPTION( (SUSY_HIT), (sh_reqd) )
    ALLOW_MODELS(MSSM78atQ, MSSM78atMGUT)
    DEPENDENCY(MSSM_spectrum, const Spectrum*)
    // DEPENDENCY(SM_subspectrum, const SubSpectrum*)
    // DEPENDENCY(MSSM_subspectrum, const SubSpectrum*)
    #undef FUNCTION

    #define FUNCTION FH_MSSM_h0_1_decays
    START_FUNCTION(DecayTable::Entry)
    DEPENDENCY(FH_Couplings, fh_Couplings)
    ALLOW_MODELS(MSSM78atQ, MSSM78atMGUT)
    #undef FUNCTION

    #define FUNCTION SS_Higgs_decays
    START_FUNCTION(DecayTable::Entry)
    //DEPENDENCY(SS_Spectrum, const Spectrum*) 
    DEPENDENCY(Higgs_decay_rates, DecayTable::Entry)
    ALLOW_MODEL(SingletDM)
    #undef FUNCTION

  #undef CAPABILITY
  
  #define CAPABILITY h0_2_decay_rates
  START_CAPABILITY
  
    #define FUNCTION h0_2_decays
    START_FUNCTION(DecayTable::Entry)
    BACKEND_REQ(cb_widthhh_hdec, (sh_reqd), widthhh_hdec_type)
    BACKEND_REQ(cb_wisusy_hdec, (sh_reqd), wisusy_hdec_type)
    BACKEND_REQ(cb_wisfer_hdec, (sh_reqd), wisfer_hdec_type)
    BACKEND_OPTION( (SUSY_HIT), (sh_reqd) )
    ALLOW_MODELS(MSSM78atQ, MSSM78atMGUT)
    #undef FUNCTION

    #define FUNCTION FH_h0_2_decays
    START_FUNCTION(DecayTable::Entry)
    DEPENDENCY(FH_Couplings, fh_Couplings)
    ALLOW_MODELS(MSSM78atQ, MSSM78atMGUT)
    #undef FUNCTION

  #undef CAPABILITY
  
  #define CAPABILITY A0_decay_rates
  START_CAPABILITY

    #define FUNCTION A0_decays
    START_FUNCTION(DecayTable::Entry)
    BACKEND_REQ(cb_widtha_hdec, (sh_reqd), widtha_hdec_type)
    BACKEND_REQ(cb_wisusy_hdec, (sh_reqd), wisusy_hdec_type)
    BACKEND_OPTION( (SUSY_HIT), (sh_reqd) )
    ALLOW_MODELS(MSSM78atQ, MSSM78atMGUT)
    #undef FUNCTION

    #define FUNCTION FH_A0_decays
    START_FUNCTION(DecayTable::Entry)
    DEPENDENCY(FH_Couplings, fh_Couplings)
    ALLOW_MODELS(MSSM78atQ, MSSM78atMGUT)
    #undef FUNCTION
 
  #undef CAPABILITY

  #define CAPABILITY Hplus_decay_rates
  START_CAPABILITY

    #define FUNCTION Hplus_decays
    START_FUNCTION(DecayTable::Entry)
    BACKEND_REQ(cb_widthhc_hdec, (sh_reqd), widthhc_hdec_type)
    BACKEND_REQ(cb_wisusy_hdec, (sh_reqd), wisusy_hdec_type)
    BACKEND_REQ(cb_wisfer_hdec, (sh_reqd), wisfer_hdec_type)
    BACKEND_OPTION( (SUSY_HIT), (sh_reqd) )
    ALLOW_MODELS(MSSM78atQ, MSSM78atMGUT)
    #undef FUNCTION

    #define FUNCTION FH_Hplus_decays
    START_FUNCTION(DecayTable::Entry)
    DEPENDENCY(FH_Couplings, fh_Couplings)
    ALLOW_MODELS(MSSM78atQ, MSSM78atMGUT)
    #undef FUNCTION

  #undef CAPABILITY

  #define CAPABILITY gluino_decay_rates
  START_CAPABILITY

    #define FUNCTION gluino_decays
    START_FUNCTION(DecayTable::Entry)
    BACKEND_REQ(cb_sd_gluiwidth, (sh_reqd), sd_gluiwidth_type)
    BACKEND_REQ(cb_sd_glui2body, (sh_reqd), sd_glui2body_type)
    BACKEND_REQ(cb_sd_gluiloop, (sh_reqd), sd_gluiloop_type)
    BACKEND_REQ(cb_sd_glui3body, (sh_reqd), sd_glui3body_type)
    BACKEND_OPTION( (SUSY_HIT), (sh_reqd) )
    ALLOW_MODELS(MSSM78atQ, MSSM78atMGUT)
    #undef FUNCTION

  #undef CAPABILITY

  #define CAPABILITY stop_1_decay_rates
  START_CAPABILITY

    #define FUNCTION stop_1_decays
    START_FUNCTION(DecayTable::Entry)
    BACKEND_REQ(cb_sd_stopwidth, (sh_reqd), sd_stopwidth_type)
    BACKEND_REQ(cb_sd_stop2body, (sh_reqd), sd_stop2body_type)
    BACKEND_REQ(cb_sd_stoploop, (sh_reqd), sd_stoploop_type)
    BACKEND_REQ(cb_sd_stop3body, (sh_reqd), sd_stop3body_type)
    BACKEND_OPTION( (SUSY_HIT), (sh_reqd) )
    ALLOW_MODELS(MSSM78atQ, MSSM78atMGUT)
    #undef FUNCTION

  #undef CAPABILITY

  #define CAPABILITY stop_2_decay_rates
  START_CAPABILITY

    #define FUNCTION stop_2_decays
    START_FUNCTION(DecayTable::Entry)
    BACKEND_REQ(cb_sd_stopwidth, (sh_reqd), sd_stopwidth_type)
    BACKEND_REQ(cb_sd_stop2body, (sh_reqd), sd_stop2body_type)
    BACKEND_REQ(cb_sd_stop3body, (sh_reqd), sd_stop3body_type)
    BACKEND_OPTION( (SUSY_HIT), (sh_reqd) )
    ALLOW_MODELS(MSSM78atQ, MSSM78atMGUT)
    #undef FUNCTION

  #undef CAPABILITY

  #define CAPABILITY sbottom_1_decay_rates
  START_CAPABILITY

    #define FUNCTION sbottom_1_decays
    START_FUNCTION(DecayTable::Entry)
    BACKEND_REQ(cb_sd_sbotwidth, (sh_reqd), sd_sbotwidth_type)
    BACKEND_REQ(cb_sd_sbot2body, (sh_reqd), sd_sbot2body_type)
    BACKEND_REQ(cb_sd_sbot3body, (sh_reqd), sd_sbot3body_type)
    BACKEND_OPTION( (SUSY_HIT), (sh_reqd) )
    ALLOW_MODELS(MSSM78atQ, MSSM78atMGUT)
    #undef FUNCTION

  #undef CAPABILITY

  #define CAPABILITY sbottom_2_decay_rates
  START_CAPABILITY

    #define FUNCTION sbottom_2_decays
    START_FUNCTION(DecayTable::Entry)
    BACKEND_REQ(cb_sd_sbotwidth, (sh_reqd), sd_sbotwidth_type)
    BACKEND_REQ(cb_sd_sbot2body, (sh_reqd), sd_sbot2body_type)
    BACKEND_REQ(cb_sd_sbot3body, (sh_reqd), sd_sbot3body_type)
    BACKEND_OPTION( (SUSY_HIT), (sh_reqd) )
    ALLOW_MODELS(MSSM78atQ, MSSM78atMGUT)
    #undef FUNCTION

  #undef CAPABILITY

  #define CAPABILITY sup_l_decay_rates
  START_CAPABILITY

    #define FUNCTION sup_l_decays
    START_FUNCTION(DecayTable::Entry)
    BACKEND_REQ(cb_sd_supwidth, (sh_reqd), sd_supwidth_type)
    BACKEND_REQ(cb_sd_sup2body, (sh_reqd), sd_sup2body_type)
    BACKEND_OPTION( (SUSY_HIT), (sh_reqd) )
    ALLOW_MODELS(MSSM78atQ, MSSM78atMGUT)
    #undef FUNCTION

  #undef CAPABILITY

  #define CAPABILITY sup_r_decay_rates
  START_CAPABILITY

    #define FUNCTION sup_r_decays
    START_FUNCTION(DecayTable::Entry)
    BACKEND_REQ(cb_sd_supwidth, (sh_reqd), sd_supwidth_type)
    BACKEND_REQ(cb_sd_sup2body, (sh_reqd), sd_sup2body_type)
    BACKEND_OPTION( (SUSY_HIT), (sh_reqd) )
    ALLOW_MODELS(MSSM78atQ, MSSM78atMGUT)
    #undef FUNCTION

  #undef CAPABILITY

  #define CAPABILITY sdown_l_decay_rates
  START_CAPABILITY

    #define FUNCTION sdown_l_decays
    START_FUNCTION(DecayTable::Entry)
    BACKEND_REQ(cb_sd_sdownwidth, (sh_reqd), sd_sdownwidth_type)
    BACKEND_REQ(cb_sd_sdown2body, (sh_reqd), sd_sdown2body_type)
    BACKEND_OPTION( (SUSY_HIT), (sh_reqd) )
    ALLOW_MODELS(MSSM78atQ, MSSM78atMGUT)
    #undef FUNCTION

  #undef CAPABILITY

  #define CAPABILITY sdown_r_decay_rates
  START_CAPABILITY

    #define FUNCTION sdown_r_decays
    START_FUNCTION(DecayTable::Entry)
    BACKEND_REQ(cb_sd_sdownwidth, (sh_reqd), sd_sdownwidth_type)
    BACKEND_REQ(cb_sd_sdown2body, (sh_reqd), sd_sdown2body_type)
    BACKEND_OPTION( (SUSY_HIT), (sh_reqd) )
    ALLOW_MODELS(MSSM78atQ, MSSM78atMGUT)
    #undef FUNCTION

  #undef CAPABILITY

  #define CAPABILITY scharm_l_decay_rates
  START_CAPABILITY

    #define FUNCTION scharm_l_decays
    START_FUNCTION(DecayTable::Entry)
    BACKEND_REQ(cb_sd_supwidth, (sh_reqd), sd_supwidth_type)
    BACKEND_REQ(cb_sd_sup2body, (sh_reqd), sd_sup2body_type)
    BACKEND_OPTION( (SUSY_HIT), (sh_reqd) )
    ALLOW_MODELS(MSSM78atQ, MSSM78atMGUT)
    #undef FUNCTION

  #undef CAPABILITY

  #define CAPABILITY scharm_r_decay_rates
  START_CAPABILITY

    #define FUNCTION scharm_r_decays
    START_FUNCTION(DecayTable::Entry)
    BACKEND_REQ(cb_sd_supwidth, (sh_reqd), sd_supwidth_type)
    BACKEND_REQ(cb_sd_sup2body, (sh_reqd), sd_sup2body_type)
    BACKEND_OPTION( (SUSY_HIT), (sh_reqd) )
    ALLOW_MODELS(MSSM78atQ, MSSM78atMGUT)
    #undef FUNCTION

  #undef CAPABILITY

  #define CAPABILITY sstrange_l_decay_rates
  START_CAPABILITY

    #define FUNCTION sstrange_l_decays
    START_FUNCTION(DecayTable::Entry)
    BACKEND_REQ(cb_sd_sdownwidth, (sh_reqd), sd_sdownwidth_type)
    BACKEND_REQ(cb_sd_sdown2body, (sh_reqd), sd_sdown2body_type)
    BACKEND_OPTION( (SUSY_HIT), (sh_reqd) )
    ALLOW_MODELS(MSSM78atQ, MSSM78atMGUT)
    #undef FUNCTION

  #undef CAPABILITY

  #define CAPABILITY sstrange_r_decay_rates
  START_CAPABILITY

    #define FUNCTION sstrange_r_decays
    START_FUNCTION(DecayTable::Entry)
    BACKEND_REQ(cb_sd_sdownwidth, (sh_reqd), sd_sdownwidth_type)
    BACKEND_REQ(cb_sd_sdown2body, (sh_reqd), sd_sdown2body_type)
    BACKEND_OPTION( (SUSY_HIT), (sh_reqd) )
    ALLOW_MODELS(MSSM78atQ, MSSM78atMGUT)
    #undef FUNCTION

  #undef CAPABILITY

  #define CAPABILITY selectron_l_decay_rates
  START_CAPABILITY

    #define FUNCTION selectron_l_decays
    START_FUNCTION(DecayTable::Entry)
    BACKEND_REQ(cb_sd_selwidth, (sh_reqd), sd_selwidth_type)
    BACKEND_REQ(cb_sd_sel2body, (sh_reqd), sd_sel2body_type)
    BACKEND_OPTION( (SUSY_HIT), (sh_reqd) )
    ALLOW_MODELS(MSSM78atQ, MSSM78atMGUT)
    #undef FUNCTION

  #undef CAPABILITY

  #define CAPABILITY selectron_r_decay_rates
  START_CAPABILITY

    #define FUNCTION selectron_r_decays
    START_FUNCTION(DecayTable::Entry)
    BACKEND_REQ(cb_sd_selwidth, (sh_reqd), sd_selwidth_type)
    BACKEND_REQ(cb_sd_sel2body, (sh_reqd), sd_sel2body_type)
    BACKEND_OPTION( (SUSY_HIT), (sh_reqd) )
    ALLOW_MODELS(MSSM78atQ, MSSM78atMGUT)
    #undef FUNCTION

  #undef CAPABILITY

  #define CAPABILITY smuon_l_decay_rates
  START_CAPABILITY

    #define FUNCTION smuon_l_decays
    START_FUNCTION(DecayTable::Entry)
    BACKEND_REQ(cb_sd_selwidth, (sh_reqd), sd_selwidth_type)
    BACKEND_REQ(cb_sd_sel2body, (sh_reqd), sd_sel2body_type)
    BACKEND_OPTION( (SUSY_HIT), (sh_reqd) )
    ALLOW_MODELS(MSSM78atQ, MSSM78atMGUT)
    #undef FUNCTION

  #undef CAPABILITY

  #define CAPABILITY smuon_r_decay_rates
  START_CAPABILITY

    #define FUNCTION smuon_r_decays
    START_FUNCTION(DecayTable::Entry)
    BACKEND_REQ(cb_sd_selwidth, (sh_reqd), sd_selwidth_type)
    BACKEND_REQ(cb_sd_sel2body, (sh_reqd), sd_sel2body_type)
    BACKEND_OPTION( (SUSY_HIT), (sh_reqd) )
    ALLOW_MODELS(MSSM78atQ, MSSM78atMGUT)
    #undef FUNCTION

  #undef CAPABILITY

  #define CAPABILITY stau_1_decay_rates
  START_CAPABILITY

    #define FUNCTION stau_1_decays
    START_FUNCTION(DecayTable::Entry)
    BACKEND_REQ(cb_sd_stauwidth, (sh_reqd), sd_stauwidth_type)
    BACKEND_REQ(cb_sd_stau2body, (sh_reqd), sd_stau2body_type)
    BACKEND_REQ(cb_sd_stau2bodygrav, (sh_reqd), sd_stau2bodygrav_type)
    BACKEND_OPTION( (SUSY_HIT), (sh_reqd) )
    ALLOW_MODELS(MSSM78atQ, MSSM78atMGUT)
    #undef FUNCTION

  #undef CAPABILITY

  #define CAPABILITY stau_2_decay_rates
  START_CAPABILITY

    #define FUNCTION stau_2_decays
    START_FUNCTION(DecayTable::Entry)
    BACKEND_REQ(cb_sd_stauwidth, (sh_reqd), sd_stauwidth_type)
    BACKEND_REQ(cb_sd_stau2body, (sh_reqd), sd_stau2body_type)
    BACKEND_OPTION( (SUSY_HIT), (sh_reqd) )
    ALLOW_MODELS(MSSM78atQ, MSSM78atMGUT)
    #undef FUNCTION

  #undef CAPABILITY

  #define CAPABILITY snu_electronl_decay_rates
  START_CAPABILITY

    #define FUNCTION snu_electronl_decays
    START_FUNCTION(DecayTable::Entry)
    BACKEND_REQ(cb_sd_snelwidth, (sh_reqd), sd_snelwidth_type)
    BACKEND_REQ(cb_sd_snel2body, (sh_reqd), sd_snel2body_type)
    BACKEND_OPTION( (SUSY_HIT), (sh_reqd) )
    ALLOW_MODELS(MSSM78atQ, MSSM78atMGUT)
    #undef FUNCTION

  #undef CAPABILITY

  #define CAPABILITY snu_muonl_decay_rates
  START_CAPABILITY

    #define FUNCTION snu_muonl_decays
    START_FUNCTION(DecayTable::Entry)
    BACKEND_REQ(cb_sd_snelwidth, (sh_reqd), sd_snelwidth_type)
    BACKEND_REQ(cb_sd_snel2body, (sh_reqd), sd_snel2body_type)
    BACKEND_OPTION( (SUSY_HIT), (sh_reqd) )
    ALLOW_MODELS(MSSM78atQ, MSSM78atMGUT)
    #undef FUNCTION

  #undef CAPABILITY

  #define CAPABILITY snu_taul_decay_rates
  START_CAPABILITY

    #define FUNCTION snu_taul_decays
    START_FUNCTION(DecayTable::Entry)
    BACKEND_REQ(cb_sd_sntauwidth, (sh_reqd), sd_sntauwidth_type)
    BACKEND_REQ(cb_sd_sntau2body, (sh_reqd), sd_sntau2body_type)
    BACKEND_OPTION( (SUSY_HIT), (sh_reqd) )
    ALLOW_MODELS(MSSM78atQ, MSSM78atMGUT)
    #undef FUNCTION

  #undef CAPABILITY

  #define CAPABILITY charginoplus_1_decay_rates
  START_CAPABILITY

    #define FUNCTION charginoplus_1_decays
    START_FUNCTION(DecayTable::Entry)
    BACKEND_REQ(cb_sd_charwidth, (sh_reqd), sd_charwidth_type)
    BACKEND_REQ(cb_sd_char2body, (sh_reqd), sd_char2body_type)
    BACKEND_REQ(cb_sd_char2bodygrav, (sh_reqd), sd_char2bodygrav_type)
    BACKEND_REQ(cb_sd_char3body, (sh_reqd), sd_char3body_type)
    BACKEND_OPTION( (SUSY_HIT), (sh_reqd) )
    ALLOW_MODELS(MSSM78atQ, MSSM78atMGUT)
    #undef FUNCTION

  #undef CAPABILITY

  #define CAPABILITY charginoplus_2_decay_rates
  START_CAPABILITY

    #define FUNCTION charginoplus_2_decays
    START_FUNCTION(DecayTable::Entry)
    BACKEND_REQ(cb_sd_charwidth, (sh_reqd), sd_charwidth_type)
    BACKEND_REQ(cb_sd_char2body, (sh_reqd), sd_char2body_type)
    BACKEND_REQ(cb_sd_char2bodygrav, (sh_reqd), sd_char2bodygrav_type)
    BACKEND_REQ(cb_sd_char3body, (sh_reqd), sd_char3body_type)
    BACKEND_OPTION( (SUSY_HIT), (sh_reqd) )
    ALLOW_MODELS(MSSM78atQ, MSSM78atMGUT)
    #undef FUNCTION

  #undef CAPABILITY

  #define CAPABILITY neutralino_1_decay_rates
  START_CAPABILITY

    #define FUNCTION neutralino_1_decays
    START_FUNCTION(DecayTable::Entry)
    BACKEND_REQ(cb_sd_neutwidth, (sh_reqd), sd_neutwidth_type)
    BACKEND_REQ(cb_sd_neut2body, (sh_reqd), sd_neut2body_type)
    BACKEND_REQ(cb_sd_neut2bodygrav, (sh_reqd), sd_neut2bodygrav_type)
    BACKEND_REQ(cb_sd_neut3body, (sh_reqd), sd_neut3body_type)
    BACKEND_OPTION( (SUSY_HIT), (sh_reqd) )
    ALLOW_MODELS(MSSM78atQ, MSSM78atMGUT)
    #undef FUNCTION

  #undef CAPABILITY

  #define CAPABILITY neutralino_2_decay_rates
  START_CAPABILITY

    #define FUNCTION neutralino_2_decays
    START_FUNCTION(DecayTable::Entry)
    BACKEND_REQ(cb_sd_neutwidth, (sh_reqd), sd_neutwidth_type)
    BACKEND_REQ(cb_sd_neut2body, (sh_reqd), sd_neut2body_type)
    BACKEND_REQ(cb_sd_neut2bodygrav, (sh_reqd), sd_neut2bodygrav_type)
    BACKEND_REQ(cb_sd_neutloop, (sh_reqd), sd_neutloop_type)
    BACKEND_REQ(cb_sd_neut3body, (sh_reqd), sd_neut3body_type)
    BACKEND_OPTION( (SUSY_HIT), (sh_reqd) )
    ALLOW_MODELS(MSSM78atQ, MSSM78atMGUT)
    #undef FUNCTION

  #undef CAPABILITY

  #define CAPABILITY neutralino_3_decay_rates
  START_CAPABILITY

    #define FUNCTION neutralino_3_decays
    START_FUNCTION(DecayTable::Entry)
    BACKEND_REQ(cb_sd_neutwidth, (sh_reqd), sd_neutwidth_type)
    BACKEND_REQ(cb_sd_neut2body, (sh_reqd), sd_neut2body_type)
    BACKEND_REQ(cb_sd_neut2bodygrav, (sh_reqd), sd_neut2bodygrav_type)
    BACKEND_REQ(cb_sd_neutloop, (sh_reqd), sd_neutloop_type)
    BACKEND_REQ(cb_sd_neut3body, (sh_reqd), sd_neut3body_type)
    BACKEND_OPTION( (SUSY_HIT), (sh_reqd) )
    ALLOW_MODELS(MSSM78atQ, MSSM78atMGUT)
    #undef FUNCTION

  #undef CAPABILITY

  #define CAPABILITY neutralino_4_decay_rates
  START_CAPABILITY

    #define FUNCTION neutralino_4_decays
    START_FUNCTION(DecayTable::Entry)
    BACKEND_REQ(cb_sd_neutwidth, (sh_reqd), sd_neutwidth_type)
    BACKEND_REQ(cb_sd_neut2body, (sh_reqd), sd_neut2body_type)
    BACKEND_REQ(cb_sd_neut2bodygrav, (sh_reqd), sd_neut2bodygrav_type)
    BACKEND_REQ(cb_sd_neutloop, (sh_reqd), sd_neutloop_type)
    BACKEND_REQ(cb_sd_neut3body, (sh_reqd), sd_neut3body_type)
    BACKEND_OPTION( (SUSY_HIT), (sh_reqd) )
    ALLOW_MODELS(MSSM78atQ, MSSM78atMGUT)
    #undef FUNCTION

  #undef CAPABILITY
  
  #define CAPABILITY decay_rates
  START_CAPABILITY

    #define FUNCTION all_decays
    START_FUNCTION(DecayTable)
    DEPENDENCY(Higgs_decay_rates, DecayTable::Entry) 
    DEPENDENCY(W_minus_decay_rates, DecayTable::Entry)
    DEPENDENCY(W_plus_decay_rates, DecayTable::Entry)
    DEPENDENCY(Z_decay_rates, DecayTable::Entry)
    DEPENDENCY(t_decay_rates, DecayTable::Entry)
    DEPENDENCY(tbar_decay_rates, DecayTable::Entry)
    DEPENDENCY(mu_minus_decay_rates, DecayTable::Entry)
    DEPENDENCY(mu_plus_decay_rates, DecayTable::Entry)
    DEPENDENCY(tau_minus_decay_rates, DecayTable::Entry)
    DEPENDENCY(tau_plus_decay_rates, DecayTable::Entry)
    DEPENDENCY(pi_0_decay_rates, DecayTable::Entry)
    DEPENDENCY(pi_minus_decay_rates, DecayTable::Entry)
    DEPENDENCY(pi_plus_decay_rates, DecayTable::Entry)
    DEPENDENCY(eta_decay_rates, DecayTable::Entry)
    DEPENDENCY(rho_0_decay_rates, DecayTable::Entry)
    DEPENDENCY(rho_minus_decay_rates, DecayTable::Entry)
    DEPENDENCY(rho_plus_decay_rates, DecayTable::Entry)
    DEPENDENCY(omega_decay_rates, DecayTable::Entry)
    MODEL_CONDITIONAL_DEPENDENCY(h0_2_decay_rates, DecayTable::Entry, MSSM78atQ, MSSM78atMGUT) 
    MODEL_CONDITIONAL_DEPENDENCY(A0_decay_rates, DecayTable::Entry, MSSM78atQ, MSSM78atMGUT) 
    MODEL_CONDITIONAL_DEPENDENCY(Hplus_decay_rates, DecayTable::Entry, MSSM78atQ, MSSM78atMGUT) 
    MODEL_CONDITIONAL_DEPENDENCY(Hminus_decay_rates, DecayTable::Entry, MSSM78atQ, MSSM78atMGUT) 
    MODEL_CONDITIONAL_DEPENDENCY(gluino_decay_rates, DecayTable::Entry, MSSM78atQ, MSSM78atMGUT) 
    MODEL_CONDITIONAL_DEPENDENCY(stop_1_decay_rates, DecayTable::Entry, MSSM78atQ, MSSM78atMGUT) 
    MODEL_CONDITIONAL_DEPENDENCY(stop_2_decay_rates, DecayTable::Entry, MSSM78atQ, MSSM78atMGUT) 
    MODEL_CONDITIONAL_DEPENDENCY(sbottom_1_decay_rates, DecayTable::Entry, MSSM78atQ, MSSM78atMGUT) 
    MODEL_CONDITIONAL_DEPENDENCY(sbottom_2_decay_rates, DecayTable::Entry, MSSM78atQ, MSSM78atMGUT) 
    MODEL_CONDITIONAL_DEPENDENCY(sup_l_decay_rates, DecayTable::Entry, MSSM78atQ, MSSM78atMGUT) 
    MODEL_CONDITIONAL_DEPENDENCY(sup_r_decay_rates, DecayTable::Entry, MSSM78atQ, MSSM78atMGUT) 
    MODEL_CONDITIONAL_DEPENDENCY(sdown_l_decay_rates, DecayTable::Entry, MSSM78atQ, MSSM78atMGUT) 
    MODEL_CONDITIONAL_DEPENDENCY(sdown_r_decay_rates, DecayTable::Entry, MSSM78atQ, MSSM78atMGUT) 
    MODEL_CONDITIONAL_DEPENDENCY(scharm_l_decay_rates, DecayTable::Entry, MSSM78atQ, MSSM78atMGUT) 
    MODEL_CONDITIONAL_DEPENDENCY(scharm_r_decay_rates, DecayTable::Entry, MSSM78atQ, MSSM78atMGUT) 
    MODEL_CONDITIONAL_DEPENDENCY(sstrange_l_decay_rates, DecayTable::Entry, MSSM78atQ, MSSM78atMGUT) 
    MODEL_CONDITIONAL_DEPENDENCY(sstrange_r_decay_rates, DecayTable::Entry, MSSM78atQ, MSSM78atMGUT) 
    MODEL_CONDITIONAL_DEPENDENCY(selectron_l_decay_rates, DecayTable::Entry, MSSM78atQ, MSSM78atMGUT) 
    MODEL_CONDITIONAL_DEPENDENCY(selectron_r_decay_rates, DecayTable::Entry, MSSM78atQ, MSSM78atMGUT) 
    MODEL_CONDITIONAL_DEPENDENCY(smuon_l_decay_rates, DecayTable::Entry, MSSM78atQ, MSSM78atMGUT) 
    MODEL_CONDITIONAL_DEPENDENCY(smuon_r_decay_rates, DecayTable::Entry, MSSM78atQ, MSSM78atMGUT) 
    MODEL_CONDITIONAL_DEPENDENCY(stau_1_decay_rates, DecayTable::Entry, MSSM78atQ, MSSM78atMGUT) 
    MODEL_CONDITIONAL_DEPENDENCY(stau_2_decay_rates, DecayTable::Entry, MSSM78atQ, MSSM78atMGUT) 
    MODEL_CONDITIONAL_DEPENDENCY(snu_electronl_decay_rates, DecayTable::Entry, MSSM78atQ, MSSM78atMGUT) 
    MODEL_CONDITIONAL_DEPENDENCY(snu_muonl_decay_rates, DecayTable::Entry, MSSM78atQ, MSSM78atMGUT) 
    MODEL_CONDITIONAL_DEPENDENCY(snu_taul_decay_rates, DecayTable::Entry, MSSM78atQ, MSSM78atMGUT) 
    MODEL_CONDITIONAL_DEPENDENCY(stopbar_1_decay_rates, DecayTable::Entry, MSSM78atQ, MSSM78atMGUT) 
    MODEL_CONDITIONAL_DEPENDENCY(stopbar_2_decay_rates, DecayTable::Entry, MSSM78atQ, MSSM78atMGUT) 
    MODEL_CONDITIONAL_DEPENDENCY(sbottombar_1_decay_rates, DecayTable::Entry, MSSM78atQ, MSSM78atMGUT) 
    MODEL_CONDITIONAL_DEPENDENCY(sbottombar_2_decay_rates, DecayTable::Entry, MSSM78atQ, MSSM78atMGUT) 
    MODEL_CONDITIONAL_DEPENDENCY(supbar_l_decay_rates, DecayTable::Entry, MSSM78atQ, MSSM78atMGUT) 
    MODEL_CONDITIONAL_DEPENDENCY(supbar_r_decay_rates, DecayTable::Entry, MSSM78atQ, MSSM78atMGUT) 
    MODEL_CONDITIONAL_DEPENDENCY(sdownbar_l_decay_rates, DecayTable::Entry, MSSM78atQ, MSSM78atMGUT) 
    MODEL_CONDITIONAL_DEPENDENCY(sdownbar_r_decay_rates, DecayTable::Entry, MSSM78atQ, MSSM78atMGUT) 
    MODEL_CONDITIONAL_DEPENDENCY(scharmbar_l_decay_rates, DecayTable::Entry, MSSM78atQ, MSSM78atMGUT) 
    MODEL_CONDITIONAL_DEPENDENCY(scharmbar_r_decay_rates, DecayTable::Entry, MSSM78atQ, MSSM78atMGUT) 
    MODEL_CONDITIONAL_DEPENDENCY(sstrangebar_l_decay_rates, DecayTable::Entry, MSSM78atQ, MSSM78atMGUT) 
    MODEL_CONDITIONAL_DEPENDENCY(sstrangebar_r_decay_rates, DecayTable::Entry, MSSM78atQ, MSSM78atMGUT) 
    MODEL_CONDITIONAL_DEPENDENCY(selectronbar_l_decay_rates, DecayTable::Entry, MSSM78atQ, MSSM78atMGUT) 
    MODEL_CONDITIONAL_DEPENDENCY(selectronbar_r_decay_rates, DecayTable::Entry, MSSM78atQ, MSSM78atMGUT) 
    MODEL_CONDITIONAL_DEPENDENCY(smuonbar_l_decay_rates, DecayTable::Entry, MSSM78atQ, MSSM78atMGUT) 
    MODEL_CONDITIONAL_DEPENDENCY(smuonbar_r_decay_rates, DecayTable::Entry, MSSM78atQ, MSSM78atMGUT) 
    MODEL_CONDITIONAL_DEPENDENCY(staubar_1_decay_rates, DecayTable::Entry, MSSM78atQ, MSSM78atMGUT) 
    MODEL_CONDITIONAL_DEPENDENCY(staubar_2_decay_rates, DecayTable::Entry, MSSM78atQ, MSSM78atMGUT) 
    MODEL_CONDITIONAL_DEPENDENCY(snubar_electronl_decay_rates, DecayTable::Entry, MSSM78atQ, MSSM78atMGUT) 
    MODEL_CONDITIONAL_DEPENDENCY(snubar_muonl_decay_rates, DecayTable::Entry, MSSM78atQ, MSSM78atMGUT) 
    MODEL_CONDITIONAL_DEPENDENCY(snubar_taul_decay_rates, DecayTable::Entry, MSSM78atQ, MSSM78atMGUT) 
    MODEL_CONDITIONAL_DEPENDENCY(charginoplus_1_decay_rates, DecayTable::Entry, MSSM78atQ, MSSM78atMGUT) 
    MODEL_CONDITIONAL_DEPENDENCY(charginominus_1_decay_rates, DecayTable::Entry, MSSM78atQ, MSSM78atMGUT) 
    MODEL_CONDITIONAL_DEPENDENCY(charginoplus_2_decay_rates, DecayTable::Entry, MSSM78atQ, MSSM78atMGUT) 
    MODEL_CONDITIONAL_DEPENDENCY(charginominus_2_decay_rates, DecayTable::Entry, MSSM78atQ, MSSM78atMGUT) 
    MODEL_CONDITIONAL_DEPENDENCY(neutralino_1_decay_rates, DecayTable::Entry, MSSM78atQ, MSSM78atMGUT) 
    MODEL_CONDITIONAL_DEPENDENCY(neutralino_2_decay_rates, DecayTable::Entry, MSSM78atQ, MSSM78atMGUT) 
    MODEL_CONDITIONAL_DEPENDENCY(neutralino_3_decay_rates, DecayTable::Entry, MSSM78atQ, MSSM78atMGUT) 
    MODEL_CONDITIONAL_DEPENDENCY(neutralino_4_decay_rates, DecayTable::Entry, MSSM78atQ, MSSM78atMGUT) 
    #undef FUNCTION

  #undef CAPABILITY

#undef MODULE

// SM decay rate functions
QUICK_FUNCTION(DecayBit, W_plus_decay_rates, NEW_CAPABILITY, W_plus_decays, DecayTable::Entry)
QUICK_FUNCTION(DecayBit, W_minus_decay_rates, NEW_CAPABILITY, W_minus_decays, DecayTable::Entry, (), (W_plus_decay_rates, DecayTable::Entry))
QUICK_FUNCTION(DecayBit, Z_decay_rates, NEW_CAPABILITY, Z_decays, DecayTable::Entry)
QUICK_FUNCTION(DecayBit, tbar_decay_rates, NEW_CAPABILITY, tbar_decays, DecayTable::Entry,(), (t_decay_rates, DecayTable::Entry))
QUICK_FUNCTION(DecayBit, mu_plus_decay_rates, NEW_CAPABILITY, mu_plus_decays, DecayTable::Entry)
QUICK_FUNCTION(DecayBit, mu_minus_decay_rates, NEW_CAPABILITY, mu_minus_decays, DecayTable::Entry, (), (mu_plus_decay_rates, DecayTable::Entry))
QUICK_FUNCTION(DecayBit, tau_plus_decay_rates, NEW_CAPABILITY, tau_plus_decays, DecayTable::Entry)
QUICK_FUNCTION(DecayBit, tau_minus_decay_rates, NEW_CAPABILITY, tau_minus_decays, DecayTable::Entry, (), (tau_plus_decay_rates, DecayTable::Entry))
QUICK_FUNCTION(DecayBit, pi_0_decay_rates, NEW_CAPABILITY, pi_0_decays, DecayTable::Entry)
QUICK_FUNCTION(DecayBit, pi_plus_decay_rates, NEW_CAPABILITY, pi_plus_decays, DecayTable::Entry)
QUICK_FUNCTION(DecayBit, pi_minus_decay_rates, NEW_CAPABILITY, pi_minus_decays, DecayTable::Entry, (), (pi_plus_decay_rates, DecayTable::Entry))
QUICK_FUNCTION(DecayBit, eta_decay_rates, NEW_CAPABILITY, eta_decays, DecayTable::Entry)
QUICK_FUNCTION(DecayBit, rho_0_decay_rates, NEW_CAPABILITY, rho_0_decays, DecayTable::Entry)
QUICK_FUNCTION(DecayBit, rho_plus_decay_rates, NEW_CAPABILITY, rho_plus_decays, DecayTable::Entry)
QUICK_FUNCTION(DecayBit, rho_minus_decay_rates, NEW_CAPABILITY, rho_minus_decays, DecayTable::Entry, (), (rho_plus_decay_rates, DecayTable::Entry))
QUICK_FUNCTION(DecayBit, omega_decay_rates, NEW_CAPABILITY, omega_decays, DecayTable::Entry)

// CP-conserving MSSM antiparticle decay rate functions
QUICK_FUNCTION(DecayBit, Hminus_decay_rates, NEW_CAPABILITY, Hminus_decays, DecayTable::Entry, (MSSM78atQ, MSSM78atMGUT), (Hplus_decay_rates, DecayTable::Entry)) 
QUICK_FUNCTION(DecayBit, stopbar_1_decay_rates, NEW_CAPABILITY, stopbar_1_decays, DecayTable::Entry, (MSSM78atQ, MSSM78atMGUT), (stop_1_decay_rates, DecayTable::Entry)) 
QUICK_FUNCTION(DecayBit, stopbar_2_decay_rates, NEW_CAPABILITY, stopbar_2_decays, DecayTable::Entry, (MSSM78atQ, MSSM78atMGUT), (stop_2_decay_rates, DecayTable::Entry)) 
QUICK_FUNCTION(DecayBit, sbottombar_1_decay_rates, NEW_CAPABILITY, sbottombar_1_decays, DecayTable::Entry, (MSSM78atQ, MSSM78atMGUT), (sbottom_1_decay_rates, DecayTable::Entry)) 
QUICK_FUNCTION(DecayBit, sbottombar_2_decay_rates, NEW_CAPABILITY, sbottombar_2_decays, DecayTable::Entry, (MSSM78atQ, MSSM78atMGUT), (sbottom_2_decay_rates, DecayTable::Entry)) 
QUICK_FUNCTION(DecayBit, supbar_l_decay_rates, NEW_CAPABILITY, supbar_l_decays, DecayTable::Entry, (MSSM78atQ, MSSM78atMGUT), (sup_l_decay_rates, DecayTable::Entry)) 
QUICK_FUNCTION(DecayBit, supbar_r_decay_rates, NEW_CAPABILITY, supbar_r_decays, DecayTable::Entry, (MSSM78atQ, MSSM78atMGUT), (sup_r_decay_rates, DecayTable::Entry)) 
QUICK_FUNCTION(DecayBit, sdownbar_l_decay_rates, NEW_CAPABILITY, sdownbar_l_decays, DecayTable::Entry, (MSSM78atQ, MSSM78atMGUT), (sdown_l_decay_rates, DecayTable::Entry)) 
QUICK_FUNCTION(DecayBit, sdownbar_r_decay_rates, NEW_CAPABILITY, sdownbar_r_decays, DecayTable::Entry, (MSSM78atQ, MSSM78atMGUT), (sdown_r_decay_rates, DecayTable::Entry)) 
QUICK_FUNCTION(DecayBit, scharmbar_l_decay_rates, NEW_CAPABILITY, scharmbar_l_decays, DecayTable::Entry, (MSSM78atQ, MSSM78atMGUT), (scharm_l_decay_rates, DecayTable::Entry)) 
QUICK_FUNCTION(DecayBit, scharmbar_r_decay_rates, NEW_CAPABILITY, scharmbar_r_decays, DecayTable::Entry, (MSSM78atQ, MSSM78atMGUT), (scharm_r_decay_rates, DecayTable::Entry)) 
QUICK_FUNCTION(DecayBit, sstrangebar_l_decay_rates, NEW_CAPABILITY, sstrangebar_l_decays, DecayTable::Entry, (MSSM78atQ, MSSM78atMGUT), (sstrange_l_decay_rates, DecayTable::Entry)) 
QUICK_FUNCTION(DecayBit, sstrangebar_r_decay_rates, NEW_CAPABILITY, sstrangebar_r_decays, DecayTable::Entry, (MSSM78atQ, MSSM78atMGUT), (sstrange_r_decay_rates, DecayTable::Entry)) 
QUICK_FUNCTION(DecayBit, selectronbar_l_decay_rates, NEW_CAPABILITY, selectronbar_l_decays, DecayTable::Entry, (MSSM78atQ, MSSM78atMGUT), (selectron_l_decay_rates, DecayTable::Entry)) 
QUICK_FUNCTION(DecayBit, selectronbar_r_decay_rates, NEW_CAPABILITY, selectronbar_r_decays, DecayTable::Entry, (MSSM78atQ, MSSM78atMGUT), (selectron_r_decay_rates, DecayTable::Entry)) 
QUICK_FUNCTION(DecayBit, smuonbar_l_decay_rates, NEW_CAPABILITY, smuonbar_l_decays, DecayTable::Entry, (MSSM78atQ, MSSM78atMGUT), (smuon_l_decay_rates, DecayTable::Entry)) 
QUICK_FUNCTION(DecayBit, smuonbar_r_decay_rates, NEW_CAPABILITY, smuonbar_r_decays, DecayTable::Entry, (MSSM78atQ, MSSM78atMGUT), (smuon_r_decay_rates, DecayTable::Entry)) 
QUICK_FUNCTION(DecayBit, staubar_1_decay_rates, NEW_CAPABILITY, staubar_1_decays, DecayTable::Entry, (MSSM78atQ, MSSM78atMGUT), (stau_1_decay_rates, DecayTable::Entry)) 
QUICK_FUNCTION(DecayBit, staubar_2_decay_rates, NEW_CAPABILITY, staubar_2_decays, DecayTable::Entry, (MSSM78atQ, MSSM78atMGUT), (stau_2_decay_rates, DecayTable::Entry)) 
QUICK_FUNCTION(DecayBit, snubar_electronl_decay_rates, NEW_CAPABILITY, snubar_electronl_decays, DecayTable::Entry, (MSSM78atQ, MSSM78atMGUT), (snu_electronl_decay_rates, DecayTable::Entry)) 
QUICK_FUNCTION(DecayBit, snubar_muonl_decay_rates, NEW_CAPABILITY, snubar_muonl_decays, DecayTable::Entry, (MSSM78atQ, MSSM78atMGUT), (snu_muonl_decay_rates, DecayTable::Entry)) 
QUICK_FUNCTION(DecayBit, snubar_taul_decay_rates, NEW_CAPABILITY, snubar_taul_decays, DecayTable::Entry, (MSSM78atQ, MSSM78atMGUT), (snu_taul_decay_rates, DecayTable::Entry)) 
QUICK_FUNCTION(DecayBit, charginominus_1_decay_rates, NEW_CAPABILITY, charginominus_1_decays, DecayTable::Entry, (MSSM78atQ, MSSM78atMGUT), (charginoplus_1_decay_rates, DecayTable::Entry)) 
QUICK_FUNCTION(DecayBit, charginominus_2_decay_rates, NEW_CAPABILITY, charginominus_2_decays, DecayTable::Entry, (MSSM78atQ, MSSM78atMGUT), (charginoplus_2_decay_rates, DecayTable::Entry)) 
 
#endif /* defined(__DecayBit_rollcall_hpp__) */
