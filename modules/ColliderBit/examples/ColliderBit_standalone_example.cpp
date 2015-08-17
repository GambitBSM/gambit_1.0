//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Example of GAMBIT ColliderBit standalone
///  main program.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///
///  *********************************************

// Always required in any standalone module main file
#include "gambit/Utils/standalone_module.hpp"
#include "gambit/ColliderBit/ColliderBit_rollcall.hpp"

using namespace ColliderBit::Accessors;     // Helper functions that provide some info about the module
using namespace ColliderBit::Functown;      // Functors wrapping the module's actual module functions
using namespace BackendIniBit::Functown;    // Functors wrapping the backend initialisation functions

QUICK_FUNCTION(ColliderBit, id, OLD_CAPABILITY, id_dummy, std::string)

// Ad-hoc functions for filling dependencies that cannot or should not otherwise be filled from inside ColliderBit.
namespace Gambit 
{
  namespace ColliderBit
  {
    void id_dummy(std::string &result) { result = "identity_example"; }
  }
}


int main()
{

  // Make a logging object
  std::map<std::string, std::string> loggerinfo;

  // Define where the logs will end up
  std::string prefix("runs/ColliderBit_standalone/logs/");

  // Ensure that the above directory exists
  Utils::ensure_path_exists(prefix);

  // Add entries to the loggerinfo map
  loggerinfo["Core, Error"] = prefix+"core_errors.log";
  loggerinfo["Default"]     = prefix+"default.log";
  loggerinfo["Warning"]     = prefix+"warnings.log";
  loggerinfo["ColliderBit, Info"] = prefix+"ColliderBit_info.log";

  // Initialise global LogMaster object
  logger().initialise(loggerinfo);

  logger()<<"Running ColliderBit standalone example"<<LogTags::info<<EOM;


  /*std::cout << std::endl << "My name is " << name() << std::endl;
  std::cout << " I can calculate: " << endl << iCanDo << std::endl;
  std::cout << " ...but I may need: " << endl << iMayNeed << std::endl << std::endl;*/
  //std::cout << "I can do nevents: " << provides("nevents") << std::endl;

  // Resolve backend requirements 'by hand'.  Must be done before dependencies are resolved.
  // In our case, this means nulike (for likelihood calculations)
  calcLogLike.resolveBackendReq(&Backends::nulike_1_0_0::Functown::nulike_lnpiln); //treat systematics with a log normal distribution
  // calcLogLike.resolveBackendReq(&Backends::nulike_1_0_0::Functown::nulike_lnpin); // treat systematics with a Gaussian distribution
  
  // Notify any module functions that care of the model(s) being scanned.
  // 'Care' means where they depend on model parameters directly, or have dependencies or backend requirements that are
  // conditional on the model being analysed. 
  Models::CMSSM_demo::Functown::MSSM_demo_parameters.notifyOfModel("CMSSM_demo");
  getPythia.notifyOfModel("CMSSM_demo");
  
  // CMSSM SUSY example
  
  ModelParameters* CMSSM_primary_parameters = Models::CMSSM_demo::Functown::primary_parameters.getcontentsPtr();
  
  
  // Resolve dependencies for module functions by hand
  Models::CMSSM_demo::Functown::MSSM_demo_parameters.resolveDependency(&Models::CMSSM_demo::Functown::primary_parameters);
  Models::CMSSM_demo::Functown::MSSM_demo_parameters.resolveDependency(&id_dummy);
  
  convertPythia8ParticleEvent.resolveDependency(&generatePythia8Event);
  getAnalysisContainer.resolveDependency(&getPythia);  
  reconstructBuckFastEvent.resolveDependency(&convertPythia8ParticleEvent);
  reconstructBuckFastEvent.resolveDependency(&getBuckFast);
  runAnalyses.resolveDependency(&getAnalysisContainer);
  runAnalyses.resolveDependency(&getPythia);
  runAnalyses.resolveDependency(&reconstructBuckFastEvent);
  calcLogLike.resolveDependency(&runAnalyses);
  

  //Start processing some points here (eventually this will become a scan)

  {
    // Give the primary model parameters
    CMSSM_primary_parameters->setValue("M0",100.);
    CMSSM_primary_parameters->setValue("A0",0.);
    CMSSM_primary_parameters->setValue("M12",400.);
    CMSSM_primary_parameters->setValue("tanb",10.);
    CMSSM_primary_parameters->setValue("sgnmu",1.);
    
    // Call the initialisation functions for all backends that are in use. 
    nulike_1_0_0_init.reset_and_calculate();

    // Call the actual module functions, taking care to calculate in the order implied by how the dependencies have been filled;
    // i.e. calculate quantities that other quantities depend on first.
    logger()<<"Calculating model parameters"<<LogTags::info<<EOM;
    Models::CMSSM_demo::Functown::MSSM_demo_parameters.reset_and_calculate();
    
    logger()<<"Running getPythia()"<<LogTags::info<<EOM;
    getPythia.reset_and_calculate();
    
    getAnalysisContainer.reset_and_calculate();
    reconstructBuckFastEvent.reset_and_calculate();
    runAnalyses.reset_and_calculate();
    calcLogLike.reset_and_calculate();
  }
    
}
