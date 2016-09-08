//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Definitions of types
///  for the HiggsBounds backend.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author James McKay
///          (j.mckay14@imperial.ac.uk)
///  \date 2016 Aug
///
///  *********************************************
#include "gambit/Utils/util_types.hpp"

#ifndef __Lilith_types_hpp__
#define __Lilith_types_hpp__

namespace Gambit
{

  
  struct lilith_ModelParameters
  {
    
      double mh;
      double CU;
      double CD;
      double CV;
      double CGa;
      double Cg;
      double BRinv;
      double BRund;
  };
  
  
}

#endif
