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
///  *********************************************


// Standard libraries
#include <set>
#include <fstream>
#include <cstdarg>
#include <stdexcept>
#include <algorithm>
#include <limits>

// Gambit
#include "logging.hpp"
#include "util_functions.hpp"

// Code!
namespace Gambit
{
  namespace Logging
  {
    // Make some const sets to keep track of sub-types of these tags
    // (make sure to update the integers which track the number of elements in these
    //  if you add to them!)

    // Main message categories
    // (Won't compile in g++ if the LogTags are const, something about how standard containers work...)

    static LogTag msg_a[] = {info, warn, err};
    static const std::set<LogTag> msgtypes(msg_a, msg_a+sizeof(msg_a)/sizeof(msg_a[0])); 
 
    // Extra flags for messages
    LogTag flags_a[] = {fatal, nonfatal};
    static const std::set<LogTag> flags(flags_a, flags_a+sizeof(flags_a)/sizeof(flags_a[0]));

    // Tags for gambit components
    // We add the core components here, but the module and backend numbers are added later, so these cannot be const.
    LogTag core_a[] = {def, core, depres, models, scanner};
    static std::set<int> components(core_a, core_a+sizeof(core_a)/sizeof(core_a[0]));
    
    // Function to retrieve the 'components' set outside of this compilation unit
    // (needed by module and backend macros so they can add to it)
    std::set<int>& get_components() {
      return components;
    }

    // String names for enums
    static std::map<int,std::string> create_tag_names()
    {
       std::map<int,std::string> m;
       m[info]    = "Info";
       m[warn]    = "Warning";
       m[err]     = "Error";
       /* Flags */
       m[fatal]   = "Fatal";
       m[nonfatal]= "Non-fatal";
       /* Component tags */
       m[def]     = "Default";
       m[core]    = "Core";
       m[models]  = "Models";
       m[depres]  = "Dependency Resolver";
       m[scanner] = "Scanner";
       
       // Test numbers:
       std::cout<<"Checking LogTag numbers..."<<std::endl;
       for(std::map<int,std::string>::iterator tag = m.begin(); tag != m.end(); ++tag) 
       {
         std::cout<<"  "<<tag->first<<" : "<<tag->second<<std::endl; 
       }    

       return m;
    }
    // Can't be const because we will add to it from the module/backend macros
    static std::map<int,std::string> tag2str = create_tag_names();
    
    // Function to retrieve the 'tag2str' map outside of this compilation unit
    // (needed by module and backend macros so they can add to it)
    std::map<int,std::string>& get_tag2str() {
      return tag2str;
    }

    // Function to return the next unused tag index
    int getfreetag()
    {
      // Could make this search more efficient, since probably there are no free tags below the last tag used, but I think the loop will be so fast that this isn't worth doing, and it only runs during initialisation anyway.
      for(int i=0; i<std::numeric_limits<int>::max(); ++i)
      {
        if( tag2str.count(i) == 0 ) { return i; }
      }
      // Uh oh, seems like we ran out of integers. If this happens you are screwed, and we have to rewrite the code to use long ints instead, or you have to unhook some modules.
      std::ostringstream ss;
      ss << "Error in logger.cpp! It seems that you have so many logging tags that you have exceeded the maximum allowed integer. There is no way you can fix this except to have fewer modules hooked up to gambit all at once. Otherwise we have to rewrite the logger to work with long ints or some such" << std::endl;
      throw std::overflow_error( ss.str() ); 
    }

    // Function to do the reverse search (brute force)
    int str2tag(const std::string& tagname)
    {
       for(std::map<int,std::string>::iterator tag = tag2str.begin(); tag != tag2str.end(); ++tag) 
       {
         if (tag->second == tagname) { return tag->first; }         
       }    
       // If we didn't find the tag, raise an exception (probably means there was an error in the yaml file)
       // TODO: Not sure if we can raise a gambit exception here... can't be logged, anyway.
       std::ostringstream ss;
       ss << "Error in Logging::str2tag function! Tags name received could not be found in str2tag map! Probably this is because you specified an invalid LogTag name in the logging redirection part of the inifile!" << std::endl;
       throw std::logic_error( ss.str() ); 
    } 

    /// Function to inspect tags and their associated strings. For testing purposes only
    void checktags()
    {
       std::cout<<"Checking message type LogTags..."<<std::endl;
       for(std::set<LogTag>::iterator tag = msgtypes.begin(); tag != msgtypes.end(); ++tag) 
       {
         std::cout<<"  "<<*tag<<" : "<<tag2str[*tag]<<std::endl; 
       }    
       std::cout<<"Checking message flag LogTags..."<<std::endl;
       for(std::set<LogTag>::iterator tag = flags.begin(); tag != flags.end(); ++tag) 
       {
         std::cout<<"  "<<*tag<<" : "<<tag2str[*tag]<<std::endl; 
       }    
       std::cout<<"Checking Gambit component LogTags..."<<std::endl;
       for(std::set<int>::iterator tag = components.begin(); tag != components.end(); ++tag) 
       {
         std::cout<<"  "<<*tag<<" : "<<tag2str[*tag]<<std::endl; 
       }    
       std::cout<<"LogTag check finished."<<std::endl;
    }


    //%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
    //% Logger class member function definitions            %
    //%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

    /// Logging "controller" object
    /// Keeps track of the individual logging objects.

    LogMaster::LogMaster()
    {
    }
 
    LogMaster::LogMaster(const IniParser::IniFile& inifile)
    {
    }

    /// Alternate constructor
    // Mainly for testing; lets you pass in pre-built loggers and their tags
    LogMaster::LogMaster(std::map<std::set<int>,BaseLogger*>& loggersIN) : loggers(loggersIN)
    {
           // Flag the logger map as ready to use 
       loggers_readyQ = true;
    }

    // Destructor
    LogMaster::~LogMaster()
    {
       // Later on this should clean up the logger objects
      
       // If LogMaster was never initialised, and there are messages in the buffer, then create a default log file to which the messages can be dumped.
       if (prelim_buffer.size()!=0)
       { 
         if (not loggers_readyQ)
         {
           StdLogger* deflogger = new StdLogger("default.log");
           std::set<int> deftag;
           deftag.insert(def);
           loggers[deftag] = deflogger; 
           loggers_readyQ = true;
         }
         // Dump buffered messages
         dump_prelim_buffer();
       }
       // Delete logger objects
       for(std::map<std::set<int>,BaseLogger*>::iterator keyvalue = loggers.begin(); keyvalue != loggers.end(); ++keyvalue) 
       {
         // Ensure their filestreams have been flushed before we delete them.
         // (not sure if this is really needed, I think the message is in the operating systems domain by this point)
         (keyvalue->second)->flush();
         delete (keyvalue->second);
       }
    }

    /// Function to construct loggers according to blueprint
    // This is the function that yaml_parser.hpp uses. You provide tags as a set of strings, and the filename as a string. We then construct the logger objects in here.
    void LogMaster::initialise(std::map<std::set<std::string>, std::string>& loggerinfo)
    {
       // Iterate through map and build the logger objects
       for(std::map<std::set<std::string>, std::string>::iterator infopair = loggerinfo.begin(); 
            infopair != loggerinfo.end(); ++infopair) 
       {
          std::set<std::string> yamltags = infopair->first;
          std::string filename = infopair->second; 
          std::set<int> tags;
          // Iterate through string tags and convert them to the corresponding index
          for(std::set<std::string>::iterator stag = yamltags.begin(); 
                stag != yamltags.end(); ++stag) 
          {
            // Finding the tag index from the tag string is kind of a drag, have to do a brute search
            tags.insert( str2tag(*stag) );
          }
          // Build the logger object
          StdLogger* newlogger = new StdLogger(filename);
          loggers[tags] = newlogger; 
       }
       // Set logger objects ready for use and dump any buffered messages
       loggers_readyQ = true;
       dump_prelim_buffer();
    }

    // Dump the prelim buffer to the 'send' function
    void LogMaster::dump_prelim_buffer()
    {
       for(std::vector< std::pair<std::string,std::set<int>> >::iterator msgpair = prelim_buffer.begin(); 
            msgpair != prelim_buffer.end(); ++msgpair) 
       {
         send(msgpair->first,msgpair->second);
       }
       // Clear the buffer
       prelim_buffer.clear();
    }

    /// Function to parse inifile and prepare the logger objects;
    // Run this if not loading the inifile via the constructor.
    // void LogMaster::read_inifile(const IniParser::IniFile& inifile)
    // {
    //    // Parse inifile and create logger objects

    //    // Inform LogMaster that logger objects are ready to receive messages
    //    loggers_readyQ = true;

    //    // Dump the contents of the prelim_buffer to the loggers
    //    dump_prelim_buffer();
    // }

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
    void LogMaster::send(const std::string& message, std::set<int>& tags)
    {
       // LogMaster keeps an internal map of all the logging objects, where the keys are sets of 'LogTag's, constructed according to the inifile. So to figure out where the message has to go, we just compare the "tags" to these keys; if any of these keys are a subset of our tags, then we send the message to that LogHub.
       // Well almost. We have to seperate out the components first, because we can "send" a message to multiple components at once, but a direction command will never include two component tags (it is an error if it does).

       // Testing...
       std::cout<<"msg: "<<message<<std::endl;   

       // Preliminary stuff 
       
       // If the loggers have not yet been initialised, buffer the message
       if ( not loggers_readyQ ) 
       {
         std::cout<<"Loggers not ready, buffering message..."<<std::endl; 
         prelim_buffer.push_back( std::make_pair(message,tags) );
         return;
       }
       std::cout<<"Loggers ready, forwarding message..."<<std::endl;
    
       // Check the 'ignore' set; if any of the specified tags are in this set, then do nothing more, i.e. ignore the message.
       // (need to add extra stuff to ignore modules and backends, since these cannot be normal tags)
       if( not is_disjoint(tags, ignore) ) 
       { 
         std::cout<<"Ignoring message..."<<std::endl;
         return; 
       }

       // Containers to store categorised tags
       std::set<LogTag> type_tags;      //message types
       std::set<int> component_tags;    //gambit components, modules, and backends
       std::set<LogTag> flag_tags;      //extra message flags      

       std::set<int> key; // Combination of tags to use as lookup key

       // First task is to scan through the tags and figure out where the message is supposed to go 
       std::cout<<"Sorting tags..."<<std::endl;
       for(std::set<int>::iterator tag = tags.begin(); tag != tags.end(); ++tag) 
       {
         std::cout<<"Sorting tag "<<tag2str[*tag]<<std::endl;
         if ( msgtypes.find(static_cast<LogTag>(*tag)) != msgtypes.end() )
         {
           // If tag is a message type, add it to the type_tags set
           std::cout<<"Identified tag '"<<tag2str[*tag]<<"' as message type"<<std::endl;
           type_tags.insert(static_cast<LogTag>(*tag));
         }
         else if ( components.find(*tag) != components.end() )
         {
           // If tag names a gambit core component, add it to the component_tags set
           std::cout<<"Identified tag '"<<tag2str[*tag]<<"' as Gambit component"<<std::endl;
           component_tags.insert(*tag);
         }
         else if ( flags.find(static_cast<LogTag>(*tag)) != flags.end() )
         {
           // If tag is an auxiliary message flag, add it to the flag_tags set
           std::cout<<"Identified tag '"<<tag2str[*tag]<<"' as message flag"<<std::endl;
           flag_tags.insert(static_cast<LogTag>(*tag));
         } 
         else
         {
           // If tag was not in of those categories, it shouldn't have been a valid LogTag, and so there should have been a compiler error before now. Since there wasn't, there is something wrong with the LogTag definitions, the tag categories, or this function.
           // TODO: Gambit error! Really bad one that can't be logged.
           // I think we are converging on the idea that this type of error should just throw an ordinary exception.
           std::ostringstream ss;
           ss << "Error in LogMaster::_send function! One of the tags received could not be found in any of the const LogTag sets. This is supposed to be impossible. Please check that all tags in the LogTags enum (in logger.hpp) are also listed in one (and only one) of the (const) category sets (also in logger.hpp). If this seems fine the problem may be in the code which generates the integer codes for the modules and backends (not yet written...). Tag was number: "<< *tag<<"; name: "<< tag2str[*tag];
           throw std::logic_error( ss.str() ); 
         }
       } //end tag sorting

       // Automatically add the tags for the "current" module and backend to the tags list
       if (current_module != -1) 
       { 
         component_tags.insert(current_module);
         tags.insert(current_module);
       }
       if (current_backend != -1) 
       { 
         component_tags.insert(current_backend);
         tags.insert(current_backend);
       }
       // Automatically add the "def" (Default) tag so that the message definitely tries to go somewhere
       component_tags.insert(def); // Maybe delete this line, probably not needed
       tags.insert(def);

       // Main loop for message distribution       
 
       // Loop through the map of loggers and see if any of them match subsets of 'key'.             
       for(std::map<std::set<int>,BaseLogger*>::iterator keyvalue = loggers.begin(); keyvalue != loggers.end(); ++keyvalue) 
       {
         // if set1 includes set2
         if( std::includes(tags.begin(), tags.end(),
                           (keyvalue->first).begin(), (keyvalue->first).end()) )
         {
           // Matching logger object found! Send it the message + tags
           (keyvalue->second)->write(message, component_tags, type_tags, flag_tags);
         }
       } //end loop over loggers

    } // end LogHub::send 

    /// %%%% Logger classes %%%
   
    // Apparantly this cannot be virtual, so provide an implementation for it
    BaseLogger::~BaseLogger() {}

    /// "Standard" logger class
  
    /// Constructor
    /// Attach logger object to a stream
    StdLogger::StdLogger(std::ofstream& logfile) : my_fstream(logfile)
    {}
 
    StdLogger::StdLogger(const std::string& filename) 
     : my_own_fstream(filename, std::ofstream::out), my_fstream(my_own_fstream)
    {}

    StdLogger::~StdLogger() {}
 
    /// Write message to log file
    void StdLogger::write(const std::string& message, std::set<int>& components, std::set<LogTag>& msgtypes, std::set<LogTag>& flags)
    {
      writetags(components);
      writetags(msgtypes);
      writetags(flags);
      my_fstream<<" : "<<message<<std::endl; 
    }

    void StdLogger::writetags(std::set<LogTag>& tags)
    {
      // If we can figure out how to cast set<LogTag> to set<int> then we can do this better
      std::set<int> int_tags;
      for(std::set<LogTag>::iterator tag = tags.begin(); tag != tags.end(); ++tag) 
      {
        int_tags.insert(*tag); //static_cast<int>(*tag));
      }
      writetags(int_tags);
    }
 
    void StdLogger::writetags(std::set<int>& tags)
    {
      std::set<int>::iterator it;
      
      if( not tags.empty() )
      {
        my_fstream<<"[";
        bool firstloop = true;  
        for (it = tags.begin(); it != tags.end(); ++it)
        {
          if (not firstloop) { my_fstream<<","; }
          my_fstream << tag2str[*it]; // replace with a lookup of the correct string
          firstloop = false;
        }
        my_fstream<<"]";
      }
    }

    /// Flush stream buffer
    // Possibly unnecessary...
    void StdLogger::flush()
    { 
      my_fstream.flush(); 
    }

    /// Destructor
    /// Ensure cached messages are dumped
    // (do we need a cache? linux filesystem probably does this for us...)
    // ~StdLogger::StdLogger()


  } //end namespace Logging
} // end namespace Gambit
