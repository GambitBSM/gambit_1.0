//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
//
//  Rollcall header for module ExampleBit_A
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

#ifndef __ExampleBit_A_rollcall_hpp__
#define __ExampleBit_A_rollcall_hpp__

#include "observable.hpp"
#include "free_current_module.hpp"

#define CURRENT_MODULE ExampleBit_A
#define CONTENTS(OBS_OR_LIKE, DEPENDENCY)                           /* Give the module contents to be registered.   */ \
  /* OBS_OR_LIKE(like_or_obs_name, return_type)                     /* To add more functions to this module, add    */ \
  /* DEPENDENCY(like_or_obs_name, dependency_name, dependency_type) /*  new commands to this macro, in this form.   */ \
  OBS_OR_LIKE(nevents, double)                /* Observable: Number of events in some hypothetical process          */ \
   DEPENDENCY(nevents, xsection, double)      /* Dependencies: Number of events depends on  - cross-section         */ \
   DEPENDENCY(nevents, charge, double)        /*                                            - charge                */ \
  OBS_OR_LIKE(nevents_like, double)           /* Likelihood: Likelihood of seeing number of events                  */ \
   DEPENDENCY(nevents_like, nevents, double)  /* Dependency: Likelihood calculation requires number of events       */ \
  OBS_OR_LIKE(authors_dogs_name, std::string) /* Observable: name of the author of ExampleBitA's dog                */ \
                                              /* Dog is independent.                                                */ \

#include "complete_module.hpp"

#endif /* defined(__ExampleBit_A_rollcall_hpp__) */

