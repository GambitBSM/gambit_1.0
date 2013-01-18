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
//  Chrisoph Weniger
//  Jan 17 2013
//
//  *********************************************

#define __in_module__
#include "module_rollcall.hpp"

#include <dlfcn.h>
#include <iostream>

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

  TinyDarkBit::myDarkSUSY.initialize();
  TinyDarkBit::myDarkSUSY.model();

  std::cout << "**********************************************" << std::endl;
  std::cout << "*** Initialization of TinyDarkBit complete ***" << std::endl;
  std::cout << "**********************************************" << std::endl << std::endl;
}
