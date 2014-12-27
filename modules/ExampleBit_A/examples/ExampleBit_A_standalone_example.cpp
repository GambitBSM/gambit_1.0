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
///  \date 2014 Jan, Feb
///
///  *********************************************

#include "standalone_module.hpp"
#include "ExampleBit_A_rollcall.hpp"

using namespace ExampleBit_A::Accessors;    // Helper functions that provide some info about the module
using namespace ExampleBit_A::Functown;     // Functors wrapping the module's actual module functions
using namespace BackendIniBit::Functown;    // Functors wrapping the backend initialisation functions

// Register ad-hoc module functions for use; as many or as few models can be given as desired.
// Full declaration as per regular rollcall headers such as ExampleBit_A_rollcall.hpp is also allowed.
QUICK_FUNCTION(ExampleBit_A, xsection, NEW_CAPABILITY, local_xsection, double, (MSSM_demo))
QUICK_FUNCTION(ExampleBit_A, id, OLD_CAPABILITY, id_dummy, std::string)

// Ad-hoc functions for filling dependencies that cannot or should not otherwise be filled from inside ExampleBit_A.
namespace Gambit 
{
  namespace ExampleBit_A
  {
    void local_xsection(double &result) { result = *Pipes::local_xsection::Param["M1"];}
    void id_dummy(std::string &result) { result = "identity_example"; }
  }
}


int main()
{

  try
  {

    std::cout << std::endl << "Start ExampleBit_A standalone example" << std::endl;
    std::cout << "----------" << std::endl;


    //------- Initialise (or disable) logging -------------

    // Uncomment to completely silence logger (initialisation will still create output files though, so remove it if you don't want files created)
    //logger().disable();

    // Make a logging object
    std::map<std::string, std::string> loggerinfo;
    //(you can use a std::map<std::set<std::string>, std::string> instead, but it is more "wordy" to fill)
    
    // Define where the logs will end up
    std::string prefix("runs/ExampleBit_A_standalone/logs/");
  
    // Add entries to the loggerinfo map
    loggerinfo["Core, Error"] = prefix+"core_errors.log";
    loggerinfo["Default"]     = prefix+"default.log";
    loggerinfo["Warning"]     = prefix+"warnings.log";
    loggerinfo["ExampleBit_A, Info"] = prefix+"ExampleBit_A_info.log";

    // Initialise global LogMaster object
    logger().initialise(loggerinfo);

    // Change the fatality of different errors and warnings from the defaults, if desired.
    model_warning().set_fatal(true);
    ExampleBit_A::ExampleBit_A_error().set_fatal(false);

    // Initialise the random number generator.
    Random::create_rng_engine("default");

    // Test message
    // Note: we are not actually "inside" ExampleBit_A here, so the log message will not receive an 'ExampleBit_A' tag.
    logger()<<"Running ExampleBit_A standalone example"<<LogTags::info<<EOM;

    //-----------------------------------------------------


    // Retrieve a raw pointer to the parameter set of each primary model to be scanned, for manually setting parameter values
    ModelParameters* CMSSM_primary_parameters = Models::CMSSM_demo::Functown::primary_parameters.getcontentsPtr();

    // Print some example diagnostics about ExampleBit_A
    std::cout << std::endl << "My name is " << name() << std::endl;
    std::cout << " I can calculate: " << endl << iCanDo << std::endl;
    std::cout << " ...but I may need: " << endl << iMayNeed << std::endl << std::endl;
    std::cout << "I can do nevents: " << provides("nevents") << std::endl;
    if (requires("nevents_like","nevents"))
    { 
      std::cout << " (I require nevents_like to do this though.)" << std::endl;
    }
    std::cout << "I can do nevents_like: " << provides("nevents_like") << std::endl;
    if (requires("nevents","nevents_like"))
    { 
      std::cout << " (I require nevents to do this though.)" << std::endl;
    }  

    // Resolve backend requirements 'by hand'.  Must be done before dependencies are resolved.
    function_pointer_retriever.resolveBackendReq(&Backends::LibFortran_1_0::Functown::externalFunction);
    
    // Notify any module functions that care of the model(s) being scanned.
    // 'Care' means where they depend on model parameters directly, or have dependencies or backend requirements that are
    // conditional on the model being analysed. 
    Models::CMSSM_demo::Functown::MSSM_demo_parameters.notifyOfModel("CMSSM_demo");
    local_xsection.notifyOfModel("CMSSM_demo");

    // Resolve dependencies 'by hand'.  The ordering is unimportant, but *something* in the chain must 
    // have one of its dependencies filled by Models::PRI::Functown::primary_parameters, where PRI is a primary model.
    Models::CMSSM_demo::Functown::MSSM_demo_parameters.resolveDependency(&Models::CMSSM_demo::Functown::primary_parameters);
    Models::CMSSM_demo::Functown::MSSM_demo_parameters.resolveDependency(&id_dummy);
    local_xsection.resolveDependency(&Models::CMSSM_demo::Functown::MSSM_demo_parameters);
    nevents_dbl.resolveDependency(&local_xsection);
    nevents_int.resolveDependency(&nevents_dbl);

    // Double-check which backend requirements have been filled with what
    std::cout << std::endl << "My function function_pointer_retriever has had its backend requirement on externalFunction filled by:" << std::endl;
    std::cout << ExampleBit_A::Pipes::function_pointer_retriever::BEreq::externalFunction.origin() << "::";
    std::cout << ExampleBit_A::Pipes::function_pointer_retriever::BEreq::externalFunction.name() << std::endl;

    // Double-check which dependencies have been filled with what
    std::cout << std::endl << "My function nevents_int has had its dependency on nevents filled by:" << endl;
    std::cout << ExampleBit_A::Pipes::nevents_int::Dep::nevents.origin() << "::";
    std::cout << ExampleBit_A::Pipes::nevents_int::Dep::nevents.name() << std::endl;
    std::cout << std::endl << "My function nevents_dbl has had its dependency on xsection filled by:" << endl;
    std::cout << ExampleBit_A::Pipes::nevents_dbl::Dep::xsection.origin() << "::";
    std::cout << ExampleBit_A::Pipes::nevents_dbl::Dep::xsection.name() << std::endl;
    std::cout << std::endl << "My function local_xsection has had its dependency on MSSM parameters filled by:" << std::endl;
    std::cout << ExampleBit_A::Pipes::local_xsection::Dep::MSSM_demo_parameters.origin() << "::";
    std::cout << ExampleBit_A::Pipes::local_xsection::Dep::MSSM_demo_parameters.name() << std::endl;
    std::cout << std::endl << "The model function CMSSM_demo::Functown::MSSM_demo_parameters has had its dependency on id filled by:" << std::endl;
    std::cout << Models::CMSSM_demo::Pipes::MSSM_demo_parameters::Dep::id.origin() << "::";
    std::cout << Models::CMSSM_demo::Pipes::MSSM_demo_parameters::Dep::id.name() << std::endl;
    std::cout << std::endl << "The model function CMSSM_demo::Functown::MSSM_demo_parameters has had its dependency on CMSSM parameters filled by:" << endl;
    std::cout << Models::CMSSM_demo::Pipes::MSSM_demo_parameters::Dep::CMSSM_demo_parameters.origin() << "::";
    std::cout << Models::CMSSM_demo::Pipes::MSSM_demo_parameters::Dep::CMSSM_demo_parameters.name() << std::endl << std::endl;

    // Start a loop over some low-E points in the primary model parameter space
    std::cout << "Starting model scan..." << std::endl << std::endl;
    for (int i = 0; i<5; i++)
    {

      try
      {

        // Give the primary model parameters
        CMSSM_primary_parameters->setValue("M0",i*1.);
        CMSSM_primary_parameters->setValue("A0",i*5.);
        CMSSM_primary_parameters->setValue("M12",i*2.);
        CMSSM_primary_parameters->setValue("tanb",i*10.);
        CMSSM_primary_parameters->setValue("sgnmu",1.);

        // Call the initialisation functions for all backends that are in use. 
        LibFortran_1_0_init.reset_and_calculate();

        // Call the actual module functions, taking care to calculate in the order implied by how the dependencies have been filled;
        // i.e. calculate quantities that other quantities depend on first.
        id_dummy.reset_and_calculate();
        Models::CMSSM_demo::Functown::MSSM_demo_parameters.reset_and_calculate();
        local_xsection.reset_and_calculate();
        nevents_dbl.reset_and_calculate();
        nevents_int.reset_and_calculate();
        function_pointer_retriever.reset_and_calculate(); // (This one doesn't actually matter for the rest of the dependency chain, so could go anywhere.)

        // Retrieve the (cached) results of the module functions.  The argument is the thread index; everything except '0' is just temporary data.
        double r1 = nevents_dbl(0); 
        int r2 = nevents_int(0);
        std::cout << std::endl << "Retrieved results: " << r1 << ", " << r2 << std::endl << std::endl;

      }

      // Be sure to do something sensible in cases where the point was invalidated by one of functions.
      catch (Gambit::invalid_point_exception& e)
      {
        std::cout << std::endl << "That was a bad point.  Oh well, try again." << std::endl << std::endl;
      }

    }

    std::cout << "ExampleBit_A standalone example has finished successfully." << std::endl << std::endl;
   
  }

  catch (std::exception& e)
  {
    std::cout << "ExampleBit_A standalone example has exited with fatal exception: " << e.what() << std::endl;
  }

  return 0;

}
