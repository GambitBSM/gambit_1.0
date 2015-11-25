//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Member functions of logging classes
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
///  \date 2014 Mar, May
///
///  *********************************************


// Standard libraries
#include <set>
#include <fstream>
#include <cstdarg>
#include <stdexcept>
#include <algorithm>
#include <limits>
#include <chrono>
#include <omp.h>

// Gambit
#include "gambit/Logs/logging.hpp"
#include "gambit/Utils/signal_helpers.hpp"
#include "gambit/Utils/util_functions.hpp"
#include "gambit/Utils/standalone_error_handlers.hpp"
#include "gambit/Utils/mpiwrapper.hpp"
#include "gambit/cmake/cmake_variables.hpp"

// Code!
namespace Gambit
{

  namespace Logging
  {

    using namespace LogTags;

    const bool verbose = false;

    // If you add to the following message tags, make sure to update the enum in log_tags.hpp that tracks the number of them!
    // These won't compile in g++ if the LogTags are const, something about how standard containers work...

    // Arg ok, when trying to write log messages from the LogMaster destructor, these containers may have been destructed first. To get around this, the LogMaster will internalise all of these when it is constructed.

    // Function to retrieve the 'msgtypes' set of tags
    const std::set<LogTag>& msgtypes()
    {
      static LogTag msg_a[] = {debug, info, warn, err};
      static const std::set<LogTag> msgtypes_set(msg_a, msg_a+sizeof(msg_a)/sizeof(msg_a[0]));
      return msgtypes_set;
    }

    // Function to retrieve the 'flags' set of tags
    const std::set<LogTag>& flags()
    {
      static LogTag flags_a[] = {fatal, nonfatal};
      static const std::set<LogTag> flags_set(flags_a, flags_a+sizeof(flags_a)/sizeof(flags_a[0]));
      return flags_set;
    }

    // Function to retrieve the 'components' set of tags (needed by module and backend macros so they can add to it)
    std::set<int>& components()
    {
      // We add the core components here, but the module and backend numbers are added later, so the set cannot be const.
      static LogTag core_a[] = {def, core, logs, models, dependency_resolver, scanner, inifile, printers, utils, backends};
      static std::set<int> components_set(core_a, core_a+sizeof(core_a)/sizeof(core_a[0]));
      return components_set;
    }

    // String names for enums
    static std::map<int,std::string> create_tag_names()
    {
       std::map<int,std::string> m;
       m[debug]   = "Debug";
       m[info]    = "Info";
       m[warn]    = "Warning";
       m[err]     = "Error";
       /* Flags */
       m[fatal]   = "Fatal";
       m[nonfatal]= "Non-fatal";
       /* Component tags */
       m[def]     = "Default";
       m[core]    = "Core";
       m[logs] = "Logger";
       m[models]  = "Models";
       m[dependency_resolver]  = "Dependency Resolver";
       m[scanner]    = "Scanner";
       m[inifile] = "IniFile";
       m[printers]= "Printers";
       m[utils]   = "Utilities";
       m[backends]= "Backends";

       // Test numbers:
       if (verbose)
       {
         std::cout<<"Checking LogTag numbers..."<<std::endl;
         for(std::map<int,std::string>::iterator tag = m.begin(); tag != m.end(); ++tag)
         {
           std::cout<<"  "<<tag->first<<" : "<<tag->second<<std::endl;
         }
       }

       return m;
    }

    // Function to retrieve the 'tag2str' map outside of this compilation unit
    // (needed by module and backend macros so they can add to it)
    std::map<int,std::string>& tag2str()
    {
      // Can't be const because we will add to it from the module/backend macros
      static std::map<int,std::string> tag2str_map = create_tag_names();
      return tag2str_map;
    }

    // Function to return the next unused tag index
    int getfreetag()
    {
      for(int i=0; i<std::numeric_limits<int>::max(); ++i)
      {
        if( tag2str().count(i) == 0 ) { return i; }
      }
      // Uh oh, seems like we ran out of integers. If this happens you are screwed, and we have to rewrite the code to use long ints instead, or you have to unhook some modules.
      // Cannot log this because we are outside the LogMaster class code.
      std::ostringstream ss;
      ss << "Error in logger.cpp! It seems that you have so many logging tags that you have exceeded the maximum allowed integer. There is no way you can fix this except to have fewer modules hooked up to gambit all at once. Otherwise we have to rewrite the logger to work with long ints or some such" << std::endl;
      throw std::overflow_error( ss.str() );
    }

    // Function to do the reverse search (brute force)
    int str2tag(const std::string& tagname)
    {
       for(std::map<int,std::string>::iterator tag = tag2str().begin(); tag != tag2str().end(); ++tag)
       {
         if (tag->second == tagname) { return tag->first; }
       }
       // Uh oh, no match found. Return fail code and let caller deal with it
       return -1;
    }

    /// Function to inspect tags and their associated strings. For testing purposes only
    void checktags()
    {
       std::cout<<"Checking message type LogTags..."<<std::endl;
       for(std::set<LogTag>::iterator tag = msgtypes().begin(); tag != msgtypes().end(); ++tag)
       {
         std::cout<<"  "<<*tag<<" : "<<tag2str()[*tag]<<std::endl;
       }
       std::cout<<"Checking message flag LogTags..."<<std::endl;
       for(std::set<LogTag>::iterator tag = flags().begin(); tag != flags().end(); ++tag)
       {
         std::cout<<"  "<<*tag<<" : "<<tag2str()[*tag]<<std::endl;
       }
       std::cout<<"Checking Gambit component LogTags..."<<std::endl;
       for(std::set<int>::iterator tag = components().begin(); tag != components().end(); ++tag)
       {
         std::cout<<"  "<<*tag<<" : "<<tag2str()[*tag]<<std::endl;
       }
       std::cout<<"LogTag check finished."<<std::endl;
    }

    //%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
    //% Logger class member function definitions            %
    //%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

    /// Logging "controller" object
    /// Keeps track of the individual logging objects.

    LogMaster::LogMaster()
      : loggers_readyQ (false)
      , silenced       (false)
      , separate_file_per_process(true)
      , MPIrank        (0)
      , MPIsize        (1)
      , globlMaxThreads(omp_get_max_threads())
      , current_module (NULL)
      , current_backend(NULL)
      , stream         (NULL)
      , streamtags     (NULL)
      , backlog        (NULL)
    {
      // Note! MPIrank and MPIsize will not be correct until initialisation occurs!
    }

    /// Alternate constructor
    // Mainly for testing; lets you pass in pre-built loggers and their tags
    LogMaster::LogMaster(std::map<std::set<int>,BaseLogger*>& loggersIN)
      : loggers        (loggersIN)
      , loggers_readyQ (true)
      , silenced       (false)
      , separate_file_per_process(true)
      , MPIrank        (0)
      , MPIsize        (1)
      , globlMaxThreads(omp_get_max_threads())
      , current_module (NULL)
      , current_backend(NULL)
      , stream         (NULL)
      , streamtags     (NULL)
      , backlog        (NULL)
    {
      // Note! MPIrank and MPIsize will not be correct until initialisation occurs!
    }

    // Initialise dynamic memory required for thread safety
    void LogMaster::init_memory()
    {
      int n = globlMaxThreads;
      // Reserve enough space to hold as many variables as there are slots (threads) allowed
      if(stream==NULL)
      {
        #pragma omp critical(logmaster_common_init_memory_stream)
        {
          if(stream==NULL) stream = new std::ostringstream[n];
        }
      }
      if(streamtags==NULL)
      {
        #pragma omp critical(logmaster_common_init_memory_streamtags)
        {
          if(streamtags==NULL) stream = new std::set<int>[n];
        }
      }
      if(backlog==NULL)
      {
        #pragma omp critical(logmaster_common_init_memory_backlog)
        {
          if(backlog==NULL) backlog = new std::stack<Message>[n];
        }
      }
      if(current_module==NULL)
      {
        #pragma omp critical(logmaster_common_init_memory_current_module)
        {
          if(current_module==NULL) current_module = new int[n];
          std::fill(current_module, current_module+n, -1);
        }
      }
      if(current_backend==NULL)
      {
        #pragma omp critical(logmaster_common_init_memory_current_backend)
        {
          if(current_backend==NULL) current_backend = new int[n];
          std::fill(current_backend, current_backend+n, -1);
        }
      }
    }

    // Destructor
    LogMaster::~LogMaster()
    {
       if(not silenced)
       {
         // If LogMaster was never initialised, and there are messages in the buffer, then create a default log file to which the messages can be dumped.
         if (backlog!=NULL and backlog.size()!=0)
         {
           std::cout<<"Logger backlog buffer is not empty; attempting to deliver unsent messages to the logs..."<<std::endl;
           if (not loggers_readyQ)
           {
             std::cout<<"Logger was never initialised! Creating default log messenger..."<<std::endl;
             StdLogger* deflogger = new StdLogger(GAMBIT_DIR "/scratch/default.log");
             std::set<int> deftag;
             deftag.insert(def);
             loggers[deftag] = deflogger;
             loggers_readyQ = true;
           }
           std::cout<<"Delivering messages..."<<std::endl;
           // Dump buffered messages
           empty_backlog();
           std::cout<<"Messages delivered to '" << GAMBIT_DIR << "/scratch/default.log'"<<std::endl;
         }

         // Check if there is anything in the output stream that has not been sent, and send it if there is
         if (stream != NULL and streamtags!= NULL)
         {
           if (not stream.str().empty() or not streamtags.empty())
           {
             *this <<"#### NO EOM RECEIVED: MESSAGE MAY BE INCOMPLETE ####"<<warn<<EOM;
           }
         }
       }

       // Delete logger objects
       for(std::map<std::set<int>,BaseLogger*>::iterator keyvalue = loggers.begin(); keyvalue != loggers.end(); ++keyvalue)
       {
         // Ensure their filestreams have been flushed before we delete them.
         // (not sure if this is really needed, I think the message is in the operating systems domain by this point)
         // Edit:  I think I have decided that this is unnecessary
         //(keyvalue->second)->flush();
         delete (keyvalue->second);
       }

       // Delete the thread variables
       if (stream != NULL)     delete [] stream;
       if (streamtags != NULL) delete [] streamtags;
       if (backlog != NULL)    delete [] backlog;
    }

    /// Function to construct loggers according to blueprint
    // This is the function that yaml_parser.hpp uses. You provide tags as a set of strings, and the filename as a string. We then construct the logger objects in here.
    void LogMaster::initialise(std::vector<std::pair< std::set<std::string>, std::string >>& loggerinfo)
    {
       // Fix up the MPI variables
       #ifdef WITH_MPI
       if(GMPI::Is_initialized())
       {
         GMPI::Comm COMM_WORLD;
         MPIsize = COMM_WORLD.Get_size();
         MPIrank = COMM_WORLD.Get_rank();
       }
       #endif

       // Iterate through map and build the logger objects
       for(std::vector<std::pair< std::set<std::string>, std::string >>::iterator infopair = loggerinfo.begin();
            infopair != loggerinfo.end(); ++infopair)
       {
          std::set<std::string> yamltags = infopair->first;
          std::string filename = infopair->second;
          std::set<int> tags;

          if(separate_file_per_process and MPIsize>1)
          {
            std::ostringstream unique_filename;
            unique_filename << filename << "_" << MPIrank;
            filename = unique_filename.str();
          }
 
          // Log the loggers being created :)
          // (will be put into a preliminary buffer until loggers are all constructed)
          *this << LogTag::logs << LogTag::debug << std::endl << "Creating logger for tags [";

          // Iterate through string tags and convert them to the corresponding index
          for(std::set<std::string>::iterator stag = yamltags.begin();
                stag != yamltags.end(); ++stag)
          {
            // Finding the tag index from the tag string is kind of a drag, have to do a brute search
            int newtag = str2tag(*stag);
            // Check that valid tag was found (returns -1 if no tag found)
            if(newtag==-1)
            {
              // If we didn't find the tag, raise an exception (probably means there was an error in the yaml file)
              std::ostringstream errormsg;
              errormsg << "Tag name received in Logging::str2tag function could not be found in str2tag map!";
              errormsg << "This is probably because you specified an invalid LogTag name in the logging redirection ";
              errormsg << "section of your YAML input file. Tag string was: "<<*stag<<".";
              logging_error().raise(LOCAL_INFO,errormsg.str());
            }
            *this << *stag <<", ";
            tags.insert(newtag);
          }
          // Build the logger object
          StdLogger* newlogger;
          if(filename=="stdout")
          {
            newlogger = new StdLogger(std::cout);
          }
          else if(filename=="stderr")
          {
            newlogger = new StdLogger(std::cerr);
          }
          else
          {
            newlogger = new StdLogger(filename);
          }
          *this << "]; output is \"" << filename << "\"";
          loggers[tags] = newlogger;
       }
       *this << EOM; // End message about loggers.
       // Set logger objects ready for use and dump any buffered messages
       loggers_readyQ = true;
       empty_backlog();
    }

    // Overload for initialise to allow input of logging instructions via maps
    void LogMaster::initialise(std::map<std::set<std::string>, std::string>& loggerinfo)
    {
       std::vector<std::pair< std::set<std::string>, std::string >> loggerinfo_vec;
       // Iterate through map and convert it to a vector of pairs
       for(std::map<std::set<std::string>, std::string>::iterator infopair = loggerinfo.begin();
            infopair != loggerinfo.end(); ++infopair)
       {
          loggerinfo_vec.push_back(std::make_pair(infopair->first,infopair->second));
       }
       // Run the 'normal' initialise function
       initialise(loggerinfo_vec);
    }

    // Overload for initialise, to make it easier to manually initialise the logger in standalone modules
    void LogMaster::initialise(std::map<std::string, std::string>& loggerinfo)
    {
      std::map<std::set<std::string>, std::string> loggerinfo_set;
      // Translate the string containing the tags into (map of) a set of tags
      for(std::map<std::string, std::string>::iterator infopair = loggerinfo.begin();
            infopair != loggerinfo.end(); ++infopair)
      {
        std::vector<std::string> tags_vec(Utils::delimiterSplit(infopair->first, ","));
        std::set<std::string> tags_set(tags_vec.begin(), tags_vec.end());
        loggerinfo_set[tags_set] = infopair->second;
      }
      // Run the 'normal' initialise function
      initialise(loggerinfo_set);
    }

    // Function to completely silence all log messages
    void LogMaster::disable()
    {
       loggers_readyQ = true;
       silenced = true;
    }

    // Function to check if all log messages are silenced
    bool LogMaster::disabled()
    {
       return silenced;
    }

    // Dump the backlog buffer to the 'finalsend' function
    void LogMaster::empty_backlog()
    {
       if(omp_get_level()!=0)
       {
          logging_error().raise(LOCAL_INFO, "Tried to run empty_backlog() (in LogMaster) from inside an omp parallel block! This should not be possible, please file a bug report.");
       }

       for(int i=0; i<globlMaxThreads; i++)
       {
         for(size_t j=0; j<backlog[i].size(); j++)
         {
            finalsend(backlog[i].top());
            backlog[i].pop();
         }
       }
    }

    /// Main logging function (user-friendly overloaded version)
    // Need a bunch of overloads of this to deal with
    void LogMaster::send(const std::string& message)
    {
      std::set<LogTag> tags;
      send(message,tags);
    }

    void LogMaster::send(const std::string& message, LogTag tag1)
    {
      std::set<LogTag> tags;
      tags.insert(tag1);
      send(message,tags);
    }

    void LogMaster::send(const std::string& message, LogTag tag1, LogTag tag2)
    {
      std::set<LogTag> tags;
      tags.insert(tag1);
      tags.insert(tag2);
      send(message,tags);
    }

    void LogMaster::send(const std::string& message, LogTag tag1, LogTag tag2, LogTag tag3)
    {
      std::set<LogTag> tags;
      tags.insert(tag1);
      tags.insert(tag2);
      tags.insert(tag3);
      send(message,tags);
    }

    void LogMaster::send(const std::string& message, LogTag tag1, LogTag tag2, LogTag tag3, LogTag tag4)
    {
      std::set<LogTag> tags;
      tags.insert(tag1);
      tags.insert(tag2);
      tags.insert(tag3);
      tags.insert(tag4);
      send(message,tags);
    }

    void LogMaster::send(const std::string& message, LogTag tag1, LogTag tag2, LogTag tag3, LogTag tag4, LogTag tag5)
    {
      std::set<LogTag> tags;
      tags.insert(tag1);
      tags.insert(tag2);
      tags.insert(tag3);
      tags.insert(tag4);
      tags.insert(tag5);
      send(message,tags);
    }

    //...add more as needed

    /// stringstream versions....
    void LogMaster::send(const std::ostringstream& message)
    {
      std::set<LogTag> tags;
      send(message.str(),tags);
    }

    void LogMaster::send(const std::ostringstream& message, LogTag tag1)
    {
      std::set<LogTag> tags;
      tags.insert(tag1);
      send(message.str(),tags);
    }

    void LogMaster::send(const std::ostringstream& message, LogTag tag1, LogTag tag2)
    {
      std::set<LogTag> tags;
      tags.insert(tag1);
      tags.insert(tag2);
      send(message.str(),tags);
    }

    void LogMaster::send(const std::ostringstream& message, LogTag tag1, LogTag tag2, LogTag tag3)
    {
      std::set<LogTag> tags;
      tags.insert(tag1);
      tags.insert(tag2);
      tags.insert(tag3);
      send(message.str(),tags);
    }

    void LogMaster::send(const std::ostringstream& message, LogTag tag1, LogTag tag2, LogTag tag3, LogTag tag4)
    {
      std::set<LogTag> tags;
      tags.insert(tag1);
      tags.insert(tag2);
      tags.insert(tag3);
      tags.insert(tag4);
      send(message.str(),tags);
    }

    void LogMaster::send(const std::ostringstream& message, LogTag tag1, LogTag tag2, LogTag tag3, LogTag tag4, LogTag tag5)
    {
      std::set<LogTag> tags;
      tags.insert(tag1);
      tags.insert(tag2);
      tags.insert(tag3);
      tags.insert(tag4);
      tags.insert(tag5);
      send(message.str(),tags);
    }

    //...add more as needed


    // Overload to allow tags to be cast to ints, for delivery to the "full" send function
    void LogMaster::send(const std::string& message, std::set<LogTag>& tags)
    {
      //std::set<int>& int_tags = static_cast< std::set<int> >(tags);
      // I cannot seem to get the static cast to work, so just copying for now:
      //std::set<int> int_tags(tags);
      // Gah that seems not to work for the same reason, do one by one:
      std::set<int> int_tags;
      for(std::set<LogTag>::iterator tag = tags.begin(); tag != tags.end(); ++tag)
      {
        int_tags.insert(*tag); //static_cast<int>(*tag));
      }
      send(message, int_tags);
    }

    /// Serious version of main logging function
    // Ok this is the function that actual does things; the above are all just "syntatic sugar", as the cool kids say.
    // In the end, this function should construct all the Message structs.
    void LogMaster::send(const std::string& message, std::set<int>& tags)
    {
       // LogMaster keeps an internal map of all the logging objects, where the keys are sets of 'LogTag's, constructed according to the inifile. So to figure out where the message has to go, we just compare the "tags" to these keys; if any of these keys are a subset of our tags, then we send the message to that LogHub.
       // Well almost. We have to seperate out the components first, because we can "send" a message to multiple components at once, but a direction command will never include two component tags (it is an error if it does).

       // Testing...
       //std::cout<<"msg: "<<message<<std::endl;

       // Preliminary stuff

       // Get thread number
       int i = omp_get_thread_num();

       // Automatically add the "def" (Default) tag so that the message definitely tries to go somewhere
       tags.insert(def);

       // Automatically add the tags for the "current" module and backend to the tags list
       if (current_module[i] != -1)
       {
         //std::cout<<"current_module="<<current_module<<"; adding tag "<<tag2str()[current_module]<<std::endl;
         tags.insert(current_module[i]);
       }
       if (current_backend[i] != -1)
       {
         //std::cout<<"current_backend="<<current_backend<<"; adding tag "<<tag2str()[current_backend]<<std::endl;
         tags.insert(current_backend[i]);
       }

       // If the loggers have not yet been initialised, buffer the message
       if(omp_get_level()!=0 or not loggers_readyQ)
       {
         backlog[i].emplace(message,tags); //time stamp automatically added NOW
       }
       else
       {
         if(omp_get_level()==0) empty_backlog();
         finalsend(Message(message,tags)); //time stamp automatically added NOW
       }
    } // end LogHub::send

    /// Version of send function used by buffer dump; skips all the tag modification stuff
    void LogMaster::finalsend(const Message& mail)
    {
       // Check the 'ignore' set; if any of the specified tags are in this set, then do nothing more, i.e. ignore the message.
       // (need to add extra stuff to ignore modules and backends, since these cannot be normal tags)
       // Also ignore the message if logs have been 'silenced'.
       if( silenced or not Utils::is_disjoint(mail.tags, ignore) )
       {
         //std::cout<<"Ignoring message..."<<std::endl;
         return;
       }

       // Sort the tags
       const SortedMessage sortedmsg(mail);

       // Main loop for message distribution

       // Loop through the map of loggers and see if any of them match subsets of 'key'.
       for(std::map<std::set<int>,BaseLogger*>::iterator keyvalue = loggers.begin(); keyvalue != loggers.end(); ++keyvalue)
       {
         // if set1 includes set2
         if( std::includes(mail.tags.begin(), mail.tags.end(),
                           (keyvalue->first).begin(), (keyvalue->first).end()) )
         {
           // Matching logger object found! Send it the sorted message object
           (keyvalue->second)->write(sortedmsg);
         }
       } //end loop over loggers
    } // end LogMaster::finalsend

    /// stringstream overloads...
    void LogMaster::send(const std::ostringstream& message, std::set<LogTag>& tags)
    {
      send(message.str(), tags);
    }

    void LogMaster::send(const std::ostringstream& message, std::set<int>& tags)
    {
      send(message.str(), tags);
    }

    /// Overloads of stream operator for logging
    // I believe the overloads will override the template, and would in fact override specialisations of the template as well. We can change the overloads to template specialisations if the priority is aroung the other way...

    /// Handle LogTag input
    LogMaster& LogMaster::operator<< (const LogTag& tag)
    {
       init_memory();
       streamtags[omp_get_thread_num()].insert(tag);
       return *this;
    }

    /// Handle end of message character
    LogMaster& LogMaster::operator<< (const endofmessage&)
    {
       init_memory();
       size_t i = omp_get_thread_num();
       // Collect the stream and tags, then send the message
       send(stream[i].str(), streamtags[i]);
       // Clear stream and tags for next message;
       stream[i].str(std::string()); //TODO: check that this works properly on all compilers...
       streamtags[i].clear();
       return *this;
    }

    /// Handle various stream manipulators
    LogMaster& LogMaster::operator<< (const manip1 fp)
    {
       init_memory();
       stream[omp_get_thread_num()] << fp;
       return *this;
    }

    LogMaster& LogMaster::operator<< (const manip2 fp)
    {
       init_memory();
       stream[omp_get_thread_num()] << fp;
       return *this;
    }

    LogMaster& LogMaster::operator<< (const manip3 fp)
    {
       init_memory();
       stream[omp_get_thread_num()] << fp;
       return *this;
    }

    void LogMaster::entering_module(int i)
    {
       init_memory();
       current_module[omp_get_thread_num()] = i;
    }

    void LogMaster::leaving_module()
    {
       init_memory();
       current_module[omp_get_thread_num()] = -1;
       leaving_backend();
    }

    void LogMaster::entering_backend(int i)
    {
       init_memory();
       current_backend[omp_get_thread_num()] = i;
       *this<<"setting current_backend="<<i;
       *this<<logs<<debug<<EOM;
       // TODO: Activate std::out and std::err redirection, if requested in inifile
    }
    void LogMaster::leaving_backend()
    { 
       init_memory();
       int cb_test;
       cb_test = current_backend[omp_get_thread_num()];
       if (cb_test == -1) return;
       current_backend[omp_get_thread_num()] = -1;
       *this<<"restoring current_backend="<<-1;
       *this<<logs<<debug<<EOM;
       // TODO: Restore std::out and std::err to normal
    }

    /// Constructor for SortedMessage struct
    SortedMessage::SortedMessage(const Message& mail)
      : message(mail.message), received_at(mail.received_at)
    {
       // First task is to scan through the tags and figure out where the message is supposed to go
       //std::cout<<"Sorting tags..."<<std::endl;
       for(std::set<int>::iterator tag = mail.tags.begin(); tag != mail.tags.end(); ++tag)
       {
         // Debugging crap... to be deleted.
         // std::cout<<"Sorting tag "<<tag2str()[*tag]<<std::endl;
         // std::cout<<"empty?"<<components().empty()<<std::endl;
         // for(std::set<int>::iterator tag2 = components().begin(); tag2 != components().end(); ++tag2)
         // {
         //    std::cout<<"componentI: "<<*tag2<<std::endl;
         //    std::cout<<"component:  "<<tag2str()[*tag2]<<std::endl;
         // }
         // for(std::set<LogTag>::iterator tag3 = msgtypes().begin(); tag3 != msgtypes().end(); ++tag3)
         // {
         //    std::cout<<"msgtypeI: "<<*tag3<<std::endl;
         //    std::cout<<"msgtype:  "<<tag2str()[*tag3]<<std::endl;
         // }
         // std::cout<<"core:"<<*(components().find(core))<<std::endl;
         // std::cout<<"t1 "<<*(components().find(*tag))<<std::endl;
         // std::cout<<"t2 "<<*(components().end())<<std::endl;
         // std::cout<<"tag "<<*tag<<std::endl;
         // std::cout<<"tag "<<static_cast<LogTag>(*tag)<<std::endl;
         // std::cout<<"mt1 "<<*(msgtypes().find(static_cast<LogTag>(*tag)))<<std::endl;
         // std::cout<<"mt2 "<<*(msgtypes().end())<<std::endl;
         if ( msgtypes().find(static_cast<LogTag>(*tag)) != msgtypes().end() )
         {
           // If tag is a message type, add it to the type_tags set
           //std::cout<<"Identified tag '"<<tag2str()[*tag]<<"' as message type"<<std::endl;
           type_tags.insert(static_cast<LogTag>(*tag));
         }
         else if ( components().find(*tag) != components().end() )
         {
           // std::cout<<"Adding tag "<<tag2str()[*tag]<<std::endl;
           // If tag names a gambit core component, add it to the component_tags set
           //std::cout<<"Identified tag '"<<tag2str()[*tag]<<"' as Gambit component"<<std::endl;
           component_tags.insert(*tag);
         }
         else if ( flags().find(static_cast<LogTag>(*tag)) != flags().end() )
         {
           // If tag is an auxiliary message flag, add it to the flag_tags set
           //std::cout<<"Identified tag '"<<tag2str()[*tag]<<"' as message flag"<<std::endl;
           flag_tags.insert(static_cast<LogTag>(*tag));
         }
         else
         {
           // If tag was not in of those categories, it shouldn't have been a valid LogTag, and so there should have been a compiler error before now. Since there wasn't, there is something wrong with the LogTag definitions, the tag categories, or this function.
           // TODO: Gambit error! Really bad one that can't be logged.
           // I think we are converging on the idea that this type of error should just throw an ordinary exception.
           std::ostringstream ss;
           ss << "Error in SortedMessage constructor! One of the tags received could not be found in any of the const LogTag sets. This is supposed to be impossible. Please check that all tags in the LogTags enum (in logger.hpp) are also listed in one (and only one) of the (const) category sets (also in logger.hpp). If this seems fine the problem may be in the code which generates the integer codes for the modules and backends (not yet written...). Tag was number: "<< *tag<<"; name: "<< tag2str()[*tag];
           throw std::logic_error( ss.str() );
         }
       } //end tag sorting
    } // end SortedMessage constructor

    /// %%%% Logger classes %%%

    // Apparantly this cannot be virtual, so provide an implementation for it
    BaseLogger::~BaseLogger() {}

    /// "Standard" logger class

    /// Constructor
    /// Attach logger object to an existing stream
    StdLogger::StdLogger(std::ostream& logstream) 
      : my_stream(logstream)
      , MPIrank(0)
      , MPIsize(1)
    {
      #ifdef WITH_MPI
      if(GMPI::Is_initialized())
      {
        GMPI::Comm COMM_WORLD;
        MPIsize = COMM_WORLD.Get_size();
        MPIrank = COMM_WORLD.Get_rank();
      }
      #endif
      // Check error bits on stream and throw exception in anything is bad
      if( my_stream.fail() | my_stream.bad() )
      {
        std::ostringstream ss;
        ss << "IO error while constructing StdLogger! Error bit on in supplied ostream.";
        throw std::runtime_error( ss.str() );
      }
    }

    /// Open new file stream and manage it internally
    StdLogger::StdLogger(const std::string& filename)
      : my_own_fstream(filename, std::ofstream::out)
      , my_stream(my_own_fstream)
      , MPIrank(0)
      , MPIsize(1)
    {
      #ifdef WITH_MPI
      if(GMPI::Is_initialized())
      {
        GMPI::Comm COMM_WORLD;
        MPIsize = COMM_WORLD.Get_size();
        MPIrank = COMM_WORLD.Get_rank();
      }
      #endif
      // Check error bits on stream and throw exception in anything is bad
      if( my_stream.fail() | my_stream.bad() )
      {
         std::ostringstream ss;
         ss << "IO error while constructing StdLogger! Tried to open ofstream to file \""<<filename<<"\", but encountered error bit in the created ostream.";
         throw std::runtime_error( ss.str() );
      }
    }

    StdLogger::~StdLogger() {}

    /// Write message to log file
    void StdLogger::write(const SortedMessage& mail)
    {
      // Message reception time (UTC)
      my_stream<<"("<<Utils::return_time_and_date(mail.received_at)<<")";
      // Seconds elapsed since start_time
      std::chrono::duration<double> diff = mail.received_at - start_time;
      my_stream<<"("<<diff.count()<<" [s])";
      // MPI rank
      // Might as well add this even if different ranks output to different
      // files, since people might like to cat together the different files
      // later on or something.
      if(MPIsize>1) my_stream << "(Rank " << MPIrank << ")";

      // Message tags
      writetags(mail.component_tags);
      writetags(mail.type_tags);
      writetags(mail.flag_tags);
      my_stream<<":"<<std::endl;
      // Message proper
      my_stream<<mail.message<<std::endl;
      my_stream<<"--<>--<>--<>--<>--<>--<>--<>--"<<std::endl;
      // (I picked a weird end of message boundary so that it would be easily distinguished from formatting that may appear in the message body)
    }

    void StdLogger::writetags(const std::set<LogTag>& tags)
    {
      // If we can figure out how to cast set<LogTag> to set<int> then we can do this better
      std::set<int> int_tags;
      for(std::set<LogTag>::iterator tag = tags.begin(); tag != tags.end(); ++tag)
      {
        int_tags.insert(*tag); //static_cast<int>(*tag);
      }
      writetags(int_tags);
    }

    void StdLogger::writetags(const std::set<int>& tags)
    {
      std::set<int>::iterator it;

      if( not tags.empty() )
      {
        my_stream<<"[";
        bool firstloop = true;
        for (it = tags.begin(); it != tags.end(); ++it)
        {
          if (not firstloop) { my_stream<<","; }
          //std::cout<<"test: "<<*it<<std::endl;
          //std::cout<<"test2:"<<tag2str().at(*it)<<std::endl;
          my_stream << tag2str().at(*it); // replace with a lookup of the correct string
          firstloop = false;
        }
        my_stream<<"]";
      }
    }

    /// Flush stream buffer
    // Possibly unnecessary...
    void StdLogger::flush()
    {
      my_stream.flush();
    }

    /// Destructor
    /// Ensure cached messages are dumped
    // (do we need a cache? linux filesystem probably does this for us...)
    // ~StdLogger::StdLogger()


  } //end namespace Logging
} // end namespace Gambit
