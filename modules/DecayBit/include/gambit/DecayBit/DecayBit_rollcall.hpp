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
///  \date 2015 Jan,Feb
///
///  *********************************************


#ifndef __DecayBit_rollcall_hpp__
#define __DecayBit_rollcall_hpp__

#include "DecayBit_types.hpp"

#define MODULE DecayBit
START_MODULE

// CsB >
#define CAPABILITY testSUSYBRs            // A physical observable or likelihood that this module can calculate.  There may be one or more 
START_CAPABILITY                          //  functions in this module that can calculate this particular thing in different ways.

  #define FUNCTION decayTest              // Name of an observable function: floating-point number of events in some hypothetical process
  START_FUNCTION(double)                  // Declare that this function calculates the nevents observable as a double precision variable
  BACKEND_REQ(cb_sd_top2body, (), sd_top2body_type)
  #undef FUNCTION
	
#undef CAPABILITY
// CsB <

  #define CAPABILITY Higgs_decay_rates
  START_CAPABILITY

    #define FUNCTION SMHiggs_decays
    START_FUNCTION(DecayTable::Entry)
    DEPENDENCY(SM_spectrum, Spectrum*) 
    #undef FUNCTION

    #define FUNCTION MSSMHiggs_decays
    START_FUNCTION(DecayTable::Entry)
    DEPENDENCY(MSSM_spectrum, Spectrum*) 
    ALLOW_MODELS(MSSM78atQ)
    #undef FUNCTION

  #undef CAPABILITY


  #define CAPABILITY mu_decay_rates
  START_CAPABILITY

    #define FUNCTION mu_decays
    START_FUNCTION(DecayTable::Entry)
    DEPENDENCY(SM_spectrum, Spectrum*) 
    #undef FUNCTION

  #undef CAPABILITY


  #define CAPABILITY BF_Htobbbar
  START_CAPABILITY

    #define FUNCTION BF_H_to_bbbar
    START_FUNCTION(double)
    DEPENDENCY(Higgs_decay_rates, DecayTable::Entry) 
    #undef FUNCTION

  #undef CAPABILITY


  #define CAPABILITY decay_rates
  START_CAPABILITY

    #define FUNCTION all_decays
    START_FUNCTION(DecayTable)
    DEPENDENCY(Higgs_decay_rates, DecayTable::Entry) 
    DEPENDENCY(mu_decay_rates, DecayTable::Entry) 
    #undef FUNCTION

  #undef CAPABILITY


#undef MODULE

#endif /* defined(__DecayBit_rollcall_hpp__) */

