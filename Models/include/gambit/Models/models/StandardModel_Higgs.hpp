//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///  
///  Standard Model Higgs sector parameters
///  This is a work in progress. 
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///
///  \author Ben Farmer
///          (benjamin.farmer@fysik.su.se)
///    \date 2015 May
///
///  \author Jonathan Cornell
///          (jmcornell@gmail.com)
///    \date 2015 September
///  
///  *********************************************


#ifndef __StandardModel_Higgs_hpp__
#define __StandardModel_Higgs_hpp__

#define MODEL StandardModel_HiggsSector
  START_MODEL

  DEFINEPARS(mH, vev)

#undef MODEL

#define MODEL StandardModel_Higgs
#define PARENT StandardModel_HiggsSector
  START_MODEL

  DEFINEPARS(mH)
  INTERPRET_AS_PARENT__FUNCTION(HiggsVEV)
  INTERPRET_AS_PARENT__DEPENDENCY(SMINPUTS, SMInputs)

#undef PARENT
#undef MODEL

#endif /* __StandardModel_Higgs_hpp__ */
