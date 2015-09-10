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

// Explicitly defined hadronic matrix elements
#define MODEL nuclear_params_fnq
  START_MODEL
  DEFINEPARS(fpd, fpu, fps, fnd, fnu, fns)
  DEFINEPARS(deltad, deltau, deltas)
#undef MODEL

// sigma0 and SigmaPiN used to calculate hadronic matrix elements
#define MODEL nuclear_params_sigma0_SigmaPiN
#define PARENT nuclear_params_fnq
  START_MODEL
  DEFINEPARS(sigma0, SigmaPiN)
  DEFINEPARS(deltad, deltau, deltas)
  INTERPRET_AS_PARENT__FUNCTION(sigma0_SigmaPiN_to_fnq)
  INTERPRET_AS_PARENT__DEPENDENCY(SMINPUTS, SMInputs)
#undef PARENT
#undef MODEL

// sigmas and SigmaPiN used to calculate hadronic matrix elements
#define MODEL nuclear_params_sigmas_SigmaPiN
#define PARENT nuclear_params_sigma0_SigmaPiN
  START_MODEL
  DEFINEPARS(sigmas, SigmaPiN)
  DEFINEPARS(deltad, deltau, deltas)
  INTERPRET_AS_PARENT__FUNCTION(sigmas_to_sigma0)
  INTERPRET_AS_PARENT__DEPENDENCY(SMINPUTS, SMInputs)
#undef PARENT
#undef MODEL

#endif /* __nuclear_params_hpp__ */
