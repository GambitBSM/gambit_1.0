//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
//
//  Scalar singlet dark matter with running mass
//  and quartic coupling
//  *********************************************
//
//  Authors
//  =======
//
//  (add name and date if you modify)
//  Christoph Weniger
//  2014 January
//
//  James McKay
//  2015 September
//
//  *********************************************

#ifndef __SingletDM_running_hpp__
#define __SingletDM_running_hpp__

#include "gambit/Models/models/SingletDMZ3.hpp"


#define MODEL SingletDM_running
#define PARENT SingletDMZ3
  START_MODEL
  INTERPRET_AS_PARENT_FUNCTION(SingletDM_running_to_SingletDMZ3)
  DEFINEPARS(mS, lambda_hS, lambda_S)
#undef PARENT

#undef MODEL

#endif
