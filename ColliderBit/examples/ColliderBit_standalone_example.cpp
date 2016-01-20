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

QUICK_FUNCTION(ColliderBit, MSSM_spectrum, NEW_CAPABILITY, createSpectrum, const Spectrum*, (MSSM30atQ,MSSM30atMGUT))
QUICK_FUNCTION(ColliderBit, all_decays, NEW_CAPABILITY, createDecays, DecayTable, (MSSM30atQ,MSSM30atMGUT), (MSSM_spectrum, const Spectrum*))
QUICK_FUNCTION(ColliderBit, Z_decay_rates, NEW_CAPABILITY, createZDecays, DecayTable::Entry, (MSSM30atQ,MSSM30atMGUT))
QUICK_FUNCTION(ColliderBit, selectron_l_decay_rates, NEW_CAPABILITY, createSelDecays, DecayTable::Entry, (MSSM30atQ,MSSM30atMGUT), (all_decays, DecayTable), (MSSM_spectrum, const Spectrum*))
QUICK_FUNCTION(ColliderBit, selectron_r_decay_rates, NEW_CAPABILITY, createSerDecays, DecayTable::Entry, (MSSM30atQ,MSSM30atMGUT), (all_decays, DecayTable), (MSSM_spectrum, const Spectrum*))
QUICK_FUNCTION(ColliderBit, smuon_l_decay_rates, NEW_CAPABILITY, createSmulDecays, DecayTable::Entry, (MSSM30atQ,MSSM30atMGUT), (all_decays, DecayTable), (MSSM_spectrum, const Spectrum*))
QUICK_FUNCTION(ColliderBit, smuon_r_decay_rates, NEW_CAPABILITY, createSmurDecays, DecayTable::Entry, (MSSM30atQ,MSSM30atMGUT), (all_decays, DecayTable), (MSSM_spectrum, const Spectrum*))
QUICK_FUNCTION(ColliderBit, stau_1_decay_rates, NEW_CAPABILITY, createStau1Decays, DecayTable::Entry, (MSSM30atQ,MSSM30atMGUT), (all_decays, DecayTable), (MSSM_spectrum, const Spectrum*))
QUICK_FUNCTION(ColliderBit, stau_2_decay_rates, NEW_CAPABILITY, createStau2Decays, DecayTable::Entry, (MSSM30atQ,MSSM30atMGUT), (all_decays, DecayTable), (MSSM_spectrum, const Spectrum*))

// SLHA file for input: user can change name here
// Note that it must contain the decay table for the LEP likelihoods to function properly

const std::string inputFileName = "ColliderBit/data/sps1aWithDecays.spc";

namespace Gambit
{
  namespace ColliderBit {

    // Make a GAMBIT spectrum object from an SLHA file
    void createSpectrum(const Spectrum *& outSpec){
      static Spectrum mySpec;
      mySpec = spectrum_from_SLHA<MSSMskeleton>(inputFileName);
      
      outSpec = &mySpec;
    }
    
    void createDecays(DecayTable& outDecays){
      std::ifstream ifs(inputFileName);
      if(!ifs.good()) backend_error().raise(LOCAL_INFO, "SLHA file not found.");
      SLHAstruct slha(ifs);
      ifs.close();
      const Spectrum* spec = (*Pipes::createSelDecays::Dep::MSSM_spectrum);
      outDecays = DecayTable(inputFileName,spec->PDG_translator()); 
      std::cout <<  outDecays.as_slhaea() << std::endl;

    }
    
    void createZDecays(DecayTable::Entry& result){
      result.width_in_GeV = 2.4952;
      result.positive_error = 2.3e-03;
      result.negative_error = 2.3e-03;
      result.set_BF(0.03363, 0.00004, "e+", "e-");
      result.set_BF(0.03366, 0.00007, "mu+", "mu-");
      result.set_BF(0.03370, 0.00008, "tau+", "tau-");
      result.set_BF(0.6991, 0.0006, "hadron", "hadron");      
    }
    
    
    void createSelDecays(DecayTable::Entry& outSelDecays){

      // This is a little more complicated than the previous function
      // Need to get the string that corresponds to a left-handed selectron (the decay table entries are in the mass eigenstate basis)
      double max_mixing;
      const SubSpectrum* mssm = (*Pipes::createSelDecays::Dep::MSSM_spectrum)->get_HE();
      str x = slhahelp::mass_es_from_gauge_es("~e_L", max_mixing, mssm);
      std::cout << "I think that the sel is " << x << std::endl;
      outSelDecays = (*Pipes::createSelDecays::Dep::all_decays)(x);
    }

    void createSerDecays(DecayTable::Entry& outSerDecays){

      // This is a little more complicated than the previous function
      // Need to get the string that corresponds to a left-handed selectron (the decay table entries are in the mass eigenstate basis)
      double max_mixing;
      const SubSpectrum* mssm = (*Pipes::createSerDecays::Dep::MSSM_spectrum)->get_HE();
      str x = slhahelp::mass_es_from_gauge_es("~e_R", max_mixing, mssm);
      outSerDecays = (*Pipes::createSerDecays::Dep::all_decays)(x);
    }

    void createSmulDecays(DecayTable::Entry& outSmulDecays){
      
      double max_mixing;
      const SubSpectrum* mssm = (*Pipes::createSmulDecays::Dep::MSSM_spectrum)->get_HE();
      str x = slhahelp::mass_es_from_gauge_es("~mu_L", max_mixing, mssm);
      std::cout << "I think that the smu is " << x << std::endl;
      outSmulDecays = (*Pipes::createSmulDecays::Dep::all_decays)(x);
    }
    
    void createSmurDecays(DecayTable::Entry& outSmurDecays){

      double max_mixing;
      const SubSpectrum* mssm = (*Pipes::createSmurDecays::Dep::MSSM_spectrum)->get_HE();
      str x = slhahelp::mass_es_from_gauge_es("~mu_R", max_mixing, mssm);
      outSmurDecays = (*Pipes::createSmurDecays::Dep::all_decays)(x);
    }
    
    void createStau1Decays(DecayTable::Entry& outStau1Decays){

      const SubSpectrum* mssm = (*Pipes::createStau1Decays::Dep::MSSM_spectrum)->get_HE();
      // Set these arguments by hand for this example
      const static double tol = 0.001;
      const static bool pterror=false;
      str stau1_string = slhahelp::mass_es_closest_to_family("~tau_1", mssm,tol,LOCAL_INFO,pterror);
      outStau1Decays = (*Pipes::createStau1Decays::Dep::all_decays)(stau1_string);
    }

    void createStau2Decays(DecayTable::Entry& outStau2Decays){

      const SubSpectrum* mssm = (*Pipes::createStau1Decays::Dep::MSSM_spectrum)->get_HE();
      const static double tol = 0.001;
      const static bool pterror=false;
      str stau2_string = slhahelp::mass_es_closest_to_family("~tau_2", mssm,tol,LOCAL_INFO,pterror);
      outStau2Decays = (*Pipes::createStau2Decays::Dep::all_decays)(stau2_string);
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
    
    // ALEPH_Selectron_Conservative_LLike 
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

    // ALEPH_Smuon_Conservative_LLike
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
    createDecays.resolveDependency(&createSpectrum);
    createSmulDecays.resolveDependency(&createDecays);
    createSmulDecays.resolveDependency(&createSpectrum);
    createSmurDecays.resolveDependency(&createDecays);
    createSmurDecays.resolveDependency(&createSpectrum);

    // ALEPH_Stau_Conservative_LLike
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
    createDecays.resolveDependency(&createSpectrum);
    createStau1Decays.resolveDependency(&createDecays);
    createStau1Decays.resolveDependency(&createSpectrum);
    createStau2Decays.resolveDependency(&createDecays);
    createStau2Decays.resolveDependency(&createSpectrum);
    
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

      /*
      // Call the LHC likelihood
      operateLHCLoop.reset_and_calculate();
      calc_LHC_LogLike.reset_and_calculate();
      
      // Retrieve and print the LHC likelihood
      double loglike = calc_LHC_LogLike(0);
      std::cout << "LHC log likelihood is " << loglike << std::endl;
      */

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
      //std::cout << "Caling ALEPH selectron log likelihood" << std::endl;
      //ALEPH_Selectron_Conservative_LLike.reset_and_calculate();
      //double loglike = ALEPH_Selectron_Conservative_LLike(0);
      //std::cout << "ALEPH selectron log likelihood is " << loglike << std::endl;
      //ALEPH_Smuon_Conservative_LLike.reset_and_calculate();
      ALEPH_Stau_Conservative_LLike.reset_and_calculate();
      std::cout << "ALEPH stau LL " << ALEPH_Stau_Conservative_LLike(0) << std::endl;
      
      
    }
  }
  catch (std::exception& e)
    {
      std::cout << "ColliderBit_standalone example has exited with fatal exception: " << e.what() << std::endl;
    }
}
