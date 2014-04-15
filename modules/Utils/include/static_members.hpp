//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Initialisation of static member variables in 
///  utility classes.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Pat Scott 
///          (patscott@physics.mcgill.ca)
///  \date 2014 Mar
///
///  *********************************************

#ifndef __static_members_hpp__
#define __static_members_hpp__

#include "exceptions.hpp"
#include "safety_bucket.hpp"

namespace Gambit
{

  /// Map of pointers to all instances of the exception class.
  std::map<const char*,exception*> exception::exception_map;

  /// Flag indicating whether backend function buckets should 
  /// operate in safe mode or not.  True by default. !FIXME deprecated!!
  bool BE_bucket_base::safe_mode = true;

}

#endif //#ifndef __static_members_hpp__

