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
///  \author Anders Kvellestad
///          (anders.kvellestad@fys.uio.no)
///  \date 2013 Nov
///  *********************************************

#include "gambit_module_headers.hpp"
#include "ExampleBit_B_rollcall.hpp"


namespace Gambit
{
  namespace Backends
  {
    namespace LibFirst
    {
      extern int * SomeInt;
    }
  }
}

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
       Dep::nevents.name() << " from " <<
       Dep::nevents.module() << "." << endl;
      cout << "Its value is: " << *Dep::nevents << endl;

      //cout << "Now let's see what happens when we try to retrieve a conditional dependency." << endl;
      //cout << "The id is: " << *Dep::id << endl;

      cout << "My backend requirement of awesomeness has been filled by " << 
       BEreq::awesomeness.name() << " from " <<
       BEreq::awesomeness.backend() << ", v" << 
       BEreq::awesomeness.version() << "." << endl;
      cout << "Its value is: ";
      double doall_local = BEreq::awesomeness(2);
      cout << doall_local << endl << endl;    
      int stuff = 2;
      cout << "Again, its value is: ";
      double doall_local2 = BEreq::awesomeness(byVal(stuff));
      cout << doall_local2 << endl << endl;    

      result = (int) (*Dep::nevents + doall_local);

      //Example showing pass by ref vs pass by val
      double inputvar1 = 0;
      double inputvar2 = 0;
      double inputvar3 = 2.5;
      cout << "Now trying backend functions with parameters passed by reference. First returns double." << endl;
      double refex1 = BEreq::refex(inputvar1);
      cout << "Next returns void, takes parameters both by ref and by val." << endl;
      BEreq::refex2(inputvar2, byVal(inputvar3));
      cout << "Results of backend functions with parameters passed byRef: " 
           << refex1 << ", " << inputvar1 << ", " << inputvar2 << endl;

      //Example showing passing of function pointer to an external Fortran (or other language) routine
      int arg2 = 15;
      BEreq::runMe(byVal(*Dep::function_pointer), arg2);


      // Demostration of accessing backend requirements via 'BEvariable_bucket'/'BEfunction_bucket' objects
      // living in SafePointers::[module function name]::BEreq::[backend capability]
      cout << endl;
      cout << "Will now set backend variable SomeInt=1000." << endl;
      cout << "If this works the next result from 'someFunction' should be PI*1000." << endl;
      *BEreq::SomeInt = 1000;
      BEreq::someFunction();

      cout << endl;
      cout << "Will now call 'someFunction' once more, this time using the function pointer." << endl;
      void (*function_pointer)() = BEreq::someFunction.pointer<>();
      function_pointer();

      cout << endl;
      cout << "Print some info on the backend requirement 'SomeInt':" << endl;
      cout << "Name: " << BEreq::SomeInt.name() << "   Backend: " << BEreq::SomeInt.backend() << "   Version: " << BEreq::SomeInt.version() << endl;
      cout << endl;

    }

  }

}

