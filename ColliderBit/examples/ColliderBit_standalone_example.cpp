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

using namespace std;


// getOptions()->getValue< vector<vector<string>> >("SLHA_filenames")

// Useful macros for filling the option vectors

#define DECLARE_OPTION(FUNCTION, OPTION_NAME, OPTION_TYPE)   \
    typedef OPTION_TYPE CAT_3(FUNCTION,OPTION_NAME,_type);   \
    OPTION_TYPE CAT(FUNCTION,OPTION_NAME);                   \

#define APPEND_TO_OPTION(FUNCTION, OPTION_NAME, ELEMENT_VALUE)                                                       \
    try{ CAT(FUNCTION,OPTION_NAME) = FUNCTION.getOptions()->getValue< CAT_3(FUNCTION,OPTION_NAME,_type) >(#OPTION_NAME); } \
    catch (...) {}                                                                                                   \
    CAT(FUNCTION,OPTION_NAME).push_back(ELEMENT_VALUE);                                                              \
    FUNCTION.setOption< CAT_3(FUNCTION,OPTION_NAME,_type) >(#OPTION_NAME, CAT(FUNCTION,OPTION_NAME));                \



// 
// ---- main program ----
// 
int main(int argc, char* argv[])
{

  try{

    // Initialise logs
    initialise_standalone_logs("runs/ColliderBit_standalone/logs/");
    logger()<<"Running ColliderBit standalone example"<<LogTags::info<<EOM;


    cout << endl;
    cout << "==================================" << endl;
    cout << "||                              ||" << endl;
    cout << "||    ColliderBit standalone    ||" << endl;
    cout << "||                              ||" << endl;
    cout << "==================================" << endl;
    cout << endl;


    // Check the number of command line arguments
    if (argc < 2) 
    {
      // Tell the user how to run the program and exit
      cerr << "Usage: " << argv[0] << " <input SLHA file>" << endl << endl;
      return 1;
    }

    // Read input file name 
    const string inputFileName = argv[1];


    // Check that required backends are present
    if (not Backends::backendInfo().works["Pythia8.212.EM"]) backend_error().raise(LOCAL_INFO, "Pythia 8.212.EM is missing!");
    if (not Backends::backendInfo().works["nulike1.0.3"]) backend_error().raise(LOCAL_INFO, "nulike 1.0.3 is missing!");

    // Output some info about ColliderBit
    cout << endl << "My name is " << name() << endl;
    cout << endl << "I can calculate: " << endl << iCanDo << endl;
    cout << endl << "...but I may need: " << endl << iMayNeed << endl << endl;




    // -----------------------------------
    //    Part 1:  Dependecy resolution
    // -----------------------------------
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

    vector<functor*> nested_functions = initVector<functor*>(&getPythiaFileReader, 
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
    // cout << endl << "My function calc_LHC_LogLike has had its backend requirement on lnlike_marg_poisson filled by:" << endl;
    // cout << ColliderBit::Pipes::calc_LHC_LogLike::BEreq::lnlike_marg_poisson_lognormal_error.origin() << "::";
    // cout << ColliderBit::Pipes::calc_LHC_LogLike::BEreq::lnlike_marg_poisson_lognormal_error.name() << endl;

    // - Double-check which dependencies have been filled with what (only a few combinations shown here)
    // cout << endl << "My function calc_LHC_LogLike has had its dependency on ATLASAnalysisNumbers filled by:" << endl;
    // cout << ColliderBit::Pipes::calc_LHC_LogLike::Dep::ATLASAnalysisNumbers.origin() << "::";
    // cout << ColliderBit::Pipes::calc_LHC_LogLike::Dep::ATLASAnalysisNumbers.name() << endl;
    // cout << endl << "My function calc_LHC_LogLike has had its dependency on CMSAnalysisNumbers filled by:" << endl;
    // cout << ColliderBit::Pipes::calc_LHC_LogLike::Dep::CMSAnalysisNumbers.origin() << "::";
    // cout << ColliderBit::Pipes::calc_LHC_LogLike::Dep::CMSAnalysisNumbers.name() << endl;
    // cout << endl << "My function runATLASAnalyses has had its dependency on ATLASSmearedEvent filled by:" << endl;
    // cout << ColliderBit::Pipes::runATLASAnalyses::Dep::ATLASSmearedEvent.origin() << "::";
    // cout << ColliderBit::Pipes::runATLASAnalyses::Dep::ATLASSmearedEvent.name() << endl;
    // cout << endl << "My function runATLASAnalyses has had its dependency on ATLASSmearedEvent filled by:" << endl;
    // cout << ColliderBit::Pipes::runATLASAnalyses::Dep::ATLASSmearedEvent.origin() << "::";
    // cout << ColliderBit::Pipes::runATLASAnalyses::Dep::ATLASSmearedEvent.name() << endl;




    // ----------------------------
    //    Part 2:  Configuration
    // ----------------------------
    // 
    // Below we set the options for the various ColliderBit module functions.
    // This is where we configure our Pythia backends, choose detector simulation
    // and specify which LHC analyses to inlcude. See the ColiderBit manual for 
    // available options.
    // 

    // 
    // Set up the collider(s), i.e. different configurations of Pythia:
    // 
    // 1. Create a vector with the names of the different colliders.
    // 2. For each collider, create a vector with Pythia settings. 
    // 3. Connect the settings and collider names by passing the information to getPythiaFileReader.
    // 4. Pass the Pythia XML path and the path to the input SLHA file to getPythiaFileReader.
    // 
    // For this example we will only set up a single collider, starting from the completely unpsecified collider
    // "Pythia_external" in ColliderBit/src/colliders/SpecializablePythia.cpp. This collider has no pre-defined 
    //  configuration, so we should specify all settings below.
    // 
    // (The file SpecializablePythia.cpp also defines some partly configured colliders, "Pythia_SUSY_LHC_8TeV" and 
    // "Pythia_glusq_LHC_8TeV", and others can be added if needed.)   
    

    // Vector with collider names
    vector<string> pythiaNames;

    // Add the "Pythia_external" collider.
    pythiaNames.push_back("Pythia_external");

    // Vector with settings for Pythia_external
    // 
    // NOTE: If you want to set a fixed seed for Pythia through "Random:seed = ...",
    //       this must currently be done directly in the module function getPythiaFileReader 
    //       in ColliderBit/src/CollderBit.cpp, in a similar manner to what is done there now.
    //       This is to avoid potential problems with OpenMP threads getting identical seeds.
    //
    //       Also, Pythia options specified directly in getPythiaFileReader in ColliderBit.cpp 
    //       can override options given here.
    // 
    // 
    vector<string> pythiaSettings;
    pythiaSettings.push_back("UserModel:all = on");   // Switch on the processes in the external model
    pythiaSettings.push_back("Beams:eCM = 8000");
    pythiaSettings.push_back("PartonLevel:MPI = off");
    pythiaSettings.push_back("PartonLevel:ISR = on");
    pythiaSettings.push_back("PartonLevel:FSR = off");
    pythiaSettings.push_back("HadronLevel:all = off");
    pythiaSettings.push_back("TauDecays:mode = 0");
    pythiaSettings.push_back("Main:timesAllowErrors = 1000");

    // Connect settings and collider name
    getPythiaFileReader.setOption<vector<string>>("Pythia_external",pythiaSettings);

    // Set the correct XML path for Pythia
    getPythiaFileReader.setOption<string>("Pythia_doc_path","Backends/installed/pythia/8.212.EM/share/Pythia8/xmldoc/"); // specify the Pythia xml file location

    // Specify the SLHA input file. 
    // For this example we take the command line argument stored in 'inputFileName'.
    // vector<string> inputFiles;
    // inputFiles.push_back(inputFileName); // specify the input SLHA filename for Pythia
    // getPythiaFileReader.setOption<vector<string>>("SLHA_filenames",inputFiles);

    // getPythiaFileReader.getOptions()->getValue< vector<vector<string>> >("SLHA_filenames").insert(getPythiaFileReader.getOptions()->getValue< vector<vector<string>> >("SLHA_filenames").end(), inputFiles.begin(), inputFiles());
    // getPythiaFileReader.getOptions()->getValue< vector<string> >("SLHA_filenames").insert(getPythiaFileReader.getOptions()->getValue< vector<string> >("SLHA_filenames").end(), inputFiles.begin(), inputFiles.end());

    // WORKS!
    // vector<string> SLHA_filenames;
    // SLHA_filenames.push_back(inputFileName);
    // getPythiaFileReader.setOption<vector<string>>("SLHA_filenames",SLHA_filenames);

    DECLARE_OPTION(getPythiaFileReader, SLHA_filenames, vector<string>)
    APPEND_TO_OPTION(getPythiaFileReader, SLHA_filenames, inputFileName)



    // 
    // Settings for the LHC event loop (ColliderBit function 'operateLHCLoop')
    // 

    // Pass the collider names to the module function responsible for the event loop
    operateLHCLoop.setOption<vector<string>>("pythiaNames",pythiaNames);

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

    // getBuckFastATLAS.setOption<bool>("useBuckFastATLASDetector",true);
    // getBuckFastATLAS.setOption<double>("antiktR",0.4);
    // getBuckFastATLAS.setOption<bool>("partonOnly",false);

    DECLARE_OPTION(getBuckFastATLAS, useBuckFastATLASDetector, vector<bool>)
    DECLARE_OPTION(getBuckFastATLAS, antiktR, vector<double>)
    DECLARE_OPTION(getBuckFastATLAS, partonOnly, vector<bool>)

    APPEND_TO_OPTION(getBuckFastATLAS, useBuckFastATLASDetector, true)
    APPEND_TO_OPTION(getBuckFastATLAS, antiktR, 0.4)
    APPEND_TO_OPTION(getBuckFastATLAS, partonOnly, false)



    DECLARE_OPTION(getBuckFastATLAS, analyses, vector< vector<string> >)

    vector<string> runTheseATLASAnalyses;
    runTheseATLASAnalyses.push_back("ATLAS_0LEP_20invfb");
    // runTheseATLASAnalyses.push_back("ATLAS_0LEPStop_20invfb");
    // runTheseATLASAnalyses.push_back("ATLAS_1LEPStop_20invfb");
    // runTheseATLASAnalyses.push_back("ATLAS_2bStop_20invfb");
    // runTheseATLASAnalyses.push_back("ATLAS_2LEPEW_20invfb");
    // runTheseATLASAnalyses.push_back("ATLAS_2LEPStop_20invfb");
    // runTheseATLASAnalyses.push_back("ATLAS_3LEPEW_20invfb");

    // getATLASAnalysisContainer.setOption<vector<string>>("analysisNamesATLAS",runTheseATLASAnalyses);
    APPEND_TO_OPTION(getBuckFastATLAS, analyses, runTheseATLASAnalyses)

    cout << "DEBUG pythiaNames.size() = " <<  operateLHCLoop.getOptions()->getValue< vector<string> >("pythiaNames").size() << endl;
    cout << "DEBUG analyses.size() = " <<  getBuckFastATLAS.getOptions()->getValue< vector< vector<string> > >("analyses").size() << endl;


    // -- CMS analyses:
    // getBuckFastCMS.setOption<bool>("useBuckFastCMSDetector",true);
    // getBuckFastCMS.setOption<double>("antiktR",0.5);
    // getBuckFastCMS.setOption<bool>("partonOnly",false);

    DECLARE_OPTION(getBuckFastCMS, useBuckFastCMSDetector, vector<bool>)
    DECLARE_OPTION(getBuckFastCMS, antiktR, vector<double>)
    DECLARE_OPTION(getBuckFastCMS, partonOnly, vector<bool>)

    APPEND_TO_OPTION(getBuckFastCMS, useBuckFastCMSDetector, true)
    APPEND_TO_OPTION(getBuckFastCMS, antiktR, 0.4)
    APPEND_TO_OPTION(getBuckFastCMS, partonOnly, false)


    DECLARE_OPTION(getBuckFastCMS, analyses, vector< vector<string> >)

    vector<string> runTheseCMSAnalyses;
    // runTheseCMSAnalyses.push_back("CMS_1LEPDMTOP_20invfb");
    // runTheseCMSAnalyses.push_back("CMS_2LEPDMTOP_20invfb");
    // runTheseCMSAnalyses.push_back("CMS_3LEPEW_20invfb");
    runTheseCMSAnalyses.push_back("CMS_MONOJET_20invfb");

    // getCMSAnalysisContainer.setOption<vector<string>>("analysisNamesCMS",runTheseCMSAnalyses);
    APPEND_TO_OPTION(getBuckFastCMS, analyses, runTheseCMSAnalyses)



    // // -- Identity analyses (no detector smearing)
    // getBuckFastIdentity.setOption<bool>("useBuckFastIdentityDetector",false);  // Switched off by default
    // getBuckFastIdentity.setOption<double>("antiktR",0.4);
    // getBuckFastIdentity.setOption<bool>("partonOnly",false);

    // vector<string> runTheseIdentityAnalyses;
    // // runTheseIdentityAnalyses.push_back("Insert analysis name here");  // Add analysis names

    // getIdentityAnalysisContainer.setOption<vector<string>>("analysisNamesIdentity",runTheseIdentityAnalyses);




    // ----------------------- 
    //    Part 3: Execution 
    // -----------------------
    // 
    // Here we call the ColliderBit module functions 
    // that run the LHC event loop and calculate the 
    // log-likelihood.
    // 

    // Call the initialisation functions for all backends that are in use.
    nulike_1_0_3_init.reset_and_calculate();
    Pythia_8_212_EM_init.reset_and_calculate();

    // Run the simulation loop and calculate the LHC likelihood.
    operateLHCLoop.reset_and_calculate();
    calc_LHC_LogLike.reset_and_calculate();

    // Retrieve and print the LHC likelihood
    double loglike = calc_LHC_LogLike(0);

    cout.precision(5);
    cout << endl;
    cout << scientific << "LHC log likelihood is " << loglike << endl;
    cout << endl;

    // To print to the logs instead, use 
    // logger() << "LHC log likelihood is " << loglike << EOM

    // To output additional info such as the number of signal events
    // predicted for a given analysis and signal region, edit the
    // calc_LHC_LogLike module function in ColliderBit/src/ColliderBit.cpp.

    // Done, all is well
    return 0;
  }

  catch (std::exception& e)
  {
    cerr << "ColliderBit_standalone example has exited with fatal exception: " << e.what() << endl;
  }

  // Done, but something went wrong
  return 1;

}

