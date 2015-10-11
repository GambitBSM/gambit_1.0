//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  mSUGRA model declaration.  Basically just an
///  alias for the CMSSM.  See mSUGRA_nonstandard
///  for a more constrained definition that some
///  people prefer. 
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


#ifndef __mSUGRA_hpp__
#define __mSUGRA_hpp__

// Must include models which are targets of translation functions
#include "gambit/Models/models/CMSSM.hpp" 

#define MODEL mSUGRA
#define PARENT CMSSM
  START_MODEL
  DEFINEPARS(M0,M12,A0,TanBeta,SignMu)
  INTERPRET_AS_PARENT__FUNCTION(mSUGRA_to_CMSSM)
  // Translation functions defined in mSUGRA.cpp
#undef PARENT
#undef MODEL


#endif
