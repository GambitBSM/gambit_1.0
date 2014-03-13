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

#include "exceptions.hpp"
#include "util_macros.hpp"

#include <iostream> //FIXME to go when logs are working

namespace Gambit
{

  // Public members of GAMBIT exception base class.

  /// Constructor
  exception::exception(const char* kind, const char* what, const char* message, const char* inikey, bool fatal) :
   myKind                (kind),
   myWhat                (what),
   myMessage             (message),
   isFatal               (fatal)
  { exception_map[inikey] = this; }

  /// Setter for the fatal flag.
  void exception::set_fatal(bool fatal) { isFatal = fatal; }

  /// Retrieve the identity of the exception.
  const char* exception::what() const throw() { return myWhat; }

  /// Raise the exception.
  /// Log the exception and, if it is considered fatal, actually throw it. 
  /// This is the regular way to trigger a GAMBIT error or warning. 
  void exception::raise(std::string origin, std::string specific_message)
  {
    //log(myMessage "\n" "Raised at " origin "\n" specific_message)
    std::cout << myKind << ": " << myMessage << "\n" << "Raised at " << origin << ".\n" << specific_message << std::endl;
    if (isFatal) throw(*this);
  }

  /// Log the exception and throw it regardless of whether is is fatal or not.
  void exception::forced_throw(std::string origin, std::string specific_message)
  {
    //log(myMessage "\n" "Raised at " origin "\n" specific_message)
    std::cout << myKind << ": " << myMessage << "\n" << "Raised at " << origin << ".\n" << specific_message << std::endl;
    throw(*this);
  }

  /// As per forced_throw but without logging.
  void exception::silent_forced_throw() { throw(*this); }


  /// GAMBIT error class constructor
  error::error(const char* message, const char* inikey) : exception("ERROR", "GAMBIT error", message, inikey, true) {}

  /// GAMBIT warning class constructor
  warning::warning(const char* message, const char* inikey) : exception("WARNING", "GAMBIT warning", message, inikey, false) {}

}


