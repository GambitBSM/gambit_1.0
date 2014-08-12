//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Exception class declarations.
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

#ifndef __exceptions_hpp__
#define __exceptions_hpp__

#include <map>
#include <set>
#include <string>
#include <exception>

#include "log_tags.hpp"
#include "util_macros.hpp"

namespace Gambit
{

  // Forward declaration of functor class.
  class functor;

  /// GAMBIT exception base class.
  class exception : virtual public std::exception
  {
    public:

      /// Constructors
      /// @{
      /// Constructor without log tags
      exception(const char*, const char*, const char*, const char*, bool);
      /// Constructor with 1 log tag
      exception(const char*, const char*, const char*, const char*, bool, LogTag);
      /// Constructor with 2 log tags
      exception(const char*, const char*, const char*, const char*, bool, LogTag, LogTag);
      /// Constructor with 3 log tags
      exception(const char*, const char*, const char*, const char*, bool, LogTag, LogTag, LogTag);
      /// Constructor with 4 log tags
      exception(const char*, const char*, const char*, const char*, bool, LogTag, LogTag, LogTag, LogTag);
      /// Constructor with 5 log tags
      exception(const char*, const char*, const char*, const char*, bool, LogTag, LogTag, LogTag, LogTag, LogTag);
      /// Constructor with 6 log tags
      exception(const char*, const char*, const char*, const char*, bool, LogTag, LogTag, LogTag, LogTag, LogTag, LogTag);
      /// Constructor with 7 log tags
      exception(const char*, const char*, const char*, const char*, bool, LogTag, LogTag, LogTag, LogTag, LogTag, LogTag, LogTag);
      /// Constructor with log tags as a set
      exception(const char*, const char*, const char*, const char*, bool, std::set<LogTag>);
      /// @}

      /// Destructor
      virtual ~exception() throw() {}

      /// Setter for the fatal flag.
      void set_fatal(bool);

      /// Retrieve the identity of the exception.
      virtual const char* what() const throw();

      /// Raise the exception.
      /// Log the exception and, if it is considered fatal, actually throw it. 
      /// This is the canonical way to trigger a GAMBIT error or warning. 
      void raise(const std::string&, const std::string&);

      /// Force a throw of the exception.
      /// These should only be used inside a try block, i.e. if you plan to catch the exception.
      /// @{
      /// Log the exception and throw it regardless of whether is is fatal or not.
      void forced_throw(const std::string&, const std::string&);
      /// As per forced_throw but without logging.
      void silent_forced_throw();
      /// @}

      /// Map of pointers to all instances of this class.
      static std::map<const char*,exception*> exception_map;
    
    protected:

      /// The set of tags to be passed to the logger
      std::set<LogTag> myLogTags;

    private:

      /// Log the details of the exception
      void log_exception(const std::string&, const std::string&);

      /// The kind of exception (error, warning, etc; for logging).
      const char* myKind;

      /// What sort of exception this is (for returning with what method).
      const char* myWhat;

      /// The message to be logged when this exception is raised.
      const char* myMessage;

      /// Flag indicating if this exception should be considered fatal or not.
      bool isFatal;

  };


  /// GAMBIT error class.
  class error : public exception
  {

    public:

      /// Constructors
      /// @{
      /// Constructor without log tags
      error(const char*, const char*);
      /// Constructor with 1 log tag
      error(const char*, const char*, LogTag);
      /// Constructor with 2 log tags
      error(const char*, const char*, LogTag, LogTag);
      /// Constructor with 3 log tags
      error(const char*, const char*, LogTag, LogTag, LogTag);
      /// Constructor with 4 log tags
      error(const char*, const char*, LogTag, LogTag, LogTag, LogTag);
      /// Constructor with 5 log tags
      error(const char*, const char*, LogTag, LogTag, LogTag, LogTag, LogTag);
      /// Constructor with 6 log tags
      error(const char*, const char*, LogTag, LogTag, LogTag, LogTag, LogTag, LogTag);
      /// Constructor with log tags as a set
      error(const char*, const char*, std::set<LogTag>);
      /// @}

  };


  /// GAMBIT warning class.
  class warning : public exception
  {

    public:

      /// Constructors
      /// @{
      /// Constructor without log tags
      warning(const char*, const char*);
      /// Constructor with 1 log tag
      warning(const char*, const char*, LogTag);
      /// Constructor with 2 log tags
      warning(const char*, const char*, LogTag, LogTag);
      /// Constructor with 3 log tags
      warning(const char*, const char*, LogTag, LogTag, LogTag);
      /// Constructor with 4 log tags
      warning(const char*, const char*, LogTag, LogTag, LogTag, LogTag);
      /// Constructor with 5 log tags
      warning(const char*, const char*, LogTag, LogTag, LogTag, LogTag, LogTag);
      /// Constructor with 6 log tags
      warning(const char*, const char*, LogTag, LogTag, LogTag, LogTag, LogTag, LogTag);
      /// Constructor with log tags as a set
      warning(const char*, const char*, std::set<LogTag>);
      /// @}

  };


  /// GAMBIT special exception class.  Not logged, meant for always catching.
  class special_exception : virtual public std::exception
  {
    public:

      /// Constructor
      special_exception(const char*);

      /// Destructor
      virtual ~special_exception() throw() {}

      /// Retrieve the identity of the exception.
      virtual const char* what() const throw();

      /// Retrieve the message that this exception was raised with.
      std::string message();

      /// Raise the exception, i.e. throw it.
      virtual void raise(const std::string&);
    
    private:

      /// What this exception is (for returning with what method).
      const char* myWhat;

    protected:

      /// The message passed when this exception is raised.
      std::string myMessage;

  };

  /// Gambit invalid point exception class.
  class invalid_point_exception : public special_exception
  {

    private:

      /// The functor responsible for throwing this exception.
      functor* myThrower;

    public:

      /// Constructor
      invalid_point_exception();

      /// Set the pointer to the functor that threw the invalid point exception.
      void set_thrower(functor*);

      /// Retrieve pointer to the functor that threw the invalid point exception.
      functor* thrower();

      /// Raise the exception, i.e. throw it.
      virtual void raise(const std::string&);
    
  };


}


#endif
