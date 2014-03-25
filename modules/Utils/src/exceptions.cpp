//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Exception class definitions.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Pat Scott 
///          (patscott@physics.mcgill.ca)
///  \date 2014 Mar
///
///  Distantly inspired by SUFIT classes of the 
///  same name by Johan Lundberg, Aug 2011.
///
///  *********************************************

#include "util_macros.hpp"
#include "exceptions.hpp"
#include "log.hpp"

namespace Gambit
{

  // Public members of GAMBIT exception base class.

    /// Constructor without log tags
    exception::exception(const char* kind, const char* what, const char* message, const char* inikey, bool fatal) :
     myKind                (kind),
     myWhat                (what),
     myMessage             (message),
     isFatal               (fatal)
    {
      exception_map[inikey] = this;
    }

    /// Constructor with 1 log tag
    exception::exception(const char* kind, const char* what, const char* message, const char* inikey, bool fatal,
     LogTag t1) :
     myKind                (kind),
     myWhat                (what),
     myMessage             (message),
     isFatal               (fatal)
    {
      myLogTags.insert(t1);
      exception_map[inikey] = this; 
    }

    /// Constructor with 2 log tags
    exception::exception(const char* kind, const char* what, const char* message, const char* inikey, bool fatal,
     LogTag t1, LogTag t2) :
     myKind                (kind),
     myWhat                (what),
     myMessage             (message),
     isFatal               (fatal)
    {
      myLogTags.insert(t1);
      myLogTags.insert(t2);
      exception_map[inikey] = this; 
    }

    /// Constructor with 3 log tags
    exception::exception(const char* kind, const char* what, const char* message, const char* inikey, bool fatal,
     LogTag t1, LogTag t2, LogTag t3) :
     myKind                (kind),
     myWhat                (what),
     myMessage             (message),
     isFatal               (fatal)
    {
      myLogTags.insert(t1);
      myLogTags.insert(t2);
      myLogTags.insert(t3);
      exception_map[inikey] = this;
    }

    /// Constructor with 4 log tags
    exception::exception(const char* kind, const char* what, const char* message, const char* inikey, bool fatal,
     LogTag t1, LogTag t2, LogTag t3, LogTag t4) :
     myKind                (kind),
     myWhat                (what),
     myMessage             (message),
     isFatal               (fatal)
    {
      myLogTags.insert(t1);
      myLogTags.insert(t2);
      myLogTags.insert(t3);
      myLogTags.insert(t4);
      exception_map[inikey] = this;
    }

    /// Constructor with 5 log tags
    exception::exception(const char* kind, const char* what, const char* message, const char* inikey, bool fatal,
     LogTag t1, LogTag t2, LogTag t3, LogTag t4, LogTag t5) :
     myKind                (kind),
     myWhat                (what),
     myMessage             (message),
     isFatal               (fatal)
    {
      myLogTags.insert(t1);
      myLogTags.insert(t2);
      myLogTags.insert(t3);
      myLogTags.insert(t4);
      myLogTags.insert(t5);
      exception_map[inikey] = this;
    }

    /// Constructor with 6 log tags
    exception::exception(const char* kind, const char* what, const char* message, const char* inikey, bool fatal,
     LogTag t1, LogTag t2, LogTag t3, LogTag t4, LogTag t5, LogTag t6) :
     myKind                (kind),
     myWhat                (what),
     myMessage             (message),
     isFatal               (fatal)
    {
      myLogTags.insert(t1);
      myLogTags.insert(t2);
      myLogTags.insert(t3);
      myLogTags.insert(t4);
      myLogTags.insert(t5);
      myLogTags.insert(t6);
      exception_map[inikey] = this;
    }

    /// Constructor with 7 log tags
    exception::exception(const char* kind, const char* what, const char* message, const char* inikey, bool fatal,
     LogTag t1, LogTag t2, LogTag t3, LogTag t4, LogTag t5, LogTag t6, LogTag t7) :
     myKind                (kind),
     myWhat                (what),
     myMessage             (message),
     isFatal               (fatal)
    {
      myLogTags.insert(t1);
      myLogTags.insert(t2);
      myLogTags.insert(t3);
      myLogTags.insert(t4);
      myLogTags.insert(t5);
      myLogTags.insert(t6);
      myLogTags.insert(t7);
      exception_map[inikey] = this;
    }

    /// Constructor with log tags as a set
    exception::exception(const char* kind, const char* what, const char* message, const char* inikey, bool fatal, std::set<LogTag> tags) :
     myLogTags             (tags),
     myKind                (kind),
     myWhat                (what),
     myMessage             (message),
     isFatal               (fatal)
    {
      exception_map[inikey] = this;
    }

    /// Setter for the fatal flag.
    void exception::set_fatal(bool fatal) { isFatal = fatal; }

    /// Retrieve the identity of the exception.
    const char* exception::what() const throw() { return myWhat; }

    /// Raise the exception.
    /// Log the exception and, if it is considered fatal, actually throw it. 
    /// This is the regular way to trigger a GAMBIT error or warning. 
    void exception::raise(std::string origin, std::string specific_message)
    {
      log_exception(origin, specific_message);
      if (isFatal) throw(*this);
    }

    /// Log the exception and throw it regardless of whether is is fatal or not.
    void exception::forced_throw(std::string origin, std::string specific_message)
    {
      log_exception(origin, specific_message);
      throw(*this);
    }

    /// As per forced_throw but without logging.
    void exception::silent_forced_throw() { throw(*this); }

  // Private members of GAMBIT exception base class.

    /// Log the details of the exception
    void exception::log_exception(std::string origin, std::string specific_message)
    {
      if (isFatal) logger() << fatal; else logger() << nonfatal;
      for (std::set<LogTag>::iterator it = myLogTags.begin(); it != myLogTags.end(); ++it) { logger() << *it; }	
      logger() << myKind << ": " << myMessage << "\nRaised at " << origin << ".\n" << specific_message << EOM;
     }

  /// GAMBIT error class constructors

    /// Constructor without log tags
    error::error(const char* message, const char* inikey) : 
     exception("ERROR", "GAMBIT error", message, inikey, true, err) {}
    /// Constructor with 1 log tag
    error::error(const char* message, const char* inikey, LogTag t1)
     : exception("ERROR", "GAMBIT error", message, inikey, true, err, t1) {}
    /// Constructor with 2 log tags
    error::error(const char* message, const char* inikey, LogTag t1, LogTag t2)
     : exception("ERROR", "GAMBIT error", message, inikey, true, err, t1, t2) {}
    /// Constructor with 3 log tags
    error::error(const char* message, const char* inikey, LogTag t1, LogTag t2, LogTag t3)
     : exception("ERROR", "GAMBIT error", message, inikey, true, err, t1, t2, t3) {}
    /// Constructor with 4 log tags
    error::error(const char* message, const char* inikey, LogTag t1, LogTag t2, LogTag t3, LogTag t4)
     : exception("ERROR", "GAMBIT error", message, inikey, true, err, t1, t2, t3, t4) {}
    /// Constructor with 5 log tags
    error::error(const char* message, const char* inikey, LogTag t1, LogTag t2, LogTag t3, LogTag t4, LogTag t5)
     : exception("ERROR", "GAMBIT error", message, inikey, true, err, t1, t2, t3, t4, t5) {}
    /// Constructor with 6 log tags
    error::error(const char* message, const char* inikey, LogTag t1, LogTag t2, LogTag t3, LogTag t4, LogTag t5, LogTag t6)
     : exception("ERROR", "GAMBIT error", message, inikey, true, err, t1, t2, t3, t4, t5, t6) {}
    /// Constructor with log tags as a set
    error::error(const char* message, const char* inikey, std::set<LogTag> tags) :
     exception("ERROR", "GAMBIT error", message, inikey, true) 
    {
      myLogTags = tags;
      myLogTags.insert(err);
    }


  /// GAMBIT warning class constructors

    /// Constructor without log tags
    warning::warning(const char* message, const char* inikey) : 
     exception("WARNING", "GAMBIT warning", message, inikey, false, warn) {}
    /// Constructor with 1 log tag
    warning::warning(const char* message, const char* inikey, LogTag t1)
     : exception("WARNING", "GAMBIT warning", message, inikey, false, warn, t1) {}
    /// Constructor with 2 log tags
    warning::warning(const char* message, const char* inikey, LogTag t1, LogTag t2)
     : exception("WARNING", "GAMBIT warning", message, inikey, false, warn, t1, t2) {}
    /// Constructor with 3 log tags
    warning::warning(const char* message, const char* inikey, LogTag t1, LogTag t2, LogTag t3)
     : exception("WARNING", "GAMBIT warning", message, inikey, false, warn, t1, t2, t3) {}
    /// Constructor with 4 log tags
    warning::warning(const char* message, const char* inikey, LogTag t1, LogTag t2, LogTag t3, LogTag t4)
     : exception("WARNING", "GAMBIT warning", message, inikey, false, warn, t1, t2, t3, t4) {}
    /// Constructor with 5 log tags
    warning::warning(const char* message, const char* inikey, LogTag t1, LogTag t2, LogTag t3, LogTag t4, LogTag t5)
     : exception("WARNING", "GAMBIT warning", message, inikey, false, warn, t1, t2, t3, t4, t5) {}
    /// Constructor with 6 log tags
    warning::warning(const char* message, const char* inikey, LogTag t1, LogTag t2, LogTag t3, LogTag t4, LogTag t5, LogTag t6)
     : exception("WARNING", "GAMBIT warning", message, inikey, false, warn, t1, t2, t3, t4, t5, t6) {}
    /// Constructor with log tags as a set
    warning::warning(const char* message, const char* inikey, std::set<LogTag> tags) :
     exception("WARNING", "GAMBIT warning", message, inikey, false)
    {
      myLogTags = tags;
      myLogTags.insert(warn);
    }

}


