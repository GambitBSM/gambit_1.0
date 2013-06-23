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
//  Christoph Weniger (c.weniger@uva.nl)
//  2013 Jan, Jun
//  *********************************************

#ifndef __TinyDarkBit_rollcall_hpp__
#define __TinyDarkBit_rollcall_hpp__

#include <module_macros.hpp>
#include <types_DarkBit.hpp>

//PS This will go into the rollcall system eventually, when the darksusy backend is converted to the rollcall style
#include "backend-darksusy.hpp"
#ifdef IN_CORE
  namespace GAMBIT { namespace TinyDarkBit { GAMBIT::Backend::DarkSUSY myDarkSUSY; } }
#else
  namespace GAMBIT { namespace TinyDarkBit { extern GAMBIT::Backend::DarkSUSY myDarkSUSY; } }
#endif

#define MODULE TinyDarkBit
START_MODULE

  #define CAPABILITY initialise
  START_CAPABILITY
    #define FUNCTION initDS
    START_FUNCTION(int)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY CMSSM_definition
  START_CAPABILITY 
    #define FUNCTION CMSSM_definition 
    START_FUNCTION(double)
    DEPENDENCY(m0, double)
    DEPENDENCY(m1, double)
    #undef FUNCTION
  #undef CAPABILITY
  
  #define CAPABILITY SLHA
  START_CAPABILITY 
    #define FUNCTION SLHA
    START_FUNCTION(double)
    DEPENDENCY(CMSSM_definition, double)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY Wstruct
  START_CAPABILITY 
    #define FUNCTION Wstruct
    START_FUNCTION(GAMBIT::types::Wstruct)
    DEPENDENCY(SLHA, double) 
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY Weff
  START_CAPABILITY 
    #define FUNCTION Weff
    START_FUNCTION(double)
    DEPENDENCY(SLHA, double) 
      #define BACKEND_REQ LibFirst_returnResult_capability
      START_BACKEND_REQ(double)
      BACKEND_OPTION(LibFirst, 1.0)
      #undef BACKEND_REQ
    #undef FUNCTION
    #define FUNCTION Weff_alt1
    START_FUNCTION(double)
    #undef FUNCTION
  #undef CAPABILITY

  #define CAPABILITY omega_DM
  START_CAPABILITY 
    #define FUNCTION omega_DM
    START_FUNCTION(double)
    DEPENDENCY(Weff, double)
    DEPENDENCY(Wstruct, GAMBIT::types::Wstruct)
    #undef FUNCTION
  #undef CAPABILITY

#undef MODULE

#endif /* defined(__TinyDarkBit_rollcall_hpp__) */

