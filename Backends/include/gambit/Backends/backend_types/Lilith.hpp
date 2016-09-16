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
    
      // signal strengths
    
      // allowed production and decay channels (page 31 ArXiv:1502.04138)
      std::vector<std::string> prod = {"ggH","WH","ZH","VBF","ttH"};
      std::vector<std::string> decay = {"gammagamma","Zgamma","WW","ZZ","bb","cc","tautau"};
    
      // map to store each combination in
      std::map<std::pair<std::string,std::string>, double> mu;
  };
  
  
}

#endif
