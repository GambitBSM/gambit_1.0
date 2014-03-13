//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Initialisation of the map of all instances of
///  the exceptions class.
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

#ifndef __exception_map_hpp__
#define __exception_map_hpp__

namespace Gambit
{

  /// Map of pointers to all instances of the exception class.
  std::map<const char*,exception*> exception::exception_map;

}

#endif //#ifndef __exception_map_hpp__

