//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  mSUGRAb model declaration.  This is the one
///  most people do not use, but some small number
///  of people are quite vocal about it being the 
///  'one true' mSUGRA.  Note that the
///  additional condition that m_chi0(pole) < m0
///  must be imposed by the spectrum generator in
///  this model in order to distinguish it from
///  the VCMSSM.  This is because the gravitino
///  mass is m_3/2 = m0 in this model, so if 
///  m_chi0(pole) > m0 there is no neutralino LSP.
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


#ifndef __mSUGRAb_hpp__
#define __mSUGRAb_hpp__

// Must include models which are targets of translation functions
#include "gambit/Models/models/VCMSSM.hpp" 

#define MODEL mSUGRAb
#define PARENT VCMSSM
  START_MODEL
  DEFINEPARS(M0,M12,A0)
  INTERPRET_AS_PARENT__FUNCTION(mSUGRAb_VCMSSM)
  // Translation functions defined in mSUGRAb.cpp
#undef PARENT
#undef MODEL


#endif
