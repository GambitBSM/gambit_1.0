//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  GAMBIT model claw object accessor function.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Pat Scott
///  \date 2014 Aug
///
///  *********************************************

#include "gambit/Models/claw_singleton.hpp"


namespace Gambit
{

  namespace Models
  {

    /// Claw accessor function
    ModelFunctorClaw& ModelDB()
    {
      static ModelFunctorClaw local;
      return local;
    }

  }

}

