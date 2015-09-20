//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  MSSM9atQ model definition. 
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

#ifndef __MSSM9atQ_hpp__
#define __MSSM9atQ_hpp__

// Parent and friend models must be declared first! Include them here to ensure that this happens.
#include "gambit/Models/models/MSSM10atQ.hpp" 
#include "gambit/Models/models/MSSM10batQ.hpp" 

#define MODEL MSSM9atQ
#define PARENT MSSM10atQ
  START_MODEL

  DEFINEPARS(Qin,TanBeta,SignMu,
             mHu2,mHd2,M1,M2,M3)

  DEFINEPARS(mf2)
 
  DEFINEPARS(Ad_3)

  DEFINEPARS(Au_3)

  INTERPRET_AS_PARENT__FUNCTION(MSSM9atQ_to_MSSM10atQ)
  INTERPRET_AS_X__FUNCTION(MSSM10batQ, MSSM9atQ_to_MSSM10batQ)

#undef PARENT
#undef MODEL

#endif
