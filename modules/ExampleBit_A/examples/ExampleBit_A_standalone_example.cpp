//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Example of GAMBIT ExampleBit_A standalone
///  main program.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Pat Scott
///  \date 2014 Jan
///
///  *********************************************

#include "backend_rollcall.hpp"
#include "module_macros_incore.hpp"
#include "model_rollcall.hpp"
#include "exceptions.hpp"
#include "ExampleBit_A_rollcall.hpp"

using namespace Gambit;
using namespace Gambit::ExampleBit_A::Functown;
using std::cout;
using std::endl;

int main()
{

  ///TODO - add backend resolution and usage example with libfortran
  ///     - add model parameter setting and usage example
  ///     - rejig module/functor namespaces so that relevant module helper functions live in same namespace as functors
  ///     - rejig module macros to cull unecessary bits (report, result, etc, maybe even Tags themselves)
  ///     - clear Utils folder of routines not used at all, and of those only used in GAMBIT (those to go to Core folder)
  ///     - clear existing core header inclusions from all headers included from this file (e.g. ModelBit things using graphs)

  cout << endl << "Start ExampleBit_A standalone example" << endl;
  cout << "----------" << endl;
  
  // Determine selected model(s)
  std::vector<std::string> selectedmodels; 
  selectedmodels.push_back("CMSSM_I");
  cout << "Your selected model(s) are: " << selectedmodels << endl;
  
  // Activate models
  modelClaw.activatePrimaryModels(selectedmodels);

  // Choose and set up a printer object
  printers::ostreamPrinter myPrinter(std::cout,1); 

  // Print some diagnostics about ExampleBit_A
  cout << "My name is " << ExampleBit_A::name() << endl;
  cout << " I can calculate: " << endl << ExampleBit_A::iCanDo << endl;
  cout << " ...but I may need: " << endl << ExampleBit_A::iMayNeed << endl << endl;  
  cout << "I can do nevents: " << ExampleBit_A::provides("nevents") << endl;
  if (ExampleBit_A::requires("nevents_like","nevents"))
  { 
    cout << " (I require nevents_like to do this though.)" << endl;
  }
  cout << "I can do nevents_like: " << ExampleBit_A::provides("nevents_like") << endl;
  if (ExampleBit_A::requires("nevents","nevents_like"))
  { 
    cout << " (I require nevents to do this though.)" << endl;
  }  

  // Resolve dependencies and backend requirements 'by hand'
  nevents_int.resolveDependency(&nevents_dbl);

  // Check on which dependencies have been filled with what
  cout << endl << "My function nevents_int has had its dependencies filled by:" << endl;
  std::vector<sspair> tempdeps = nevents_int.dependencies();
  for (std::vector<sspair>::iterator it = tempdeps.begin() ; it != tempdeps.end(); ++it)
  {
    cout << it->first << "   " << it->second << endl;        
  }
  cout << endl;

  // Call the module's functions, taking care to calculate in the order implied by how the dependencies have been filled
  nevents_dbl.calculate();
  nevents_int.calculate();

  // Print the (cached) results of the module functions to the selected printer
  nevents_dbl.print(&myPrinter);
  nevents_int.print(&myPrinter);

  // Retrieve the same cached results of the module functions directly; use argument '0' for the 
  double r1 = nevents_dbl(0); 
  int r2 = nevents_int(0);
  cout << endl << "Retrieved results: " << r1 << ", " << r2 << endl << endl;

  std::cout << "ExampleBit_A standalone example has finished successfully." << endl << endl;
   
  return 1;

};
