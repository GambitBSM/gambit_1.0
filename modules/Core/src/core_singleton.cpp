//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  GAMBIT Core object accessor function.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Pat Scott
///  \date 2014 Aug
///
///  *********************************************

#include "core_singleton.hpp"
#include "claw_singleton.hpp"
#include "backend_singleton.hpp"

namespace Gambit
{

  /// Core accessor function
  gambit_core& Core()
  {
    static gambit_core local(Models::ModelDB(), Backends::backendInfo());
    return local;
  }

}
