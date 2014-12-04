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
  Backends::backend_info()
  {
    // Read yaml configuration file
    const str filename = GAMBIT_DIR "/config/backend_locations.yaml";
    try
    { 
      YAML::Node bepathfile = YAML::LoadFile(filename);
    } 
    catch (YAML::Exception &e)
    {
      std::ostringstream msg;
      msg << "Error reading backend locations file \""<<filename<<"\"! ";
      msg << "Please check that file exists!" << endl;
      msg << "(yaml-cpp error: "<<e.what()<<" )";
      utils_error().raise(LOCAL_INFO,msg.str());
    }

    for(YAML::const_iterator it = bepathfile.begin(); it != bepathfile.end(); ++it)
    {
      // Get the path entry for a given version of a given backend
      backend_path_info pinfo; 
      *it >> pinfo;
      // Check for duplicate entries
      // Populate paths map with this info

      
    }
  }

  /// Given a backend and a safe version (with no periods), return the true version
  str Backends::version_from_safe_version (str be, str sv) const 
  { 
    return safe_version_map.at(be).at(sv);
  } 
 
  /// Link a backend's version and safe version
  void Backends::link_versions(str be, str v, str sv)
  {
    safe_version_map[be][sv] = v;
  }

}



