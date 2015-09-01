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

#ifndef __claw_singleton_hpp__
#define __claw_singleton_hpp__

#include "gambit/Models/models.hpp"


namespace Gambit
{

  namespace Models
  {

    /// Claw accessor function
    ModelFunctorClaw& ModelDB();

  }

}

#endif // defined __claw_singleton_hpp__
