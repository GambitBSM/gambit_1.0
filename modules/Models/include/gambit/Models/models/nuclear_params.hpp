//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
//
//  Nuclear parameters model definitions
//
//  *********************************************
//
//  Authors
//  =======
//
//  (add name and date if you modify)
//
//  Jonathan Cornell
//  2015 March
//
//  *********************************************

#ifndef __nuclear_params_hpp__
#define __nuclear_params_hpp__

#define MODEL nuclear_params
  START_MODEL
  DEFINEPARS(sigma0, SigmaPiN)
  DEFINEPARS(deltau, deltad, deltas)
#undef MODEL

#endif /* __nuclear_params_hpp__ */
