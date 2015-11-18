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

#ifndef __signal_handling_hpp__
#define __signal_handling_hpp__

#include <setjmp.h>     /* jmp_buf, setjmp, longjmp */
#include "yaml-cpp/yaml.h"

namespace Gambit
{
   /// Translate signal codes to strings
   std::string signal_name(int sig);

   /// Variables for use in signal handlers
   struct SignalData
   {
     /// MPI rank
     #ifdef WITH_MPI
     int rank;
     #endif
     
     /// Flag to warn if early shutdown is already in process
     bool shutdown_begun = false;
     bool ignore_signals_during_shutdown = true; // Override via inifile value
     
     /// Saved information on calling environment for longjmp
     jmp_buf env;
     int havejumped = 1; // Store result of setjmp here so we can use it to test if a jump point has been set
                         // Value will be zero on first invocation of setjmp. Will be set to the argument
                         // of longjmp when the jump executes and returns to the setjmp point. 
     /// Set jump point;
     void setjump();

     /// Set cleanup function to run during emergency shutdown
     typedef void (*void_func)(); 
     void_func cleanup;
     bool cleanup_function_set = false;
     void set_cleanup(void_func f);
     void call_cleanup();    

     /// Register that shutdown has begun
     void set_shutdown_begun();

     /// Array to record received signals (up to max_signals)
     static const int MAX_SIGNALS = 10;
     int received_signals[MAX_SIGNALS];
     int N_signals = 0;

     /// Add signal to record
     void add_signal(int sig);

     /// Print to cout a list of the signals received so far by this process
     void display_received_signals();
 
   };

   /// Retrieve global instance of signal handler options struct
   SignalData& signaldata();
   
   /// @{ Signal handler functions
            
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
