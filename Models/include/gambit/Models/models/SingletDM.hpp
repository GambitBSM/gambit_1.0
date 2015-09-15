//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
//
//  Singlet DM
//
//  *********************************************
//
//  Authors
//  =======
//
//  (add name and date if you modify)
//
//  Christoph Weniger
//  2014 January
//
//  James McKay
//  2015 September
//  *********************************************

#ifndef __SingletDM_hpp__
#define __SingletDM_hpp__

#include "gambit/Models/models/SingletDM_running.hpp"

#define MODEL SingletDM
#define PARENT SingletDM_running
  START_MODEL
  // translate this model into SingletDM_running
  INTERPRET_AS_PARENT__FUNCTION(SingletDM_to_SingletDM_running)
  // if this transformation depends on the spectrum uncomment following line
  // INTERPRET_AS_PARENT_DEPENDENCY(SingletDM_spectrum, const Spectrum*)


  DEFINEPARS(mS, lambda_hS)
#undef PARENT
#undef MODEL

#endif
