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
//
//  *********************************************

#define __in_module__
#include "module_rollcall.hpp"

namespace ExampleBit_B {void initialize () {};} // CW dummy initialization
double ExampleBit_B::xsection () {return 5.e10;}
int ExampleBit_B::nevents_postcuts () {return 1;}
std::string ExampleBit_B::authors_dogs_name () {return "ImaginaryPuppy";}
int ExampleBit_B::nevents () {return 2;}

