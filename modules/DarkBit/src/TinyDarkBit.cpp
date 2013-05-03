//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
//
//  Functions of module TinyDarkBit
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
//  Christoph Weniger
//  Mar 19 2013
//
//  Pat Scott
//  2013 Jan, Feb, May
//
//
//  *********************************************

#include <dlfcn.h>
#include <iostream>
#include <TinyDarkBit_rollcall.hpp>
#include <types_DarkBit.hpp>

//PS This will go in some header file eventually
// #include <dictionary.hpp>
// namespace GAMBIT { extern dict masterDict; }

//PS This will go into the rollcall system eventually or a header, when we work out how to specify backends
#include "backend-darksusy.hpp"
namespace GAMBIT { namespace TinyDarkBit { extern GAMBIT::Backend::DarkSUSY myDarkSUSY; } }


namespace GAMBIT {

  namespace TinyDarkBit {

    // void omega_DM (double &result)
    // {
    //   double m1 = masterDict.get<double>("m1");
    //   double m2 = masterDict.get<double>("m2");
    //   double m3 = masterDict.get<double>("m3");
    //   double mu = masterDict.get<double>("mu");
    //   double ma = masterDict.get<double>("ma");
    //   double tanbe = masterDict.get<double>("tanbe");
    //   myDarkSUSY.model(m1, m2, m3, mu, ma, tanbe);
    //   result = myDarkSUSY.rdomega();
    // }

    void initDS(int &result)
    {
      std::cout << std::endl;
      std::cout << "********************************************" << std::endl;
      std::cout << "***       Initializing DarkSUSY          ***" << std::endl;
      std::cout << "********************************************" << std::endl;

      // Example for how to run backend functions and retrieve results
      TinyDarkBit::myDarkSUSY.initialize();
      TinyDarkBit::myDarkSUSY.model(500, 1000, 3500, 400, 1000, 10);
      std::cout << "The relic density is: " << TinyDarkBit::myDarkSUSY.rdomega() << std::endl;

      std::cout << "**********************************************" << std::endl;
      std::cout << "*** Initialization of DarkSUSY complete    ***" << std::endl;
      std::cout << "**********************************************" << std::endl << std::endl;
    }

    // The structure of the relic density calculator with some toy
    // functionality
    // TODO:
    // - change types from double to CMSSM definition, SLHA, Wstruct, Weff
    // - connect to appropriate functions of darkSUSY
    void CMSSM_definition(double &result)
    {
      result = 0.5;
    }
    void SLHA(double &result)
    {
      double CMSSM_definition = GET_DEP(SLHA::CMSSM_definition);
      result = CMSSM_definition * 0.5;
    }
    void Wstruct (GAMBIT::types::Wstruct &result)
    {
      double SLHA = GET_DEP(Wstruct::SLHA);
      result.valA = SLHA * 0.5;
      result.valB = SLHA * 1.5;
    }
    void Weff (double &result)
    {
      double SLHA = GET_DEP(Weff::SLHA);
      result = SLHA * 2.0;
    }
    void omega_DM (double &result)
    {
      GAMBIT::types::Wstruct Wstruct = GET_DEP(omega_DM::Wstruct);
      double Weff = GET_DEP(omega_DM::Weff);
      result = Wstruct.valA + Wstruct.valB + Weff;
    }
  }
}
