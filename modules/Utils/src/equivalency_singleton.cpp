//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  GAMBIT type equivalency object accessor function.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Pat Scott
///  \date 2014 Oct
///
///  *********************************************

#include "gambit/Utils/equivalency_singleton.hpp"


namespace Gambit
{

  namespace Utils
  {

    /// Type equivalency accessor function
    type_equivalency& typeEquivalencies()
    {
      static type_equivalency local;
      return local;
    }

  }

}

