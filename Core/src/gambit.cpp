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
#include "gambit/Utils/mpiwrapper.hpp"


using namespace Gambit;
using namespace LogTags;

/// Cleanup function
void do_cleanup() { Gambit::Scanner::Plugins::plugin_info.dump(); }

#ifdef WITH_MPI
bool use_mpi_abort = true; // Set later via inifile value

/// Broadcast signal to shutdown all processes
void broadcast_shutdown_signal(GMPI::Comm& errorComm)
{
  if(GMPI::Is_initialized())
  {
    // Broadcast signal to all processes (might not work if something errornous is occuring)
    MPI_Request req_null = MPI_REQUEST_NULL;
    int tmp_buf = 2; // This is the emergency shutdown code defined in signal_handling.hpp. Would be nice to connect the two directly to improve future-safety, but just doing the simple thing for now.
    errorComm.IsendToAll(&tmp_buf, 1, errorComm.mytag, &req_null);
    logger() << LogTags::core << LogTags::info << "Emergency shutdown signal broadcast to all processes" << EOM;
  }
}

/// Broadcast emergency shutdown command to all processes, or abort if set to do so
void do_emergency_MPI_shutdown(GMPI::Comm& errorComm)
{
  if(GMPI::Is_initialized())
  {
    logger() << LogTags::core << LogTags::info << "Broadcasting emergency shutdown signal to all processes" << EOM;
    broadcast_shutdown_signal(errorComm);
    if(use_mpi_abort)      
    {
      // Another desperate attempt to kill all process, also not guaranteed to succeed
      logger() << LogTags::core << LogTags::info << "Calling MPI_Abort..." << EOM;
      errorComm.Abort();
    }
    // debugging; delay shutdown of process to prevent OpenMPI from automatically killing other processes
    // struct timespec sleep_time;
    // sleep_time.tv_sec  = 1;
    // sleep_time.tv_nsec = 0;
    // nanosleep(&sleep_time,NULL);
  }
}
#endif

/// Main GAMBIT program
int main(int argc, char* argv[])
{
  std::set_terminate(terminator);
  cout << std::setprecision(Core().get_outprec());

  #ifdef WITH_MPI
    GMPI::Init();
  #endif

  // Set default signal handling in case they are received before initialisation occurs properly
  signal(SIGTERM, sighandler_hard);
  signal(SIGINT,  sighandler_hard);
  signal(SIGUSR1, sighandler_soft);
  signal(SIGUSR2, sighandler_soft);

  // Add these signals to the list of signals to be blocked by global 
  // block/unblock functions (see Utils/signal_helpers.hpp)
  sigemptyset(signal_mask());
  sigaddset(signal_mask(), SIGTERM);
  sigaddset(signal_mask(), SIGINT);
  sigaddset(signal_mask(), SIGUSR1);
  sigaddset(signal_mask(), SIGUSR2);
 
  /// Create an MPI communicator group for use by error handlers
  #ifdef WITH_MPI
    GMPI::Comm errorComm;
    errorComm.dup(MPI_COMM_WORLD); // duplicates the COMM_WORLD context
    const int ERROR_TAG=1;         // Tag for error messages
    errorComm.mytag = ERROR_TAG;
    int rank = errorComm.Get_rank();
    signaldata().set_MPI_comm(&errorComm); // Provide a communicator for signal handling routines to use.
    signaldata().rank = rank;      // set variable for use in signal handlers
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
    logger() << core << "Starting GAMBIT" << EOM;
    if( Core().resume ) logger() << core << "Attempting to resume scan..." << EOM;
    logger() << core << "Registered module functors [Core().getModuleFunctors().size()]: ";
    logger() << Core().getModuleFunctors().size() << endl;
    logger() << "Registered backend functors [Core().getBackendFunctors().size()]: ";
    logger() << Core().getBackendFunctors().size() << EOM;
 
    // Read YAML file, which also initialises the logger. 
    IniParser::IniFile iniFile;
    iniFile.readFile(filename);

    // Check for user requests for shutdown methods used during signal handling
    logger() << core << "Setting up signal handling" << std::endl;
    YAML::Node keyvalnode = iniFile.getKeyValuePairNode();
    signaldata().set_cleanup(&do_cleanup); // Call this function during emergency shutdown
    set_signal_handler(keyvalnode, SIGINT,  "emergency_shutdown_longjmp");
    set_signal_handler(keyvalnode, SIGTERM, "emergency_shutdown_longjmp");
    set_signal_handler(keyvalnode, SIGUSR1, "soft_shutdown");
    set_signal_handler(keyvalnode, SIGUSR2, "soft_shutdown");

    // Check if user wants to disable automatic triggering of emergency 
    // shutdown on signals received while shutdown is already in progress
    signaldata().ignore_signals_during_shutdown = true;
    if(keyvalnode["signal_handling"]) {
       YAML::Node signal_options = keyvalnode["signal_handling"];
       if(signal_options["ignore_signals_during_shutdown"]) {
          signaldata().ignore_signals_during_shutdown = signal_options["ignore_signals_during_shutdown"].as<bool>();
       }
    } // else use default value (true)
    logger() << "ignore_signals_during_shutdown = " << signaldata().ignore_signals_during_shutdown << EOM;

    // Check if user wants to disable use of MPI_Abort (since it does not work correctly in all MPI implementations)
    #ifdef WITH_MPI
    use_mpi_abort = iniFile.getValueOrDef<bool>(true, "use_mpi_abort");
    #endif

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

      // Signal handing can be set to trigger a longjmp back to here upon receiving some signal
      signaldata().havejumped = setjmp(signaldata().env);
      if(signaldata().havejumped)
      {
          std::ostringstream msg;
          #ifdef WITH_MPI
          msg << "rank "<<rank<<": ";
          #endif
          // Signals should be blocked if possible while scanners are doing anything
          // sensitive, like writing resume data, otherwise we may have just left
          // that data in an unreadable state. See Utils/signal_helpers.hpp. 
          // We could try blocking all signals while we are outside of this function,
          // but we may not be able to block them for long enough.
          // We probably also should not touch MPI again after executing the jump,
          // since only God knows what state it was left in.
          msg << "Performed an emergency shutdown via longjmp! Data handled by external scanner" << endl;
          #ifdef WITH_MPI
          msg << "        ";
          #endif
          msg << "codes may have been left in an inconsistent state.";
          do_cleanup();
          throw HardShutdownException(msg.str()); 
      }

      //Do the scan!
      logger() << core << "Starting scan." << EOM;
      block_signals();
      scan.Run(); // Note: the likelihood container will unblock signals when it is safe to receive them.
      unblock_signals();    

      //Scan is done; inform signal handlers 
      signaldata().set_shutdown_begun();

      cout << "GAMBIT has finished successfully!" << endl;
      cout << endl;
    }
  
  }

  /// Special catch block for silent shutdown
  /// This exception is designed to be thrown during diagnostic mode
  catch (const SilentShutdownException& e)
  {
    // No need to do anything, just let program shut down normally from here
  }

  /// Special catch block for controlled shutdown
  /// This exception should only be thrown if it is safe to call MPI_Finalise,
  /// as this will occur once we leave the catch block.
  catch (const SoftShutdownException& e)
  {
    if (not logger().disabled())
    {
      std::ostringstream ss;
      ss << e.what() << endl;
      #ifdef WITH_MPI
      ss << "rank "<<rank<<": ";
      #endif
      ss << "GAMBIT has performed a controlled early shutdown." << endl;
      ss << signaldata().display_received_signals() << endl;
      cout     << ss.str();
      logger() << ss.str() << EOM;
  }
    // Let program shutdown normally from here
  }

  /// Special catch block for hard shutdown
  /// No MPI_Finalise called, nor MPI_Abort. Should only be triggered when all
  /// processes are supposed to be trying to shut themselves down quickly.
  catch (const HardShutdownException& e)
  {
    if (not logger().disabled())
    {
      std::ostringstream ss;
      ss << e.what() << endl;
      #ifdef WITH_MPI
      ss << "rank "<<rank<<": ";
      #endif
      ss << "GAMBIT has shutdown (but could not finalise or abort MPI)." << endl;
      ss << signaldata().display_received_signals() << endl;
      cout     << ss.str();    
      logger() << ss.str() << EOM;
    }
    // This will attempt to broadcast a shutdown signal to all processes, I think there is no harm in attempting this...
    // TODO: Ahh wait can't do this, or else it might try to abort and kill the other processes before they can do their
    // emergency shutdown. Need to make a function that just broadcasts the signal, and definitely does not try to
    // Abort.
    //#ifdef WITH_MPI
    //do_emergency_MPI_shutdown(errorComm);
    //#endif     
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
    do_emergency_MPI_shutdown(errorComm);
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
    do_emergency_MPI_shutdown(errorComm);
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

  return EXIT_SUCCESS;

}
