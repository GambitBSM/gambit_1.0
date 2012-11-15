//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
//
//  Rollcall header for module ExampleBit_B
//
//  Compile-time registration of available obser-
//  vables and likelihoods, as well as their
//  dependencies.
//
//  Add to this if you want to add an observable
//  or likelihood to this module.
//
//  *********************************************
//
//  Authors
//  =======
//
//  (add name and date if you modify)
//
//  Pat Scott
//  Nov 15 2012
//
//  *********************************************

#ifndef __ExampleBit_B_rollcall_hpp__
#define __ExampleBit_B_rollcall_hpp__

#include "observable.hpp"

// CREATE_OBS_OR_LIKE(module, like_or_obs_name, return_type)
// SET_DEPENDENCY(module, like_or_obs_name, dependency_name, dependency_type)

// Observable: cross-section for some hypothetical process 
CREATE_OBS_OR_LIKE(ExampleBit_B, xsection, double)

// Observable: number of events in some hypothetical process after cuts
CREATE_OBS_OR_LIKE(ExampleBit_B, nevents_postcuts, int)
// Dependency: post-cut number of events requires pre-cut number of events
SET_DEPENDENCY(ExampleBit_B, nevents_postcuts, nevents, double)

// Observable: name of the author of ExampleBit_B's dog
CREATE_OBS_OR_LIKE(ExampleBit_B, authors_dogs_name, std::string)
// Dog is independent.

// Observable: number of events, defined as an integer just to annoy ExampleBit_A
CREATE_OBS_OR_LIKE(ExampleBit_B, nevents, int)

#endif /* defined(__ExampleBit_B_rollcall_hpp__) */

// Might want to allow specification of LaTeX labels for observables like this:
// CREATE_OBS_OR_LIKE(module, like_or_obs_name, LaTeX_label, return_type)
// SET_DEPENDENCY(module, like_or_obs_name, dependency_name, dependency_type)


