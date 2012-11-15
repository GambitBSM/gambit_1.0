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

namespace ExampleBit_A {

double count = 3.5;

double nevents () {return count++;};
double nevents_like () {return 1.5;};
std::string authors_dogs_name () {return "Millie";};

}
