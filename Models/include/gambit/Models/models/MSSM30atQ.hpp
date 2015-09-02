///  GAMBIT: Global and Modular BSM Inference Tool
///  *********************************************
///
///  MSSM30atQ model definition
///
///  Specialisation of MSSM78atQ with all 
///  off-diagonal m and A terms set to zero.
///  *********************************************
///
///  Authors
///  =======
///
///  (add name and date if you modify)
///
///  \author Ben Farmer
///          (ben.farmer@gmail.com)
///  \date 2015 Aug
///
///  *********************************************

#ifndef __MSSM30atQ_hpp__
#define __MSSM30atQ_hpp__

#include "gambit/Models/models/MSSM78atQ.hpp" // Parent model must be declared first! Include it here to ensure that this happens.

/// FlexibleSUSY compatible general (78 parameters plus sign) MSSM parameterisation
#define MODEL MSSM30atQ
#define PARENT MSSM78atQ
  START_MODEL

  DEFINEPARS(Qin,TanBeta,SignMu,
             mHu2,mHd2,M1,M2,M3)

  DEFINEPARS(mq2_1, mq2_2, mq2_3)
 
  DEFINEPARS(ml2_1, ml2_2, ml2_3)

  DEFINEPARS(md2_1, md2_2, md2_3)

  DEFINEPARS(mu2_1, mu2_2, mu2_3)

  DEFINEPARS(me2_1, me2_2, me2_3)

  DEFINEPARS(Ae_1, Ae_2, Ae_3)
  
  DEFINEPARS(Ad_1, Ad_2, Ad_3)

  DEFINEPARS(Au_1, Au_2, Au_3)

  INTERPRET_AS_PARENT__FUNCTION(MSSM30atQ_to_MSSM78atQ)

#undef PARENT
#undef MODEL

#endif
