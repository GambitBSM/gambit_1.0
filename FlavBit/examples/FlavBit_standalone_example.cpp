//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  
///  Example of GAMBIT FlavBit standalone
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
#include "gambit/FlavBit/FlavBit_rollcall.hpp"
#include "gambit/Elements/spectrum_factories.hpp"
#include "gambit/Elements/MSSMskeleton.hpp"
#include "gambit/Elements/mssm_slhahelp.hpp"

using namespace FlavBit::Accessors;     // Helper functions that provide some info about the module
using namespace FlavBit::Functown;      // Functors wrapping the module's actual module functions
using namespace BackendIniBit::Functown;    // Functors wrapping the backend initialisation functions

QUICK_FUNCTION(FlavBit, MSSM_spectrum, NEW_CAPABILITY, createSpectrum, const Spectrum*, (MSSM30atQ,MSSM30atMGUT))

// SLHA file for input: user can change name here
// Note that it must contain the decay table for the LEP likelihoods to function properly
// Will need to put a suitable file in FlavBit somewhere
const std::string inputFileName = "ColliderBit/data/standalone.slha";

namespace Gambit
{
  namespace FlavBit {

    // Make a GAMBIT spectrum object from an SLHA file
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
    std::string prefix("runs/FlavBit_standalone/logs/");

    // Ensure that the above directory exists
    Utils::ensure_path_exists(prefix);
    
    // Add entries to the loggerinfo map
    loggerinfo["Core, Error"] = prefix+"core_errors.log";
    loggerinfo["Default"]     = prefix+"default.log";
    loggerinfo["Warning"]     = prefix+"warnings.log";
    loggerinfo["FlavBit, Info"] = prefix+"FlavBit_info.log";
    
    // Initialise global LogMaster object
    logger().initialise(loggerinfo);
    
    logger()<<"Running FlavBit standalone example"<<LogTags::info<<EOM;
    
    std::cout << std::endl << "My name is " << name() << std::endl;
    std::cout << " I can calculate: " << endl << iCanDo << std::endl;
    std::cout << " ...but I may need: " << endl << iMayNeed << std::endl << std::endl;

    // Set up the b2sll_LL likelihood
    // Have to resolve dependencies by hand
    // b2sll_likelihood depends on:
    //    - FlavBit_fill
    //    - b2sll_M
    //    - Debug_Cap
    //    - Debug_Cap_LL

    createSpectrum.notifyOfModel("MSSM30atQ");
    
    b2sll_likelihood.resolveDependency(&SI_FlavBit_fill);
    b2sll_likelihood.resolveDependency(&b2sll_measurements);
    b2sll_likelihood.resolveDependency(&Debug);
    b2sll_likelihood.resolveDependency(&Debug_LL);

    //SI_FlavBit_fill depends on:
    //   - BEreq Init_param
    //   - BEreq slha_adjust
    //   - BEopt SuperIso, 3.4
    //   - MSSM_spectrum
    //   - Debug_Cap
    //   - Debug_Cap_LL
    SI_FlavBit_fill.resolveDependency(&createSpectrum);
    SI_FlavBit_fill.resolveDependency(&Debug);
    SI_FlavBit_fill.resolveDependency(&Debug_LL);
    SI_FlavBit_fill.resolveBackendReq(&Backends::SuperIso_3_4::Functown::Init_param);
    SI_FlavBit_fill.resolveBackendReq(&Backends::SuperIso_3_4::Functown::slha_adjust);

    //b2sll_measurements depends on:
    //   - FlavBit_fill
    //   - BRBKstarmumu_11_25
    //   - BRBKstarmumu_25_40
    //   - BRBKstarmumu_40_60
    //   - BRBKstarmumu_60_80
    //   - BRBKstarmumu_15_17
    //   - BRBKstarmumu_17_19
    //   - Debug_Cap
    //   = Debug_Cap_LL

    b2sll_measurements.resolveDependency(&SI_FlavBit_fill);
    b2sll_measurements.resolveDependency(&SI_BRBKstarmumu_11_25);
    b2sll_measurements.resolveDependency(&SI_BRBKstarmumu_25_40);
    b2sll_measurements.resolveDependency(&SI_BRBKstarmumu_40_60);
    b2sll_measurements.resolveDependency(&SI_BRBKstarmumu_60_80);
    b2sll_measurements.resolveDependency(&SI_BRBKstarmumu_15_17);
    b2sll_measurements.resolveDependency(&SI_BRBKstarmumu_17_19);
    b2sll_measurements.resolveDependency(&Debug);
    b2sll_measurements.resolveDependency(&Debug_LL);
    
    // Double-check which backend requirements have been filled with what
    std::cout << std::endl << "My function SI_FlavBit_fill  has had its backend requirement on Init_param filled by:" << std::endl;
    std::cout << FlavBit::Pipes::SI_FlavBit_fill::BEreq::Init_param.origin() << "::";
    std::cout << FlavBit::Pipes::SI_FlavBit_fill::BEreq::Init_param.name() << std::endl;
    std::cout << std::endl << "My function SI_FlavBit_fill  has had its backend requirement on slha_adjust filled by:" << std::endl;
    std::cout << FlavBit::Pipes::SI_FlavBit_fill::BEreq::slha_adjust.origin() << "::";
    std::cout << FlavBit::Pipes::SI_FlavBit_fill::BEreq::slha_adjust.name() << std::endl;
    
    // Double-check which dependencies have been filled with what (not every combo is done)
    /*std::cout << std::endl << "My function calc_LHC_LogLike has had its dependency on AnalysisNumbers filled by:" << endl;
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
    std::cout << ColliderBit::Pipes::generatePythia8Event::Dep::HardScatteringSim.name() << std::endl;*/
    
    // Set Module function options here
    // User can edit this section to configure ColliderBit
    // See the ColiderBit manual for available options
    
    // TO DO: Need a way of handling pythia options (they are not currently being used).
    // This requires handling nested yaml options 
    
    // First we have the LHC options
    /*std::vector<std::string> runTheseAnalyses;
    runTheseAnalyses.push_back("ATLAS_0LEP_20invfb");  // specify which LHC analyses to run
    getAnalysisContainer.setOption<std::vector<std::string>>("analysisNames",runTheseAnalyses);

    std::cout << "Here a" << std::endl;
    
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

    std::cout << "Here b" << std::endl;
    
    std::vector<std::string> pythiaNames;
    pythiaNames.push_back("Pythia_SUSY_LHC_8TeV");
    operateLHCLoop.setOption<std::vector<std::string>>("pythiaNames",pythiaNames);
    operateLHCLoop.setOption<int>("nEvents",10000.); // specify the number of simulated LHC events*/
    
    // Start running here
    
    {
      
      // Call the initialisation functions for all backends that are in use. 
      //nulike_1_0_2_init.reset_and_calculate();

      /*
      // Call the LHC likelihood
      operateLHCLoop.reset_and_calculate();
      calc_LHC_LogLike.reset_and_calculate();
      
      // Retrieve and print the LHC likelihood
      double loglike = calc_LHC_LogLike(0);
      std::cout << "LHC log likelihood is " << loglike << std::endl;
      */

      // Call the ALEPH slepton likelihoods
      /*createSpectrum.reset_and_calculate();
      createDecays.reset_and_calculate();
      createZDecays.reset_and_calculate();
      createSelDecays.reset_and_calculate();
      createSerDecays.reset_and_calculate();
      createSmulDecays.reset_and_calculate();
      createSmurDecays.reset_and_calculate();
      createStau1Decays.reset_and_calculate();
      createStau2Decays.reset_and_calculate();
      LEP208_SLHA1_convention_xsec_selselbar.reset_and_calculate();
      LEP208_SLHA1_convention_xsec_smulsmulbar.reset_and_calculate();
      LEP208_SLHA1_convention_xsec_serserbar.reset_and_calculate();
      LEP208_SLHA1_convention_xsec_smursmurbar.reset_and_calculate();
      LEP208_SLHA1_convention_xsec_stau1stau1bar.reset_and_calculate();
      LEP208_SLHA1_convention_xsec_stau2stau2bar.reset_and_calculate();
      LEP205_SLHA1_convention_xsec_selselbar.reset_and_calculate();
      LEP205_SLHA1_convention_xsec_smulsmulbar.reset_and_calculate();
      LEP205_SLHA1_convention_xsec_serserbar.reset_and_calculate();
      LEP205_SLHA1_convention_xsec_smursmurbar.reset_and_calculate();
      LEP205_SLHA1_convention_xsec_stau1stau1bar.reset_and_calculate();
      LEP205_SLHA1_convention_xsec_stau2stau2bar.reset_and_calculate();
      
      ALEPH_Selectron_Conservative_LLike.reset_and_calculate();
      ALEPH_Smuon_Conservative_LLike.reset_and_calculate();
      ALEPH_Stau_Conservative_LLike.reset_and_calculate();
      L3_Selectron_Conservative_LLike.reset_and_calculate();
      L3_Smuon_Conservative_LLike.reset_and_calculate();
      L3_Stau_Conservative_LLike.reset_and_calculate();*/

      //std::cout << "ALEPH slepton log likes " << ALEPH_Selectron_Conservative_LLike(0) << " " << ALEPH_Smuon_Conservative_LLike(0) << " " << ALEPH_Stau_Conservative_LLike(0) << std::endl;
      //std::cout << "L3 slepton log likes " << L3_Selectron_Conservative_LLike(0) << " " << L3_Smuon_Conservative_LLike(0) << " " << L3_Stau_Conservative_LLike(0) << std::endl;
      
    }
  }
  catch (std::exception& e)
    {
      std::cout << "FlavBit_standalone example has exited with fatal exception: " << e.what() << std::endl;
    }
}
