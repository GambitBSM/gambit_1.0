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
//  *********************************************

#define __in_module__
#include "module_rollcall.hpp"

#include <dlfcn.h>
#include <iostream>

extern gambit::dict masterDict;

double TinyDarkBit::omega_DM ()
{
  double m1 = masterDict.get<double>("m1");
  double m2 = masterDict.get<double>("m2");
  double m3 = masterDict.get<double>("m3");
  double mu = masterDict.get<double>("mu");
  double ma = masterDict.get<double>("ma");
  double tanbe = masterDict.get<double>("tanbe");
  TinyDarkBit::myDarkSUSY.model(m1, m2, m3, mu, ma, tanbe);
  return TinyDarkBit::myDarkSUSY.rdomega();
}

void TinyDarkBit::initialize() 
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
