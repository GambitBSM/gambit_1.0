//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  mSUGRAb model definition.  This is the one
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


#include "gambit/Models/model_macros.hpp"
#include "gambit/Models/model_helpers.hpp"
#include "gambit/Logs/log.hpp"

#include "gambit/Models/models/mSUGRAb.hpp"


#define MODEL mSUGRAb 
  void MODEL_NAMESPACE::mSUGRAb_to_VCMSSM (const ModelParameters &myP, ModelParameters &targetP)
  {     
     // Send all parameter values upstream to matching parameters in parent.  That's all folks.
     targetP.setValues(myP);
  }

#undef MODEL


