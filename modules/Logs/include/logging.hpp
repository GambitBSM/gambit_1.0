//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Header for logging classes
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Ben Farmer
///          (benjamin.farmer@monash.edu.au)
///  \date 2014 Mar
///
///  \author Pat Scott
///          (patscott@physics.mcgill.ca)
///  \date 2014 Mar
///
///  *********************************************

#ifndef __logging_hpp__
#define __logging_hpp__

// Standard libraries
#include <set>
#include <fstream>
#include <stdexcept>

// Gambit
#include "log_tags.hpp"

// Boost (Ben: Any problem using boost for the timing? Don't know if we need any fallbacks...)
#include "boost/date_time/posix_time/posix_time.hpp" //include all types plus i/o
namespace pt = boost::posix_time;

// Code!
namespace Gambit
{

  namespace Logging
  {
    // Global reference start time. Can only be used in this compile unit.
    static const pt::ptime start_time(pt::microsec_clock::universal_time());

    /// Special struct for signalling end of message to LogMaster stream
    struct endofmessage { endofmessage(){} ~endofmessage(){} };

    // Probably want to make a macro to do this, since we will want string versions of all of these so that we can match them to the entries in the inifile. Also we want to be able to figure out how many there are, so that we can associate the modules and backends with integers that don't overlap with the enum (so maybe put them in a vector or something)
  
    // Function to do the reverse search of tag map (brute force)
    int str2tag(const std::string&);

    // Function to retrieve the 'msgtypes' set
    const std::set<LogTag>& msgtypes();

    // Function to retrieve the 'flags' set
    const std::set<LogTag>& flags();

    // Function to retrieve the 'components' set (needed by module and backend macros so they can add to it)
    std::set<int>& components();
 
    // Function to retrieve the 'tag2str' map outside of this compilation unit
    // (needed by module and backend macros so they can add to it)
    std::map<int,std::string>& tag2str();

    // Function to return the next unused tag index
    // (needed by module and backend macros so they can determine what tag they are allowed to use)
    int getfreetag();

    /// Function to inspect tags and their associated strings. For testing purposes only.
    void checktags();

    /// structure for storing log messages and metadata
    struct Message
    {
        std::string message;
        std::set<int> tags;
        pt::ptime received_at;
        /// Constructor
        Message(const std::string& msgIN, 
                const std::set<int>& tagsIN)
          : message(msgIN), 
            tags(tagsIN), 
            received_at(pt::microsec_clock::universal_time())
        {}
    };

    /// structure for storing log messages and metadata after tags are sorted
    struct SortedMessage
    {
        const std::string& message; //lives on in original Message object, so can be a reference safely I think
        const pt::ptime& received_at; //ditto
        // couldn't figure out how to nicely initialise these in the constructor list, so not const
        // now happens in body of constructor
        std::set<LogTag> type_tags;      //message types
        std::set<int> component_tags;    //gambit components, modules, and backends
        std::set<LogTag> flag_tags;      //extra message flags      
        // Constructor (does the sorting of the tags)
        SortedMessage(const Message& mail);
    };


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
        virtual void write(const SortedMessage&) = 0;

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
        virtual void write(const SortedMessage&);
        
        /// Flush stream buffer
        virtual void flush();
 
        /// Look up names corresponding to tags and write them out to the stream
        void writetags(const std::set<LogTag>&);   
        void writetags(const std::set<int>&);   
 
      private:
        std::ofstream my_own_fstream; //Don't use this except in constructor
        std::ofstream& my_fstream;
    };
 
    /// Logging "controller" object
    /// Keeps track of the various "Logger" objects
    class LogMaster
    {  
        // Typedefs for standard stream manpulators. We need stream operator overloads for all of them. I don't really know what they all are or what they do to the streams, and I am just assuming that they work for stringstreams too. If weird things happen then this may need further investigation...
        typedef std::ostream& (*manip1)( std::ostream& );

        typedef std::basic_ios< std::ostream::char_type, std::ostream::traits_type > ios_type;
        typedef ios_type& (*manip2)( ios_type& );

        typedef std::ios_base& (*manip3)( std::ios_base& );

     public:
        /// Default constructor
        LogMaster();

        /// Alternate constructor
        /// Mainly for testing; lets you pass in pre-built loggers and their tags
        LogMaster(std::map<std::set<int>,BaseLogger*>&);

        /// Destructor
        /// If errors happen before the inifile is loaded, we need to dump the log messages 
        /// (that have been buffered) into a default log file. These will be log messages coming from initialisation code and so on.
        ~LogMaster();

        /// Function to construct loggers according to blueprint
        // This is the function that yaml_parser.hpp uses. You provide tags as a set of strings, and the filename as a string. We then construct the logger objects in here.
        void initialise(std::map<std::set<std::string>, std::string>&);
 
        /// Main logging function (user-friendly overloaded version)
        // Need a bunch of overloads of this to deal with 
        void send(const std::string&);
        void send(const std::string&,LogTag);
        void send(const std::string&,LogTag,LogTag);
        void send(const std::string&,LogTag,LogTag,LogTag);
        void send(const std::string&,LogTag,LogTag,LogTag,LogTag);
        void send(const std::string&,LogTag,LogTag,LogTag,LogTag,LogTag);
        //...add more as needed

        // stringstream versions of the above
        void send(const std::ostringstream&);
        void send(const std::ostringstream&,LogTag);
        void send(const std::ostringstream&,LogTag,LogTag);
        void send(const std::ostringstream&,LogTag,LogTag,LogTag);
        void send(const std::ostringstream&,LogTag,LogTag,LogTag,LogTag);
        void send(const std::ostringstream&,LogTag,LogTag,LogTag,LogTag,LogTag);
        //...add more as needed

        /// Internal version of main logging function
        void send(const std::string&, std::set<LogTag>&);
        void send(const std::string&, std::set<int>&);
        void finalsend(const Message&);

        // stringstream versions...
        void send(const std::ostringstream&, std::set<LogTag>&);
        void send(const std::ostringstream&, std::set<int>&);

        /// Stream operator overloads for logging via stream
        template <typename TYPE>
        LogMaster& operator << (const TYPE& input)
        {
           // TODO: Can we do anything to raise a gambit exception if someone tries to stream something into the log for which no stream operator has been defined? I guess not because it will be a compiler error...
           stream << input;
           return *this;
        }
        LogMaster& operator << (const LogTag&);
        LogMaster& operator << (const endofmessage&);
        // Overloads for stream manipulators (typedefs above)
        LogMaster& operator << (const manip1);
        LogMaster& operator << (const manip2);
        LogMaster& operator << (const manip3);

        /// Set the internal variables tracking which module and/or backend is currently running
        void entering_module(int);
        void leaving_module();
        void entering_backend(int);
        void leaving_backend();

      private:
        /// Dump the prelim buffer to the 'send' function
        void dump_prelim_buffer();
     
        /// Map to identify loggers
        std::map<std::set<int>,BaseLogger*> loggers;

        /// Global ignore set; if these tags/integers are seen, ignore messages containing them.
        std::set<int> ignore;
  
        /// Messages sent before logger objects are created will be buffered in this vector.
        std::vector<Message> prelim_buffer;

        /// Flag to set whether loggers have been initialised not
        bool loggers_readyQ;

        // int current_function; Can generalise to this if we discover that we really want to...
        int current_module;  // index -1 means "not in any module"
        int current_backend; // index -1 means "not in any backend"

        /// Buffer variables needed for stream logging
        std::ostringstream stream;
        std::set<int> streamtags;
        
    };

  } //end namespace Logging

  /// Explicit const instance of the end of message struct in Gambit namespace
  const Logging::endofmessage EOM = Logging::endofmessage();

} // end namespace Gambit

#endif
