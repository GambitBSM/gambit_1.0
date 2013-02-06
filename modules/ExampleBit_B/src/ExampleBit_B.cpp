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
//  2012 Nov 15 
//  2013 Jan 18, Feb 04
//
//  Christoph Weniger
//  Jan 17 2013
//
//  *********************************************

#include <string>
#include <iostream>
#include <ExampleBit_B_rollcall.hpp>

namespace GAMBIT {

  namespace ExampleBit_B {

    // Initialization routine
    void initialize () {
      std::cout << std::endl;
      std::cout << "********************************************" << std::endl;
      std::cout << "***       Initializing ExampleBit_B      ***" << std::endl;
      std::cout << "********************************************" << std::endl;
    }

    // Module functions
    void xsection (double &result)               { result = 5.e10; }
    void authors_dogs_name (std::string &result) { result = "ImaginaryPuppy"; }
    void nevents (int &result)                   { result = 2; }
    void nevents_postcuts (int &result)          { 
      std::cout << "Yo! I am nevents_postcuts in ExampleBit_B, and I have ordered" << std::endl;
      std::cout << "that somebody, somewhere compute nevents *before* I get my own " << std::endl;
      std::cout << "groove on.  So let's see what it is then: " ;
      std::cout << (*Dependencies::nevents_postcuts::nevents)() << std::endl;
      result = 1;
    }
    

  }

}

