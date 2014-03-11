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
#include <exception>

#include "util_types.hpp"

namespace Gambit
{

  /// GAMBIT exception base class.
  class exception : virtual public std::exception
  {

    public:

      /// Constructor
      exception(str, str, str, bool);

      /// Destructor
      ~exception() throw() {};

      /// Setter for the fatal flag of this instance.
      void set_fatal(bool);

      /// Setter for the fatal flag of the instance corresponding to a given iniFile key.
      void set_fatal(str, bool fatal);

      /// Raise the exception.
      /// Log the exception and, if it is considered fatal, actually throw it. 
      /// This is the canonical way to trigger a GAMBIT error or warning. 
      void raise(str, str);

      /// Force a throw of the exception.
      /// These should only be used inside a try block, i.e. if you plan to catch the exception.
      /// @{
      /// Log the exception and throw it regardless of whether is is fatal or not.
      void forced_throw(str, str);
      /// As per forced_throw but without logging.
      void silent_forced_throw();
      /// @}

    private:

      /// The kind of exception (error, warning, etc).
      str myKind;

      /// The message to be logged when this exception is raised.
      str myMessage;

      /// Flag indicating if this exception should be considered fatal or not.
      bool isFatal;

      /// Map of pointers to all instances of this class.
      static std::map<str,exception*> exception_map;
    
  };


  /// GAMBIT error class.
  class error : public exception
  {
    public:
      /// Constructor
      error(str, str);
  };

  /// GAMBIT warning class.
  class warning : public exception
  {
    public:
      /// Constructor
      warning(str, str);
  };

}


#endif
