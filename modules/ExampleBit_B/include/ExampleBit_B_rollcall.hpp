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
//  Nov 15++ 2012
//
//  *********************************************

#ifndef __ExampleBit_B_rollcall_hpp__
#define __ExampleBit_B_rollcall_hpp__

#define CURRENT_MODULE ExampleBit_B
#define CONTENTS_ExampleBit_B(DEF, OBS_OR_LIKE, DEPENDENCY)                           /* Give the module contents to be registered.   */ \
  /* OBS_OR_LIKE(like_or_obs_name, return_type)                          /* To add more functions to this module, add    */ \
  /* DEPENDENCY(like_or_obs_name, dependency_name, dependency_type)      /*  new commands to this macro, in this form.   */ \
  OBS_OR_LIKE(DEF, xsection, double)                          /* Observable: cross-section for some hypothetical process */ \
  OBS_OR_LIKE(DEF, nevents_postcuts, int)                     /* Observable: number of events for process after cuts     */ \
   DEPENDENCY(DEF, nevents_postcuts, nevents, double)         /* Dependency: post-cut events needs pre-cut events        */ \
  OBS_OR_LIKE(DEF, authors_dogs_name, std::string)            /* Observable: name of the author of ExampleBit_B's dog    */ \
  OBS_OR_LIKE(DEF, nevents, int)               /* Observable: num. events, defined as integer just to annoy ExampleBit_A */ \

COMPLETE(ExampleBit_B)

#endif /* defined(__ExampleBit_B_rollcall_hpp__) */

// Might want to later allow specification of LaTeX labels for observables like this:
// OBS_OR_LIKE(like_or_obs_name, LaTeX_label, return_type)


