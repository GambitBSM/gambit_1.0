//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  MSSM10batQ model definition. 
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

#ifndef __MSSM10batQ_hpp__
#define __MSSM10batQ_hpp__

// Parent model must be declared first! Include it here to ensure that this happens.
#include "gambit/Models/models/MSSM10batQ.hpp" 

#define MODEL MSSM10batQ
#define PARENT MSSM11atQ
  START_MODEL

  DEFINEPARS(Qin,TanBeta,SignMu,
             mHu2,mHd2,M1,M2,M3)

  DEFINEPARS(mf2)
 
  DEFINEPARS(Ae_3)
  
  DEFINEPARS(Ad_3)

  DEFINEPARS(Au_3)

  INTERPRET_AS_PARENT__FUNCTION(MSSM10batQ_to_MSSM11atQ)

#undef PARENT
#undef MODEL

#endif
