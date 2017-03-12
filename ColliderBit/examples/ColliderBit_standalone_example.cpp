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
///  Anders Kvellestad (anders.kvellestad@nordita.org)
///  March 2017
///
///  *********************************************


// 
// Note: 
// For this example we use the GAMBIT backend Pythia 8.212.EM, which is connected to GAMBIT
// vis BOSS. For this to work, make sure that this version of Pythia is specificed in
// Backends/include/gambit/Backends/default_bossed_versions.hpp (use: #define Default_Pythia 8_212_EM).
//

// Always required in for the standalone main file
#include "gambit/Utils/standalone_module.hpp"
#include "gambit/ColliderBit/ColliderBit_rollcall.hpp"

using namespace ColliderBit::Accessors;     // Helper functions that provide some info about the module (here: ColliderBit)
using namespace ColliderBit::Functown;      // Functors wrapping the module's actual module functions
using namespace BackendIniBit::Functown;    // Functors wrapping the backend initialisation functions


int main(int argc, char* argv[])
{

  try{

    // Initialise logs
    initialise_standalone_logs("runs/ColliderBit_standalone/logs/");
    logger()<<"Running ColliderBit standalone example"<<LogTags::info<<EOM;


    std::cout << std::endl;
    std::cout << "==================================" << std::endl;
    std::cout << "||                              ||" << std::endl;
    std::cout << "||    ColliderBit standalone    ||" << std::endl;
    std::cout << "||                              ||" << std::endl;
    std::cout << "==================================" << std::endl;
    std::cout << std::endl;


    // Check the number of command line arguments
    if (argc < 2) 
    {
      // Tell the user how to run the program and exit
      std::cerr << "Usage: " << argv[0] << " <input SLHA file>" << std::endl << std::endl;
      return 1;
    }

    // Read input file name 
    const std::string inputFileName = argv[1];


    // Check that required backends are present
    if (not Backends::backendInfo().works["Pythia8.212.EM"]) backend_error().raise(LOCAL_INFO, "Pythia 8.212.EM is missing!");
    if (not Backends::backendInfo().works["nulike1.0.3"]) backend_error().raise(LOCAL_INFO, "nulike 1.0.3 is missing!");

    // Output some info about ColliderBit
    std::cout << std::endl << "My name is " << name() << std::endl;
    std::cout << std::endl << "I can calculate: " << endl << iCanDo << std::endl;
    std::cout << std::endl << "...but I may need: " << endl << iMayNeed << std::endl << std::endl;


    // 
    // Dependecy resolution
    // 
    // We now set up the module functions that we wish use.
    // Dependencies and backend requirements of module functions are resolved by hand.
    // WARNING: DO NOT EDIT UNLESS YOU ARE AN EXPERT.
    // 

    // Set up the LHC likelihood calculations
    calc_LHC_LogLike.resolveDependency(&runATLASAnalyses);
    calc_LHC_LogLike.resolveDependency(&runCMSAnalyses);
    calc_LHC_LogLike.resolveDependency(&runIdentityAnalyses);
    calc_LHC_LogLike.resolveBackendReq(&Backends::nulike_1_0_3::Functown::nulike_lnpiln); //treat systematics with a log normal distribution

    runATLASAnalyses.resolveDependency(&getATLASAnalysisContainer);
    runATLASAnalyses.resolveDependency(&getPythiaFileReader);
    runATLASAnalyses.resolveDependency(&smearEventATLAS);
    runCMSAnalyses.resolveDependency(&getCMSAnalysisContainer);
    runCMSAnalyses.resolveDependency(&getPythiaFileReader);
    runCMSAnalyses.resolveDependency(&smearEventCMS);
    runIdentityAnalyses.resolveDependency(&getIdentityAnalysisContainer);
    runIdentityAnalyses.resolveDependency(&getPythiaFileReader);
    runIdentityAnalyses.resolveDependency(&copyEvent);

    getATLASAnalysisContainer.resolveDependency(&getPythiaFileReader);
    getCMSAnalysisContainer.resolveDependency(&getPythiaFileReader);
    getIdentityAnalysisContainer.resolveDependency(&getPythiaFileReader);

    smearEventATLAS.resolveDependency(&generatePythia8Event);
    smearEventATLAS.resolveDependency(&getBuckFastATLAS);
    smearEventCMS.resolveDependency(&generatePythia8Event);
    smearEventCMS.resolveDependency(&getBuckFastCMS);
    copyEvent.resolveDependency(&generatePythia8Event);
    copyEvent.resolveDependency(&getBuckFastIdentity);

    generatePythia8Event.resolveDependency(&getPythiaFileReader);

    getPythiaFileReader.resolveLoopManager(&operateLHCLoop);
    getBuckFastATLAS.resolveLoopManager(&operateLHCLoop);
    getBuckFastCMS.resolveLoopManager(&operateLHCLoop);
    getBuckFastIdentity.resolveLoopManager(&operateLHCLoop);

    getATLASAnalysisContainer.resolveLoopManager(&operateLHCLoop);
    getCMSAnalysisContainer.resolveLoopManager(&operateLHCLoop);
    getIdentityAnalysisContainer.resolveLoopManager(&operateLHCLoop);

    generatePythia8Event.resolveLoopManager(&operateLHCLoop);

    smearEventATLAS.resolveLoopManager(&operateLHCLoop);
    smearEventCMS.resolveLoopManager(&operateLHCLoop);
    copyEvent.resolveLoopManager(&operateLHCLoop);

    runATLASAnalyses.resolveLoopManager(&operateLHCLoop);
    runCMSAnalyses.resolveLoopManager(&operateLHCLoop);
    runIdentityAnalyses.resolveLoopManager(&operateLHCLoop);

    std::vector<functor*> nested_functions = initVector<functor*>(&getPythiaFileReader, 
                                                                  &getBuckFastATLAS, 
                                                                  &getBuckFastCMS, 
                                                                  &getBuckFastIdentity, 
                                                                  &getATLASAnalysisContainer, 
                                                                  &getCMSAnalysisContainer, 
                                                                  &getIdentityAnalysisContainer, 
                                                                  &generatePythia8Event, 
                                                                  &smearEventATLAS, 
                                                                  &smearEventCMS, 
                                                                  &copyEvent, 
                                                                  &runATLASAnalyses, 
                                                                  &runCMSAnalyses,
                                                                  &runIdentityAnalyses);
    operateLHCLoop.setNestedList(nested_functions);


    // 
    // Examples of how to output info about the dependecy resolution:
    // 

    // - Double-check which backend requirements have been filled with what
    // std::cout << std::endl << "My function calc_LHC_LogLike has had its backend requirement on lnlike_marg_poisson filled by:" << std::endl;
    // std::cout << ColliderBit::Pipes::calc_LHC_LogLike::BEreq::lnlike_marg_poisson_lognormal_error.origin() << "::";
    // std::cout << ColliderBit::Pipes::calc_LHC_LogLike::BEreq::lnlike_marg_poisson_lognormal_error.name() << std::endl;

    // - Double-check which dependencies have been filled with what (only a few combinations shown here)
    // std::cout << std::endl << "My function calc_LHC_LogLike has had its dependency on ATLASAnalysisNumbers filled by:" << endl;
    // std::cout << ColliderBit::Pipes::calc_LHC_LogLike::Dep::ATLASAnalysisNumbers.origin() << "::";
    // std::cout << ColliderBit::Pipes::calc_LHC_LogLike::Dep::ATLASAnalysisNumbers.name() << std::endl;
    // std::cout << std::endl << "My function calc_LHC_LogLike has had its dependency on CMSAnalysisNumbers filled by:" << endl;
    // std::cout << ColliderBit::Pipes::calc_LHC_LogLike::Dep::CMSAnalysisNumbers.origin() << "::";
    // std::cout << ColliderBit::Pipes::calc_LHC_LogLike::Dep::CMSAnalysisNumbers.name() << std::endl;
    // std::cout << std::endl << "My function runATLASAnalyses has had its dependency on ATLASSmearedEvent filled by:" << endl;
    // std::cout << ColliderBit::Pipes::runATLASAnalyses::Dep::ATLASSmearedEvent.origin() << "::";
    // std::cout << ColliderBit::Pipes::runATLASAnalyses::Dep::ATLASSmearedEvent.name() << std::endl;
    // std::cout << std::endl << "My function runATLASAnalyses has had its dependency on ATLASSmearedEvent filled by:" << endl;
    // std::cout << ColliderBit::Pipes::runATLASAnalyses::Dep::ATLASSmearedEvent.origin() << "::";
    // std::cout << ColliderBit::Pipes::runATLASAnalyses::Dep::ATLASSmearedEvent.name() << std::endl;




    // ----------------------------------------------------
    // Set Module function options below.
    // User can edit this section to configure ColliderBit.
    // See the ColiderBit manual for available options.
    // ----------------------------------------------------

    // 
    // Set up the collider(s), i.e. different configurations of Pythia:
    // 
    // 1. Create a vector with the names of the different colliders.
    // 2. For each collider, create a vector with Pythia settings. 
    // 3. Connect the settings and collider names by passing the information to getPythiaFileReader.
    // 
    // For this example we will only set up a single collider, starting from the completely unpsecified collider
    // "Pythia_external" in ColliderBit/src/colliders/SpecializablePythia.cpp. This collider has no pre-defined 
    //  configuration, so we shoul specify all settings below.
    // 
    // (The file SpecializablePythia.cpp also defines some partly configured colliders, "Pythia_SUSY_LHC_8TeV" and 
    //  "Pythia_glusq_LHC_8TeV", and others can be added if needed.)   
    //

    // Vector with collider names
    std::vector<std::string> pythiaNames;

    // Add the "Pythia_external" collider.
    pythiaNames.push_back("Pythia_external");

    // Vector with settings for Pythia_external
    // 
    // NOTE: If you want to set a fixed seed for Pythia through "Random:seed = ...",
    //       this must currently be done directly in the module function getPythiaFileReader 
    //       in ColliderBit/src/CollderBit.cpp, in a similar manner to what is done there now.
    //       This is to avoid potential problems with OpenMP threads getting identical seeds.
    // 
    std::vector<std::string> Pythia_external_settings;
    Pythia_external_settings.push_back("Beams:eCM = 8000");
    Pythia_external_settings.push_back("UserModel:all = on");   // Switch on the processes in the external model
    Pythia_external_settings.push_back("PartonLevel:MPI = off");
    Pythia_external_settings.push_back("PartonLevel:ISR = on");
    Pythia_external_settings.push_back("PartonLevel:FSR = off");
    Pythia_external_settings.push_back("HadronLevel:all = off");
    Pythia_external_settings.push_back("TauDecays:mode = 0");
    Pythia_external_settings.push_back("Main:timesAllowErrors = 1000");

    // Connect settings and collider name
    getPythiaFileReader.setOption<std::vector<std::string>>("Pythia_external",Pythia_external_settings);


    // 
    // Set the correct XML path for Pythia
    // 
    getPythiaFileReader.setOption<std::string>("Pythia_doc_path","Backends/installed/pythia/8.212.EM/share/Pythia8/xmldoc/"); // specify the Pythia xml file location


    // 
    // Specify the SLHA input file. 
    // For this example we take the command line argument stored in 'inputFileName'.
    // 
    std::vector<std::string> inputFiles;
    inputFiles.push_back(inputFileName); // specify the input SLHA filename for Pythia
    getPythiaFileReader.setOption<std::vector<std::string>>("SLHA_filenames",inputFiles);



    // 
    // Settings for the LHC event loop (ColliderBit function 'operateLHCLoop')
    // 

    // Pass the collider names to the loop
    operateLHCLoop.setOption<std::vector<std::string>>("pythiaNames",pythiaNames);

    // Set number of LHC events
    operateLHCLoop.setOption<int>("nEvents",20000);

    // Should stdout be silenced during the event loop? 
    operateLHCLoop.setOption<bool>("silenceLoop",false);



    // 
    // Specify which analyses to run and which detectors to use.
    // 
    // Note: Adding more detectors and analysis containers
    //       will require changes to the manual dependecy 
    //       resolution at the top.
    // 

    // -- ATLAS analyses
    getBuckFastATLAS.setOption<bool>("useBuckFastATLASDetector",true);
    getBuckFastATLAS.setOption<double>("antiktR",0.4);
    getBuckFastATLAS.setOption<bool>("partonOnly",false);

    std::vector<std::string> runTheseATLASAnalyses;
    runTheseATLASAnalyses.push_back("ATLAS_0LEP_20invfb");
    // runTheseATLASAnalyses.push_back("ATLAS_0LEPStop_20invfb");
    // runTheseATLASAnalyses.push_back("ATLAS_1LEPStop_20invfb");
    // runTheseATLASAnalyses.push_back("ATLAS_2bStop_20invfb");
    // runTheseATLASAnalyses.push_back("ATLAS_2LEPEW_20invfb");
    // runTheseATLASAnalyses.push_back("ATLAS_2LEPStop_20invfb");
    // runTheseATLASAnalyses.push_back("ATLAS_3LEPEW_20invfb");

    getATLASAnalysisContainer.setOption<std::vector<std::string>>("analysisNamesATLAS",runTheseATLASAnalyses);


    // -- CMS analyses:
    getBuckFastCMS.setOption<bool>("useBuckFastCMSDetector",true);
    getBuckFastCMS.setOption<double>("antiktR",0.5);
    getBuckFastCMS.setOption<bool>("partonOnly",false);

    std::vector<std::string> runTheseCMSAnalyses;
    // runTheseCMSAnalyses.push_back("CMS_1LEPDMTOP_20invfb");
    // runTheseCMSAnalyses.push_back("CMS_2LEPDMTOP_20invfb");
    // runTheseCMSAnalyses.push_back("CMS_3LEPEW_20invfb");
    runTheseCMSAnalyses.push_back("CMS_MONOJET_20invfb");

    getCMSAnalysisContainer.setOption<std::vector<std::string>>("analysisNamesCMS",runTheseCMSAnalyses);



    // -- Identity analyses (no detector smearing)
    getBuckFastIdentity.setOption<bool>("useBuckFastIdentityDetector",false);  // Switched off by default
    getBuckFastIdentity.setOption<double>("antiktR",0.4);
    getBuckFastIdentity.setOption<bool>("partonOnly",false);

    std::vector<std::string> runTheseIdentityAnalyses;
    // runTheseIdentityAnalyses.push_back("Insert analysis name here");  // Add analysis names

    getIdentityAnalysisContainer.setOption<std::vector<std::string>>("analysisNamesIdentity",runTheseIdentityAnalyses);


    // ------------------ 
    // Start running here
    // ------------------

    {

      // Call the initialisation functions for all backends that are in use.
      nulike_1_0_3_init.reset_and_calculate();
      Pythia_8_212_EM_init.reset_and_calculate();


      // 
      // Call the LHC likelihood. This is where we launch the full event loop in ColliderBit.
      // 
      operateLHCLoop.reset_and_calculate();
      calc_LHC_LogLike.reset_and_calculate();

      // Retrieve and print the LHC likelihood
      double loglike = calc_LHC_LogLike(0);

      std::cout.precision(5);
      std::cout << std::endl;
      std::cout << std::scientific << "LHC log likelihood is " << loglike << std::endl;
      std::cout << std::endl;

      // To print to the logs instead, use 
      // logger() << "LHC log likelihood is " << loglike << EOM

      // To output additional info such as the number of signal events
      // predicted for a given analysis and signal region, edit the
      // calc_LHC_LogLike module function in ColliderBit/src/ColliderBit.cpp.

    }

    // Done, all is well
    return 0;
  }

  catch (std::exception& e)
  {
    std::cerr << "ColliderBit_standalone example has exited with fatal exception: " << e.what() << std::endl;
  }

  // Done, but something went wrong
  return 1;

}
