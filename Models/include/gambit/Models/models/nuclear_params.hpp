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

// sigma0 and sigmaL used to calculate hadronic matrix elements
#define MODEL nuclear_params_sigma0_sigmaL
#define PARENT nuclear_params_fnq
  START_MODEL
  DEFINEPARS(sigma0, sigmaL)
  DEFINEPARS(deltad, deltau, deltas)
  INTERPRET_AS_PARENT__FUNCTION(sigma0_sigmaL_to_fnq)
  INTERPRET_AS_PARENT__DEPENDENCY(SMINPUTS, SMInputs)
#undef PARENT
#undef MODEL

// sigmas and sigmaL used to calculate hadronic matrix elements
#define MODEL nuclear_params_sigmas_sigmaL
#define PARENT nuclear_params_sigma0_sigmaL
  START_MODEL
  DEFINEPARS(sigmas, sigmaL)
  DEFINEPARS(deltad, deltau, deltas)
  INTERPRET_AS_PARENT__FUNCTION(sigmas_to_sigma0)
  INTERPRET_AS_PARENT__DEPENDENCY(SMINPUTS, SMInputs)
#undef PARENT
#undef MODEL

#endif /* __nuclear_params_hpp__ */
