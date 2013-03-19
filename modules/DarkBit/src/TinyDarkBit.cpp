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
//  2013 Jan 18, Feb 04
//
//
//  *********************************************

#include <dlfcn.h>
#include <iostream>
#include <TinyDarkBit_rollcall.hpp>

//PS This will go in some header file eventually
#include <dictionary.hpp>
namespace GAMBIT { extern dict masterDict; }

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

    // void initialize() 
    // {
    //   std::cout << std::endl;
    //   std::cout << "********************************************" << std::endl;
    //   std::cout << "***       Initializing TinyDarkBit       ***" << std::endl;
    //   std::cout << "********************************************" << std::endl;

    //   //TinyDarkBit::myDarkSUSY.initialize();

    //   std::cout << "**********************************************" << std::endl;
    //   std::cout << "*** Initialization of TinyDarkBit complete ***" << std::endl;
    //   std::cout << "**********************************************" << std::endl << std::endl;
    // }

    // The structure of the relic density calculator with some toy
    // functionality
    // TODO:
    // - change types from double to CMSSM definition, SLHA, Wstruct, Weff
    // - initialize darkSUSY
    // - connect to appropriate functions of darkSUSY
    void CMSSM_definition(double &result)
    {
      result = 0.5;
    }
    void SLHA(double &result)
    {
      double CMSSM_definition = (*Dependencies::SLHA::CMSSM_definition)();
      result = CMSSM_definition * 0.5;
    }
    void Wstruct (double &result)               
    {
      double SLHA = (*Dependencies::Wstruct::SLHA)();
      result = SLHA * 2.0;
    }
    void Weff (double &result)
    {
      double SLHA = (*Dependencies::Wstruct::SLHA)();
      result = SLHA * 2.0;
    }
    void omega_DM (double &result)               
    { 
      double Wstruct = (*Dependencies::omega_DM::Wstruct)();
      double Weff = (*Dependencies::omega_DM::Weff)();
      result = Wstruct + Weff; 
    }
  } 
}
