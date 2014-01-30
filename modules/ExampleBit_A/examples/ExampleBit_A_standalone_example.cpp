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
using namespace ExampleBit_A::Accessors;    // Helper functions that provide some info about the module
using namespace ExampleBit_A::Functown;     // Functors wrapping the module's actual module functions
using std::cout;
using std::endl;

// Declare ad-hoc module functions for filling dependencies not otherwise fillable by ExampleBit_A.
// REGISTER_ADHOC_FUNCTION(ExampleBit_A, xsection, local_xsection, double, MSSM_I)
// REGISTER_OVERRIDE_FUNCTION(ExampleBit_A, nevents, nevents_dummy, double)
#define MODULE ExampleBit_A
  #define CAPABILITY xsection               // Observable: cross-section for some hypothetical process
  START_CAPABILITY
    #define FUNCTION local_xsection         // Name of specific function providing the observable
    START_FUNCTION(double)                  // Function calculates a double precision variable
    ALLOW_MODELS(MSSM_I)                    // Allowed models
    #undef FUNCTION
  #undef CAPABILITY
  #define CAPABILITY nevents                // This is just temporary, for filling the example dependency of the CSSM_I 
    #define FUNCTION nevents_dummy          // eventually be removed, along with this dummy function
    START_FUNCTION(double)                  
    #undef FUNCTION
  #undef CAPABILITY
#undef MODULE

// Ad-hoc function bodies for filling dependencies that cannot or should not otherwise be filled from inside ExampleBit_A.
namespace Gambit 
{
  namespace ExampleBit_A
  {
    void local_xsection(double &result) { result = *Pipes::local_xsection::Param["M1"]; }
    void nevents_dummy(double &result) { result = 5.; }
  }
}


int main()
{

  ///TODO - clear Utils folder of routines not used at all, and of those only used in GAMBIT (those to go to Core folder)
  ///     - clear existing core header inclusions from all headers included from this file (e.g. ModelBit things using graphs)
  ///     - make slick REGISTER_ADHOC_FUNCTION and REGISTER_OVERRIDE_FUNCTION macros

  cout << endl << "Start ExampleBit_A standalone example" << endl;
  cout << "----------" << endl;
  
  // Retrieve a raw pointer to the parameter set of each primary model to be scanned, for manually setting parameter values
  ModelParameters* CMSSM_primary_parameters = Models::CMSSM_I::Functown::primary_parameters.getcontentsPtr();

  // Choose and set up a printer object
  printers::ostreamPrinter myPrinter(std::cout,1); 

  // Print some diagnostics about ExampleBit_A
  cout << endl << "My name is " << name() << endl;
  cout << " I can calculate: " << endl << iCanDo << endl;
  cout << " ...but I may need: " << endl << iMayNeed << endl << endl;  
  cout << "I can do nevents: " << provides("nevents") << endl;
  if (requires("nevents_like","nevents"))
  { 
    cout << " (I require nevents_like to do this though.)" << endl;
  }
  cout << "I can do nevents_like: " << provides("nevents_like") << endl;
  if (requires("nevents","nevents_like"))
  { 
    cout << " (I require nevents to do this though.)" << endl;
  }  

  // Resolve backend requirements 'by hand'.  Must be done before dependencies are resolved.
  function_pointer_retriever.resolveBackendReq(&Backends::LibFortran::Functown::externalFunction);
  
  // Notify the module functions of the models being scanned FIXME this needs to be made more elegant with loops over lists
  Models::CMSSM_I::Functown::MSSM_I_parameters.notifyOfModel("CMSSM_I");
  local_xsection.notifyOfModel("CMSSM_I");

  // Resolve dependencies 'by hand'.  The ordering is unimportant, but *something* in the chain must 
  // have one of its dependencies filled by Models::PRI::Functown::primary_parameters, where PRI is a primary model.
  Models::CMSSM_I::Functown::MSSM_I_parameters.resolveDependency(&Models::CMSSM_I::Functown::primary_parameters);
  Models::CMSSM_I::Functown::MSSM_I_parameters.resolveDependency(&nevents_dummy);
  local_xsection.resolveDependency(&Models::CMSSM_I::Functown::MSSM_I_parameters);
  nevents_dbl.resolveDependency(&local_xsection);
  nevents_int.resolveDependency(&nevents_dbl);

  // Double-check which backend requirements have been filled with what
  cout << endl << "My function function_pointer_retriever has had its backend requirement on externalFunction filled by:" << endl;
  cout << ExampleBit_A::Pipes::function_pointer_retriever::BEreq::externalFunction.origin() << "::";
  cout << ExampleBit_A::Pipes::function_pointer_retriever::BEreq::externalFunction.name() << endl;

  // Double-check which dependencies have been filled with what
  cout << endl << "My function nevents_int has had its dependency on nevents filled by:" << endl;
  cout << ExampleBit_A::Pipes::nevents_int::Dep::nevents.origin() << "::";
  cout << ExampleBit_A::Pipes::nevents_int::Dep::nevents.name() << endl;
  cout << endl << "My function nevents_dbl has had its dependency on xsection filled by:" << endl;
  cout << ExampleBit_A::Pipes::nevents_dbl::Dep::xsection.origin() << "::";
  cout << ExampleBit_A::Pipes::nevents_dbl::Dep::xsection.name() << endl;
  cout << endl << "My function local_xsection has had its dependency on MSSM parameters filled by:" << endl;
  cout << ExampleBit_A::Pipes::local_xsection::Dep::MSSM_I_parameters.origin() << "::";
  cout << ExampleBit_A::Pipes::local_xsection::Dep::MSSM_I_parameters.name() << endl;
  cout << endl << "The model function CMSSM_I::Functown::MSSM_I_parameters has had its dependency on nevents filled by:" << endl;
  cout << Models::CMSSM_I::Pipes::MSSM_I_parameters::Dep::nevents.origin() << "::";
  cout << Models::CMSSM_I::Pipes::MSSM_I_parameters::Dep::nevents.name() << endl;
  cout << endl << "The model function CMSSM_I::Functown::MSSM_I_parameters has had its dependency on CMSSM parameters filled by:" << endl;
  cout << Models::CMSSM_I::Pipes::MSSM_I_parameters::Dep::CMSSM_I_parameters.origin() << "::";
  cout << Models::CMSSM_I::Pipes::MSSM_I_parameters::Dep::CMSSM_I_parameters.name() << endl << endl;

  // Start a loop over some low-E points in the primary model parameter space
  cout << "Starting model scan..." << endl << endl;
  for (int i = 0; i<10; i++)
  {

    // Give the primary model parameters
    CMSSM_primary_parameters->setValue("M0",i*1.);
    CMSSM_primary_parameters->setValue("A0",i*5.);
    CMSSM_primary_parameters->setValue("M12",i*2.);
    CMSSM_primary_parameters->setValue("tanb",i*10.);
    CMSSM_primary_parameters->setValue("sgnmu",1.);

    // Call the appropriate point-level module initialisation function.
    PointInit_Default.reset_and_calculate();

    // Call the actual module functions, taking care to calculate in the order implied by how the dependencies have been filled;
    // i.e. calculate quantities that other quantities depend on first.
    nevents_dummy.reset_and_calculate();
    Models::CMSSM_I::Functown::MSSM_I_parameters.reset_and_calculate();
    local_xsection.reset_and_calculate();
    nevents_dbl.reset_and_calculate();
    nevents_int.reset_and_calculate();
    function_pointer_retriever.reset_and_calculate(); // (This one doesn't actually matter for the rest of the dependency chain.)

    // Print the (cached) results of some module functions to the selected printer
    nevents_dbl.print(&myPrinter);
    nevents_int.print(&myPrinter);

    // Retrieve the same cached results of the module functions directly.  The argument is the thread index; everything except '0' is just temp data.
    double r1 = nevents_dbl(0); 
    int r2 = nevents_int(0);
    cout << endl << "Retrieved results: " << r1 << ", " << r2 << endl << endl;

  }

  std::cout << "ExampleBit_A standalone example has finished successfully." << endl << endl;
   
  return 1;

}
