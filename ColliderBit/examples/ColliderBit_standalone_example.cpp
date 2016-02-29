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
#include "gambit/Elements/mssm_slhahelp.hpp"

using namespace ColliderBit::Accessors;     // Helper functions that provide some info about the module
using namespace ColliderBit::Functown;      // Functors wrapping the module's actual module functions
using namespace BackendIniBit::Functown;    // Functors wrapping the backend initialisation functions

// These functions are defined to allow GAMBIT dependencies to be satisfied properly without using GAMBIT
// The user does not need to change these
QUICK_FUNCTION(ColliderBit, MSSM_spectrum, NEW_CAPABILITY, createSpectrum, const Spectrum*, (MSSM30atQ,MSSM30atMGUT))
QUICK_FUNCTION(ColliderBit, decay_rates, NEW_CAPABILITY, createDecays, DecayTable, (MSSM30atQ,MSSM30atMGUT), (MSSM_spectrum, const Spectrum*))
QUICK_FUNCTION(ColliderBit, Z_decay_rates, NEW_CAPABILITY, createZDecays, DecayTable::Entry, (MSSM30atQ,MSSM30atMGUT))
QUICK_FUNCTION(ColliderBit, selectron_l_decay_rates, NEW_CAPABILITY, createSelDecays, DecayTable::Entry, (MSSM30atQ,MSSM30atMGUT), (decay_rates, DecayTable), (MSSM_spectrum, const Spectrum*))
QUICK_FUNCTION(ColliderBit, selectron_r_decay_rates, NEW_CAPABILITY, createSerDecays, DecayTable::Entry, (MSSM30atQ,MSSM30atMGUT), (decay_rates, DecayTable), (MSSM_spectrum, const Spectrum*))
QUICK_FUNCTION(ColliderBit, smuon_l_decay_rates, NEW_CAPABILITY, createSmulDecays, DecayTable::Entry, (MSSM30atQ,MSSM30atMGUT), (decay_rates, DecayTable), (MSSM_spectrum, const Spectrum*))
QUICK_FUNCTION(ColliderBit, smuon_r_decay_rates, NEW_CAPABILITY, createSmurDecays, DecayTable::Entry, (MSSM30atQ,MSSM30atMGUT), (decay_rates, DecayTable), (MSSM_spectrum, const Spectrum*))
QUICK_FUNCTION(ColliderBit, stau_1_decay_rates, NEW_CAPABILITY, createStau1Decays, DecayTable::Entry, (MSSM30atQ,MSSM30atMGUT), (decay_rates, DecayTable), (MSSM_spectrum, const Spectrum*))
QUICK_FUNCTION(ColliderBit, stau_2_decay_rates, NEW_CAPABILITY, createStau2Decays, DecayTable::Entry, (MSSM30atQ,MSSM30atMGUT), (decay_rates, DecayTable), (MSSM_spectrum, const Spectrum*))

// SLHA file for input: user can change name here
// Note that it must contain the full decay table for the LEP likelihoods to function properly
// See example below for reference
const std::string inputFileName = "ColliderBit/data/standalone.slha";

namespace Gambit
{
  namespace ColliderBit {

    // Make a GAMBIT spectrum object from an SLHA file
    void createSpectrum(const Spectrum *& outSpec){
      static Spectrum mySpec;
      mySpec = spectrum_from_SLHA<MSSMskeleton>(inputFileName);     
      outSpec = &mySpec;
    }
    
    void createDecays(DecayTable& outDecays)
    {
      // This function makes a decay table from an input SLHA file
      const Spectrum* spec = (*Pipes::createDecays::Dep::MSSM_spectrum);
      outDecays = DecayTable(inputFileName, spec->PDG_translator(), 0, true);
    }
    
    void createZDecays(DecayTable::Entry& result){
      // This function extracts the Z decay entry
      result.width_in_GeV = 2.4952;
      result.positive_error = 2.3e-03;
      result.negative_error = 2.3e-03;
      result.set_BF(0.03363, 0.00004, "e+", "e-");
      result.set_BF(0.03366, 0.00007, "mu+", "mu-");
      result.set_BF(0.03370, 0.00008, "tau+", "tau-");
      result.set_BF(0.6991, 0.0006, "hadron", "hadron");      
    }
    
    
    void createSelDecays(DecayTable::Entry& outSelDecays){
      // This function extracts the left-handed selectron decay table
      // This is a little more complicated than the previous function
      // Need to get the string that corresponds to a left-handed selectron (the decay table entries are in the mass eigenstate basis)
      double max_mixing;
      const SubSpectrum* mssm = (*Pipes::createSelDecays::Dep::MSSM_spectrum)->get_HE();
      str x = slhahelp::mass_es_from_gauge_es("~e_L", max_mixing, mssm);
      outSelDecays = (*Pipes::createSelDecays::Dep::decay_rates)(x);
    }

    void createSerDecays(DecayTable::Entry& outSerDecays){
      // This function extracts the right-handed selectron decay table
      double max_mixing;
      const SubSpectrum* mssm = (*Pipes::createSerDecays::Dep::MSSM_spectrum)->get_HE();
      str x = slhahelp::mass_es_from_gauge_es("~e_R", max_mixing, mssm);
      outSerDecays = (*Pipes::createSerDecays::Dep::decay_rates)(x);
    }

    void createSmulDecays(DecayTable::Entry& outSmulDecays){
      // This function extracts the left-handed smuon decay table
      double max_mixing;
      const SubSpectrum* mssm = (*Pipes::createSmulDecays::Dep::MSSM_spectrum)->get_HE();
      str x = slhahelp::mass_es_from_gauge_es("~mu_L", max_mixing, mssm);
      outSmulDecays = (*Pipes::createSmulDecays::Dep::decay_rates)(x);
    }
    
    void createSmurDecays(DecayTable::Entry& outSmurDecays){
      //This function extracts the right-handed smuon decay table
      double max_mixing;
      const SubSpectrum* mssm = (*Pipes::createSmurDecays::Dep::MSSM_spectrum)->get_HE();
      str x = slhahelp::mass_es_from_gauge_es("~mu_R", max_mixing, mssm);
      outSmurDecays = (*Pipes::createSmurDecays::Dep::decay_rates)(x);
    }
    
    void createStau1Decays(DecayTable::Entry& outStau1Decays){
      //This function extracts the stau1 decay table
      const SubSpectrum* mssm = (*Pipes::createStau1Decays::Dep::MSSM_spectrum)->get_HE();
      // Set these arguments by hand for this example
      const static double tol = 0.001;
      const static bool pterror=false;
      str stau1_string = slhahelp::mass_es_closest_to_family("~tau_1", mssm,tol,LOCAL_INFO,pterror);
      outStau1Decays = (*Pipes::createStau1Decays::Dep::decay_rates)(stau1_string);
    }

    void createStau2Decays(DecayTable::Entry& outStau2Decays){
      //This function extracts the stau2 decay table
      const SubSpectrum* mssm = (*Pipes::createStau1Decays::Dep::MSSM_spectrum)->get_HE();
      const static double tol = 0.001;
      const static bool pterror=false;
      str stau2_string = slhahelp::mass_es_closest_to_family("~tau_2", mssm,tol,LOCAL_INFO,pterror);
      outStau2Decays = (*Pipes::createStau2Decays::Dep::decay_rates)(stau2_string);
    }
    
  }
}

int main()
{

  try{
    
    // Make a logging object
    std::map<std::string, std::string> loggerinfo;
    
    // Define where the logs will end up
    // User could change this if required
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
    
    // We now set up the module functions that we wish use
    // Dependencies and backend requirements of module functions are resolved by hand
    // WARNING: DO NOT EDIT UNLESS YOU ARE AN EXPERT

    // Set up the LHC likelihood calculations
    calc_LHC_LogLike.resolveDependency(&runATLASAnalyses);
    calc_LHC_LogLike.resolveBackendReq(&Backends::nulike_1_0_2::Functown::nulike_lnpiln); //treat systematics with a log normal distribution
    runATLASAnalyses.resolveDependency(&getATLASAnalysisContainer);
    runATLASAnalyses.resolveDependency(&getPythiaFileReader);
    runATLASAnalyses.resolveDependency(&smearEventATLAS);
    getATLASAnalysisContainer.resolveDependency(&getPythiaFileReader);
    smearEventATLAS.resolveDependency(&generatePythia8Event);
    smearEventATLAS.resolveDependency(&getBuckFastATLAS);
    generatePythia8Event.resolveDependency(&getPythiaFileReader);
    getPythiaFileReader.resolveLoopManager(&operateLHCLoop);
    getBuckFastATLAS.resolveLoopManager(&operateLHCLoop);
    getATLASAnalysisContainer.resolveLoopManager(&operateLHCLoop);
    generatePythia8Event.resolveLoopManager(&operateLHCLoop);
    smearEventATLAS.resolveLoopManager(&operateLHCLoop);
    runATLASAnalyses.resolveLoopManager(&operateLHCLoop);
    std::vector<functor*> nested_functions = initVector<functor*>(&getPythiaFileReader, &getBuckFastATLAS, &getATLASAnalysisContainer, &generatePythia8Event, &smearEventATLAS, &runATLASAnalyses);
    operateLHCLoop.setNestedList(nested_functions);
          
    // ALEPH selectron limits
    ALEPH_Selectron_Conservative_LLike.notifyOfModel("MSSM30atQ");
    createSpectrum.notifyOfModel("MSSM30atQ");
    createDecays.notifyOfModel("MSSM30atQ");
    createSelDecays.notifyOfModel("MSSM30atQ");
    createSerDecays.notifyOfModel("MSSM30atQ");
    ALEPH_Selectron_Conservative_LLike.resolveDependency(&createSpectrum);
    ALEPH_Selectron_Conservative_LLike.resolveDependency(&LEP208_SLHA1_convention_xsec_selselbar);
    ALEPH_Selectron_Conservative_LLike.resolveDependency(&LEP208_SLHA1_convention_xsec_serserbar);
    ALEPH_Selectron_Conservative_LLike.resolveDependency(&createSelDecays);
    ALEPH_Selectron_Conservative_LLike.resolveDependency(&createSerDecays);
    LEP208_SLHA1_convention_xsec_selselbar.resolveDependency(&createSpectrum);
    LEP208_SLHA1_convention_xsec_selselbar.resolveDependency(&createZDecays);
    LEP208_SLHA1_convention_xsec_serserbar.resolveDependency(&createSpectrum);
    LEP208_SLHA1_convention_xsec_serserbar.resolveDependency(&createZDecays);
    createDecays.resolveDependency(&createSpectrum);
    createSelDecays.resolveDependency(&createDecays);
    createSelDecays.resolveDependency(&createSpectrum);
    createSerDecays.resolveDependency(&createDecays);
    createSerDecays.resolveDependency(&createSpectrum);

    // ALEPH smuon limits
    ALEPH_Smuon_Conservative_LLike.notifyOfModel("MSSM30atQ");
    createSmulDecays.notifyOfModel("MSSM30atQ");
    createSmurDecays.notifyOfModel("MSSM30atQ");
    ALEPH_Smuon_Conservative_LLike.resolveDependency(&createSpectrum);
    ALEPH_Smuon_Conservative_LLike.resolveDependency(&LEP208_SLHA1_convention_xsec_smulsmulbar);
    ALEPH_Smuon_Conservative_LLike.resolveDependency(&LEP208_SLHA1_convention_xsec_smursmurbar);
    ALEPH_Smuon_Conservative_LLike.resolveDependency(&createSmulDecays);
    ALEPH_Smuon_Conservative_LLike.resolveDependency(&createSmurDecays);
    LEP208_SLHA1_convention_xsec_smulsmulbar.resolveDependency(&createSpectrum);
    LEP208_SLHA1_convention_xsec_smulsmulbar.resolveDependency(&createZDecays);
    LEP208_SLHA1_convention_xsec_smursmurbar.resolveDependency(&createSpectrum);
    LEP208_SLHA1_convention_xsec_smursmurbar.resolveDependency(&createZDecays);
    createSmulDecays.resolveDependency(&createDecays);
    createSmulDecays.resolveDependency(&createSpectrum);
    createSmurDecays.resolveDependency(&createDecays);
    createSmurDecays.resolveDependency(&createSpectrum);

    // ALEPH stau limits
    ALEPH_Stau_Conservative_LLike.notifyOfModel("MSSM30atQ");
    createStau1Decays.notifyOfModel("MSSM30atQ");
    createStau2Decays.notifyOfModel("MSSM30atQ");
    ALEPH_Stau_Conservative_LLike.resolveDependency(&createSpectrum);
    ALEPH_Stau_Conservative_LLike.resolveDependency(&LEP208_SLHA1_convention_xsec_stau1stau1bar);
    ALEPH_Stau_Conservative_LLike.resolveDependency(&LEP208_SLHA1_convention_xsec_stau2stau2bar);
    ALEPH_Stau_Conservative_LLike.resolveDependency(&createStau1Decays);
    ALEPH_Stau_Conservative_LLike.resolveDependency(&createStau2Decays);
    LEP208_SLHA1_convention_xsec_stau1stau1bar.resolveDependency(&createSpectrum);
    LEP208_SLHA1_convention_xsec_stau1stau1bar.resolveDependency(&createZDecays);
    LEP208_SLHA1_convention_xsec_stau2stau2bar.resolveDependency(&createSpectrum);
    LEP208_SLHA1_convention_xsec_stau2stau2bar.resolveDependency(&createZDecays);
    createStau1Decays.resolveDependency(&createDecays);
    createStau1Decays.resolveDependency(&createSpectrum);
    createStau2Decays.resolveDependency(&createDecays);
    createStau2Decays.resolveDependency(&createSpectrum);

    // L3 selectron limits
    L3_Selectron_Conservative_LLike.notifyOfModel("MSSM30atQ");
    L3_Selectron_Conservative_LLike.resolveDependency(&createSpectrum);
    L3_Selectron_Conservative_LLike.resolveDependency(&LEP205_SLHA1_convention_xsec_selselbar);
    L3_Selectron_Conservative_LLike.resolveDependency(&LEP205_SLHA1_convention_xsec_serserbar);
    L3_Selectron_Conservative_LLike.resolveDependency(&createSelDecays);
    L3_Selectron_Conservative_LLike.resolveDependency(&createSerDecays);
    LEP205_SLHA1_convention_xsec_selselbar.resolveDependency(&createSpectrum);
    LEP205_SLHA1_convention_xsec_selselbar.resolveDependency(&createZDecays);
    LEP205_SLHA1_convention_xsec_serserbar.resolveDependency(&createSpectrum);
    LEP205_SLHA1_convention_xsec_serserbar.resolveDependency(&createZDecays);

    // L3 smuon limits
    L3_Smuon_Conservative_LLike.notifyOfModel("MSSM30atQ");
    createSmulDecays.notifyOfModel("MSSM30atQ");
    createSmurDecays.notifyOfModel("MSSM30atQ");
    L3_Smuon_Conservative_LLike.resolveDependency(&createSpectrum);
    L3_Smuon_Conservative_LLike.resolveDependency(&LEP205_SLHA1_convention_xsec_smulsmulbar);
    L3_Smuon_Conservative_LLike.resolveDependency(&LEP205_SLHA1_convention_xsec_smursmurbar);
    L3_Smuon_Conservative_LLike.resolveDependency(&createSmulDecays);
    L3_Smuon_Conservative_LLike.resolveDependency(&createSmurDecays);
    LEP205_SLHA1_convention_xsec_smulsmulbar.resolveDependency(&createSpectrum);
    LEP205_SLHA1_convention_xsec_smulsmulbar.resolveDependency(&createZDecays);
    LEP205_SLHA1_convention_xsec_smursmurbar.resolveDependency(&createSpectrum);
    LEP205_SLHA1_convention_xsec_smursmurbar.resolveDependency(&createZDecays);

    // L3 stau limits
    L3_Stau_Conservative_LLike.notifyOfModel("MSSM30atQ");
    createStau1Decays.notifyOfModel("MSSM30atQ");
    createStau2Decays.notifyOfModel("MSSM30atQ");
    L3_Stau_Conservative_LLike.resolveDependency(&createSpectrum);
    L3_Stau_Conservative_LLike.resolveDependency(&LEP205_SLHA1_convention_xsec_stau1stau1bar);
    L3_Stau_Conservative_LLike.resolveDependency(&LEP205_SLHA1_convention_xsec_stau2stau2bar);
    L3_Stau_Conservative_LLike.resolveDependency(&createStau1Decays);
    L3_Stau_Conservative_LLike.resolveDependency(&createStau2Decays);
    LEP205_SLHA1_convention_xsec_stau1stau1bar.resolveDependency(&createSpectrum);
    LEP205_SLHA1_convention_xsec_stau1stau1bar.resolveDependency(&createZDecays);
    LEP205_SLHA1_convention_xsec_stau2stau2bar.resolveDependency(&createSpectrum);
    LEP205_SLHA1_convention_xsec_stau2stau2bar.resolveDependency(&createZDecays);

    // L3 Neutralino all channels
    L3_Neutralino_All_Channels_Conservative_LLike.notifyOfModel("MSSM30atQ");
    L3_Neutralino_All_Channels_Conservative_LLike.resolveDependency(&createSpectrum);
    L3_Neutralino_All_Channels_Conservative_LLike.resolveDependency(&LEP188_SLHA1_convention_xsec_chi00_12);
    L3_Neutralino_All_Channels_Conservative_LLike.resolveDependency(&LEP188_SLHA1_convention_xsec_chi00_13);
    L3_Neutralino_All_Channels_Conservative_LLike.resolveDependency(&LEP188_SLHA1_convention_xsec_chi00_14);
    L3_Neutralino_All_Channels_Conservative_LLike.resolveDependency(&createDecays);
    LEP188_SLHA1_convention_xsec_chi00_12.resolveDependency(&createSpectrum);
    LEP188_SLHA1_convention_xsec_chi00_12.resolveDependency(&createZDecays);
    LEP188_SLHA1_convention_xsec_chi00_13.resolveDependency(&createSpectrum);
    LEP188_SLHA1_convention_xsec_chi00_13.resolveDependency(&createZDecays);
    LEP188_SLHA1_convention_xsec_chi00_14.resolveDependency(&createSpectrum);
    LEP188_SLHA1_convention_xsec_chi00_14.resolveDependency(&createZDecays);

    // Double-check which backend requirements have been filled with what
    std::cout << std::endl << "My function calc_LHC_LogLike has had its backend requirement on lnlike_marg_poisson filled by:" << std::endl;
    std::cout << ColliderBit::Pipes::calc_LHC_LogLike::BEreq::lnlike_marg_poisson_lognormal_error.origin() << "::";
    std::cout << ColliderBit::Pipes::calc_LHC_LogLike::BEreq::lnlike_marg_poisson_lognormal_error.name() << std::endl;

    // Double-check which dependencies have been filled with what (not every combo is done)
    std::cout << std::endl << "My function calc_LHC_LogLike has had its dependency on ATLASAnalysisNumbers filled by:" << endl;
    std::cout << ColliderBit::Pipes::calc_LHC_LogLike::Dep::ATLASAnalysisNumbers.origin() << "::";
    std::cout << ColliderBit::Pipes::calc_LHC_LogLike::Dep::ATLASAnalysisNumbers.name() << std::endl;
    std::cout << std::endl << "My function runATLASAnalyses has had its dependency on ATLASSmearedEvent filled by:" << endl;
    std::cout << ColliderBit::Pipes::runATLASAnalyses::Dep::ATLASSmearedEvent.origin() << "::";
    std::cout << ColliderBit::Pipes::runATLASAnalyses::Dep::ATLASSmearedEvent.name() << std::endl;
    std::cout << std::endl << "My function runATLASAnalyses has had its dependency on HardScatteringSim filled by:" << endl;
    std::cout << ColliderBit::Pipes::runATLASAnalyses::Dep::HardScatteringSim.origin() << "::";
    std::cout << ColliderBit::Pipes::runATLASAnalyses::Dep::HardScatteringSim.name() << std::endl;
    std::cout << std::endl << "My function runATLASAnalyses has had its dependency on ATLASAnalysisContainer filled by:" << endl;
    std::cout << ColliderBit::Pipes::runATLASAnalyses::Dep::ATLASAnalysisContainer.origin() << "::";
    std::cout << ColliderBit::Pipes::runATLASAnalyses::Dep::ATLASAnalysisContainer.name() << std::endl;
    std::cout << std::endl << "My function getATLASAnalysisContainer has had its dependency on HardScatteringSim filled by:" << endl;
    std::cout << ColliderBit::Pipes::getATLASAnalysisContainer::Dep::HardScatteringSim.origin() << "::";
    std::cout << ColliderBit::Pipes::getATLASAnalysisContainer::Dep::HardScatteringSim.name() << std::endl;
    std::cout << std::endl << "My function smearEventATLAS has had its dependency on ConvertedScatteringEvent filled by:" << endl;
    std::cout << ColliderBit::Pipes::smearEventATLAS::Dep::HardScatteringEvent.origin() << "::";
    std::cout << ColliderBit::Pipes::smearEventATLAS::Dep::HardScatteringEvent.name() << std::endl;
    std::cout << std::endl << "My function smearEventATLAS has had its dependency on SimpleSmearingSim filled by:" << endl;
    std::cout << ColliderBit::Pipes::smearEventATLAS::Dep::SimpleSmearingSim.origin() << "::";
    std::cout << ColliderBit::Pipes::smearEventATLAS::Dep::SimpleSmearingSim.name() << std::endl;
    std::cout << std::endl << "My function generatePythia8Event has had its dependency on HardScatteringSim filled by:" << endl;
    std::cout << ColliderBit::Pipes::generatePythia8Event::Dep::HardScatteringSim.origin() << "::";
    std::cout << ColliderBit::Pipes::generatePythia8Event::Dep::HardScatteringSim.name() << std::endl;
    
    // Set Module function options here
    // User can edit this section to configure ColliderBit
    // See the ColiderBit manual for available options
    
    // First we have the LHC options
    std::vector<std::string> runTheseAnalyses;
    runTheseAnalyses.push_back("ATLAS_0LEP_20invfb");  // specify which LHC analyses to run
    getATLASAnalysisContainer.setOption<std::vector<std::string>>("analysisNames",runTheseAnalyses);

    // The standalone Pythia instance is given a name
    // Can be set to anything, provided it matches the same name given below
    std::vector<std::string> pythiaNames;
    pythiaNames.push_back("Pythia_Standalone");
    YAML::Node Pythia_Standalone;   
    Pythia_Standalone["pythiaOptions_1"].push_back("PartonLevel:MPI = off");
    Pythia_Standalone["pythiaOptions_1"].push_back("PartonLevel:ISR = on");
    Pythia_Standalone["pythiaOptions_1"].push_back("PartonLevel:FSR = on");
    Pythia_Standalone["pythiaOptions_1"].push_back("HadronLevel:all = on");
    Pythia_Standalone["pythiaOptions_1"].push_back("TauDecays:mode = 0");
    Pythia_Standalone["pythiaOptions_1"].push_back("SUSY:all = on");
    Pythia_Standalone["pythiaOptions_1"].push_back("Beams:eCM = 8000");
    Pythia_Standalone["pythiaOptions_1"].push_back("Main:timesAllowErrors = 1000");
    getPythiaFileReader.setOption<YAML::Node>("Pythia_Standalone",Pythia_Standalone);
    std::vector<std::string> inputFiles;
    inputFiles.push_back(inputFileName); // specify the input SLHA filename for Pythia
    getPythiaFileReader.setOption<std::string>("Pythia_doc_path","Backends/installed/Pythia/8.212/share/Pythia8/xmldoc/"); // specify the Pythia xml file location
    getPythiaFileReader.setOption<std::vector<std::string>>("SLHA_filenames",inputFiles);

    operateLHCLoop.setOption<std::vector<std::string>>("pythiaNames",pythiaNames);
    operateLHCLoop.setOption<int>("nEvents",5000.); // specify the number of simulated LHC events
    
    // Start running here
    
    {
      
      // Call the initialisation functions for all backends that are in use. 
      nulike_1_0_2_init.reset_and_calculate();

      
      // Call the LHC likelihood
      operateLHCLoop.reset_and_calculate();
      calc_LHC_LogLike.reset_and_calculate();
      
      // Retrieve and print the LHC likelihood
      double loglike = calc_LHC_LogLike(0);
      std::cout << "LHC log likelihood is " << loglike << std::endl;
  
      // Call the ALEPH slepton likelihoods
      createSpectrum.reset_and_calculate();
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
      L3_Stau_Conservative_LLike.reset_and_calculate();

      std::cout << "ALEPH slepton log likes " << ALEPH_Selectron_Conservative_LLike(0) << " " << ALEPH_Smuon_Conservative_LLike(0) << " " << ALEPH_Stau_Conservative_LLike(0) << std::endl;
      std::cout << "L3 slepton log likes " << L3_Selectron_Conservative_LLike(0) << " " << L3_Smuon_Conservative_LLike(0) << " " << L3_Stau_Conservative_LLike(0) << std::endl;

      // Gaugino LL
      
      LEP188_SLHA1_convention_xsec_chi00_12.reset_and_calculate();
      LEP188_SLHA1_convention_xsec_chi00_13.reset_and_calculate();
      LEP188_SLHA1_convention_xsec_chi00_14.reset_and_calculate();
      L3_Neutralino_All_Channels_Conservative_LLike.reset_and_calculate();
      
      std::cout << "L3 neutralino log likes " << L3_Neutralino_All_Channels_Conservative_LLike(0) << std::endl;
     
    }
  }
  catch (std::exception& e)
    {
      std::cout << "ColliderBit_standalone example has exited with fatal exception: " << e.what() << std::endl;
    }
}
