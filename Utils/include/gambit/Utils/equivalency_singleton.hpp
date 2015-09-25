//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  GAMBIT backend info object accessor function.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Pat Scott
///  \date 2014 Aug
///
///  *********************************************

#ifndef __equivalency_singleton_hpp__
#define __equivalency_singleton_hpp__

#include "gambit/Utils/type_equivalency.hpp"


namespace Gambit
{

  namespace Utils
  {

    /// Backend info accessor function
    type_equivalency& typeEquivalencies();

  }

}


#endif // defined __equivalency_singleton_hpp__
