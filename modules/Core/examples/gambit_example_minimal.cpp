//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  GAMBIT core framework.
///
///  *********************************************
///
///  Authors:
///   
///  \author The GAMBIT Collaboration
///  \date 2012 Oct --> ??
///
///  *********************************************

#include "log.hpp"
#include "depresolver.hpp"
#include "yaml_parser.hpp"
#include "likelihood_container.hpp"
#include "scannerbit.hpp"
#include "test_function_rollcall.hpp"
#include "priors_rollcall.hpp"
#include "model_rollcall.hpp"
#include "backend_rollcall.hpp"
#include "module_rollcall.hpp"
#include "register_error_handlers.hpp"
#include "stream_printers.hpp"
#include "printermanager.hpp"
#include "inifile_interface.hpp"

using namespace Gambit;
using namespace LogTags;

// Inform the user of the ways to invoke GAMBIT, then die.
void getout()
{ 
  cout << "\nGAMBIT command-line options                                                 "
          "\n---------------------------                                                 "
          "\n                                                                            "
          "\n   Start a scan                                       gambit <inifile>      " 
          "\n   e.g.                                               gambit gambit.yaml    "
          "\n                                                                            "
          "\n   List registered modules                            gambit modules        " 
          "\n                                                                            "
          "\n   List registered backends and their status          gambit backends       " 
          "\n                                                                            "
          "\n   List registered models and output model graph      gambit models         " 
          "\n                                                                            "
          "\n   List all registered function capabilities          gambit capabilities   " 
          "\n                                                                            "
          "\n   Give info on a specific module, backend, model or  gambit <name>         "
          "\n   capability, e.g.                                   gambit DarkBit        "
          "\n                                                      gambit Pythia         "
          "\n                                                      gambit MSSM           "
          "\n                                                      gambit IC79WL_loglike "
          "\n                                                                            "
          "\n   Print GAMBIT version information                   gambit -v/--version   " << endl << endl; 
  logger().disable();
  core_error().silent_forced_throw();
}


// Launch non-interactive command-line diagnostic mode, for printing info about current GAMBIT configuration
#include "modelgraph.hpp"
void run_diagnostic(str command)
{

  if (command == "modules")
  {
    cout << "\nThis is GAMBIT. Registered modules:" << endl;
    cout <<   "-----------------------------------" << endl;
    std::set<str> modules = Core().getModules();
    for (std::set<str>::const_iterator it = modules.begin(); it != modules.end(); ++it)
    {
      cout << *it << endl;
    }
    cout << endl;
    //number of module functions
  }

  else if (command == "backends")
  {
    cout << "\nThis is GAMBIT. Registered backends:" << endl;
    cout <<   "------------------------------------" << endl;
    std::set<str> backends = Core().getBackends();
    for (std::set<str>::const_iterator it = backends.begin(); it != backends.end(); ++it)
    {
      cout << *it << endl;
    }
    cout << endl;
    // number of backend functions, path to lib, present/loaded successfully
  }

  else if (command == "models")
  {
    // Create a graph of the available model hierarchy.
    ModelGraph().makeGraph(Core().getPrimaryModelFunctors());
    cout << "\nThis is GAMBIT. Registered models:" << endl;
    cout <<   "----------------------------------" << endl;
    std::set<str> models = Core().getModels();
    for (std::set<str>::const_iterator it = models.begin(); it != models.end(); ++it)
    {
      cout << *it << endl;
    }
    cout << endl;
    //parent, number of parameters

  }

  else if (command == "capabilities")
  {
    cout << "\nThis is GAMBIT. Registered capabilities:" << endl;
    cout <<   "----------------------------------------" << endl;
    std::set<str> capabilities = Core().getCapabilities();
    for (std::set<str>::const_iterator it = capabilities.begin(); it != capabilities.end(); ++it)
    {
      cout << *it << endl;
    }
    cout << endl;
    // available from (origin only)
  }

  else 
  {
    //Iterate over all modules to see if command matches one of them
    // functions + capabilities and types, loop manager or not, nested or not, statuses
    //   -dependencies
    //   -backend requirements + grouped or not

    //Iterate over all backends to see if command matches one of them
    // path to
    // load status
    // functions, capabilities, types (inc args), statuses

    //Iterate over all models to see if command matches one of them
    // parent, children, parameters

    //Iterate over all capabilities to see if command matches one of them
    // available from (type, origin, function name)
    // explanation

    return;
  }

  logger().disable();
  core_error().silent_forced_throw();

}


int main( int argc, const char* argv[] )
{

  std::set_terminate(terminator);

  try
  {

    // Parse command line arguments
    if (argc != 2) getout();        // If the wrong number of parameters have been passed, inform the user and exit.
    run_diagnostic(argv[1]);        // Launch into the appropriate diagnostic mode if the argument passed warrants it.
    const char* filename = argv[1]; // If not, roll on as if the argument is a filename.
  
    cout << endl << "Starting GAMBIT" << endl;
    cout << "----------" << endl;

    logger() << core << "Command invoked: " << argv[0] << " " << filename << endl;
    logger() << core << "Starting GAMBIT" << endl << EOM;
    logger() << core << "Registered module functors [Core().getModuleFunctors().size()]: ";
    logger() << Core().getModuleFunctors().size() << endl;
    logger() << "Registered backend functors [Core().getBackendFunctors().size()]: ";
    logger() << Core().getBackendFunctors().size() << endl << EOM;
 
    // Read YAML file, which also initialises the logger. 
    IniParser::IniFile iniFile;
    iniFile.readFile(filename);
 
    // Determine selected model(s)
    std::vector<std::string> selectedmodels = iniFile.getModelNames();
    //cout << "Your selected models are: " << selectedmodels << endl;
  
    // Activate "primary" model functors
    Core().registerActiveModelFunctors ( modelClaw().getPrimaryModelFunctorsToActivate ( selectedmodels, Core().getPrimaryModelFunctors() ) );

    // Set up a printer object
    // (will do this with a factory that reads the inifile, similar to the PriorManager)
    // Printers::ostreamPrinter printer(std::cout,1); 
    // For now the asciiPrinter can be constructed using any stream, so for file output
    // we need to give it a file stream object.
    //std::ofstream outfile("gambit_output.txt", std::ofstream::out);
    //std::ofstream infofile("gambit_output.info", std::ofstream::out);
    //Printers::asciiPrinter printer(outfile,infofile);

    // Set up the printer (redirection of scan output)
    Gambit::Printers::PrinterManager printerManager(iniFile.getPrinterNode());

    // Set up dependency resolver
    DRes::DependencyResolver dependencyResolver(Core(), iniFile, *printerManager.printerptr);

    // Log module function infos
    dependencyResolver.printFunctorList();

    // Do the dependency resolution
    dependencyResolver.doResolution();

    // Check that all requested models are used for at least one computation
    modelClaw().checkPrimaryModelFunctorUsage(Core().getActiveModelFunctors());

    // Report the proposed (output) functor evaluation order
    dependencyResolver.printFunctorEvalOrder();
 
    //Define the prior
    Gambit::Priors::CompositePrior prior(iniFile.getParametersNode(), iniFile.getPriorsNode());
  
    //Define the likelihood container object for the scanner
    Gambit::Scanner::Factory_Base *factory = [&]()->Gambit::Scanner::Factory_Base *
    {
      if (iniFile.hasKey("enable_testing") && iniFile.getValue<bool>("enable_testing"))
        return new Gambit::Scanner::Test_Function_Factory(iniFile.getKeyValuePairNode());
      else
        return new Gambit::Likelihood_Container_Factory (Core(), dependencyResolver, iniFile, prior);
    }();
  
    //Define the iniFile interface for the scanner
    Gambit::Scanner::IniFileInterface interface = Scanner::scanner_inifile_input(iniFile.getScannerNode());

    //Run the scanner!
    Gambit::Scanner::Gambit_Scanner *scanner = new Gambit::Scanner::Gambit_Scanner(*factory, interface, prior);
    //cout << "keys = " << scanner->getKeys() << endl;
    //cout << "phantom keys = " << scanner->getPhantomKeys() << endl;
    logger() << core << "Starting scan." << EOM;
    scanner->Run(); 
 
    std::cout << "GAMBIT has finished successfully! Any errors following this message ";
    std::cout << "are probably caused by cleanup problems, i.e in destructors etc."<<std::endl;
  
  }

  catch (std::exception& e)
  {
    if (not logger().disabled()) cout << "GAMBIT has exited with fatal exception: " << e.what() << endl;
  }

  return 0;

}

 
