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
void do_cleanup() { 
  if(signaldata().jumppoint_set)
  {
    Gambit::Scanner::Plugins::plugin_info.dump(); 
  }
  // No cleanup needed if jump point is not set, means the scan never began.
}

#ifdef WITH_MPI
bool use_mpi_abort = true; // Set later via inifile value
#endif

/// Main GAMBIT program
int main(int argc, char* argv[])
{
  std::set_terminate(terminator);
  cout << std::setprecision(Core().get_outprec());

  #ifdef WITH_MPI
  GMPI::Init();
  #endif

  { // Scope to ensure that all MPI communicators get destructed before Finalize is called.

    // Set default signal handling in case they are received before initialisation occurs properly.
    // Will just do a hard shutdown in that case, since there should be no scan data to worry about.
    signal(SIGTERM, sighandler_hard_quiet);
    signal(SIGINT,  sighandler_hard_quiet);
    signal(SIGUSR1, sighandler_hard_quiet);
    signal(SIGUSR2, sighandler_hard_quiet);

    // Add these signals to the list of signals to be blocked by global 
    // block/unblock functions (see Utils/signal_helpers.hpp)
    sigemptyset(signal_mask());
    sigaddset(signal_mask(), SIGTERM);
    sigaddset(signal_mask(), SIGINT);
    sigaddset(signal_mask(), SIGUSR1);
    sigaddset(signal_mask(), SIGUSR2);
 
    #ifdef WITH_MPI
      /// Create an MPI communicator group for use by error handlers
      GMPI::Comm errorComm;
      errorComm.dup(MPI_COMM_WORLD,"errorComm"); // duplicates the COMM_WORLD context
      const int ERROR_TAG=1;         // Tag for error messages
      errorComm.mytag = ERROR_TAG;
      signaldata().set_MPI_comm(&errorComm); // Provide a communicator for signal handling routines to use.
      /// Create an MPI communicator group for ScannerBit to use
      GMPI::Comm scanComm;
      scanComm.dup(MPI_COMM_WORLD,"scanComm"); // duplicates the COMM_WORLD context
      Scanner::Plugins::plugin_info.initMPIdata(&scanComm); 
      /// MPI rank for use in error messages;
      int rank = scanComm.Get_rank();
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

      // Check if user wants to disable automatic triggering of emergency 
      // shutdown on signals received while shutdown is already in progress
      YAML::Node keyvalnode = iniFile.getKeyValuePairNode();
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
        //Define the likelihood container object for the scanner
        Likelihood_Container_Factory factory(Core(), dependencyResolver, iniFile, *(printerManager.printerptr)
          #ifdef WITH_MPI
          , errorComm
          #endif
        );
 
        //Make scanner yaml node
        YAML::Node scanner_node;
        scanner_node["Scanner"] = iniFile.getScannerNode();
        scanner_node["Parameters"] = iniFile.getParametersNode();
        scanner_node["Priors"] = iniFile.getPriorsNode();
        
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

        // Check for user requests for shutdown methods used during signal handling
        // We do this after the rest of the initialisation, because we want to use
        // the default signal handling during that period.
        logger() << core << "Waiting for all processes to be ready in order to start scan." << EOM;
        GMPI::Barrier();
        block_signals(); // No more interruptions allowed until scan starts properly

        logger() << core << "Setting up signal handling" << std::endl;
        signaldata().set_cleanup(&do_cleanup); // Call this function during emergency shutdown
        set_signal_handler(keyvalnode, SIGINT,  "emergency_shutdown_longjmp");
        set_signal_handler(keyvalnode, SIGTERM, "emergency_shutdown_longjmp");
        set_signal_handler(keyvalnode, SIGUSR1, "soft_shutdown");
        set_signal_handler(keyvalnode, SIGUSR2, "soft_shutdown");

        //Create the master scan manager 
        Scanner::Scan_Manager scan(scanner_node, &printerManager, &factory);

        //Do the scan!
        logger() << core << "Starting scan." << EOM;
        scan.Run(); // Note: the likelihood container will unblock signals when it is safe to receive them.

        // Check why we have exited the scanner; scan may have been terminated early by a signal. 
        // We assume here that because the scanner has exited that it has already down whatever 
        // cleanup it requires, including finalising the printers, i.e. the 'do_cleanup()' function will NOT run.
        if(signaldata().shutdown_begun())
        {
           cout << "GAMBIT has performed a controlled early shutdown." << endl;
           cout << endl;
           logger() << "GAMBIT has performed a controlled early shutdown due to early termination of the scanner plugin." << EOM;
        } 
        else
        {
           //Scan is done; inform signal handlers 
           signaldata().set_shutdown_begun();
           cout << "GAMBIT has finished successfully!" << endl;
           cout << endl;
        }
        unblock_signals();    
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
      signaldata().do_emergency_MPI_shutdown(use_mpi_abort);
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
      signaldata().do_emergency_MPI_shutdown(use_mpi_abort);
      #endif     
      return EXIT_FAILURE;  
    }

    #ifdef WITH_MPI
    signaldata().discard_excess_shutdown_messages();  // Note: if all processes receive a POSIX signal to shutdown there might be many of these (e.g. says 1000 processes all independently get a POSIX signal to shut down; they will each broadcast this command via MPI to all other processes, i.e. 1000*1000 messages will be sent. Could be slow.
    #endif
  } // End main scope; want to destruct all communicators before MPI_Finalize() is called

  // FIXME to be done in ScannerBit
  #ifdef WITH_MPI
  GMPI::Finalize(); // Finalise MPI
  #endif

  return EXIT_SUCCESS;

}
