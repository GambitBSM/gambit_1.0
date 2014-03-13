//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Headeer for logging classes
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Ben Farmer
///          (benjamin.farmer@monash.edu.au)
///  \date 2014 Mar
///
///  *********************************************

#ifndef __logger_hpp__
#define __logger_hpp__

// Standard libraries
#include <set>
#include <fstream>
#include <stdexcept>

// Gambit
#include "yaml_parser.hpp"

/// Macros
// For automating construction of the tags
#define ADD_TAG(ENUM,CATEGORY,STRING) \
  



// Code!
namespace Gambit
{
  // CAREFUL! These logging enum tags might clash with other names in the Gambit namespace! Be careful when adding new ones.
  enum LogTag {  /* Message tags */
                   info=0,
                   warn,
                   err,
                   /* Flags */
                   fatal,
                   nonfatal,
                   /* Component tags */
                   def,
                   core,
                   depres,
                   models,
                   scanner
                   /* etc... */
                }; 

  namespace Logging
  {

    // Probably want to make a macro to do this, since we will want string versions of all of these so that we can match them to the entries in the inifile. Also we want to be able to figure out how many there are, so that we can associate the modules and backends with integers that don't overlap with the enum (so maybe put them in a vector or something)
  
    // Function to do the reverse search of tag map (brute force)
    int str2tag(std::string&);

    // Function to retrieve the 'components' set outside of this compilation unit
    // (needed by module and backend macros so they can add to it)
    std::set<int>& get_components();
 
    // Function to retrieve the 'tag2str' map outside of this compilation unit
    // (needed by module and backend macros so they can add to it)
    std::map<int,std::string>& get_tag2str();

    // Function to return the next unused tag index
    // (needed by module and backend macros so they can determine what tag they are allowed to use)
    int getfreetag();

    /// Function to inspect tags and their associated strings. For testing purposes only.
    void checktags();
 
    //%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
    //% Logger class declarations                           %
    //%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
  
    /// Logger virtual base class
    class BaseLogger
    {
      public:
        /// Virtual destructor so we can delete the loggers by pointer to base
        virtual ~BaseLogger();

        /// Write message
        virtual void write(const std::string&, std::set<int>&, std::set<LogTag>&, std::set<LogTag>&) = 0;

        /// Flush stream buffer;
        virtual void flush() = 0;
    };

    /// Logger for 'standard' messages
    class StdLogger : public BaseLogger
    {
      public:
        /// Constructor
        // Attach logger object to a stream
        StdLogger(std::ofstream&);
    
        /// Alternate constructor
        // Opens a file and takes care of the stream itself
        StdLogger(const std::string&);
  
        /// Destructor
        virtual ~StdLogger();

        /// Write message
        virtual void write(const std::string&, std::set<int>&, std::set<LogTag>&, std::set<LogTag>&);
        
        /// Flush stream buffer
        virtual void flush();
 
        /// Look up names corresponding to tags and write them out to the stream
        void writetags(std::set<LogTag>&);   
        void writetags(std::set<int>&);   
 
      private:
        std::ofstream my_own_fstream; //Don't use this except in constructor
        std::ofstream& my_fstream;
    };
 
    /// Logging "controller" object
    /// Keeps track of the various "Logger" objects
    class LogMaster
    {
      public:
        /// Default constructor
        LogMaster();

        /// Constructor
        // Sets up logging objects as instructed by inifile
        LogMaster(const IniParser::IniFile&);

        /// Alternate constructor
        // Mainly for testing; lets you pass in pre-built loggers and their tags
        LogMaster(std::map<std::set<int>,BaseLogger*>&);

        /// Destructor
        // If errors happen before the inifile is loaded, we need to dump the log messages (that have been buffered) into a default log file. These will be log messages coming from initialisation code and so on.
        ~LogMaster();

        /// Function to construct loggers according to blueprint
        // This is the function that yaml_parser.hpp uses. You provide tags as a set of strings, and the filename as a string. We then construct the logger objects in here.
        void initialise(std::map<std::set<std::string>, std::string>&);
 
        /// Function to parse inifile and prepare the logger objects;
        // Run this if not loading the inifile via the constructor.
        //void read_inifile(const IniParser::IniFile&);

        /// Main logging function (user-friendly overloaded version)
        // Need a bunch of overloads of this to deal with 
        void send(const std::string&);
        void send(const std::string&,LogTag);
        void send(const std::string&,LogTag,LogTag);
        void send(const std::string&,LogTag,LogTag,LogTag);
        void send(const std::string&,LogTag,LogTag,LogTag,LogTag);
        void send(const std::string&,LogTag,LogTag,LogTag,LogTag,LogTag);
        //...add more as needed

        /// Internal version of main logging function
        void send(const std::string&, std::set<LogTag>&);
        void send(const std::string&, std::set<int>&);


      private:
        // Dump the prelim buffer to the 'send' function
        void dump_prelim_buffer();
     
        // Map to identify loggers
        std::map<std::set<int>,BaseLogger*> loggers;

        // Global ignore set; if these tags/integers are seen, ignore messages containing them.
        std::set<int> ignore;
  
        // Messages sent before logger objects are created will be buffered in this vector.
        std::vector< std::pair<std::string,std::set<int>> > prelim_buffer;

        // Flag to set whether loggers have been initialised not
        bool loggers_readyQ = false;

        //int current_function; // Can generalise to this if we discover that we really want to...
        int current_module = -1;  // index -1 means "not in any module"
        int current_backend = -1; // index -1 means "not in any backend"
    };

  } //end namespace Logging
} // end namespace Gambit

#endif
