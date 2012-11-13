//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
//
//  Rollcall header for module ExampleBit_A
//
//  Compile-time registration of available obser-
//  vables and likelihoods, as well as their
//  dependencies.
//
//  Add to this if you want to add a observable
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
//  Nov 10 2012
//
//  *********************************************


#include"observable.hpp"

// CREATE_OBS_OR_LIKE(module, like_or_obs_name, LaTeX_label, return_type)
// SET_DEPENDENCY(module, like_or_obs_name, dependency_name, dependency_type)

// Observable: Number of events in some hypothetical process 
CREATE_OBS_OR_LIKE(ExampleBit_A, nevents, double)
// Dependencies: Number of events depends on cross-section and charge
SET_DEPENDENCY(ExampleBit_A, nevents, xsection, double)
SET_DEPENDENCY(ExampleBit_A, nevents, charge, double)

// Likelihood: Likelihood of seeing number of events
CREATE_OBS_OR_LIKE(ExampleBit_A, nevents_like, double)
// Dependency: Likelihood calcualtion requires number of events
SET_DEPENDENCY(ExampleBit_A, nevents_like, nevents, double)

// Observable: name of the author of ExampleBitA's dog
CREATE_OBS_OR_LIKE(ExampleBit_A, authors_dogs_name, std::string)
// Dog is independent.
