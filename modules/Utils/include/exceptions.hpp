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
#include <string>
#include <exception>

#include "util_macros.hpp"

namespace Gambit
{

  /// GAMBIT exception base class.
  class exception : virtual public std::exception
  {

    public:

      /// Constructor
      exception(const char*, const char*, const char*, const char*, bool);

      /// Destructor
      ~exception() throw() {};

      /// Setter for the fatal flag.
      void set_fatal(bool);

      /// Retrieve the identity of the exception.
      virtual const char* what() const noexcept;

      /// Raise the exception.
      /// Log the exception and, if it is considered fatal, actually throw it. 
      /// This is the canonical way to trigger a GAMBIT error or warning. 
      void raise(std::string, std::string);

      /// Force a throw of the exception.
      /// These should only be used inside a try block, i.e. if you plan to catch the exception.
      /// @{
      /// Log the exception and throw it regardless of whether is is fatal or not.
      void forced_throw(std::string, std::string);
      /// As per forced_throw but without logging.
      void silent_forced_throw();
      /// @}

      /// Map of pointers to all instances of this class.
      static std::map<const char*,exception*> exception_map;
    
    private:

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
      /// Constructor
      error(const char*, const char*);
  };

  /// GAMBIT warning class.
  class warning : public exception
  {
    public:
      /// Constructor
      warning(const char*, const char*);
  };

}


#endif
