//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Simple container used for storing info about
///  backends during initialisation time.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Pat Scott  
///          (patscott@physics.mcgill.ca)
///  \date 2014 Dec
///
///  *********************************************

#include "backend_info.hpp"
#include "cmake_variables.hpp"

namespace Gambit
{

  // Public method definitions for backend_info class 

  /// Constructor
  Backends::backend_info::backend_info()
  {
    // Read yaml configuration file
    const str filename(GAMBIT_DIR "/config/backend_locations.yaml");
    YAML::Node bepathfile;
    try
    { 
      bepathfile = YAML::LoadFile(filename);
    } 
    catch (YAML::Exception &e)
    {
      std::ostringstream msg;
      msg << "Error reading backend locations file \""<<filename<<"\"! ";
      msg << "Please check that file exists!" << endl;
      msg << "("<<e.what()<<")";
      utils_error().raise(LOCAL_INFO,msg.str());
    }

  }

  /// Return the path to a backend library, given a backend name and version.
  str Backends::backend_info::path(str be, str ver)
  {
    // FIXME check for existence
    return bepathfile[be][ver].as<str>() << endl;
  }

  /// Given a backend and a safe version (with no periods), return the true version
  str Backends::backend_info::version_from_safe_version (str be, str sv) const 
  { 
    return safe_version_map.at(be).at(sv);
  } 
 
  /// Link a backend's version and safe version
  void Backends::backend_info::link_versions(str be, str v, str sv)
  {
    safe_version_map[be][sv] = v;
  }

}



