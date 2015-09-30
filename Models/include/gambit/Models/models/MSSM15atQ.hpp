//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  MSSM15atQ model definition. 
///  This model matches the one explored in 
///  arXiv:1405.0622.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Pat Scott  
///          (p.scott@imperial.ac.uk)
///  \date 2015 Sep
///
///  *********************************************

#ifndef __MSSM15atQ_hpp__
#define __MSSM15atQ_hpp__

// Parent model must be declared first! Include it here to ensure that this happens.
#include "gambit/Models/models/MSSM16atQ.hpp" 

#define MODEL MSSM15atQ
#define PARENT MSSM16atQ
  START_MODEL

  DEFINEPARS(Qin,TanBeta,SignMu,
             mHu2,mHd2,M1,M2,M3)

  DEFINEPARS(mq2_12, mq2_3, mu2_3, md2_3)
 
  DEFINEPARS(ml2_12, ml2_3, me2_3)

  DEFINEPARS(A0, At)

  INTERPRET_AS_PARENT__FUNCTION(MSSM15atQ_to_MSSM16atQ)

#undef PARENT
#undef MODEL

#endif
