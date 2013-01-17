//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
//
//  Functions of module ExampleBit_A
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
//  Pat Scott
//  Nov 15 2012
//
//  *********************************************

#define __in_module__
#include "module_rollcall.hpp"
#include "backend-darksusy.hpp"

#include <dlfcn.h>
#include <iostream>

namespace TinyDarkBit {
  double omega_DM();
  void initialize();
  GAMBIT::Backend::DarkSUSY myDarkSUSY;
}

double TinyDarkBit::omega_DM ()
{
  return TinyDarkBit::myDarkSUSY.rdomega();
}

void TinyDarkBit::initialize() 
{
  std::cout << std::endl;
  std::cout << "********************************************" << std::endl;
  std::cout << "***       Initializing TinyDarkBit       ***" << std::endl;
  std::cout << "********************************************" << std::endl;

  // GAMBIT::Backend::DarkSUSY TinyDarkBit::A;
  TinyDarkBit::myDarkSUSY.initialize();
  TinyDarkBit::myDarkSUSY.model();

  std::cout << "**********************************************" << std::endl;
  std::cout << "*** Initialization of TinyDarkBit complete ***" << std::endl;
  std::cout << "**********************************************" << std::endl << std::endl;
}
