//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
//
//  MSSM25 model definition
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

#ifndef __MSSM25_hpp__
#define __MSSM25_hpp__

/// FlexibleSUSY compatible general (78 parameters plus sign) MSSM parameterisation
#define MODEL MSSM25
#define PARENT MSSM78
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

  //INTERPRET_AS_PARENT__FUNCTION(MSSM25_to_MSSM78)
  INTERPRET_AS_X__FUNCTION(MSSM78, MSSM25_to_MSSM78)

#undef PARENT
#undef MODEL

#endif
