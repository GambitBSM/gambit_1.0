//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  
///  Example of GAMBIT ColliderBit standalone
///  main program.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  Martin White (martin.white@adelaide.edu.au)
///  January 2016
///
///  *********************************************

// Always required in any standalone module main file
#include "gambit/Utils/standalone_module.hpp"
#include "gambit/ColliderBit/ColliderBit_rollcall.hpp"
#include "gambit/Elements/spectrum_factories.hpp"
#include "gambit/Elements/MSSMskeleton.hpp"

using namespace ColliderBit::Accessors;     // Helper functions that provide some info about the module
using namespace ColliderBit::Functown;      // Functors wrapping the module's actual module functions
using namespace BackendIniBit::Functown;    // Functors wrapping the backend initialisation functions

QUICK_FUNCTION(ColliderBit, MSSM_spectrum, NEW_CAPABILITY, createSpectrum, const Spectrum*, (MSSM30atQ,MSSM30atMGUT))

const std::string inputFileName = "ColliderBit/data/sps1aWithDecays.spc";

namespace Gambit
{
  namespace ColliderBit {
    
    void createSpectrum(const Spectrum *& outSpec){
      static Spectrum mySpec;
      mySpec = spectrum_from_SLHA<MSSMskeleton>(inputFileName);
      
      outSpec = &mySpec;
    }
  }
}

int main()
{

  try{
    
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
    
    std::cout << std::endl << "My name is " << name() << std::endl;
    std::cout << " I can calculate: " << endl << iCanDo << std::endl;
    std::cout << " ...but I may need: " << endl << iMayNeed << std::endl << std::endl;
    
    // Set up the LHC likelihood calculations
    // WARNING: DO NOT EDIT UNLESS YOU ARE AN EXPERT
    calc_LHC_LogLike.resolveDependency(&runAnalyses);
    calc_LHC_LogLike.resolveBackendReq(&Backends::nulike_1_0_1::Functown::nulike_lnpiln); //treat systematics with a log normal distribution
    runAnalyses.resolveDependency(&getAnalysisContainer);
    runAnalyses.resolveDependency(&getPythiaFileReader);
    runAnalyses.resolveDependency(&reconstructBuckFastEvent);
    getAnalysisContainer.resolveDependency(&getPythiaFileReader);
    reconstructBuckFastEvent.resolveDependency(&convertPythia8ParticleEvent);
    reconstructBuckFastEvent.resolveDependency(&getBuckFast);
    convertPythia8ParticleEvent.resolveDependency(&generatePythia8Event);
    generatePythia8Event.resolveDependency(&getPythiaFileReader);
    getPythiaFileReader.resolveLoopManager(&operateLHCLoop);
    getBuckFast.resolveLoopManager(&operateLHCLoop);
    getAnalysisContainer.resolveLoopManager(&operateLHCLoop);
    generatePythia8Event.resolveLoopManager(&operateLHCLoop);
    convertPythia8ParticleEvent.resolveLoopManager(&operateLHCLoop);
    reconstructBuckFastEvent.resolveLoopManager(&operateLHCLoop);
    runAnalyses.resolveLoopManager(&operateLHCLoop);
    std::vector<functor*> nested_functions = initVector<functor*>(&getPythiaFileReader, &getBuckFast, &getAnalysisContainer,&generatePythia8Event,&convertPythia8ParticleEvent,&reconstructBuckFastEvent,&runAnalyses);
    operateLHCLoop.setNestedList(nested_functions);
    
    // Set up an example LEP calculation
    // Note that the LEP functions need a spectrum
    // Use SpecBit::Pipes::get_MSSM_spectrum_from_SLHAfile
    
    // QUICK_FUNCTION(ColliderBit, ALEPH_Selectron_LLike, NEW_CAPABILITY, ALEPH_Selectron_Conservative_LLike, double, (MSSM30atQ, MSSM30atMGUT), (MSSM_spectrum, const Spectrum*), (LEP208_xsec_selselbar, triplet<double>), (LEP208_xsec_serserbar, triplet<double>), (selectron_l_decay_rates, DecayTable::Entry), (selectron_r_decay_rates, DecayTable::Entry))
    
    // ALEPH_Selectron_Conservative_LLike depends on the model
    // It also depends on an MSSM_spectrum  
    std::cout << "About to resolve LEP " << std::endl;
    ALEPH_Selectron_Conservative_LLike.resolveDependency(&createSpectrum);
    
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
    
    // Set Module function options here
    // User can edit this section to configure ColliderBit
    // See the ColiderBit manual for available options
    
    // TO DO: Need a way of handling pythia options (they are not currently being used).
    // This requires handling nested yaml options 
    
    // First we have the LHC options
    std::vector<std::string> runTheseAnalyses;
    runTheseAnalyses.push_back("ATLAS_0LEP_20invfb");  // specify which LHC analyses to run
    getAnalysisContainer.setOption<std::vector<std::string>>("analysisNames",runTheseAnalyses);
    
    std::vector<std::string> inputFiles;
    inputFiles.push_back(inputFileName); // specify the input SLHA filename(s)
    std::vector<std::string> pythiaOptions; // use this vector to store Pythia options
    pythiaOptions.push_back("PartonLevel:MPI = off");
    pythiaOptions.push_back("PartonLevel:ISR = on");
    pythiaOptions.push_back("PartonLevel:FSR = on");
    pythiaOptions.push_back("HadronLevel:all = on");
    pythiaOptions.push_back("TauDecays:mode = 0");
    getPythiaFileReader.setOption<std::string>("Pythia_doc_path","Backends/installed/Pythia/8.212/share/Pythia8/xmldoc/"); // specify the Pythia xml file location
    getPythiaFileReader.setOption<std::vector<std::string>>("SLHA_filenames",inputFiles);
  
    std::vector<std::string> pythiaNames;
    pythiaNames.push_back("Pythia_SUSY_LHC_8TeV");
    operateLHCLoop.setOption<std::vector<std::string>>("pythiaNames",pythiaNames);
    operateLHCLoop.setOption<int>("nEvents",10000.); // specify the number of simulated LHC events
    
    // Start running here
    
    {
      
      // Call the initialisation functions for all backends that are in use. 
      nulike_1_0_1_init.reset_and_calculate();

      // Call the LHC likelihood
      operateLHCLoop.reset_and_calculate();
      calc_LHC_LogLike.reset_and_calculate();
      
      // Retrieve and print the log likelihood
      
      double loglike = calc_LHC_LogLike(0);
      std::cout << "Finished. Log likelihood is " << loglike << std::endl;
      
    }
  }
  catch (std::exception& e)
    {
      std::cout << "ColliderBit_standalone example has exited with fatal exception: " << e.what() << std::endl;
    }
}
