//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  GAMBIT signal handling functions
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Ben Farmer
///          (ben.farmer@gmail.com)
///  \date 2015 Oct
///
///  *********************************************

#include <iostream>
#include <signal.h>
#include <setjmp.h>     /* jmp_buf, setjmp, longjmp */
#include <omp.h>
#include "gambit/Utils/signal_handling.hpp"
#include "gambit/Utils/mpiwrapper.hpp"
#include "gambit/Logs/logger.hpp"
#include "yaml-cpp/yaml.h"
//#include "gambit/ScannerBit/plugin_loader.hpp"

#define SIGNAL_DEBUG // comment out when not debugging.

namespace Gambit
{
   /// Translate signal codes to strings
   std::string signal_name(int sig)
   {
     std::string name;
     switch(sig){
         case SIGINT:  name="SIGINT";  break; 
         case SIGTERM: name="SIGTERM"; break; 
         case SIGUSR1: name="SIGUSR1"; break; 
         case SIGUSR2: name="SIGUSR2"; break; 
         default: name="<unlisted>";
     }
     return name;
   }

   /// Translate shutdown codes to strings
   std::string SignalData::shutdown_name(int code)
   {
     std::string name;
     switch(code){
         case SOFT_SHUTDOWN:      name="SOFT_SHUTDOWN";      break;
         case EMERGENCY_SHUTDOWN: name="EMERGENCY_SHUTDOWN"; break;
         default: name="<invalid shutdown code>"; break;
     }
     return name;
   }

   /// @{ SignalData member functions
  
   /// Constructor (initialise member variables)
   SignalData::SignalData()
     : jumppoint_set(false)
     , havejumped(1) // set to zero after jump point set
     , cleanup_function_set(false)
     , ignore_signals_during_shutdown(1) 
     , shutdownBegun(0)
     , rank(-1)
     , emergency(0)
     , POSIX_signal_noticed(false)
     , shutdown_due_to_MPI_message(false)
     , shutdown_attempts(0)
     , inside_omp_block(false)
     , N_signals(0)
     #ifdef WITH_MPI
     , _comm_rdy(false)
     , shutdown_broadcast_done(false)
     , looptimes(1000)
     , next(0)
     , listfull(false)
     , timeout(100)
    #endif
   {}

   /// Retrieve MPI rank as a string (for log messages etc.)
   std::string SignalData::myrank()
   {
     std::ostringstream tmp;
     #ifdef WITH_MPI 
     if(rank==-1) { tmp << "UNKNOWN"; }
     else         { tmp << rank; }
     #else
     tmp << "(MPI DISABLED)";
     #endif
     return tmp.str();
   }
 
   /// Set jump point;
   void SignalData::setjump()
   {
      havejumped = setjmp(env);
      jumppoint_set = true;
   }

   /// Set cleanup function
   void SignalData::set_cleanup(void_func f)
   {
      cleanup = f;
      cleanup_function_set = true;
   }

   /// Call cleanup function
   void SignalData::call_cleanup() 
   {
      if(cleanup_function_set) cleanup();
      // Do nothing if no function has been set;
   }

   /// Add signal to record
   void SignalData::add_signal(int sig)
   {
     //std::cerr << " Adding signal " << sig << std::endl; // debugging
     if(N_signals<MAX_SIGNALS) {
        received_signals[N_signals] = sig;
        N_signals+=1;
     }
     else
     {
        // no more space to record signals.
        N_signals+=1;
     }
   }

   /// Print to string a list of the signals received so far by this process
   std::string SignalData::display_received_signals()
   {
     std::ostringstream myout;
     if(N_signals > 0 )
     {
       myout << "Caught the following signals (in order):" << std::endl;
       for(int i=0; i<N_signals; i++)
       {
         if(i<MAX_SIGNALS)
         {
           myout <<"#"<<i+1<<": Signal "<<received_signals[i]<<" ("<<signal_name(received_signals[i])<<")"<<std::endl;
         }
       }
       if( (N_signals - MAX_SIGNALS) > 0)
       {
         myout << "Another " << (N_signals - MAX_SIGNALS) <<" signals were caught but their values were not recorded (buffer exceeded)"<<std::endl;
       }
     }
     return myout.str();
   }

   /// Register that shutdown has begun
   void SignalData::set_shutdown_begun(const sig_atomic_t emergnc)
   {
     shutdownBegun = 1;
     emergency = emergnc;
     if(ignore_signals_during_shutdown)
     {
        /// Redirect all future signals (except of course kill etc.) to the null handlers
        signal(SIGTERM, sighandler_null);
        signal(SIGINT,  sighandler_null);
        signal(SIGUSR1, sighandler_null);
        signal(SIGUSR2, sighandler_null);
     }
   }

   /// Check if shutdown is in progress
   bool SignalData::shutdown_begun() { return shutdownBegun; }
   bool SignalData::emergency_shutdown_begun() { return shutdownBegun & emergency; }

   /// Attempt to synchronise all processes, but abort if it takes too long
   bool SignalData::all_processes_ready()
   {
     logger() << "Waiting up to "<<timeout/1000<<" seconds for all processes to sync..." << std::endl;
     #ifdef WITH_MPI
     // sleep setup
     bool timedout = false;
     std::chrono::milliseconds bar_timeout(std::lround(timeout)); 
     // This is a fancy barrier that waits a certain amount of time after the FIRST process
     // enters before unlocking (so that other action can be taken). This means that all the
     // processes that enter the barrier *do* get synchronised, even if the barrier unlocks.
     // This helps the synchronisation to be achieved next time.
     if( signalComm->BarrierWithCommonTimeout(bar_timeout, 9999, 9998) )
     {
       timedout = true; // Barrier timed out waiting for some process to enter
     }
     // else the barrier succeed in synchronising all processes
     logger() << "Synchronised? " << !timedout << EOM;
     return !timedout; 
     #else
     return true; // Always ready if no MPI
     #endif
   }

   void SignalData::attempt_soft_shutdown()
   {
     const int max_attempts=6; // 6 attempts ==> 3 plugin loops (we attempt shutdown both before and after the plugin evaluation) 
     const std::chrono::seconds max_time(120);

     /// Start counting...
     static std::chrono::time_point<std::chrono::system_clock> start(std::chrono::system_clock::now());
    
     logger() << "Attempting to synchronise for soft shutdown (previous attempts: "<<shutdown_attempts<<")" << EOM;
     // Will continue trying to sync until BOTH the max_attempts 
     // has been exceeded, AND the max_time has been exceeded.
     // In other words if it takes more than 6 attempts for
     // 120 seconds to elapse, we just keep trying, or if 6
     // attempts take long than 120 seconds, then we wait
     // until the 6 attempts complete.
     if (all_processes_ready()) 
     {
       call_cleanup();
       std::ostringstream msg;
       #ifdef WITH_MPI
       msg << "rank "<<myrank()<<": ";
       #endif
       msg << "Performing soft shutdown!";
       throw SoftShutdownException(msg.str()); 
     } 
     else 
     {
       shutdown_attempts+=1;
     }                    

     // Compute elapsed time since shutdown began
     std::chrono::time_point<std::chrono::system_clock> current = std::chrono::system_clock::now();
     std::chrono::duration<double> time_waited = current - start;

     if (shutdown_attempts>=max_attempts and time_waited>=max_time) 
     {
       call_cleanup();
       std::ostringstream msg;
       #ifdef WITH_MPI
       msg << "rank "<<myrank()<<": ";
       #endif
       msg << "Soft shutdown failed (could not synchronise all processes after "<<shutdown_attempts<<" attempts, and after waiting "<<std::chrono::duration_cast<std::chrono::seconds>(time_waited).count() <<" seconds), emergency shutdown performed instead! Data handled by external scanner codes (in other processes) may have been left in an inconsistent state." << std::endl;
       throw HardShutdownException(msg.str()); 
     }
   }
 
   /// Check if shutdown is in progress and raise appropriate termination 
   /// exception if so.
   /// (to be called by Gambit once it is safe to trigger termination)
   void SignalData::check_for_shutdown_signal()
   {
     // Uncomment for debugging
     if(omp_get_level()!=0)
     {
        // Should never be checking for shutdown signals this way inside a multithreaded region
        #pragma omp critical(check_for_shutdown_signal)
        {
          std::cerr << LOCAL_INFO << ": Performed signal check which may result in shutdown from inside an omp parallel block! This should not be allowed to happen, please file a bug report." << std::endl;
          exit(EXIT_FAILURE);
        }
     }

     #ifdef WITH_MPI
     /// Check for shutdown signals from other processes
     #ifdef SIGNAL_DEBUG
     logger() << LogTags::core << LogTags::info << "Doing Iprobe to check for shutdown messages from other processes (with MPI tag "<<signalComm->mytag<<")" << EOM;
     #endif
     if(signalComm->Iprobe(MPI_ANY_SOURCE, signalComm->mytag))
     {
       #ifdef SIGNAL_DEBUG
       logger() << LogTags::core << LogTags::info << "Shutdown message detected; doing Recv" << EOM;
       #endif
       int code;
       MPI_Status msg_status;
       signalComm->Recv(&code, 1, MPI_ANY_SOURCE, signalComm->mytag, &msg_status);

       // Check what code was received and use it to determined what kind of shutdown to do
       if(code==SOFT_SHUTDOWN)
       {
         set_shutdown_begun();
         logger() << LogTags::core << LogTags::info << "Received SOFT shutdown message from process with rank " << msg_status.MPI_SOURCE << EOM;
       }
       else if(code==EMERGENCY_SHUTDOWN)
       {
         set_shutdown_begun(1); // '1' argument means emergency set also.
         logger() << LogTags::core << LogTags::info << "Received EMERGENCY shutdown message from process with rank " << msg_status.MPI_SOURCE << EOM;
       }
       else
       {
         std::ostringstream ss;
         ss << "Received UNRECOGNISED shutdown message from process with rank " << msg_status.MPI_SOURCE<<". Performing emergency shutdown, but please note that this indicates a ***BUG*** somewhere in the signal handling code!!!";
         std::cout << ss.str() << std::endl;
         logger() << LogTags::core << LogTags::info << ss.str() << EOM;
         set_shutdown_begun(1); // '1' argument means emergency set also.
       }

       shutdown_due_to_MPI_message = true;
     }
     #ifdef SIGNAL_DEBUG
     else
     {
        logger() << LogTags::core << LogTags::info << "No shutdown message detected; continuing as normal" << EOM;
     }
     #endif
     #endif

     if(shutdownBegun)
     {
       if(not POSIX_signal_noticed and not shutdown_due_to_MPI_message)
       {
         std::ostringstream ss;
         ss << "Shutdown signal detected! (in SignalData)"<< std::endl;
         ss << display_received_signals();
         std::cerr << ss.str();
         logger() << ss.str() << EOM;
         POSIX_signal_noticed = true;
       }

       std::ostringstream ss;
       ss << "Shutdown is in progress; emergency="<< emergency << std::endl;
       std::cerr << ss.str();
       logger() << ss.str() << EOM;

       #ifdef WITH_MPI
       if(not shutdown_due_to_MPI_message) // Don't broadcast another shutdown message if we are shutting down due to an MPI message we received. Assume that all processes will get the first message (otherwise for 1000 process job we will end up with 1000*1000 shutdown messages clogging up the network) 
       {
         // Broadcast shutdown message to all processes
         int shutdown_code;
         if(emergency)
         {
           shutdown_code = EMERGENCY_SHUTDOWN;
         }
         else
         {
           shutdown_code = SOFT_SHUTDOWN;
         }
         broadcast_shutdown_signal(shutdown_code);
       }
       #endif
       // Go to emergency shutdown routine if needed
       check_for_emergency_shutdown_signal();
       // If no exception thrown due to emergency shutdown signal,
       // attempt to synchronise all processes at a timed barrier,
       // and then shut down.
       attempt_soft_shutdown();
     }
   }

   /// Add a new loop time to internal array used to decide barrier timeout
   void SignalData::update_looptime(double newtime)
   {
     #ifdef WITH_MPI
     // We don't need these times unless MPI is active
     if(rank>1)
     {
       looptimes[next] = newtime;
       ++next;
       if(next>=looptimes.size()) 
       {
         next=0;
         listfull=true;
       }
       
       // Compute average of known loop times
       int N = next+1;
       if(listfull) N = looptimes.size();
       double sum = 0;
       for(unsigned int i=0; i<N; ++i)
       {
         sum += looptimes[i];
       }
       timeout = sum/N;
       if(timeout<50) timeout=50; // Set minimum timeout of 50ms
     }
     #endif
   }

   /// Absorb any extra shutdown messages that may be unreceived
   /// (since every process broadcasts to every other process that it should shut down,
   /// so with lots of processess there will be lots of unreceived messages floating
   /// around)
   #ifdef WITH_MPI
   void SignalData::discard_excess_shutdown_messages()
   {
     /// Check for shutdown signals from other processes
     #ifdef SIGNAL_DEBUG
     logger() << LogTags::core << LogTags::info << "Doing Iprobe to check for shutdown signals from other processes (with MPI tag "<<signalComm->mytag<<"). These will be discarded (since we are inside the 'discard_excess_shutdown_messages' routine)" << EOM;
     #endif
     int max_loops = 2*signalComm->Get_size(); // At most should be one message from every process (minus one), so we will check twice as many times as this before deciding that something has gone horribly wrong.

     int code;
     signalComm->Recv_all(&code, 1, MPI_ANY_SOURCE, signalComm->mytag, max_loops);
   }
   #endif

   /// Only check for emergency shutdown signals (i.e. do not attempt synchronisation) 
   void SignalData::check_for_emergency_shutdown_signal()
   {
     logger() << "Checking if emergency shutdown is required" << EOM;
     if(shutdownBegun and emergency)
     {
       logger() << "Emergency shutdown signal detected! Attempting to performing cleanup (but data loss is possible)" << std::endl;
       if(omp_get_level()!=0)
       {
          // Should never get to here from a multithreaded region.
          #pragma omp critical(check_for_emergency_shutdown_signal)
          {
            std::cerr << LOCAL_INFO << ": Tried to perform cleanup following emergency shutdown signal from inside an omp parallel block! This should not be allowed to happen, please file a bug report." << std::endl;
            exit(EXIT_FAILURE);
          }
       }
       call_cleanup();
       throw HardShutdownException("Emergency shutdown signal detected"); 
     }
   }

   /// Switch to threadsafe signal handling mode
   void SignalData::entering_multithreaded_region()
   {
      inside_omp_block = 1;
      // Debugging
      //std::cerr << "rank " << rank <<": ENTERING_MULTITHREADED_REGION" << std::endl;
      //std::cerr << "rank " << rank <<": signaldata().inside_omp_block=1 " << std::endl;
   }

   /// Exit threadsafe signal handling mode
   void SignalData::leaving_multithreaded_region()
   {
      inside_omp_block = 0;
      // Debugging
      //std::cerr << "rank " << rank <<": LEAVING_MULTITHREADED_REGION" << std::endl;
      //std::cerr << "rank " << rank <<": signaldata().inside_omp_block=0 " << std::endl;
   }

   /// Report 'true' if inside a multithreaded region (according to our own flag)
   bool SignalData::inside_multithreaded_region()
   {
      return inside_omp_block;
   }

   #ifdef WITH_MPI
   /// Report if MPI communicator object is prepared
   bool SignalData::comm_ready() { return (GMPI::Is_initialized() and _comm_rdy); }

   /// Set the MPI communicator object for the session
   /// Can be run multiple times, but I would not advise doing that.
   void SignalData::set_MPI_comm(GMPI::Comm* comm)
   {
       signalComm = comm;
       _comm_rdy = true;
       rank = comm->Get_rank();
   }

   /// Broadcast signal to shutdown all processes
   void SignalData::broadcast_shutdown_signal(int shutdown_code)
   {
     if(not shutdown_broadcast_done)
     {
       if(comm_ready())
       {
         // Broadcast signal to all processes (might not work if something errornous is occuring)
         #ifdef SIGNAL_DEBUG
         logger() << LogTags::core << LogTags::info << "Broadcasting shutcode code " <<shutdown_name(shutdown_code)<< " with MPI tag "<<signalComm->mytag<< EOM;
         #endif
         MPI_Request req_null = MPI_REQUEST_NULL;
         signalComm->IsendToAll(&shutdown_code, 1, signalComm->mytag, &req_null);
         logger() << LogTags::core << LogTags::info << shutdown_name(shutdown_code) <<" code broadcast to all processes" << EOM;
       }
       else
       {
         /// Should not be broadcasting
         std::ostringstream errmsg;
         errmsg << "Tried to broadcast_shutdown_signal ("<<shutdown_name(shutdown_code)<<"), but MPI communicator is not ready! (either MPI is uninitialised or a communicator has not been set). This is a bug, please report it.";
         utils_error().raise(LOCAL_INFO, errmsg.str());
       }
       shutdown_broadcast_done = true;
     } // Don't need to broadcast twice (NOTE: might need to trigger change from soft to emergency shutdown?)
     #ifdef SIGNAL_DEBUG
     else
     {
       logger() << LogTags::core << LogTags::info << "Received instruction to broadcast code " <<shutdown_name(shutdown_code)<<", however shutdown_broadcast_done=true is already set, so skipping the broadcast!"<< EOM;
     }
     #endif
   }
   
   /// Broadcast emergency shutdown command to all processes and abort if set to do so
   void SignalData::do_emergency_MPI_shutdown(bool use_mpi_abort)
   {
     if(comm_ready())
     {
       logger() << LogTags::core << LogTags::info << "Broadcasting emergency shutdown signal to all processes" << EOM;
       broadcast_shutdown_signal(EMERGENCY_SHUTDOWN);
       if(use_mpi_abort)      
       {
         // Another desperate attempt to kill all process, also not guaranteed to succeed
         logger() << LogTags::core << LogTags::info << "Calling MPI_Abort..." << EOM;
         signalComm->Abort();
       }
       // debugging; delay shutdown of process to prevent OpenMPI from automatically killing other processes
       // struct timespec sleep_time;
       // sleep_time.tv_sec  = 1;
       // sleep_time.tv_nsec = 0;
       // nanosleep(&sleep_time,NULL);
     }
     else
     {
       // Should not be doing this
       std::ostringstream errmsg;
       errmsg << "Tried to do_emergency_MPI_shutdown, but MPI communicator is not ready! (either MPI is uninitialised or a communicator has not been set). This is a bug, please report it.";
       utils_error().raise(LOCAL_INFO, errmsg.str());
     }
   }
   #endif

   /// @}

   /// Retrieve global instance of signal handler options struct
   SignalData& signaldata()
   {
     static SignalData data;
     #ifdef WITH_MPI
     // If we are using MPI, it is required that the signaldata object be initialised with a communicator object
     // This 'ifdef' block ensures that this happens, or else throws an error.
     static int access_count = 0;
     if(access_count==0){ access_count += 1; }
     else if(access_count==1)
     {
       // Check that communicator object has been initialised
       if(not data.comm_ready())
       {
          std::ostringstream errmsg;
          errmsg << "Error retrieving global SignalData object! An MPI communicator has not been provided to this object! Please provide one via the 'set_MPI_comm' the first time that 'signaldata()' is called."; 
          utils_error().raise(LOCAL_INFO, errmsg.str());
       }
     }
     #endif
     return data;
   }

   /// ========================================================================
   /// ========================================================================
 
   /// @{ Signal handler functions
   /// Note: Apparantly one is not supposed to touch streams, nor call exit, from
   /// inside a signal handler, as it is undefined behaviour. But it seems to work
   /// quite consistently, and this is for emergency shutdown only, so we will do 
   /// it anyway.

   /// @{ Components of emergency signal handler

   /// Calls cleanup and exits            
   void sub_sighandler_emergency(int sig)
   {
     // In case signal redirection to null is too slow to kick in (i.e. race condition) then try to "manually" ignore the signal
     if(signaldata().shutdown_begun() and signaldata().ignore_signals_during_shutdown) return; 
     if(signaldata().shutdown_begun())
     {
       #ifdef WITH_MPI
       std::cerr << "rank "<<signaldata().myrank()<<": ";
       #endif
       std::cerr << "Warning, caught signal "<<signal_name(sig)<<" ("<<sig<<")"<<" to trigger emergency shutdown, but shutdown is already in progress! Initiating hard shutdown." << std::endl;
       sighandler_hard(sig); // calls exit(sig)
     }
     signaldata().set_shutdown_begun(1);
     signaldata().add_signal(sig);

     // Was for debugging; however, I think that we have the following situation:
     // OpenMP creates a team of worker threads when the first parallel block executes
     // HOWEVER, it does not rejoin them; they just sit around idle until next called 
     // upon to do work.
     // When a signal is sent to the program, generally (in Linux) the root thread will get
     // first crack at receiving the signal. However, if it cannot for some reason, then
     // the other threads get a try (I have found this seems to happen when gambit is
     // waiting at an MPI_Barrier; I think it is a busy wait, or signals are blocked or
     // something by openMPI).
     // Next, I theorize that omp_get_level() returns non-zero ALWAYS in the worker threads,
     // even if they are idle. I cannot find documentation to confirm this, but I think
     // this is my most plausible theory of what is going on. Anyway, in such cases, this
     // if statement is triggered even when we are not inside an 'omp parallel' block.
     // I think the cleanup also goes badly if it is triggered from one of the worker
     // threads with the main thread still sitting at some MPI barrier. However, we
     // may have no choice but to just attempt the shutdown anyway, and hope for the best
     // This is another reason why SIGUSR1 or 2 should be sent, and SIGINT or SIGTERM
     // left as absolute last resorts.
     //
     // This behaviour can be easily reproduced by running
     //   OMP_NUM_THREADS=2 mpirun -n 2 terminator -x gdb --args ./gambit -f threadsafe_logger_test.yaml
     // r             (both processes) 
     // <CTRL-C>      (process A)
     // signal SIGINT (process A)
     // <CTRL-C>      (process B)
     // signal SIGINT (process B)
     //
     // if(omp_get_level()!=0)
     // {
     //   std::cerr << signaldata().display_received_signals();
     //   #ifdef WITH_MPI
     //   std::cerr << "rank "<<signaldata().myrank()<<": ";
     //   #endif
     //   std::cerr << LOCAL_INFO <<": ERROR from sub_sighandler_emergency! This handler has been triggered from within an omp parallel block, which is not allowed. Please file a bug report." << std::endl;
     //   std::cerr << "  variable dump: " << std::endl;
     //   std::cerr << "  signaldata().shutdown_begun() = " << signaldata().shutdown_begun() << std::endl;
     //   std::cerr << "  signaldata().ignore_signals_during_shutdown = " << signaldata().ignore_signals_during_shutdown << std::endl;
     //   std::cerr << "  signaldata().inside_multithreaded_region() = " << signaldata().inside_multithreaded_region() << std::endl;
     //   std::cerr << std::endl;
     //   abort(); // trigger core dump
     //   //exit(EXIT_FAILURE);
     // }
     signaldata().call_cleanup(); // Try to cleanup, though behaviour may be undefined.
     std::ostringstream ss;
     #ifdef WITH_MPI
     ss << "rank "<<signaldata().myrank()<<": ";
     #endif
     ss << "Gambit has performed an emergency shutdown!" << std::endl;
     ss << signaldata().display_received_signals();
     ss << std::endl;
     std::cerr << ss.str();
     logger() << ss.str() << EOM;
     exit(sig); // No choice but to call exit here. MPI deadlocks can occur if we return.
   }

   /// Similar to the above, but does a longjmp to wherever has been set.
   /// For the Gambit likelihood container, this should just jump out of
   /// the likelihood evaluation, and then throw a shutdown exception.
   /// Theoretically this is safer than the straight emergency shutdown,
   /// since we don't do anything complicated from the signal handler
   /// (unless something goes wrong). Whatever we were just doing will still
   /// be left in an inconsistent state, however.

   /// Performs longjmp to code which performs cleanup and exits
   void sub_sighandler_emergency_longjmp(int sig)
   {
     // We will avoid touching streams in this shutdown mode since technically it is undefined behaviour, so no messages here.
     // In case signal redirection to null is too slow to kick in (i.e. race condition) then try to "manually" ignore the signal
     if(signaldata().shutdown_begun() and signaldata().ignore_signals_during_shutdown) return; 
     if(signaldata().shutdown_begun())
     {
       #ifdef WITH_MPI
       std::cerr << "rank "<<signaldata().myrank()<<": ";
       #endif
       std::cerr << "Warning, caught signal "<<signal_name(sig)<<" ("<<sig<<")"<<" to trigger emergency shutdown via longjmp, but shutdown is already in progress! Initiating hard shutdown." << std::endl;
       sighandler_hard(sig); // calls exit(sig)
     }
     signaldata().set_shutdown_begun(1);
     signaldata().add_signal(sig);
     if(signaldata().havejumped) 
     {
       std::ostringstream ss;
       #ifdef WITH_MPI
       ss << "rank "<<signaldata().myrank()<<": ";
       #endif
       ss << LOCAL_INFO <<": ERROR from sighandler_emergency_longjmp! No jump point has been set, or jump has already occurred once! (Either is a bug; should not be able to reach this point if jump occurred already)" << std::endl;
       ss << signaldata().display_received_signals();
       std::cerr << ss.str();
       logger() << ss.str() << EOM;
       exit(EXIT_FAILURE);
     }
     // See sub_sighandler_emergency for why we should not do this check
     //if(omp_get_level()!=0)
     //{
     //  std::cerr << signaldata().display_received_signals();
     //  #ifdef WITH_MPI
     //  std::cerr << "rank "<<signaldata().myrank()<<": ";
     //  #endif
     //  std::cerr << LOCAL_INFO <<": ERROR from sub_sighandler_emergency_longjmp! This handler has been triggered from within an omp parallel block, which is not allowed. Please file a bug report." << std::endl;
     //  std::cerr << "  variable dump: " << std::endl;
     //  std::cerr << "  signaldata().shutdown_begun() = " << signaldata().shutdown_begun() << std::endl;
     //  std::cerr << "  signaldata().ignore_signals_during_shutdown = " << signaldata().ignore_signals_during_shutdown << std::endl;
     //  std::cerr << "  signaldata().inside_multithreaded_region() = " << signaldata().inside_multithreaded_region() << std::endl;
     //  std::cerr << "  signaldata().havejumped = " << signaldata().havejumped << std::endl;
     //  std::cerr << std::endl;
     //  exit(EXIT_FAILURE);
     //}
     longjmp(signaldata().env, 1); // 'Removes' the jump point upon execution, to prevent it happening twice.
   }
  
   /// Sets the "shutdown_begun" flag, plus an "emergency" flag, which tells
   /// the running code not to attempt synchronisation, but instead to just
   /// shut down ASAP. 
   /// This should only be used from within omp parallel blocks, because if it
   /// is triggered from an arbitrary place then it can cause MPI deadlocks.
   /// Gambit will set a flag when entering and leaving such blocks which
   /// we use to control which emergency handler is called.
   void sub_sighandler_emergency_omp(int sig)
   {
     // In case signal redirection to null is too slow to kick in (i.e. race condition) then try to "manually" ignore the signal
     if(signaldata().shutdown_begun() and signaldata().ignore_signals_during_shutdown) return; 
     if(signaldata().shutdown_begun())
     {
       #ifdef WITH_MPI
       std::cerr << "rank "<<signaldata().myrank()<<": ";
       #endif
       std::cerr << "Warning, caught signal "<<signal_name(sig)<<" ("<<sig<<")"<<" to trigger emergency shutdown (note: it was detected that we are inside an omp block), but shutdown is already in progress! Initiating hard shutdown." << std::endl;
       sighandler_hard(sig); // calls exit(sig)
     }
     // We will avoid touching streams in this "clean" shutdown mode since technically it is undefined behaviour, so no messages here.
     signaldata().set_shutdown_begun(1); // argument indicates "emergency" mode
     signaldata().add_signal(sig);
   }
   /// @} 

   /// The functions above are alternative signal handlers that are called
   /// depending on whether the code is running in an omp block or not.
   /// Here we have the "real" signal handlers which make the decision about
   /// which "sub" handler to call.

   /// Performs longjmp to code which performs cleanup and exits
   /// OR (inside omp block)
   /// Sets a flag to be checked upon leaving the omp block, to trigger shutdown
   void sighandler_emergency_longjmp(int sig)
   {
      //std::cerr << " Saw signal " << sig << std::endl; // debugging
      if(signaldata().inside_multithreaded_region()) {
         sub_sighandler_emergency_omp(sig);
      } else if (signaldata().jumppoint_set) {
         sub_sighandler_emergency_longjmp(sig);
      } else { // Signal encountered before jump point set; use non-jump emergency shutdown
         sub_sighandler_emergency(sig);
      }
   }

   /// Calls cleanup and exits            
   /// OR (inside omp block)
   /// Sets a flag to be checked upon leaving the omp block, to trigger shutdown
   void sighandler_emergency(int sig)
   {
      //std::cerr << " Saw signal " << sig << std::endl; // debugging
      if(signaldata().inside_multithreaded_region()) {
         sub_sighandler_emergency_omp(sig);
      } else {
         sub_sighandler_emergency(sig);
      }
   }

   /// Sets a "shutdown_begun" flag, which is checked each likelihood loop, 
   /// after which MPI synchronisation followed by clean shutdown is attempted.
   void sighandler_soft(int sig)
   {
     // std::cerr << " Saw signal " << sig << std::endl; // debugging
     // std::ostringstream msg;
     // #ifdef WITH_MPI
     // msg << "rank "<<signaldata().myrank()<<": ";
     // #endif
     // msg << "Calling sighandler_soft (detected signal "<<sig<<")" << std::endl;
     // In case signal redirection to null is too slow to kick in (i.e. race condition) then try to "manually" ignore the signal
     if(signaldata().shutdown_begun() and signaldata().ignore_signals_during_shutdown) return; 
     if(signaldata().shutdown_begun())
     {
       #ifdef WITH_MPI
       std::cerr << "rank "<<signaldata().myrank()<<": ";
       #endif
       std::cerr << "Warning, caught signal "<<signal_name(sig)<<" ("<<sig<<")"<<" to trigger soft shutdown, but soft shutdown is already in progress! Initiating emergency shutdown." << std::endl;
       sighandler_emergency(sig); // calls exit(sig)
     }
     // We will avoid touching streams in this "clean" shutdown mode since technically it is undefined behaviour, so no messages here.
     //Scanner::Plugins::plugin_info.dump();
     signaldata().set_shutdown_begun();
     signaldata().add_signal(sig);
   }
   
   void sighandler_hard(int sig)
   {
     // std::cerr << " Saw signal " << sig << std::endl; // debugging
     signaldata().set_shutdown_begun();
     //Scanner::Plugins::plugin_info.dump();
     #ifdef WITH_MPI
     std::cerr << "rank "<<signaldata().myrank()<<": ";
     #endif
     std::cerr << "Gambit has performed a hard shutdown! Data loss is likely to have occurred." << std::endl;
     signaldata().add_signal(sig);
     std::cerr << signaldata().display_received_signals();
     exit(sig); // No choice but to call exit here. MPI deadlocks can occur if we return.
   }
 
   void sighandler_hard_quiet(int sig)
   {
     signaldata().add_signal(sig);
     std::cerr << signaldata().display_received_signals();
     exit(sig);
   }
  
   void sighandler_null(int sig) {signaldata().add_signal(sig);}
   
   /// @}

   /// Choose signal handler for a given signal via yaml file option
   void set_signal_handler(const YAML::Node& keyvalnode, const int sig, const std::string& def_mode)
   {
       std::string shutdown_mode;
       if(keyvalnode["signal_handling"]) {
          YAML::Node signal_options = keyvalnode["signal_handling"];
          if(signal_options[signal_name(sig)]) {
             shutdown_mode = signal_options[signal_name(sig)].as<std::string>();
          }else{
             shutdown_mode = def_mode;
          }
       }else{
          shutdown_mode = def_mode;
       }
       logger()<< "Setting action on "<<signal_name(sig)<<" to '"<<shutdown_mode<<"'"<<EOM;
       if      (shutdown_mode=="hard_shutdown"){      signal(sig, sighandler_hard);      }
       else if (shutdown_mode=="emergency_shutdown"){ signal(sig, sighandler_emergency); }
       else if (shutdown_mode=="emergency_shutdown_longjmp"){ signal(sig, sighandler_emergency_longjmp); }
       else if (shutdown_mode=="soft_shutdown"){      signal(sig, sighandler_soft);      }
       else if (shutdown_mode=="null"){               signal(sig, sighandler_null);      }
       else {
           std::ostringstream msg;
           msg << "Invalid shutdown mode requested for signal "<<signal_name(sig)<<" ("<<sig<<")"<<" (via YAML file option '"<<signal_name(sig)<<"' in KeyValue section under 'signal_handling'). Value received was '"<<shutdown_mode<<"'. Valid shutdown modes are:" <<std::endl;
           msg << "   'hard_shutdown'              -- Exit immediately." <<std::endl; 
           msg << "   'emergency_shutdown'         -- Attempt to save printer/resume data and then immediately exit." <<std::endl; 
           msg << "   'emergency_shutdown_longjmp' -- Longjmp to outside of likelihood loop, then attempt to save printer/resume data and exit"<<std::endl;
           msg << "   'soft_shutdown'              -- Safest: attempt to synchronise processes at safe location, then save printer/resume data and exit." <<std::endl; 
           msg << "   'null'                       -- Ignore signal. Use at own risk!" <<std::endl; 
           msg << "The default shutdown mode on signal "<<signal_name(sig)<<" is '"<<def_mode<<"'." <<std::endl;
           std::cerr << msg.str();
           std::cerr << std::endl;
           exit(EXIT_FAILURE);
       }
   }

}


