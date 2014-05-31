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
///
///  \author Ben Farmer
///          (ben.farmer@gmail.com)
///  \date 2014 Mar
///
///  *********************************************

#include "gambit_module_headers.hpp"
#include "ExampleBit_B_rollcall.hpp"

namespace Gambit
{

  namespace ExampleBit_B
  {
    using namespace LogTags;
  
    //************************************************************

    /// \name Module functions
    /// @{
    void exampleCharge    (int    &result) { result = 1; }
    void identity         (str    &result) { result = "rabbiton"; }
    void nevents          (int    &result) { result = 2; }
    void lnL_ExampleBitB  (double &result) { result = 0; }   // Some dummy double likelihood function for the scanner
     
    // Function that returns a vector of doubles, for testing printer
    void exampleVec       (std::vector<double> &result) 
    { 
      result.clear();
      result.push_back(101);
      result.push_back(102);
      result.push_back(103);
      result.push_back(104);
      result.push_back(105);
      // Some stuff to mess with the printer by changing the length of the vector it tries to print
      static int loopnumber(0);
      if(loopnumber > 5)
      {
        result.push_back(106);
        result.push_back(107);
        result.push_back(108);
      }
      loopnumber+=1;
    }

    // Function that tests array and -> operators on deps and BE vars.
    void ptrMethArrTester        (int &result)
    {
      using namespace Pipes::ptrMethArrTester;
      logger() << "\n  The size of the vector retrieved from test_vector dependency by vecTester is " << Dep::test_vector->size() << "."; 
      logger() << "\n  The size of the vector retrieved from test_vector backend requirement by vecTester is " << BEreq::test_vector->size() << ".";
      logger() << "\n  The second element of the array retrieved from SomeArray is " << (*BEreq::SomeArray)[1] << "." << EOM;
      result = 1;
    }
 

    void xsection         (double &result) 
    { 
      using namespace Pipes::xsection;
      logger() << endl;
      logger() << "In ExampleBit_B, function xsection." << endl;
      if (runOptions->hasKey("scale"))
       logger() << "Running at scale: " << runOptions->getValue<double>("scale") << " TeV." << endl;
      logger() << "First model being scanned is: " << Models->at(0) << endl;
      logger() << "  Printing parameter values:" << endl;
      logger() << "  M0: "  << *Param["M0"] << endl;
      logger() << "  M12: " << *Param["M12"] << endl;
      logger() << "  A0: "  << *Param["A0"] << endl;
      logger() <<info<<EOM;
      result = 5.e10; 

      //Example of how to raise an error from a module function.
      str errormsg = "Damn, this xsection is bad.";
      ExampleBit_B_error().raise(LOCAL_INFO,errormsg);

    }

    void nevents_postcuts (int &result)          
    {
      using namespace Pipes::nevents_postcuts;
 
      logger() << endl << "My dependency on nevents has been filled by " << 
       Dep::nevents.name() << " from " <<
       Dep::nevents.module() << "." << endl;
      logger() << "Its value is: " << *Dep::nevents << endl;
      logger() <<info<<EOM;

      //cout << "Now let's see what happens when we try to retrieve a conditional dependency." << endl;
      //cout << "The id is: " << *Dep::id << endl;

      logger() << "My backend requirement of awesomeness has been filled by " << 
       BEreq::awesomeness.name() << " from " <<
       BEreq::awesomeness.backend() << ", v" << 
       BEreq::awesomeness.version() << "." << endl;
      logger() << "Its value is: ";
      double doall_local = BEreq::awesomeness(2);
      logger() << doall_local << endl << endl;    
      int stuff = 2;
      logger() << "Again, its value is: ";
      double doall_local2 = BEreq::awesomeness(byVal(stuff));
      logger() << doall_local2 << endl << endl;    
      logger() <<info<<EOM;

      result = (int) (*Dep::nevents + doall_local);

      //Example showing pass by ref vs pass by val
      double inputvar1 = 0;
      double inputvar2 = 0;
      double inputvar3 = 2.5;
      logger() << "Now trying backend functions with parameters passed by reference. First returns double." << endl;
      double refex1 = BEreq::refex(inputvar1);
      logger() << "Next returns void, takes parameters both by ref and by val." << endl;
      BEreq::refex2(inputvar2, byVal(inputvar3));
      logger() << "Results of backend functions with parameters passed byRef: " 
           << refex1 << ", " << inputvar1 << ", " << inputvar2 << endl;
      logger() <<info<<EOM;

      //Example showing passing of function pointer to an external Fortran (or other language) routine
      int arg2 = 15;
      BEreq::runMe(byVal(*Dep::function_pointer), arg2);

      // Demostration of accessing backend requirements via 'BEvariable_bucket'/'BEfunction_bucket' objects
      // living in Pipes::[module function name]::BEreq::[backend capability]
      logger() << endl;
      logger() << "Will now set backend variable SomeInt=1000." << endl;
      logger() << "If this works the next result from 'someFunction' should be PI*1000." << endl;
      logger() <<info<<EOM;
      *BEreq::SomeInt = 1000;
      BEreq::someFunction();

      logger() << endl;
      logger() << "Will now call 'someFunction' once more, this time using the function pointer." << endl;
      logger() <<info<<EOM;
      void (*function_pointer)() = BEreq::someFunction.pointer();
      function_pointer();

      logger() << endl;
      logger() << "Print some info on the backend requirement 'SomeInt':" << endl;
      logger() << "Name: " << BEreq::SomeInt.name() << "   Backend: " << BEreq::SomeInt.backend() << "   Version: " << BEreq::SomeInt.version() << endl;
      logger() <<info<<EOM;

    }

    /// @}

  }

}

