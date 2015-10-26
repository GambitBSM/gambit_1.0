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

/// Global flag to warn if early shutdown is already in process
bool shutdown_begun = false;

/// @{ Signal handling helper functions
/// Note: Apparantly one is not supposed to touch streams, nor call exit, from
/// inside a signal handler, as it is undefined behaviour. But it seems to work
/// quite consistently, and this is for emergency shutdown only, so we will do 
/// it anyway.

str signal_name(int sig)
{
  str name;
  switch(sig){
      case SIGINT:  name="SIGINT";  break; 
      case SIGTERM: name="SIGTERM"; break; 
      case SIGUSR1: name="SIGUSR1"; break; 
      case SIGUSR2: name="SIGUSR2"; break; 
      default: name="<unlisted>";
  }
  return name;
}

void sighandler_emergency(int sig)
{
  Gambit::Scanner::Plugins::plugin_info.dump();
  #ifdef WITH_MPI
  std::cout << "rank "<<rank<<": ";
  #endif
  std::cout << "Gambit has performed an emergency shutdown! -- caught signal "<<signal_name(sig)<<" ("<<sig<<")"<<std::endl;
  exit(sig); // No choice but to call exit here. MPI deadlocks can occur if we return.
}

void sighandler_soft(int sig)
{
  if(shutdown_begun)
  {
    #ifdef WITH_MPI
    std::cout << "rank "<<rank<<": ";
    #endif
    std::cout << "Warning, caught signal "<<signal_name(sig)<<" ("<<sig<<")"<<" to trigger soft shutdown, but soft shutdown is already in progress! Initiating emergency shutdown." << std::endl;
    sighandler_emergency(sig);
  }

  Gambit::Scanner::Plugins::plugin_info.set_running(false);
  // We will avoid touching streams in this "clean" shutdown mode since technically it is undefined behaviour.
  //#ifdef WITH_MPI
  //std::cout << "rank "<<rank<<": ";
  //#endif
  //std::cout << "Gambit is initiating soft shutdown! -- caught signal "<<signal_name(sig)<<" ("<<sig<<")"<< std::endl;
  shutdown_begun=true;
}

void sighandler_hard(int sig)
{
  #ifdef WITH_MPI
  std::cout << "rank "<<rank<<": ";
  #endif
  std::cout << "Gambit has performed a hard shutdown! Data loss is likely to have occurred. -- caught signal "<<signal_name(sig)<<" ("<<sig<<")"<< std::endl;
  exit(sig); // No choice but to call exit here. MPI deadlocks can occur if we return.
}

void sighandler_null(int sig) {}

/// Choose signal handler for a given signal via yaml file option
void set_signal_handler(const IniParser::IniFile& iniFile, const int sig, const str& def_mode)
{
    str shutdown_mode;
    YAML::Node keyvalnode = iniFile.getKeyValuePairNode();
    if(keyvalnode["signal_handling"]) {
       YAML::Node signal_options = keyvalnode["signal_handling"];
       if(signal_options[signal_name(sig)]) {
          shutdown_mode = signal_options[signal_name(sig)].as<str>();
       }else{
          shutdown_mode = def_mode;
       }
    }else{
       shutdown_mode = def_mode;
    }

    if      (shutdown_mode=="hard_shutdown"){      signal(sig, sighandler_hard);      }
    else if (shutdown_mode=="emergency_shutdown"){ signal(sig, sighandler_emergency); }
    else if (shutdown_mode=="soft_shutdown"){      signal(sig, sighandler_soft);      }
    else if (shutdown_mode=="none"){               signal(sig, sighandler_null);      }
    else {
        std::ostringstream msg;
        msg << "Invalid shutdown mode requested for signal "<<signal_name(sig)<<" ("<<sig<<")"<<" (via YAML file option '"<<signal_name(sig)<<"' in KeyValue section under 'signal_handling'). Valid shutdown modes are:" <<std::endl;
        msg << "   'hard_shutdown'      -- Exit immediately." <<std::endl; 
        msg << "   'emergency_shutdown' -- Attempt to save printer/resume data and then immediately exit." <<std::endl; 
        msg << "   'soft_shutdown'      -- Safest: attempt to synchronise processes at safe location, then save printer/resume data and exit." <<std::endl; 
        msg << "   'none'               -- Ignore signal. Use at own risk!" <<std::endl; 
        msg << "The default shutdown mode on signal "<<signal_name(sig)<<" is '"<<def_mode<<"'." <<std::endl;
        core_error().raise(LOCAL_INFO,msg.str());
    }
}
/// @}

/// Main GAMBIT program
int main(int argc, char* argv[])
{
  std::set_terminate(terminator);

  // Set default signal handling for before initialisation occurs properly
  signal(SIGTERM, sighandler_hard);
  signal(SIGINT,  sighandler_hard);
  signal(SIGUSR1, sighandler_soft);
  signal(SIGUSR2, sighandler_soft);

  // Add these signals to the list of signals to be blocked by global 
  // block/unblock functions 
  sigemptyset(signal_mask());
  sigaddset(signal_mask(), SIGTERM);
  sigaddset(signal_mask(), SIGINT);
  sigaddset(signal_mask(), SIGUSR1);
  sigaddset(signal_mask(), SIGUSR2);

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

  bool use_mpi_abort = true; // Set later via inifile value

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

    // Check for user requests for shutdown methods used during signal handling
    set_signal_handler(iniFile, SIGINT,  "emergency_shutdown");
    set_signal_handler(iniFile, SIGTERM, "emergency_shutdown");
    set_signal_handler(iniFile, SIGUSR1, "soft_shutdown");
    set_signal_handler(iniFile, SIGUSR2, "soft_shutdown");

    // Check if user wants to disable use of MPI_Abort (since it does not work correctly in all MPI implementations)
    use_mpi_abort = iniFile.getValueOrDef<bool>(true, "use_mpi_abort");

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

  /// Special catch block for controlled shutdown
  /// This exception should only be thrown if it is safe to call MPI_Finalise,
  /// as this will occur once we leave the catch block.
  catch (const SoftShutdownException& e)
  {
    if (not logger().disabled())
    {
      cout << "GAMBIT has performed a controlled early shutdown: " << e.what() << endl;
    }
  }

  /// Special catch block for hard shutdown
  /// No MPI_Finalise called, nor MPI_Abort. Should only be triggered when all
  /// processes are supposed to be trying to shut themselves down quickly.
  catch (const HardShutdownException& e)
  {
    if (not logger().disabled())
    {
      cout << "GAMBIT has performed a hard shutdown: " << e.what() << endl;
    }
    // Free the memory held by the RNG
    Random::delete_rng_engine();
    return EXIT_SUCCESS;
  }

  catch (const std::exception& e)
  {
    if (not logger().disabled())
    {
      cout << endl << " \033[00;31;1mFATAL ERROR\033[00m" << endl << endl;
      cout << "GAMBIT has exited with fatal exception: " << e.what() << endl;
    }
    #ifdef WITH_MPI
      if (GMPI::Is_initialized() and use_mpi_abort)
      {
        GMPI::Comm COMM_WORLD;
        COMM_WORLD.Abort();
      }
    #endif     
    return EXIT_FAILURE;  
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
      if (GMPI::Is_initialized() and use_mpi_abort)
      {
        GMPI::Comm COMM_WORLD;
        COMM_WORLD.Abort();
      }
    #endif     
    return EXIT_FAILURE;  
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

  return EXIT_SUCCESS;

}
