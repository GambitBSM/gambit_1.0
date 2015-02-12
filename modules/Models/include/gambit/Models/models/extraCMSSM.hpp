//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
//
//  toy CMSSM specialisation
//
//  *********************************************
//
//  Authors
//  =======
//
//  (add name and date if you modify)
//
//  Ben Farmer
//  2013 May, ???, 2014 Mar
//  Pat Scott
//  2013 Sep
//
//  *********************************************

#ifndef __extraCMSSM_hpp__
#define __extraCMSSM_hpp__

#include "gambit/Models/models/CMSSM.hpp"

// Extra-constrained CMSSM, to demo interpret_as_parent
// If we can translate to a model which already has translation functions to 
// the spectrum-generator compatible parameters, then we only need the one
// function to translate to that parent model.
#define MODEL extraCMSSM
  #define PARENT CMSSM
  START_MODEL
  DEFINEPARS(M0,M12,tanb,signmu)

  INTERPRET_AS_PARENT__FUNCTION(extraCMSSM_to_CMSSM)

  #undef PARENT
#undef MODEL


#endif
