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

#include <csignal>

#include "gambit/Core/gambit.hpp"

// FIXME this shouldn't be needed after the call to GMPI::Init() below is shifted to scannerbit
// MPI bindings
#include "gambit/Utils/mpiwrapper.hpp"


using namespace Gambit;
using namespace LogTags;

// Global variable storing MPI rank for use in signal handler messages
#ifdef WITH_MPI
int rank;
#endif

// Global flag to warn if early shutdown is already in process
bool shutdown_begun = false;

//void sighandler(int sig)
//{
//  Gambit::Scanner::Plugins::plugin_info.dump();
//  #ifdef WITH_MPI
//  std::cout << "rank "<<rank<<": ";
//  #endif
//  std::cout << "Gambit has performed an emergency shutdown!" << std::endl;
//  exit(sig);
//}
//
//void sighandler2(int sig)
//{
//  if(shutdown_begun)
//  {
//    #ifdef WITH_MPI
//    std::cout << "rank "<<rank<<": ";
//    #endif
//    std::cout << "Warning, caught signal "<<sig<<" to trigger soft shutdown, but soft shutdown is already in progress! Initiating emergency shutdown." << std::endl;
//    Gambit::Scanner::Plugins::plugin_info.dump();
//    #ifdef WITH_MPI
//      MPI_Finalize();
//    #endif
//    exit(sig);
//r }
//  else
//  {
//    Gambit::Scanner::Plugins::plugin_info.set_running(false);
//    #ifdef WITH_MPI
//    std::cout << "rank "<<rank<<": ";
//    #endif
//    std::cout << "Gambit is initiating soft shutdown! -- caught signal "<<sig<< std::endl;
//    if (!Gambit::Scanner::Plugins::plugin_info.func_calculating())
//    {
//      // Soft shutdown is impossible to perform safely if signal happens to be
//      // intercepted outside of a plugin (i.e. likelihood) evaluation, since we
//      // could be returning control to e.g. scanner code which is about to 
//      // initiate a Barrier, in which case a deadlock will occur. So we must 
//      // initiate an emergency shutdown and try to save the resume data.
//      #ifdef WITH_MPI
//      std::cout << "rank "<<rank<<": ";
//      #endif
//      std::cout << "Soft shutdown is impossible, attempting emergency shutdown!"<<sig<< std::endl;
//      Gambit::Scanner::Plugins::plugin_info.dump();
//
//      // FIXME:
//      // Ben: but I think we should not do this part, since the scanner might be
//      // in the middle of writing data needed for resuming. We should therefore
//      // return control to increase the probability that resuming will be
//      // possible. Ack but if we let control return then new print attempts might
//      // occur, which will possibly crash the printers after finalise has
//      // occurred. Might need to improve the "silencing" of printers to avoid
//      // this problem.
//      #ifdef WITH_MPI
//        MPI_Finalize();
//      #endif
//      exit(sig);
//    }
//    shutdown_begun = true;
//  }
//}

void sighandler(int sig)
{
  Gambit::Scanner::Plugins::plugin_info.dump();
  std::cout << "Gambit has performed an emergency shutdown!" << std::endl;
  exit(sig);
}

void sighandler2(int sig)
{
  Gambit::Scanner::Plugins::plugin_info.set_running(false);
  std::cout << "Gambit is performing soft shutdown! -- catch SIGUSR" << std::endl;
  if (!Gambit::Scanner::Plugins::plugin_info.func_calculating())
  {
    Gambit::Scanner::Plugins::plugin_info.dump();
    #ifdef WITH_MPI
      MPI_Finalize();
    #endif
    exit(sig);
  }
}

/// Main GAMBIT program
int main(int argc, char* argv[])
{
  std::set_terminate(terminator);
  signal(SIGTERM, sighandler);
  signal(SIGINT, sighandler);
  signal(SIGUSR1, sighandler2);
  signal(SIGUSR2, sighandler2);

  // FIXME this is to be shifted to ScannerBit
  #ifdef WITH_MPI
    GMPI::Init();
  #endif
 
  /// Create an MPI communicator group for use by error handlers
  #ifdef WITH_MPI
    GMPI::Comm errorComm;
    errorComm.dup(MPI_COMM_WORLD); // duplicates the COMM_WORLD context
    rank = errorComm.Get_rank();     // set global rank variable for use in signal handlers
    const int ERROR_TAG=1;         // Tag for error messages
    errorComm.mytag = ERROR_TAG;
  #endif

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
    if( Core().resume ) logger() << core << "Attempting to resume scan..." << endl << EOM;
    logger() << core << "Registered module functors [Core().getModuleFunctors().size()]: ";
    logger() << Core().getModuleFunctors().size() << endl;
    logger() << "Registered backend functors [Core().getBackendFunctors().size()]: ";
    logger() << Core().getBackendFunctors().size() << endl << EOM;
 
    // Read YAML file, which also initialises the logger. 
    IniParser::IniFile iniFile;
    iniFile.readFile(filename);

    // Check if user wants SIGINT and/or SIGTERM to trigger soft shutdown (instead of default emergency shutdown)
    if(iniFile.getValueOrDef<bool>(false, "always_attempt_soft_shutdown"))
    {
      signal(SIGINT, sighandler2);
      signal(SIGTERM, sighandler2);
    }

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
      Likelihood_Container_Factory factory(Core(), dependencyResolver, iniFile, prior, *(printerManager.printerptr)
        #ifdef WITH_MPI
        , errorComm
        #endif
      );
 
      //Create the master scan manager 
      Scanner::Scan_Manager scan(&factory, iniFile.getScannerNode(), &prior, &printerManager);

      //Do the scan!
      logger() << core << "Starting scan." << EOM;
      scan.Run(); 

      cout << "GAMBIT has finished successfully!" << endl;
    }
  
  }

  /// Special catch block for MPIerrors, so that we don't trigger further MPIerrors
  catch (const MPIerror& e)
  {
    if (not logger().disabled())
    {
      cout << endl << " \033[00;31;1mFATAL ERROR\033[00m" << endl << endl;
      cout << "GAMBIT has exited due to receiving an error signal from another process: " << e.what() << endl;
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
          //GMPI::Comm COMM_WORLD;
          //COMM_WORLD.Abort(); // Not working reliably. New method:
          int nullbuf = 0;
          cout << "rank " << errorComm.Get_rank() << ": Broadcasting error signal to all other processes." << endl;
          MPI_Request nullreq = MPI_REQUEST_NULL;
          errorComm.IsendToAll(&nullbuf, 1, ERROR_TAG, &nullreq);
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
        //GMPI::Comm COMM_WORLD;
        //COMM_WORLD.Abort(); // Not working reliably. New method:
        int nullbuf = 0;
        cout << "rank " << errorComm.Get_rank() << ": Broadcasting error signal to all other processes." << endl;
        MPI_Request nullreq = MPI_REQUEST_NULL;
        errorComm.IsendToAll(&nullbuf, 1, ERROR_TAG, &nullreq);
      }
    #endif     
  }

  // FIXME to be done in ScannerBit
  // Finalise MPI
  #ifdef WITH_MPI
  if (GMPI::Is_initialized())
  {
    cout << "rank " << rank << ": Shutting down MPI..." << endl;
    MPI_Finalize();
  }
  #endif

  // Free the memory held by the RNG
  Random::delete_rng_engine();

  return 0;

}
