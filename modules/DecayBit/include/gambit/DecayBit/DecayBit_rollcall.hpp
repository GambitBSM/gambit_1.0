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
///  \date 2015 Jan-Apr
///
///  *********************************************


#ifndef __DecayBit_rollcall_hpp__
#define __DecayBit_rollcall_hpp__

#include "DecayBit_types.hpp"

#define MODULE DecayBit
START_MODULE

  #define CAPABILITY testSUSYBRs            // A physical observable or likelihood that this module can calculate.  There may be one or more 
  START_CAPABILITY                          //  functions in this module that can calculate this particular thing in different ways.
  
    #define FUNCTION decayTest              // Name of an observable function
    START_FUNCTION(double)                  // Declare that this function calculates the observable as a double precision variable
    BACKEND_REQ(cb_sd_top2body, (sh_reqd), sd_top2body_type)
    BACKEND_REQ(cb_sd_topwidth, (sh_reqd), sd_topwidth_type)
    BACKEND_OPTION( (SUSY_HIT), (sh_reqd) )
    #undef FUNCTION
	
  #undef CAPABILITY

  #define CAPABILITY Higgs_decay_rates
  START_CAPABILITY

    #define FUNCTION SMHiggs_decays
    START_FUNCTION(DecayTable::Entry)
    DEPENDENCY(SM_spectrum, SubSpectrum*)
    DEPENDENCY(MSSM_spectrum, SubSpectrum*)
    #undef FUNCTION

    #define FUNCTION MSSM_h0_1_decays
    START_FUNCTION(DecayTable::Entry)
    BACKEND_REQ(cb_widthhl_hdec, (sh_reqd), widthhl_hdec_type)
    BACKEND_REQ(cb_wisusy_hdec, (sh_reqd), wisusy_hdec_type)
    BACKEND_REQ(cb_wisfer_hdec, (sh_reqd), wisfer_hdec_type)
    BACKEND_OPTION( (SUSY_HIT), (sh_reqd) )
    ALLOW_MODELS(MSSM78atQ, MSSM78atMGUT)
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

  #define CAPABILITY sup_L_decay_rates
  START_CAPABILITY

    #define FUNCTION sup_L_decays
    START_FUNCTION(DecayTable::Entry)
    BACKEND_REQ(cb_sd_supwidth, (sh_reqd), sd_supwidth_type)
    BACKEND_REQ(cb_sd_sup2body, (sh_reqd), sd_sup2body_type)
    BACKEND_OPTION( (SUSY_HIT), (sh_reqd) )
    ALLOW_MODELS(MSSM78atQ, MSSM78atMGUT)
    #undef FUNCTION

  #undef CAPABILITY

  #define CAPABILITY sup_R_decay_rates
  START_CAPABILITY

    #define FUNCTION sup_R_decays
    START_FUNCTION(DecayTable::Entry)
    BACKEND_REQ(cb_sd_supwidth, (sh_reqd), sd_supwidth_type)
    BACKEND_REQ(cb_sd_sup2body, (sh_reqd), sd_sup2body_type)
    BACKEND_OPTION( (SUSY_HIT), (sh_reqd) )
    ALLOW_MODELS(MSSM78atQ, MSSM78atMGUT)
    #undef FUNCTION

  #undef CAPABILITY

  #define CAPABILITY sdown_L_decay_rates
  START_CAPABILITY

    #define FUNCTION sdown_L_decays
    START_FUNCTION(DecayTable::Entry)
    BACKEND_REQ(cb_sd_sdownwidth, (sh_reqd), sd_sdownwidth_type)
    BACKEND_REQ(cb_sd_sdown2body, (sh_reqd), sd_sdown2body_type)
    BACKEND_OPTION( (SUSY_HIT), (sh_reqd) )
    ALLOW_MODELS(MSSM78atQ, MSSM78atMGUT)
    #undef FUNCTION

  #undef CAPABILITY

  #define CAPABILITY sdown_R_decay_rates
  START_CAPABILITY

    #define FUNCTION sdown_R_decays
    START_FUNCTION(DecayTable::Entry)
    BACKEND_REQ(cb_sd_sdownwidth, (sh_reqd), sd_sdownwidth_type)
    BACKEND_REQ(cb_sd_sdown2body, (sh_reqd), sd_sdown2body_type)
    BACKEND_OPTION( (SUSY_HIT), (sh_reqd) )
    ALLOW_MODELS(MSSM78atQ, MSSM78atMGUT)
    #undef FUNCTION

  #undef CAPABILITY

  #define CAPABILITY scharm_L_decay_rates
  START_CAPABILITY

    #define FUNCTION scharm_L_decays
    START_FUNCTION(DecayTable::Entry)
    BACKEND_REQ(cb_sd_supwidth, (sh_reqd), sd_supwidth_type)
    BACKEND_REQ(cb_sd_sup2body, (sh_reqd), sd_sup2body_type)
    BACKEND_OPTION( (SUSY_HIT), (sh_reqd) )
    ALLOW_MODELS(MSSM78atQ, MSSM78atMGUT)
    #undef FUNCTION

  #undef CAPABILITY

  #define CAPABILITY scharm_R_decay_rates
  START_CAPABILITY

    #define FUNCTION scharm_R_decays
    START_FUNCTION(DecayTable::Entry)
    BACKEND_REQ(cb_sd_supwidth, (sh_reqd), sd_supwidth_type)
    BACKEND_REQ(cb_sd_sup2body, (sh_reqd), sd_sup2body_type)
    BACKEND_OPTION( (SUSY_HIT), (sh_reqd) )
    ALLOW_MODELS(MSSM78atQ, MSSM78atMGUT)
    #undef FUNCTION

  #undef CAPABILITY

  #define CAPABILITY sstrange_L_decay_rates
  START_CAPABILITY

    #define FUNCTION sstrange_L_decays
    START_FUNCTION(DecayTable::Entry)
    BACKEND_REQ(cb_sd_sdownwidth, (sh_reqd), sd_sdownwidth_type)
    BACKEND_REQ(cb_sd_sdown2body, (sh_reqd), sd_sdown2body_type)
    BACKEND_OPTION( (SUSY_HIT), (sh_reqd) )
    ALLOW_MODELS(MSSM78atQ, MSSM78atMGUT)
    #undef FUNCTION

  #undef CAPABILITY

  #define CAPABILITY sstrange_R_decay_rates
  START_CAPABILITY

    #define FUNCTION sstrange_R_decays
    START_FUNCTION(DecayTable::Entry)
    BACKEND_REQ(cb_sd_sdownwidth, (sh_reqd), sd_sdownwidth_type)
    BACKEND_REQ(cb_sd_sdown2body, (sh_reqd), sd_sdown2body_type)
    BACKEND_OPTION( (SUSY_HIT), (sh_reqd) )
    ALLOW_MODELS(MSSM78atQ, MSSM78atMGUT)
    #undef FUNCTION

  #undef CAPABILITY

// CsB: code below needs testing
//  #define CAPABILITY selectron_L_decay_rates
//  START_CAPABILITY
//
//    #define FUNCTION selectron_L_decays
//    START_FUNCTION(DecayTable::Entry)
//    BACKEND_REQ(cb_sd_selwidth, (sh_reqd), sd_selwidth_type)
//    BACKEND_REQ(cb_sd_sel2body, (sh_reqd), sd_sel2body_type)
//    BACKEND_OPTION( (SUSY_HIT), (sh_reqd) )
//    ALLOW_MODELS(MSSM78atQ, MSSM78atMGUT)
//    #undef FUNCTION
//
//  #undef CAPABILITY
//
//  #define CAPABILITY selectron_R_decay_rates
//  START_CAPABILITY
//
//    #define FUNCTION selectron_R_decays
//    START_FUNCTION(DecayTable::Entry)
//    BACKEND_REQ(cb_sd_selwidth, (sh_reqd), sd_selwidth_type)
//    BACKEND_REQ(cb_sd_sel2body, (sh_reqd), sd_sel2body_type)
//    BACKEND_OPTION( (SUSY_HIT), (sh_reqd) )
//    ALLOW_MODELS(MSSM78atQ, MSSM78atMGUT)
//    #undef FUNCTION
//
//  #undef CAPABILITY
//
//  #define CAPABILITY smuon_L_decay_rates
//  START_CAPABILITY
//
//    #define FUNCTION smuon_L_decays
//    START_FUNCTION(DecayTable::Entry)
//    BACKEND_REQ(cb_sd_selwidth, (sh_reqd), sd_selwidth_type)
//    BACKEND_REQ(cb_sd_sel2body, (sh_reqd), sd_sel2body_type)
//    BACKEND_OPTION( (SUSY_HIT), (sh_reqd) )
//    ALLOW_MODELS(MSSM78atQ, MSSM78atMGUT)
//    #undef FUNCTION
//
//  #undef CAPABILITY
//
//  #define CAPABILITY smuon_R_decay_rates
//  START_CAPABILITY
//
//    #define FUNCTION smuon_R_decays
//    START_FUNCTION(DecayTable::Entry)
//    BACKEND_REQ(cb_sd_selwidth, (sh_reqd), sd_selwidth_type)
//    BACKEND_REQ(cb_sd_sel2body, (sh_reqd), sd_sel2body_type)
//    BACKEND_OPTION( (SUSY_HIT), (sh_reqd) )
//    ALLOW_MODELS(MSSM78atQ, MSSM78atMGUT)
//    #undef FUNCTION
//
//  #undef CAPABILITY
//
//  #define CAPABILITY stau_L_decay_rates
//  START_CAPABILITY
//
//    #define FUNCTION stau_L_decays
//    START_FUNCTION(DecayTable::Entry)
//    BACKEND_REQ(cb_sd_stauwidth, (sh_reqd), sd_stauwidth_type)
//    BACKEND_REQ(cb_sd_stau2body, (sh_reqd), sd_stau2body_type)
//    BACKEND_REQ(cb_sd_stau2bodygrav, (sh_reqd), sd_stau2bodygrav_type)
//    BACKEND_OPTION( (SUSY_HIT), (sh_reqd) )
//    ALLOW_MODELS(MSSM78atQ, MSSM78atMGUT)
//    #undef FUNCTION
//
//  #undef CAPABILITY
//
//  #define CAPABILITY stau_R_decay_rates
//  START_CAPABILITY
//
//    #define FUNCTION stau_R_decays
//    START_FUNCTION(DecayTable::Entry)
//    BACKEND_REQ(cb_sd_stauwidth, (sh_reqd), sd_stauwidth_type)
//    BACKEND_REQ(cb_sd_stau2body, (sh_reqd), sd_stau2body_type)
//    BACKEND_OPTION( (SUSY_HIT), (sh_reqd) )
//    ALLOW_MODELS(MSSM78atQ, MSSM78atMGUT)
//    #undef FUNCTION
//
//  #undef CAPABILITY
//
//  #define CAPABILITY snu_e_decay_rates
//  START_CAPABILITY
//
//    #define FUNCTION snu_e_decays
//    START_FUNCTION(DecayTable::Entry)
//    BACKEND_REQ(cb_sd_snelwidth, (sh_reqd), sd_snelwidth_type)
//    BACKEND_REQ(cb_sd_snel2body, (sh_reqd), sd_snel2body_type)
//    BACKEND_OPTION( (SUSY_HIT), (sh_reqd) )
//    ALLOW_MODELS(MSSM78atQ, MSSM78atMGUT)
//    #undef FUNCTION
//
//  #undef CAPABILITY
//
//  #define CAPABILITY snu_mu_decay_rates
//  START_CAPABILITY
//
//    #define FUNCTION snu_mu_decays
//    START_FUNCTION(DecayTable::Entry)
//    BACKEND_REQ(cb_sd_snelwidth, (sh_reqd), sd_snelwidth_type)
//    BACKEND_REQ(cb_sd_snel2body, (sh_reqd), sd_snel2body_type)
//    BACKEND_OPTION( (SUSY_HIT), (sh_reqd) )
//    ALLOW_MODELS(MSSM78atQ, MSSM78atMGUT)
//    #undef FUNCTION
//
//  #undef CAPABILITY
//
//  #define CAPABILITY snu_tau_decay_rates
//  START_CAPABILITY
//
//    #define FUNCTION snu_tau_decays
//    START_FUNCTION(DecayTable::Entry)
//    BACKEND_REQ(cb_sd_sntauwidth, (sh_reqd), sd_sntauwidth_type)
//    BACKEND_REQ(cb_sd_sntau2body, (sh_reqd), sd_sntau2body_type)
//    BACKEND_OPTION( (SUSY_HIT), (sh_reqd) )
//    ALLOW_MODELS(MSSM78atQ, MSSM78atMGUT)
//    #undef FUNCTION
//
//  #undef CAPABILITY
//
//  #define CAPABILITY chargino_1_decay_rates
//  START_CAPABILITY
//
//    #define FUNCTION chargino_1_decays
//    START_FUNCTION(DecayTable::Entry)
//    BACKEND_REQ(cb_sd_charwidth, (sh_reqd), sd_charwidth_type)
//    BACKEND_REQ(cb_sd_char2body, (sh_reqd), sd_char2body_type)
//    BACKEND_REQ(cb_sd_char2bodygrav, (sh_reqd), sd_char2bodygrav_type)
//    BACKEND_REQ(cb_sd_char3body, (sh_reqd), sd_char3body_type)
//    BACKEND_OPTION( (SUSY_HIT), (sh_reqd) )
//    ALLOW_MODELS(MSSM78atQ, MSSM78atMGUT)
//    #undef FUNCTION
//
//  #undef CAPABILITY
//
//  #define CAPABILITY chargino_2_decay_rates
//  START_CAPABILITY
//
//    #define FUNCTION chargino_2_decays
//    START_FUNCTION(DecayTable::Entry)
//    BACKEND_REQ(cb_sd_charwidth, (sh_reqd), sd_charwidth_type)
//    BACKEND_REQ(cb_sd_char2body, (sh_reqd), sd_char2body_type)
//    BACKEND_REQ(cb_sd_char2bodygrav, (sh_reqd), sd_char2bodygrav_type)
//    BACKEND_REQ(cb_sd_char3body, (sh_reqd), sd_char3body_type)
//    BACKEND_OPTION( (SUSY_HIT), (sh_reqd) )
//    ALLOW_MODELS(MSSM78atQ, MSSM78atMGUT)
//    #undef FUNCTION
//
//  #undef CAPABILITY
//
//  #define CAPABILITY neutralino_1_decay_rates
//  START_CAPABILITY
//
//    #define FUNCTION neutralino_1_decays
//    START_FUNCTION(DecayTable::Entry)
//    BACKEND_REQ(cb_sd_neutwidth, (sh_reqd), sd_neutwidth_type)
//    BACKEND_REQ(cb_sd_neut2body, (sh_reqd), sd_neut2body_type)
//    BACKEND_REQ(cb_sd_neut2bodygrav, (sh_reqd), sd_neut2bodygrav_type)
//    BACKEND_REQ(cb_sd_neut3body, (sh_reqd), sd_neut3body_type)
//    BACKEND_OPTION( (SUSY_HIT), (sh_reqd) )
//    ALLOW_MODELS(MSSM78atQ, MSSM78atMGUT)
//    #undef FUNCTION
//
//  #undef CAPABILITY
//
//  #define CAPABILITY neutralino_2_decay_rates
//  START_CAPABILITY
//
//    #define FUNCTION neutralino_2_decays
//    START_FUNCTION(DecayTable::Entry)
//    BACKEND_REQ(cb_sd_neutwidth, (sh_reqd), sd_neutwidth_type)
//    BACKEND_REQ(cb_sd_neut2body, (sh_reqd), sd_neut2body_type)
//    BACKEND_REQ(cb_sd_neut2bodygrav, (sh_reqd), sd_neut2bodygrav_type)
//    BACKEND_REQ(cb_sd_neutloop, (sh_reqd), sd_neutloop_type)
//    BACKEND_REQ(cb_sd_neut3body, (sh_reqd), sd_neut3body_type)
//    BACKEND_OPTION( (SUSY_HIT), (sh_reqd) )
//    ALLOW_MODELS(MSSM78atQ, MSSM78atMGUT)
//    #undef FUNCTION
//
//  #undef CAPABILITY
//
//  #define CAPABILITY neutralino_3_decay_rates
//  START_CAPABILITY
//
//    #define FUNCTION neutralino_3_decays
//    START_FUNCTION(DecayTable::Entry)
//    BACKEND_REQ(cb_sd_neutwidth, (sh_reqd), sd_neutwidth_type)
//    BACKEND_REQ(cb_sd_neut2body, (sh_reqd), sd_neut2body_type)
//    BACKEND_REQ(cb_sd_neut2bodygrav, (sh_reqd), sd_neut2bodygrav_type)
//    BACKEND_REQ(cb_sd_neutloop, (sh_reqd), sd_neutloop_type)
//    BACKEND_REQ(cb_sd_neut3body, (sh_reqd), sd_neut3body_type)
//    BACKEND_OPTION( (SUSY_HIT), (sh_reqd) )
//    ALLOW_MODELS(MSSM78atQ, MSSM78atMGUT)
//    #undef FUNCTION
//
//  #undef CAPABILITY
//
//  #define CAPABILITY neutralino_4_decay_rates
//  START_CAPABILITY
//
//    #define FUNCTION neutralino_4_decays
//    START_FUNCTION(DecayTable::Entry)
//    BACKEND_REQ(cb_sd_neutwidth, (sh_reqd), sd_neutwidth_type)
//    BACKEND_REQ(cb_sd_neut2body, (sh_reqd), sd_neut2body_type)
//    BACKEND_REQ(cb_sd_neut2bodygrav, (sh_reqd), sd_neut2bodygrav_type)
//    BACKEND_REQ(cb_sd_neutloop, (sh_reqd), sd_neutloop_type)
//    BACKEND_REQ(cb_sd_neut3body, (sh_reqd), sd_neut3body_type)
//    BACKEND_OPTION( (SUSY_HIT), (sh_reqd) )
//    ALLOW_MODELS(MSSM78atQ, MSSM78atMGUT)
//    #undef FUNCTION
//
//  #undef CAPABILITY
  
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
    // The following are only relevant for the MSSM, and should eventually be made model-conditional dependencies
    DEPENDENCY(h0_2_decay_rates, DecayTable::Entry) 
    DEPENDENCY(A0_decay_rates, DecayTable::Entry) 
    DEPENDENCY(Hplus_decay_rates, DecayTable::Entry) 
    DEPENDENCY(gluino_decay_rates, DecayTable::Entry) 
    DEPENDENCY(stop_1_decay_rates, DecayTable::Entry) 
    DEPENDENCY(stop_2_decay_rates, DecayTable::Entry) 
    DEPENDENCY(sbottom_1_decay_rates, DecayTable::Entry) 
    DEPENDENCY(sbottom_2_decay_rates, DecayTable::Entry) 
    DEPENDENCY(sup_L_decay_rates, DecayTable::Entry) 
    DEPENDENCY(sup_R_decay_rates, DecayTable::Entry) 
    DEPENDENCY(sdown_L_decay_rates, DecayTable::Entry) 
    DEPENDENCY(sdown_R_decay_rates, DecayTable::Entry) 
    DEPENDENCY(scharm_L_decay_rates, DecayTable::Entry) 
    DEPENDENCY(scharm_R_decay_rates, DecayTable::Entry) 
    DEPENDENCY(sstrange_L_decay_rates, DecayTable::Entry) 
    DEPENDENCY(sstrange_R_decay_rates, DecayTable::Entry) 
// CsB: code below needs testing
//    DEPENDENCY(selectron_L_decay_rates, DecayTable::Entry) 
//    DEPENDENCY(selectron_R_decay_rates, DecayTable::Entry) 
//    DEPENDENCY(smuon_L_decay_rates, DecayTable::Entry) 
//    DEPENDENCY(smuon_R_decay_rates, DecayTable::Entry) 
//    DEPENDENCY(stau_L_decay_rates, DecayTable::Entry) 
//    DEPENDENCY(stau_R_decay_rates, DecayTable::Entry) 
//    DEPENDENCY(snu_e_decay_rates, DecayTable::Entry) 
//    DEPENDENCY(snu_mu_decay_rates, DecayTable::Entry) 
//    DEPENDENCY(snu_tau_decay_rates, DecayTable::Entry) 
//    DEPENDENCY(chargino_1_decay_rates, DecayTable::Entry) 
//    DEPENDENCY(chargino_2_decay_rates, DecayTable::Entry) 
//    DEPENDENCY(neutralino_1_decay_rates, DecayTable::Entry) 
//    DEPENDENCY(neutralino_2_decay_rates, DecayTable::Entry) 
//    DEPENDENCY(neutralino_3_decay_rates, DecayTable::Entry) 
//    DEPENDENCY(neutralino_4_decay_rates, DecayTable::Entry) 
    #undef FUNCTION

  #undef CAPABILITY

#undef MODULE

// SM decay rate functions
QUICK_FUNCTION(DecayBit, W_minus_decay_rates, NEW_CAPABILITY, W_minus_decays, DecayTable::Entry)
QUICK_FUNCTION(DecayBit, W_plus_decay_rates, NEW_CAPABILITY, W_plus_decays, DecayTable::Entry)
QUICK_FUNCTION(DecayBit, Z_decay_rates, NEW_CAPABILITY, Z_decays, DecayTable::Entry)
QUICK_FUNCTION(DecayBit, t_decay_rates, NEW_CAPABILITY, t_decays, DecayTable::Entry)
QUICK_FUNCTION(DecayBit, tbar_decay_rates, NEW_CAPABILITY, tbar_decays, DecayTable::Entry)
QUICK_FUNCTION(DecayBit, mu_minus_decay_rates, NEW_CAPABILITY, mu_minus_decays, DecayTable::Entry)
QUICK_FUNCTION(DecayBit, mu_plus_decay_rates, NEW_CAPABILITY, mu_plus_decays, DecayTable::Entry)
QUICK_FUNCTION(DecayBit, tau_minus_decay_rates, NEW_CAPABILITY, tau_minus_decays, DecayTable::Entry)
QUICK_FUNCTION(DecayBit, tau_plus_decay_rates, NEW_CAPABILITY, tau_plus_decays, DecayTable::Entry)
QUICK_FUNCTION(DecayBit, pi_0_decay_rates, NEW_CAPABILITY, pi_0_decays, DecayTable::Entry)
QUICK_FUNCTION(DecayBit, pi_minus_decay_rates, NEW_CAPABILITY, pi_minus_decays, DecayTable::Entry)
QUICK_FUNCTION(DecayBit, pi_plus_decay_rates, NEW_CAPABILITY, pi_plus_decays, DecayTable::Entry)
QUICK_FUNCTION(DecayBit, eta_decay_rates, NEW_CAPABILITY, eta_decays, DecayTable::Entry)
QUICK_FUNCTION(DecayBit, rho_0_decay_rates, NEW_CAPABILITY, rho_0_decays, DecayTable::Entry)
QUICK_FUNCTION(DecayBit, rho_minus_decay_rates, NEW_CAPABILITY, rho_minus_decays, DecayTable::Entry)
QUICK_FUNCTION(DecayBit, rho_plus_decay_rates, NEW_CAPABILITY, rho_plus_decays, DecayTable::Entry)
QUICK_FUNCTION(DecayBit, omega_decay_rates, NEW_CAPABILITY, omega_decays, DecayTable::Entry)

#endif /* defined(__DecayBit_rollcall_hpp__) */

