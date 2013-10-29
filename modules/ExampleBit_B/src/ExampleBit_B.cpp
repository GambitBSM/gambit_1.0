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
///  \date 2013 Jan, Feb, Oct
///
///  \author Christoph Weniger
///          (christoph.weniger@gmail.com)
///  \date 2013 Jan 
///
///  *********************************************

#include "gambit_module_headers.hpp"
#include "ExampleBit_B_rollcall.hpp"

namespace Gambit
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
    void exampleCharge    (int    &result) { result = 1; }
    void identity         (str    &result) { result = "rabbiton"; }
    void nevents          (int    &result) { result = 2; }
    void lnL_ExampleBitB  (double &result) { result = 0; }   // Some dummy double likelihood function for the scanner

    void xsection         (double &result) 
    { 
      using namespace SafePointers::xsection;
      cout << endl;
      cout << "In ExampleBit_B, function xsection" << endl;
      cout << "  Printing parameter values:" << endl;
      cout << "  M0: "  << *Param["M0"] << endl;
      cout << "  M12: " << *Param["M12"] << endl;
      cout << "  A0: "  << *Param["A0"] << endl;
      result = 5.e10; 
    }

    void nevents_postcuts (int    &result)          
    {
      using namespace SafePointers::nevents_postcuts;
 
      cout << endl << "My dependency on nevents has been filled by " << 
       GET_DEP_FUNCNAME(nevents_postcuts::nevents) << " from " <<
       GET_DEP_MODULE(nevents_postcuts::nevents) << "." << endl;
      cout << "Its value is: " << *Dep::nevents << endl;

      //cout << "Now let's see what happens when we try to retrieve a conditional dependency." << endl;
      //cout << "The id is: " << *Dep::id << endl;

      cout << "My backend requirement of awesomeness has been filled by " << 
       GET_BE_FUNCNAME(nevents_postcuts::awesomeness) << " from " <<
       GET_BE_PACKAGE(nevents_postcuts::awesomeness) << ", v" << 
       GET_BE_VERSION(nevents_postcuts::awesomeness) << "." << endl;
      cout << "Its value is: ";
      double doall_local = GET_BE_RESULT(nevents_postcuts::awesomeness, 2);
      cout << doall_local << endl << endl;    
      int stuff = 2;
      cout << "Again, its value is: ";
      double doall_local2 = GET_BE_RESULT(nevents_postcuts::awesomeness, byVal(stuff));
      cout << doall_local2 << endl << endl;    

      result = (int) (*Dep::nevents + doall_local);

      //Example showing pass by ref vs pass by val
      double inputvar1 = 0;
      double inputvar2 = 0;
      double inputvar3 = 2.5;
      cout << "Now trying backend functions with parameters passed by reference. First returns double." << endl;
      double refex1 = GET_BE_RESULT(nevents_postcuts::refex, inputvar1);
      cout << "Next returns void, takes parameters both by ref and by val." << endl;
      GET_BE_RESULT(nevents_postcuts::refex2, inputvar2, byVal(inputvar3));
      cout << "Results of backend functions with parameters passed byRef: " 
           << refex1 << ", " << inputvar1 << ", " << inputvar2 << endl;

      //Example showing passing of function pointer to an external Fortran (or other language) routine
      int arg2 = 15;
      GET_BE_RESULT(nevents_postcuts::runMe, byVal(*Dep::function_pointer), arg2);
    }

  }

}

