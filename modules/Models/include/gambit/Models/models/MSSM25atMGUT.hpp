//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
//
//  MSSM25atMGUT model definition
//
//  *********************************************
//
//  Authors
//  =======
//
//  (add name and date if you modify)
//
//  Ben Farmer
//  2015 Jan
//
//  *********************************************

#ifndef __MSSM25atMGUT_hpp__
#define __MSSM25atMGUT_hpp__

#include "gambit/Models/models/MSSM78atMGUT.hpp" // Parent model must be declared first! Include it here to ensure that this happens.

/// FlexibleSUSY compatible general (78 parameters plus sign) MSSM parameterisation
#define MODEL MSSM25atMGUT
#define PARENT MSSM78atMGUT
  START_MODEL

  DEFINEPARS(TanBeta,SignMu,
             mHu2,mHd2,M1,M2,M3)

  DEFINEPARS(mq2_1, mq2_2, mq2_3)
 
  DEFINEPARS(ml2_1, ml2_2, ml2_3)

  DEFINEPARS(md2_1, md2_2, md2_3)

  DEFINEPARS(mu2_1, mu2_2, mu2_3)

  DEFINEPARS(me2_1, me2_2, me2_3)

  DEFINEPARS(Ae_12, Ae_3)
  
  DEFINEPARS(Ad_3)

  DEFINEPARS(Au_3)

  INTERPRET_AS_PARENT__FUNCTION(MSSM25atMGUT_to_MSSM78atMGUT)
  //INTERPRET_AS_X__FUNCTION(MSSM25atQ, MSSM25atMGUT_to_MSSM25atQ)  // Could add this if we like

#undef PARENT
#undef MODEL

#endif
