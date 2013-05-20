//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Functions of module ExampleBit_B
///
///  Put your functions in files like this
///  if you wish to add observables or likelihoods
///  to this module.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Pat Scott 
///          (patscott@physics.mcgill.ca)
///  \date 2012 Nov 
///  \date 2013 Jan, Feb
///
///  \author Christoph Weniger
///          (christoph.weniger@gmail.com)
///  \date 2013 Jan 
///
///  *********************************************

#include <ExampleBit_B_rollcall.hpp>

namespace GAMBIT
{

  namespace ExampleBit_B
  {

    // Initialization routine
    void initialize () 
    {
      cout << endl;
      cout << "********************************************" << endl;
      cout << "***       Initializing ExampleBit_B      ***" << endl;
      cout << "********************************************" << endl;
    }

    // Module functions
    void xsection         (double &result) { result = 5.e10; }
    void exampleCharge    (int    &result) { result = 1; }
    void identity         (str    &result) { result = "rabbiton"; }
    void nevents          (int    &result) { result = 2; }
    void nevents_postcuts (int &result)          
    {
      cout << endl << "My dependency on nevents has been filled by " << 
       GET_DEP_FUNCNAME(nevents_postcuts::nevents) << " from " <<
       GET_DEP_MODULE(nevents_postcuts::nevents) << "." << endl;
      cout << "Its value is: ";
      double nevents = GET_DEP(nevents_postcuts::nevents);
      cout << nevents << endl << endl;
      cout << "My backend requirement of awesomeness has been filled by " << 
       GET_BE_FUNCNAME(nevents_postcuts::awesomeness) << " from " <<
       GET_BE_PACKAGE(nevents_postcuts::awesomeness) << ", v" << 
       GET_BE_VERSION(nevents_postcuts::awesomeness) << "." << endl;
      cout << "Its value is: ";
      double doall_local = GET_BE_RESULT(nevents_postcuts::awesomeness, 2);
      cout << doall_local << endl << endl;
      result = (int) (nevents + doall_local);
    }

  }

}

