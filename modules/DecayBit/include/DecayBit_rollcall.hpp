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
///  \date 2015 Jan
///
///  *********************************************


#ifndef __DecayBit_rollcall_hpp__
#define __DecayBit_rollcall_hpp__

#include "DecayBit_types.hpp"

#define MODULE DecayBit
START_MODULE

  #define CAPABILITY testSUSYBRs            // A physical observable or likelihood that this module can calculate.  There may be one or more 
  START_CAPABILITY                          //  functions in this module that can calculate this particular thing in different ways.

    #define FUNCTION decayTest              // Name of an observable function: floating-point number of events in some hypothetical process
    START_FUNCTION(double)                  // Declare that this function calculates the nevents observable as a double precision variable
    BACKEND_REQ(top2body, (), top2body_CB_type)
    #undef FUNCTION
	
  #undef CAPABILITY

#undef MODULE

#endif /* defined(__DecayBit_rollcall_hpp__) */

