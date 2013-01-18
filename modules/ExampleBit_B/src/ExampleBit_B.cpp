//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
//
//  Functions of module ExampleBit_B
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
//  Jan 18 2013
//
//  Chrisoph Weniger
//  Jan 17 2013
//
//  *********************************************

#define __in_module__
#include "module_rollcall.hpp"

namespace ExampleBit_B {

// Initialization routine
void initialize () {
  std::cout << std::endl;
  std::cout << "********************************************" << std::endl;
  std::cout << "***       Initializing ExampleBit_B      ***" << std::endl;
  std::cout << "********************************************" << std::endl;
}

// Module functions
double xsection () { return 5.e10; }
int nevents_postcuts () { return 1; }
std::string authors_dogs_name () { return "ImaginaryPuppy"; }
int nevents () { return 2; }

}

