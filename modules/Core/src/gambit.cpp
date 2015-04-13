//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  GAMBIT executable.
///
///  *********************************************
///
///  Authors:
///   
///  \author The GAMBIT Collaboration
///  \date 2012 Oct --> ??
///
///  *********************************************

#include "gambit/Core/gambit_main.hpp"

using namespace Gambit;
using namespace LogTags;

/// Main GAMBIT program
int main(int argc, char* argv[])
{
  std::set_terminate(terminator);

  try
  {
    // Parse command line arguments, launching into the appropriate diagnostic mode
    // if the argument passed warrants it. Otherwise just get the filename.
    const str filename = Core().run_diagnostic(argc,argv);

    cout << endl << "Starting GAMBIT" << endl;
    cout << "----------" << endl;
    if(Core().found_inifile) cout << "YAML file: "<< filename << endl;

    std::vector<std::string> arguments(argv, argv + argc);
    logger() << core << "Command invoked: ";
    for(int i=0;i<argc;i++){ logger() << arguments[i] << " "; }
    logger() << endl;
    logger() << core << "Starting GAMBIT" << endl << EOM;
    logger() << core << "Registered module functors [Core().getModuleFunctors().size()]: ";
    logger() << Core().getModuleFunctors().size() << endl;
    logger() << "Registered backend functors [Core().getBackendFunctors().size()]: ";
    logger() << Core().getBackendFunctors().size() << endl << EOM;
 
    // Read YAML file, which also initialises the logger. 
    IniParser::IniFile iniFile;
    iniFile.readFile(filename);
 
    // Initialise the random number generator, letting the RNG class choose its own default.
    Random::create_rng_engine(iniFile.getValueOrDef<str>("default", "rng"));

    // Determine selected model(s)
    std::set<str> selectedmodels = iniFile.getModelNames();
  
    // Activate "primary" model functors
    Core().registerActiveModelFunctors( Models::ModelDB().getPrimaryModelFunctorsToActivate( selectedmodels, Core().getPrimaryModelFunctors() ) );

    // Deactivate module functions reliant on classes from missing backends
    Core().accountForMissingClasses();

    // Set up a printer object
    // (will do this with a factory that reads the inifile, similar to the PriorManager)
    // Printers::ostreamPrinter printer(cout,1); 
    // For now the asciiPrinter can be constructed using any stream, so for file output
    // we need to give it a file stream object.
    //std::ofstream outfile("gambit_output.txt", std::ofstream::out);
    //std::ofstream infofile("gambit_output.info", std::ofstream::out);
    //Printers::asciiPrinter printer(outfile,infofile);

    // Set up the printer (redirection of scan output)
    Printers::PrinterManager printerManager(iniFile.getPrinterNode());
    Printers::BasePrinter& printer (*printerManager.printerptr);   

    // Set up dependency resolver
    DRes::DependencyResolver dependencyResolver(Core(), Models::ModelDB(), iniFile, Utils::typeEquivalencies(), *printerManager.printerptr);

    // Log module function infos
    dependencyResolver.printFunctorList();

    // Do the dependency resolution
    dependencyResolver.doResolution();

    // Check that all requested models are used for at least one computation
    Models::ModelDB().checkPrimaryModelFunctorUsage(Core().getActiveModelFunctors());

    // Report the proposed (output) functor evaluation order
    dependencyResolver.printFunctorEvalOrder(Core().show_runorder);
    
    // If true, bail out (just wanted the run order, not a scan); otherwise, keep going.
    if (not Core().show_runorder)
    {
 
      //Define the prior
      Priors::CompositePrior prior(iniFile.getParametersNode(), iniFile.getPriorsNode());
  
      //Define the likelihood container object for the scanner
      Likelihood_Container_Factory factory(Core(), dependencyResolver, iniFile, prior);
 
      //Create the master scan manager 
      Scanner::Scan_Manager scan(&factory, iniFile.getScannerNode(), &prior, &printerManager);

      //Do the scan!
      logger() << core << "Starting scan." << EOM;
      scan.Run(); 

      cout << "GAMBIT has finished successfully!" << endl;

    }
  
  }

  catch (const std::exception& e)
  {
    if (not logger().disabled())
    {
      cout << endl << " \033[00;31;1mFATAL ERROR\033[00m" << endl << endl;
      cout << "GAMBIT has exited with fatal exception: " << e.what() << endl;
    }
      
  }

  // Free the memory held by the RNG
  Random::delete_rng_engine();

  return 0;

}
