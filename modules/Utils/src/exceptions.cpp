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

namespace Gambit
{

  /// Exception errors
  extern error exceptions_internal_error;
  /// Exception warnings
  extern warning exceptions_internal_warning;


  // Public members of GAMBIT exception base class.

  /// Constructor
  exception::exception(str kind, str message, str inikey, bool fatal) :
   myKind                (kind),
   myMessage             (message),
   isFatal               (fatal)
  {
    exception_map[inikey] = this;
    cout << myKind << endl;
  }

  /// Setter for the fatal flag of this instance.
  void exception::set_fatal(bool fatal)
  {
    isFatal = fatal;
  }

  /// Setter for the fatal flag of the instance corresponding to a given iniFile key.
  void exception::set_fatal(str inikey, bool fatal)
  {
    if (exception_map.find(inikey) != exception_map.end() )
    {
      exception_map[inikey]->set_fatal(fatal);
    }
    else
    {
      str error_msg = "No known GAMBIT exception type matches iniFile key "; 
      error_msg += inikey + ".\n Please check your inifile and exception declarations.";
      exceptions_internal_error.raise(LOCAL_INFO,error_msg);
    }
  }

  /// Raise the exception.
  /// Log the exception and, if it is considered fatal, actually throw it. 
  /// This is the regular way to trigger a GAMBIT error or warning. 
  void exception::raise(str origin, str specific_message)
  {
    //log(myMessage "\n" "Raised at " origin "\n" specific_message)
    cout << myKind << ": " << myMessage << "\n" << "Raised at " << origin << ".\n" << specific_message;
    if (isFatal) throw(this);
  }

  /// Log the exception and throw it regardless of whether is is fatal or not.
  void exception::forced_throw(str origin, str specific_message)
  {
    //log(myMessage "\n" "Raised at " origin "\n" specific_message)
    cout << myKind << ": " << myMessage << "\n" << "Raised at " << origin << ".\n" << specific_message;
    throw(this);
  }

  /// As per forced_throw but without logging.
  void exception::silent_forced_throw()
  {
    throw(this);
  }


  /// GAMBIT error class constructor
  error::error(str message, str inikey) : exception("ERROR", message, inikey, true) {cout << "in error"<<endl;}

  /// GAMBIT warning class constructor
  warning::warning(str message, str inikey) : exception("WARNING", message, inikey, false) {cout << "in warning"<<endl;}

}


