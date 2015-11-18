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
#include "gambit/Utils/signal_handling.hpp"
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

   /// Print to cout a list of the signals received so far by this process
   void SignalData::display_received_signals()
   {
     for(int i=0; i<N_signals; i++)
     {
       if(i<MAX_SIGNALS)
       {
         #ifdef WITH_MPI
         std::cout << "rank "<<rank<<": ";
         #endif
         std::cout << "("<<i<<") Caught signal "<<signal_name(received_signals[i])<<" ("<<received_signals[i]<<")"<<std::endl;
       }
     }
   
     if( (N_signals - MAX_SIGNALS) > 0)
     {
       #ifdef WITH_MPI
       std::cout << "rank "<<rank<<": ";
       #endif
       std::cout << "Another " << (N_signals - MAX_SIGNALS) <<" signals were caught but their values were not recorded (buffer exceeded)"<<std::endl;
     }
   }

   /// Register that shutdown has begun
   void SignalData::set_shutdown_begun()
   {
     shutdown_begun = true;
     if(ignore_signals_during_shutdown)
     {
        /// Redirect all future signals (except of course kill etc.) to the null handlers
        signal(SIGTERM, sighandler_null);
        signal(SIGINT,  sighandler_null);
        signal(SIGUSR1, sighandler_null);
        signal(SIGUSR2, sighandler_null);
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
            
   void sighandler_emergency(int sig)
   {
     if(signaldata().shutdown_begun)
     {
       #ifdef WITH_MPI
       std::cout << "rank "<<signaldata().rank<<": ";
       #endif
       std::cout << "Warning, caught signal "<<signal_name(sig)<<" ("<<sig<<")"<<" to trigger emergency shutdown, but shutdown is already in progress! Initiating hard shutdown." << std::endl;
       sighandler_hard(sig); // calls exit(sig)
     } 
     signaldata().add_signal(sig);
     signaldata().set_shutdown_begun();
     signaldata().call_cleanup(); // Try to cleanup, though behaviour may be undefined.
     #ifdef WITH_MPI
     std::cout << "rank "<<signaldata().rank<<": ";
     #endif
     std::cout << "Gambit has performed an emergency shutdown!" << std::endl;
     signaldata().display_received_signals();
     std::cout << std::endl;
     exit(sig); // No choice but to call exit here. MPI deadlocks can occur if we return.
   }

   /// Similar to the above, but does a longjmp to wherever has been set.
   /// For the Gambit likelihood container, this should just jump out of
   /// the likelihood evaluation, and then throw a shutdown exception.
   /// Theoretically this is safer than the straight emergency shutdown,
   /// since we don't do anything complicated from the signal handler
   /// (unless something goes wrong). Whatever we were just doing will still
   /// be left in an inconsistent state, however.
   void sighandler_emergency_longjmp(int sig)
   {
     // We will avoid touching streams in this shutdown mode since technically it is undefined behaviour, so no messages here.
     if(signaldata().shutdown_begun)
     {
       #ifdef WITH_MPI
       std::cout << "rank "<<signaldata().rank<<": ";
       #endif
       std::cout << "Warning, caught signal "<<signal_name(sig)<<" ("<<sig<<")"<<" to trigger emergency shutdown via longjmp, but shutdown is already in progress! Initiating hard shutdown." << std::endl;
       sighandler_hard(sig); // calls exit(sig)
     }
     signaldata().add_signal(sig);
     signaldata().set_shutdown_begun();
     if(signaldata().havejumped) 
     {
       signaldata().display_received_signals();
       #ifdef WITH_MPI
       std::cout << "rank "<<signaldata().rank<<": ";
       #endif
       std::cout << LOCAL_INFO <<": ERROR from sighandler_emergency_longjmp! No jump point has been set, or jump has already occurred once! (Either is a bug; should not be able to reach this point if jump occurred already)" << std::endl;
       std::cout << std::endl;
       exit(EXIT_FAILURE);
     }
     longjmp(signaldata().env, 1); // 'Removes' the jump point upon execution, to prevent it happening twice.
   }
   
   void sighandler_soft(int sig)
   {
     if(signaldata().shutdown_begun)
     {
       #ifdef WITH_MPI
       std::cout << "rank "<<signaldata().rank<<": ";
       #endif
       std::cout << "Warning, caught signal "<<signal_name(sig)<<" ("<<sig<<")"<<" to trigger soft shutdown, but soft shutdown is already in progress! Initiating emergency shutdown." << std::endl;
       sighandler_emergency(sig); // calls exit(sig)
     }
     // We will avoid touching streams in this "clean" shutdown mode since technically it is undefined behaviour, so no messages here.
     signaldata().set_shutdown_begun();
     signaldata().add_signal(sig);
   }
   
   void sighandler_hard(int sig)
   {
     #ifdef WITH_MPI
     std::cout << "rank "<<signaldata().rank<<": ";
     #endif
     std::cout << "Gambit has performed a hard shutdown! Data loss is likely to have occurred." << std::endl;
     signaldata().add_signal(sig);
     signaldata().display_received_signals();
     std::cout << std::endl;
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
           std::cout << msg.str();
           std::cout << std::endl;
           exit(EXIT_FAILURE);
       }
   }
}


