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

#include "backend_singleton.hpp"


namespace Gambit
{

  namespace Backends
  {

    /// Backend info accessor function
    backend_info& backendInfo()
    {
      static backend_info local;
      return local;
    }

  }

}

