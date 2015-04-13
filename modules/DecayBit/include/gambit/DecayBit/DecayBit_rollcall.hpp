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
///  \date 2015 Jan-Mar
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
    BACKEND_REQ(sdecay, (), void, ())                 // Register the backend function "sdecay"
    BACKEND_REQ(cb_sd_top2body, (), sd_top2body_type)
    BACKEND_REQ(cb_sd_topwidth, (), sd_topwidth_type)
    #undef FUNCTION
	
  #undef CAPABILITY

  #define CAPABILITY Higgs_decay_rates
  START_CAPABILITY

    #define FUNCTION SMHiggs_decays
    START_FUNCTION(DecayTable::Entry)
    DEPENDENCY(SM_spectrum, Spectrum*) 
    #undef FUNCTION

    #define FUNCTION MSSM_h0_1_decays
    START_FUNCTION(DecayTable::Entry)
    BACKEND_REQ(sdecay, (),void, ())
    BACKEND_REQ(cb_widthhl_hdec, (), widthhl_hdec_type)
    BACKEND_REQ(cb_wisusy_hdec, (), wisusy_hdec_type)
    BACKEND_REQ(cb_wisfer_hdec, (), wisfer_hdec_type)
    ALLOW_MODELS(MSSM78atQ)
    #undef FUNCTION

  #undef CAPABILITY
  
  #define CAPABILITY A0_decay_rates
  START_CAPABILITY

    #define FUNCTION A_decays
    START_FUNCTION(DecayTable::Entry)
    ALLOW_MODELS(MSSM78atQ)
    BACKEND_REQ(sdecay, (), void, ())
    BACKEND_REQ(cb_widtha_hdec, (), widtha_hdec_type)
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
    // The following are only relevant for the MSSM, and should eventually be made model-conditional dependencies
    DEPENDENCY(A0_decay_rates, DecayTable::Entry) 
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

