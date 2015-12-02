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

#include <signal.h>
#include <setjmp.h>     /* jmp_buf, setjmp, longjmp */
#include <omp.h>
#include "gambit/Utils/signal_handling.hpp"
#include "gambit/Utils/mpiwrapper.hpp"
#include "gambit/Logs/log.hpp"
#include "yaml-cpp/yaml.h"

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

   /// @{ SignalData member functions
   
   /// Set jump point;
   void SignalData::setjump()
   {
      havejumped = setjmp(env);
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
     for(int i=0; i<N_signals; i++)
     {
       if(i<MAX_SIGNALS)
       {
         #ifdef WITH_MPI
         myout << "rank "<<rank<<": ";
         #endif
         myout << "("<<i<<") Caught signal "<<signal_name(received_signals[i])<<" ("<<received_signals[i]<<")"<<std::endl;
       }
     }
   
     if( (N_signals - MAX_SIGNALS) > 0)
     {
       #ifdef WITH_MPI
       myout << "rank "<<rank<<": ";
       #endif
       myout << "Another " << (N_signals - MAX_SIGNALS) <<" signals were caught but their values were not recorded (buffer exceeded)"<<std::endl;
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

   /// Check if shutdown has already begun
   bool SignalData::shutdown_begun() { return shutdownBegun; }

   /// Attempt to synchronise all processes, but abort if it takes too long
   bool SignalData::all_processes_ready()
   {
     std::cerr << "Waiting for all processes to sync..." << std::endl;
     #ifdef WITH_MPI
     // sleep setup
     bool timedout = false;
     std::chrono::seconds timeout(5); // FIXME: replace with estimated plugin evaluation time
     GMPI::Comm shutdownComm; // FIXME: create new communicator group to avoid tag clashes
     if( shutdownComm.BarrierWithTimeout(timeout, 9999, std::cerr) )
              timedout = true; // Barrier timed out waiting for some process to enter
     // else the barrier succeed in synchronising all processes
     std::cerr << "Synchronised? " << !timedout << std::endl;
     return !timedout; 
     #else
     return true; // Always ready if no MPI
     #endif
   }

   void SignalData::attempt_soft_shutdown()
   {
     const int max_attempts=6; // 6 attempts ==> 3 plugin loops (we attempt shutdown both before and after the plugin evaluation) 
     if (all_processes_ready()) 
     {
       call_cleanup();
       std::ostringstream msg;
       #ifdef WITH_MPI
       msg << "rank "<<rank<<": ";
       #endif
       msg << "Performing soft shutdown!";
       throw SoftShutdownException(msg.str()); 
     } 
     else 
     {
       shutdown_attempts+=1;
     }                    

     if (shutdown_attempts>=max_attempts) 
     {
       call_cleanup();
       std::ostringstream msg;
       #ifdef WITH_MPI
       msg << "rank "<<rank<<": ";
       #endif
       msg << "Soft shutdown failed (could not synchronise all processes after "<<max_attempts<<" attempts), emergency shutdown performed instead! Data handled by external scanner codes (in other processes) may have been left in an inconsistent state." << std::endl;
       throw HardShutdownException(msg.str()); 
     }
   }
 
   /// Check if shutdown is in progress and raise appropriate termination 
   /// exception if so.
   /// (to be called by Gambit once it is safe to trigger termination)
   void SignalData::check_for_shutdown_signal()
   {
     if(shutdownBegun)
     {
       #pragma omp critical (check_for_shutdown_signal)
       {
         std::cerr << "Shutdown signal detected! (in SignalData); emergency="<< emergency << std::endl;
       }
       if(emergency)
       {
          check_for_emergency_shutdown_signal();
       }
       else
       {
          // Attempt to synchronise all processes at a timed barrier,
          // and then shut down.
          attempt_soft_shutdown();
       }
     }
   }

   /// Only check for emergency shutdown signals (i.e. do not attempt synchronisation) 
   void SignalData::check_for_emergency_shutdown_signal()
   {
     if(shutdownBegun and emergency)
     {
       std::ostringstream msg;
       #ifdef WITH_MPI
       msg << "rank "<<rank<<": ";
       #endif
       msg << "Emergency shutdown signal detected! Attempting to performing cleanup (but data loss is possible)" << std::endl;
       call_cleanup();
       throw HardShutdownException(msg.str()); 
     }
   }


   /// @}

   /// Retrieve global instance of signal handler options struct
   SignalData& signaldata()
   {
     static SignalData data;
     return data;
   }
 
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
       std::cerr << "rank "<<signaldata().rank<<": ";
       #endif
       std::cerr << "Warning, caught signal "<<signal_name(sig)<<" ("<<sig<<")"<<" to trigger emergency shutdown, but shutdown is already in progress! Initiating hard shutdown." << std::endl;
       sighandler_hard(sig); // calls exit(sig)
     } 
     signaldata().set_shutdown_begun(1);
     signaldata().add_signal(sig);
     signaldata().call_cleanup(); // Try to cleanup, though behaviour may be undefined.
     #ifdef WITH_MPI
     std::cerr << "rank "<<signaldata().rank<<": ";
     #endif
     std::cerr << "Gambit has performed an emergency shutdown!" << std::endl;
     std::cerr << signaldata().display_received_signals();
     std::cerr << std::endl;
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
       std::cerr << "rank "<<signaldata().rank<<": ";
       #endif
       std::cerr << "Warning, caught signal "<<signal_name(sig)<<" ("<<sig<<")"<<" to trigger emergency shutdown via longjmp, but shutdown is already in progress! Initiating hard shutdown." << std::endl;
       sighandler_hard(sig); // calls exit(sig)
     }
     signaldata().set_shutdown_begun(1);
     signaldata().add_signal(sig);
     if(signaldata().havejumped) 
     {
       std::cerr << signaldata().display_received_signals();
       #ifdef WITH_MPI
       std::cerr << "rank "<<signaldata().rank<<": ";
       #endif
       std::cerr << LOCAL_INFO <<": ERROR from sighandler_emergency_longjmp! No jump point has been set, or jump has already occurred once! (Either is a bug; should not be able to reach this point if jump occurred already)" << std::endl;
       std::cerr << std::endl;
       exit(EXIT_FAILURE);
     }
     if(omp_get_level()!=0)
     {
       std::cerr << signaldata().display_received_signals();
       #ifdef WITH_MPI
       std::cerr << "rank "<<signaldata().rank<<": ";
       #endif
       std::cerr << LOCAL_INFO <<": ERROR from sighandler_emergency_longjmp! This handler has been triggered from within an omp parallel block, which is not allowed. Gambit 'managed loops' should " << std::endl;
       std::cerr << std::endl;
       exit(EXIT_FAILURE);
     }
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
       std::cerr << "rank "<<signaldata().rank<<": ";
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
      if(signaldata().inside_omp_block) {
         sub_sighandler_emergency_omp(sig);
      } else {
         sub_sighandler_emergency_longjmp(sig);
      }
   }

   /// Calls cleanup and exits            
   /// OR (inside omp block)
   /// Sets a flag to be checked upon leaving the omp block, to trigger shutdown
   void sighandler_emergency(int sig)
   {
      if(signaldata().inside_omp_block) {
         sub_sighandler_emergency_omp(sig);
      } else {
         sub_sighandler_emergency(sig);
      }
   }

   /// Sets a "shutdown_begun" flag, which is checked each likelihood loop, 
   /// after which MPI synchronisation followed by clean shutdown is attempted.
   void sighandler_soft(int sig)
   {
     std::ostringstream msg;
     #ifdef WITH_MPI
     msg << "rank "<<signaldata().rank<<": ";
     #endif
     msg << "Calling sighandler_soft (detected signal "<<sig<<")" << std::endl;
     // In case signal redirection to null is too slow to kick in (i.e. race condition) then try to "manually" ignore the signal
     if(signaldata().shutdown_begun() and signaldata().ignore_signals_during_shutdown) return; 
     if(signaldata().shutdown_begun())
     {
       #ifdef WITH_MPI
       std::cerr << "rank "<<signaldata().rank<<": ";
       #endif
       std::cerr << "Warning, caught signal "<<signal_name(sig)<<" ("<<sig<<")"<<" to trigger soft shutdown, but soft shutdown is already in progress! Initiating emergency shutdown." << std::endl;
       sighandler_emergency(sig); // calls exit(sig)
     }
     // We will avoid touching streams in this "clean" shutdown mode since technically it is undefined behaviour, so no messages here.
     signaldata().set_shutdown_begun();
     signaldata().add_signal(sig);
   }
   
   void sighandler_hard(int sig)
   {
     signaldata().set_shutdown_begun();
     #ifdef WITH_MPI
     std::cerr << "rank "<<signaldata().rank<<": ";
     #endif
     std::cerr << "Gambit has performed a hard shutdown! Data loss is likely to have occurred." << std::endl;
     signaldata().add_signal(sig);
     signaldata().display_received_signals();
     std::cerr << std::endl;
     exit(sig); // No choice but to call exit here. MPI deadlocks can occur if we return.
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
       logger()<< "Setting action on "<<signal_name(sig)<<" to '"<<shutdown_mode<<"'"<<std::endl;
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


