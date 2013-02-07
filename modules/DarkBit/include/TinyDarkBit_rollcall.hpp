//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
//
//  Rollcall header for module TinyDarkBit
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
//  2013 Jan, Feb 04
//
//  Christoph Weniger
//  2013 Jan
//  *********************************************

#ifndef __TinyDarkBit_rollcall_hpp__
#define __TinyDarkBit_rollcall_hpp__

#include <observable.hpp>

//PS This will go into the rollcall system eventually, when we work out how to specify backends
#include "backend-darksusy.hpp"
#ifdef IN_CORE
  namespace GAMBIT { namespace TinyDarkBit { GAMBIT::Backend::DarkSUSY myDarkSUSY; } }
#else
  namespace GAMBIT { namespace TinyDarkBit { extern GAMBIT::Backend::DarkSUSY myDarkSUSY; } }
#endif

#define MODULE TinyDarkBit
START_MODULE

  #define FUNCTION omega_DM               
   START_FUNCTION(double)                     
   DEPENDENCY(par1, double) 
   DEPENDENCY(par2, double) 
   DEPENDENCY(par3, double) 
   DEPENDENCY(par4, double) 
   DEPENDENCY(par5, double) 
  #undef FUNCTION

#undef MODULE

#endif /* defined(__TinyDarkBit_rollcall_hpp__) */
