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
  
  std::cout << std::endl << "My name is " << name() << std::endl;
  std::cout << " I can calculate: " << endl << iCanDo << std::endl;
  std::cout << " ...but I may need: " << endl << iMayNeed << std::endl << std::endl;
  //std::cout << "I can do nevents: " << provides("nevents") << std::endl;
  
  // Resolve dependencies of nested functions on each other
  // calc_LHC_loglike needs AnalysisNumbers (provided by runAnalyses)
  // It also has a backend requirement of lnlike_marg_poisson
  calc_LHC_LogLike.resolveDependency(&runAnalyses);
  calc_LHC_LogLike.resolveBackendReq(&Backends::nulike_1_0_0::Functown::nulike_lnpiln); //treat systematics with a log normal distribution
  // calc_LHC_LogLike.resolveBackendReq(&Backends::nulike_1_0_0::Functown::nulike_lnpin); // treat systematics with a Gaussian distribution
  // runAnalyses needs a ReconstructedEvent, a HardScatteringSim and an AnalysisContainer  
  runAnalyses.resolveDependency(&getAnalysisContainer);
  runAnalyses.resolveDependency(&getPythiaFileReader);
  runAnalyses.resolveDependency(&reconstructBuckFastEvent);
  // getAnalysisContainer needs a HardScatteringSim (MJW- why?)
  getAnalysisContainer.resolveDependency(&getPythiaFileReader);
  // reconstructBuckFastEvent needs a ConvertedScatteringEvent and a SimpleSmearingSim
  reconstructBuckFastEvent.resolveDependency(&convertPythia8ParticleEvent);
  reconstructBuckFastEvent.resolveDependency(&getBuckFast);
  // convertPythia8ParticleEvent needs a HardScatteringEvent
  convertPythia8ParticleEvent.resolveDependency(&generatePythia8Event);
  // generatePythia8Event needs a HardScatteringSim
  generatePythia8Event.resolveDependency(&getPythiaFileReader);

  // Now set the loop manager for nested functions
  getPythiaFileReader.resolveLoopManager(&operateLHCLoop);
  getBuckFast.resolveLoopManager(&operateLHCLoop);
  getAnalysisContainer.resolveLoopManager(&operateLHCLoop);
  generatePythia8Event.resolveLoopManager(&operateLHCLoop);
  convertPythia8ParticleEvent.resolveLoopManager(&operateLHCLoop);
  reconstructBuckFastEvent.resolveLoopManager(&operateLHCLoop);
  runAnalyses.resolveLoopManager(&operateLHCLoop);

  std::vector<functor*> nested_functions = initVector<functor*>(&getPythiaFileReader, &getBuckFast, &getAnalysisContainer,&generatePythia8Event,&convertPythia8ParticleEvent,&reconstructBuckFastEvent,&runAnalyses);

  operateLHCLoop.setNestedList(nested_functions);

  // Double-check which backend requirements have been filled with what
  std::cout << std::endl << "My function calc_LHC_LogLike has had its backend requirement on lnlike_marg_poisson filled by:" << std::endl;
  std::cout << ColliderBit::Pipes::calc_LHC_LogLike::BEreq::lnlike_marg_poisson_lognormal_error.origin() << "::";
  std::cout << ColliderBit::Pipes::calc_LHC_LogLike::BEreq::lnlike_marg_poisson_lognormal_error.name() << std::endl;

  // Double-check which dependencies have been filled with what (not every combo is done)
  std::cout << std::endl << "My function calc_LHC_LogLike has had its dependency on AnalysisNumbers filled by:" << endl;
  std::cout << ColliderBit::Pipes::calc_LHC_LogLike::Dep::AnalysisNumbers.origin() << "::";
  std::cout << ColliderBit::Pipes::calc_LHC_LogLike::Dep::AnalysisNumbers.name() << std::endl;
  std::cout << std::endl << "My function runAnalyses has had its dependency on ReconstructedEvent filled by:" << endl;
  std::cout << ColliderBit::Pipes::runAnalyses::Dep::ReconstructedEvent.origin() << "::";
  std::cout << ColliderBit::Pipes::runAnalyses::Dep::ReconstructedEvent.name() << std::endl;
  std::cout << std::endl << "My function runAnalyses has had its dependency on HardScatteringSim filled by:" << endl;
  std::cout << ColliderBit::Pipes::runAnalyses::Dep::HardScatteringSim.origin() << "::";
  std::cout << ColliderBit::Pipes::runAnalyses::Dep::HardScatteringSim.name() << std::endl;
  std::cout << std::endl << "My function runAnalyses has had its dependency on AnalysisContainer filled by:" << endl;
  std::cout << ColliderBit::Pipes::runAnalyses::Dep::AnalysisContainer.origin() << "::";
  std::cout << ColliderBit::Pipes::runAnalyses::Dep::AnalysisContainer.name() << std::endl;
  std::cout << std::endl << "My function getAnalysisContainer has had its dependency on HardScatteringSim filled by:" << endl;
  std::cout << ColliderBit::Pipes::getAnalysisContainer::Dep::HardScatteringSim.origin() << "::";
  std::cout << ColliderBit::Pipes::getAnalysisContainer::Dep::HardScatteringSim.name() << std::endl;
  std::cout << std::endl << "My function reconstructBuckFastEvent has had its dependency on ConvertedScatteringEvent filled by:" << endl;
  std::cout << ColliderBit::Pipes::reconstructBuckFastEvent::Dep::ConvertedScatteringEvent.origin() << "::";
  std::cout << ColliderBit::Pipes::reconstructBuckFastEvent::Dep::ConvertedScatteringEvent.name() << std::endl;
  std::cout << std::endl << "My function reconstructBuckFastEvent has had its dependency on SimpleSmearingSim filled by:" << endl;
  std::cout << ColliderBit::Pipes::reconstructBuckFastEvent::Dep::SimpleSmearingSim.origin() << "::";
  std::cout << ColliderBit::Pipes::reconstructBuckFastEvent::Dep::SimpleSmearingSim.name() << std::endl;
  std::cout << std::endl << "My function convertPythia8ParticleEvent has had its dependency on HardScatteringEvent filled by:" << endl;
  std::cout << ColliderBit::Pipes::convertPythia8ParticleEvent::Dep::HardScatteringEvent.origin() << "::";
  std::cout << ColliderBit::Pipes::convertPythia8ParticleEvent::Dep::HardScatteringEvent.name() << std::endl;
  std::cout << std::endl << "My function generatePythia8Event has had its dependency on HardScatteringSim filled by:" << endl;
  std::cout << ColliderBit::Pipes::generatePythia8Event::Dep::HardScatteringSim.origin() << "::";
  std::cout << ColliderBit::Pipes::generatePythia8Event::Dep::HardScatteringSim.name() << std::endl;
       
  // Set some module function options
  // TO DO: Need a way of handling pythia options (they are not currently being used).
  // This requires handling nested yaml options 
  
  std::vector<std::string> runTheseAnalyses;
  runTheseAnalyses.push_back("ATLAS_0LEP_20invfb");
  getAnalysisContainer.setOption<std::vector<std::string>>("analysisNames",runTheseAnalyses);
  
  std::vector<std::string> inputFileName;
  inputFileName.push_back("ColliderBit/data/sps1aWithDecays.spc");
  std::vector<std::string> pythiaOptions;
  pythiaOptions.push_back("PartonLevel:MPI = off");
  pythiaOptions.push_back("PartonLevel:ISR = on");
  pythiaOptions.push_back("PartonLevel:FSR = on");
  pythiaOptions.push_back("HadronLevel:all = on");
  pythiaOptions.push_back("TauDecays:mode = 0");

  getPythiaFileReader.setOption<std::string>("Pythia_doc_path","Backends/installed/Pythia/8.212/share/Pythia8/xmldoc/");
  //getPythiaFileReader.setOption<std::vector<std::string>>("Pythia_Standalone, pythiaOptions_1",pythiaOptions);
  getPythiaFileReader.setOption<std::vector<std::string>>("SLHA_filenames",inputFileName);
  
  std::vector<std::string> pythiaNames;
  pythiaNames.push_back("Pythia_SUSY_LHC_8TeV");
  operateLHCLoop.setOption<std::vector<std::string>>("pythiaNames",pythiaNames);
  operateLHCLoop.setOption<int>("nEvents",10000.);

  // Start running here

  {
        
    // Call the initialisation functions for all backends that are in use. 
    nulike_1_0_0_init.reset_and_calculate();
    
    operateLHCLoop.reset_and_calculate();
    calc_LHC_LogLike.reset_and_calculate();

    // Retrieve and print the log likelihood

    double loglike = calc_LHC_LogLike(0);
    std::cout << "Finished. Log likelihood is " << loglike << std::endl;
    
  }
    
}
