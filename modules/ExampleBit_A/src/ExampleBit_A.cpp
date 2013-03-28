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
//  2012 Nov 15 
//  2013 Jan 18, Feb 04

//
//  Christoph Weniger
//  Jan 17 2013
//
//  *********************************************

#include <string>
#include <iostream>
#include <ExampleBit_A_rollcall.hpp>

namespace GAMBIT {

  namespace ExampleBit_A {

    double count = 3.5;

    // Initialization routine
    void initialize () {
      std::cout << std::endl;
      std::cout << "********************************************" << std::endl;
      std::cout << "***       Initializing ExampleBit_A      ***" << std::endl;
      std::cout << "********************************************" << std::endl;
    }

    // Module functions
    void nevents_dbl (double &result)            { result = count++; }
    void nevents_int (int &result)               { result = (int) (GET_DEP(nevents_int,nevents)); }
    void nevents_like (double &result)           { result = 1.5; }
    void authors_dogs_name (std::string &result) { result = "Millie"; }

  }

}
