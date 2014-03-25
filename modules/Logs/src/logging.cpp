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
#include "standalone_error_handlers.hpp"

// Boost (Ben: Any problem using boost for the timing? Don't know if we need any fallbacks...)
#include "boost/date_time/posix_time/posix_time.hpp" //include all types plus i/o

// Code!
namespace Gambit
{

  namespace Logging
  {
    using namespace LogTags;  
  
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
      static LogTag core_a[] = {def, core, logging, models, depres, scan, inifile, printers, utils};
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
       m[logging] = "Logger";
       m[models]  = "Models";
       m[depres]  = "Dependency Resolver";
       m[scan]    = "Scanner";
       m[inifile] = "IniFile";
       m[printers]= "Printers";
       m[utils]   = "Utilities";
       
       // Test numbers:
       std::cout<<"Checking LogTag numbers..."<<std::endl;
       for(std::map<int,std::string>::iterator tag = m.begin(); tag != m.end(); ++tag) 
       {
         std::cout<<"  "<<tag->first<<" : "<<tag->second<<std::endl; 
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
      // Could make this search more efficient, since probably there are no free tags below the last tag used, but I think the loop will be so fast that this isn't worth doing, and it only runs during initialisation anyway.
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
      : loggers_readyQ(false), current_module(-1), current_backend(-1) 
    {
    }
 
    /// Alternate constructor
    // Mainly for testing; lets you pass in pre-built loggers and their tags
    LogMaster::LogMaster(std::map<std::set<int>,BaseLogger*>& loggersIN) 
      : loggers(loggersIN), loggers_readyQ(true), current_module(-1), current_backend(-1) 
    {
    }

    // Destructor
    LogMaster::~LogMaster()
    {
       // Later on this should clean up the logger objects
       std::cout<<"LogMaster is being destructed, checking if messaged left to deliver..."<<std::endl;
       // If LogMaster was never initialised, and there are messages in the buffer, then create a default log file to which the messages can be dumped.
       if (prelim_buffer.size()!=0)
       { 
         std::cout<<"argh yep buffer has things in it, try to dump them to the logs..."<<std::endl;
         if (not loggers_readyQ)
         {
           std::cout<<"Oh no, loggers were never initialised! creating default logger..."<<std::endl;
           StdLogger* deflogger = new StdLogger("default.log");
           std::set<int> deftag;
           deftag.insert(def);
           loggers[deftag] = deflogger; 
           loggers_readyQ = true;
         }
         std::cout<<"dumping messages..."<<std::endl;
         // Dump buffered messages
         dump_prelim_buffer();
         std::cout<<"Messages delivered to 'modules/default.log'"<<std::endl;
       }

       // Check if there is anything in the output stream that has not been sent, and send it if there is
       if (not stream.str().empty() or not streamtags.empty())
       {
         *this <<"#### NO EOM RECEIVED: MESSAGE MAY BE INCOMPLETE ####"<<warn<<EOM;
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
            int newtag = str2tag(*stag);
            // Check that valid tag was found (returns -1 if no tag found)
            if(newtag==-1)
            {
              // If we didn't find the tag, raise an exception (probably means there was an error in the yaml file)
              std::ostringstream errormsg;
              errormsg << "Error in Logging::str2tag function! Tag name received could not be found in str2tag map! Probably this is because you specified an invalid LogTag name in the logging redirection part of the inifile! Tag string was ["<<*stag<<"]";
              logging_error().raise(LOCAL_INFO,errormsg.str());
            }
            tags.insert(newtag);
          }
          // Build the logger object
          StdLogger* newlogger = new StdLogger(filename);
          loggers[tags] = newlogger; 
       }
       // Set logger objects ready for use and dump any buffered messages
       loggers_readyQ = true;
       dump_prelim_buffer();
    }

    // Dump the prelim buffer to the 'finalsend' function
    void LogMaster::dump_prelim_buffer()
    {
       for(std::vector<Message>::iterator msg = prelim_buffer.begin(); 
            msg != prelim_buffer.end(); ++msg) 
       {
         finalsend(*msg);
       }
       // Clear the buffer
       prelim_buffer.clear();
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
   
       // Automatically add the "def" (Default) tag so that the message definitely tries to go somewhere
       tags.insert(def);
 
       // Automatically add the tags for the "current" module and backend to the tags list
       if (current_module != -1)  
       { 
         //std::cout<<"current_module="<<current_module<<"; adding tag "<<tag2str()[current_module]<<std::endl;
         tags.insert(current_module); 
       }
       if (current_backend != -1) 
       {
         //std::cout<<"current_backend="<<current_backend<<"; adding tag "<<tag2str()[current_backend]<<std::endl;
         tags.insert(current_backend); 
       } 
  
       // If the loggers have not yet been initialised, buffer the message
       if ( not loggers_readyQ ) 
       {
         //std::cout<<"Loggers not ready, buffering message..."<<std::endl; 
         prelim_buffer.emplace_back(message,tags); //time stamp automatically added NOW
         return;
       }
       //std::cout<<"Loggers ready, forwarding message..."<<std::endl;
    
       finalsend(Message(message,tags)); //time stamp automatically added NOW

    } // end LogHub::send 

    /// Version of send function used by buffer dump; skips all the tag modification stuff
    void LogMaster::finalsend(const Message& mail)
    {
       // Check the 'ignore' set; if any of the specified tags are in this set, then do nothing more, i.e. ignore the message.
       // (need to add extra stuff to ignore modules and backends, since these cannot be normal tags)
       if( not is_disjoint(mail.tags, ignore) ) 
       { 
         //std::cout<<"Ignoring message..."<<std::endl;
         return; 
       }

       // If 'fatal' tag is received, print the message to stdout as well
       if ( mail.tags.find(fatal) != mail.tags.end() )
       {
         std::cout<<" \e[00;31;1mFATAL ERROR\e[00m"<<std::endl<<mail.message<<std::endl;
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
       streamtags.insert(tag);
       return *this;
    }
   
    /// Handle end of message character
    LogMaster& LogMaster::operator<< (const endofmessage&)
    {
       // Collect the stream and tags, then send the message
       send(stream.str(), streamtags);
       // Clear stream and tags for next message;
       stream.str(std::string()); //TODO: check that this works properly on all compilers...
       streamtags.clear();
       return *this;
    }

    /// Handle various stream manipulators
    LogMaster& LogMaster::operator<< (const manip1 fp)
    {
       stream << fp;
       return *this;
    }

    LogMaster& LogMaster::operator<< (const manip2 fp)
    {
       stream << fp;
       return *this;
    }

    LogMaster& LogMaster::operator<< (const manip3 fp)
    {
       stream << fp;
       return *this;
    }

    void LogMaster::entering_module(int i) { current_module = i; }
    void LogMaster::leaving_module() { current_module = -1; }
    void LogMaster::entering_backend(int i) 
    {
       current_backend = i; 
       *this<<"setting current_backend="<<current_backend;
       *this<<logging<<debug<<EOM;
       // TODO: Activate std::out and std::err redirection, if requested in inifile
    }
    void LogMaster::leaving_backend()
    { 
       current_backend = -1;
       *this<<"restoring current_backend="<<current_backend;
       *this<<logging<<debug<<EOM;
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
    /// Attach logger object to a stream
    StdLogger::StdLogger(std::ofstream& logfile) : my_fstream(logfile)
    {}
 
    StdLogger::StdLogger(const std::string& filename) 
     : my_own_fstream(filename, std::ofstream::out), my_fstream(my_own_fstream)
    {}

    StdLogger::~StdLogger() {}
 
    /// Write message to log file
    void StdLogger::write(const SortedMessage& mail)
    {
      // Message reception time (UTC)
      my_fstream<<"("<<pt::to_iso_extended_string(mail.received_at)<<")";
      // milliseconds elapsed since start_time
      pt::time_duration diff = mail.received_at - start_time;
      my_fstream<<"("<<diff.total_milliseconds()<<"ms)";
      // Message tags
      writetags(mail.component_tags);
      writetags(mail.type_tags);
      writetags(mail.flag_tags);
      // Message proper
      my_fstream<<" : "<<mail.message<<std::endl; 

    }

    void StdLogger::writetags(const std::set<LogTag>& tags)
    {
      // If we can figure out how to cast set<LogTag> to set<int> then we can do this better
      std::set<int> int_tags;
      for(std::set<LogTag>::iterator tag = tags.begin(); tag != tags.end(); ++tag) 
      {
        int_tags.insert(*tag); //static_cast<int>(*tag));
      }
      writetags(int_tags);
    }
 
    void StdLogger::writetags(const std::set<int>& tags)
    {
      std::set<int>::iterator it;
      
      if( not tags.empty() )
      {
        my_fstream<<"[";
        bool firstloop = true;  
        for (it = tags.begin(); it != tags.end(); ++it)
        {
          if (not firstloop) { my_fstream<<","; }
          my_fstream << tag2str()[*it]; // replace with a lookup of the correct string
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
