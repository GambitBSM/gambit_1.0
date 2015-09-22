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
///  \date 2012 Oct onwards
///
///  *********************************************

#include "gambit/Core/gambit.hpp"

// FIXME this shouldn't be needed after the call to GMPI::Init() below is shifted to scannerbit
// MPI bindings
#include "gambit/Utils/mpiwrapper.hpp"

#include <csignal> // For definitions of SIGTERM etc

using namespace Gambit;
using namespace LogTags;

void sighandler(int sig)
{
    Gambit::Scanner::Plugins::plugin_info.set_running(false);
}

/// Main GAMBIT program
int main(int argc, char* argv[])
{
  std::set_terminate(terminator);
  signal(SIGABRT, sighandler);
  signal(SIGTERM, sighandler);
  signal(SIGINT, sighandler);

  try
  {
    // Parse command line arguments, launching into the appropriate diagnostic mode
    // if the argument passed warrants it. Otherwise just get the filename.
    const str filename = Core().run_diagnostic(argc,argv);

    // FIXME this is to be shifted to ScannerBit
    #ifdef WITH_MPI
      GMPI::Init();
    #endif
  
    cout << endl << "Starting GAMBIT" << endl;
    cout << "----------" << endl;
    if(Core().found_inifile) cout << "YAML file: "<< filename << endl;

    std::vector<std::string> arguments(argv, argv + argc);
    logger() << core << "Command invoked: ";
    for(int i=0;i<argc;i++){ logger() << arguments[i] << " "; }
    logger() << endl;
    logger() << core << "Starting GAMBIT" << endl << EOM;
    if( Core().resume ) logger() << core << "Attempting to resume scan..." << endl << EOM;
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

    // Set up the printer manager for redirection of scan output.
    Printers::PrinterManager printerManager(iniFile.getPrinterNode(),Core().resume);

    // Set up dependency resolver
    DRes::DependencyResolver dependencyResolver(Core(), Models::ModelDB(), iniFile, Utils::typeEquivalencies(), *(printerManager.printerptr));

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

      // FIXME to be done in ScannerBit
      #ifdef WITH_MPI
        GMPI::Comm COMM_WORLD;
        std::cout << "Shutting down MPI (process "<< COMM_WORLD.Get_rank() <<")..." << std::endl;
        MPI_Finalize();
      #endif

    }
  
  }

  catch (const std::exception& e)
  {
    if (not logger().disabled())
    {
      cout << endl << " \033[00;31;1mFATAL ERROR\033[00m" << endl << endl;
      cout << "GAMBIT has exited with fatal exception: " << e.what() << endl;
      #ifdef WITH_MPI
        if (GMPI::Is_initialized())
        {
          GMPI::Comm COMM_WORLD;
          COMM_WORLD.Abort();
        }
      #endif     
    } 
  }

  catch (str& e)
  {
    cout << endl << " \033[00;31;1mFATAL ERROR\033[00m" << endl << endl;
    cout << "GAMBIT has exited with a fatal and uncaught exception " << endl;
    cout << "thrown from a backend code.  Due to poor code design in " << e << endl;
    cout << "the backend, the exception has been thrown as a string. " << endl;
    cout << "If you are the author of the backend, please throw only " << endl;
    cout << "exceptions that inherit from std::exception.  Error string: " << endl;
    cout << e << endl;
    #ifdef WITH_MPI
      if (GMPI::Is_initialized())
      {
        GMPI::Comm COMM_WORLD;
        COMM_WORLD.Abort();
      }
    #endif     
  }

  // Free the memory held by the RNG
  Random::delete_rng_engine();

  return 0;

}
