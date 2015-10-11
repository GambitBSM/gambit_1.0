//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  NUHM2 model declaration. 
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

#ifndef __NUHM2_hpp__
#define __NUHM2_hpp__

// Must include models which are targets of translation functions
#include "gambit/Models/models/MSSM30atMGUT.hpp" 

#define MODEL NUHM2
#define PARENT MSSM30atMGUT
  START_MODEL
  DEFINEPARS(M0,M12,mHu2,mHd2,A0,TanBeta,SignMu)
  INTERPRET_AS_PARENT__FUNCTION(NUHM2_to_MSSM30atMGUT)
  // Translation functions defined in NUHM2.cpp
#undef PARENT
#undef MODEL


#endif
