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
//  Jan 17++ 2013
//
//  Pat Scott
//  2013 Jan 18, Feb 04
//
//
//  *********************************************

#include <dlfcn.h>
#include <iostream>

//PS This will go in some header file eventually
#include <dictionary.hpp>
namespace GAMBIT { extern dict masterDict; }

//PS This will go into the rollcall system eventually or a header, when we work out how to specify backends
#include "backend-darksusy.hpp"
namespace GAMBIT { namespace TinyDarkBit { extern GAMBIT::Backend::DarkSUSY myDarkSUSY; } }


namespace GAMBIT {

  namespace TinyDarkBit {

    void omega_DM (double &result)
    {
      double m1 = masterDict.get<double>("m1");
      double m2 = masterDict.get<double>("m2");
      double m3 = masterDict.get<double>("m3");
      double mu = masterDict.get<double>("mu");
      double ma = masterDict.get<double>("ma");
      double tanbe = masterDict.get<double>("tanbe");
      myDarkSUSY.model(m1, m2, m3, mu, ma, tanbe);
      result = myDarkSUSY.rdomega();
    }

    void initialize() 
    {
      std::cout << std::endl;
      std::cout << "********************************************" << std::endl;
      std::cout << "***       Initializing TinyDarkBit       ***" << std::endl;
      std::cout << "********************************************" << std::endl;

      //TinyDarkBit::myDarkSUSY.initialize();

      std::cout << "**********************************************" << std::endl;
      std::cout << "*** Initialization of TinyDarkBit complete ***" << std::endl;
      std::cout << "**********************************************" << std::endl << std::endl;
    }

  } 

}
