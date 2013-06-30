//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
//
//  Functions of module DarkBit
//
//  Put your functions in files like this
//  if you wish to add observables or likelihoods
//  to this module.
//
//  *********************************************
//
//  Authors
//  =======
//
//  (add name and date if you modify)
//
//  Torsten Bringmann (torsten.bringmann@desy.de)
//  2013 Jun
//
//  *********************************************

#include <dlfcn.h>
#include <iostream>
#include <types_DarkBit.hpp>
#include <DarkBit_rollcall.hpp>

//PS This will go into the rollcall system eventually or a header, when we work out how to specify backends
#include "backend-darksusy.hpp"
namespace GAMBIT { namespace DarkBit { extern GAMBIT::Backend::DarkSUSY myDarkSUSY; } }


namespace GAMBIT {

  namespace DarkBit {

    void RD_resonances_SUSY(GAMBIT::types::RDrestype &result)
    {
      GAMBIT::types::RDrestype myres;
      DS_MSPCTM mymspctm;

//      myres.n_res=1;
//      myres.n_thr=0;
      mymspctm=GET_BE_RESULT(RD_resonances_SUSY::DarkSUSY_getmspctm_capability);
      myres.mass_res[1]=mymspctm.mass[42];

      

      result.n_res = 123;
      std::cout << "RD_resonances_SUSY says : mchi =" << myres.mass_res[1] << std::endl; 
    }

    void RD_resonances_test_out(double &result)
    {}

  }
}
