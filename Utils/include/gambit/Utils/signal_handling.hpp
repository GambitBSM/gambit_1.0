//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  GAMBIT signal handling functions
///
///  I have tried to make these standards
///  conformant, however I suspect that they are
///  not, and the emergency signal handlers
///  definitely are not. Nevertheless, they seem
///  to work well, and the emergency shutdown
///  handlers are intended for emergencies only
///  (when a clean shutdown is not possible), so
///  non-conformance is the least of our problems
///  in that situation.
///  The "soft" shutdown handler should be at
///  least very close to conformant I think,
///  though there are some more steps that could
///  be taken to improve this if it turns out to
///  be an issue.
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

#ifndef __signal_handling_hpp__
#define __signal_handling_hpp__

#include <signal.h>
#include <chrono>
#include <setjmp.h>     /* jmp_buf, setjmp, longjmp */
#include "yaml-cpp/yaml.h"
#include "exceptions.hpp"
#include "local_info.hpp"

namespace Gambit
{
   /// Translate signal codes to strings
   std::string signal_name(int sig);

   #ifdef WITH_MPI
   /// Forward declare MPI class
   namespace GMPI { class Comm; } 
   #endif

   /// Variables for use in signal handlers
   class SignalData
   {
     public:  
       int myrank();

       /// Saved information on calling environment for longjmp
       jmp_buf env;
       bool jumppoint_set; // Check if jump point has been set yet.
       int havejumped;     // Store result of setjmp here so we can use it to test if a jump point has been set
                           // Value will be zero on first invocation of setjmp. Will be set to the argument
                           // of longjmp when the jump executes and returns to the setjmp point. 
       /// Set jump point;
       void setjump();

       /// Set cleanup function to run during emergency shutdown
       typedef void (*void_func)(); 
       void_func cleanup;
       bool cleanup_function_set;
       void set_cleanup(void_func f);
       void call_cleanup();    

       /// Register that shutdown has begun
       void set_shutdown_begun(const sig_atomic_t emergnc=0);

       /// Check if (any kind of) shutdown is in progress
       bool shutdown_begun();

       /// Check if emergency shutdown is in progress 
       bool emergency_shutdown_begun();

       /// Add signal to record
       void add_signal(int sig);

       /// Print to string a list of the signals received so far by this process
       std::string display_received_signals();

       /// Check if shutdown is in progress and raise appropriate termination 
       /// exception if so.
       /// (to be called by Gambit once it is safe to trigger termination)
       void check_for_shutdown_signal();

       /// Only check for emergency shutdown signals (i.e. do not attempt synchronisation) 
       void check_for_emergency_shutdown_signal();

       // Disable shutdown signals after the first one
       // Override via inifile value
       volatile sig_atomic_t ignore_signals_during_shutdown; 

       /// Switch to threadsafe signal handling mode
       void entering_multithreaded_region();

       /// Exit threadsafe signal handling mode
       void leaving_multithreaded_region();

       /// Report 'true' if inside a multithreaded region (according to our own flag)
       bool inside_multithreaded_region();

       /// Extra functions needed in MPI mode
       #ifdef WITH_MPI
       /// Set the MPI communicator
       void set_MPI_comm(GMPI::Comm*);

       /// Check that the communicator has been set
       bool comm_ready();
       #endif
   
     private:
       int rank; 

       /// Flag to warn if early shutdown is already in process
       volatile sig_atomic_t shutdownBegun;
       /// Flag to warn if the shutdown that is in progress is an emergency shutdown
       /// (use to decided whether to attempt MPI synchronisation)
       volatile sig_atomic_t emergency;

       /// Number of times synchronisation for soft shutdown has been attempted;
       int shutdown_attempts;

       /// Flag to switch signal handling behavior to multithreaded mode
       /// (i.e. triggers switch to threadsafe emergency shutdown behaviour)
       bool inside_omp_block;

       /// Array to record received signals (up to max_signals)
       static const int MAX_SIGNALS = 10;
       int received_signals[MAX_SIGNALS];
       int N_signals;

       /// Attempt to synchronise all processes, but abort if it takes too long
       bool all_processes_ready();

       /// Perform soft shutdown if processes can be synchronised, else do
       /// hard shutdown.
       void attempt_soft_shutdown();

       /// Extra data needed in MPI mode
       #ifdef WITH_MPI
       GMPI::Comm* signalComm;
       bool _comm_rdy;
 
       /// Shutdown codes receivable via MPI (not MPI tags)
       //static const int ERROR = 0; // Not in use
       static const int SOFT_SHUTDOWN = 1;
       static const int EMERGENCY_SHUTDOWN = 2;
       static std::vector<std::string> set_shutdown_names();
       static const std::vector<std::string> shutdown_name;
 
       /// Broadcast signal to shutdown all processes
       /// By default sends emergency shutdown code.
       void broadcast_shutdown_signal(int shutdown_code=SignalData::EMERGENCY_SHUTDOWN);
       
       /// Broadcast emergency shutdown command to all processes, or abort if set to do so
       /// (calls broadcast_shutdown_signal, just does extra things as well)
       void do_emergency_MPI_shutdown(bool use_mpi_abort=true);

       /// Flag to check if shutdown message has already been broadcast
       bool shutdown_broadcast_done;
       #endif
   };

   /// Retrieve global instance of signal handler options struct
   SignalData& signaldata();
   
   /// @{ Signal handler functions

   /// Helpers
   void sub_sighandler_emergency(int sig);
   void sub_sighandler_emergency_longjmp(int sig);
   void sub_sighandler_emergency_omp(int sig);
        
   /// Primary signal handlers
   void sighandler_emergency(int sig);
   void sighandler_emergency_longjmp(int sig);
   void sighandler_soft(int sig);
   void sighandler_hard(int sig);
   void sighandler_null(int sig);
   
   /// @}

   /// Choose signal handler for a given signal via yaml file option
   void set_signal_handler(const YAML::Node& keyvalnode, const int sig, const std::string& def_mode);

}

#endif
