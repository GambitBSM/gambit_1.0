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

//PS This will go into the rollcall system eventually, when we work out how to specify backends
#include "backend-darksusy.hpp"
namespace GAMBIT { namespace TinyDarkBit { GAMBIT::Backend::DarkSUSY myDarkSUSY; } }

#define MODULE TinyDarkBit
START_MODULE

  #define FUNCTION omega_DM               
   START_FUNCTION
   RETURN_TYPE(double)                     
   DEPENDENCY(par1, double) 
   DEPENDENCY(par2, double) 
   DEPENDENCY(par3, double) 
   DEPENDENCY(par4, double) 
   DEPENDENCY(par5, double) 
  #undef FUNCTION

END_MODULE
#undef MODULE

#endif /* defined(__TinyDarkBit_rollcall_hpp__) */
