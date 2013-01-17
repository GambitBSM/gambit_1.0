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
//  Nov 15++ 2012
//
//  *********************************************

#ifndef __TinyDarkBit_rollcall_hpp__
#define __TinyDarkBit_rollcall_hpp__

#define CONTENTS_TinyDarkBit(DEF, OBS_OR_LIKE, DEPENDENCY)              /* Give the module contents to be registered.   */ \
  /* OBS_OR_LIKE(DEF, like_or_obs_name, return_type)                     /* To add more functions to this module, add    */ \
  /* DEPENDENCY(DEF, like_or_obs_name, dependency_name, dependency_type) /*  new commands to this macro, in this form.   */ \
  OBS_OR_LIKE(DEF, omega_DM, double)       \
   DEPENDENCY(DEF, omega_DM, par1, double) \
   DEPENDENCY(DEF, omega_DM, par2, double) \
   DEPENDENCY(DEF, omega_DM, par3, double) \
   DEPENDENCY(DEF, omega_DM, par4, double) \
   DEPENDENCY(DEF, omega_DM, par5, double) \

COMPLETE(TinyDarkBit)

namespace TinyDarkBit { void initialize (); }

#endif /* defined(__TinyDarkBit_rollcall_hpp__) */
