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

#include "gambit/Backends/backend_info.hpp"
#include "gambit/Logs/log.hpp"
#include "gambit/cmake/cmake_variables.hpp"

namespace Gambit
{

  // Public method definitions for backend_info class

  /// Constructor
  Backends::backend_info::backend_info() :
   filename(GAMBIT_DIR "/config/backend_locations.yaml"),
   default_filename(GAMBIT_DIR "/config/backend_locations.yaml.default")
  {
    // Attempt to read user yaml configuration file
    try
    {
      bepathfile = YAML::LoadFile(filename);
      logger() << LogTags::backends << LogTags::debug << "Successfully loaded custom user backend location file "
               << filename << "." << EOM;
      custom_bepathfile_exists = true;
    }
    catch (YAML::Exception &e)
    {
      logger() << LogTags::backends << LogTags::debug << "Custom user backend location file " << filename
               << " could not be read; employing default only." << EOM;
      custom_bepathfile_exists = false;
    }
    // Attempt to read default yaml configuration file
    try
    {
      default_bepathfile = YAML::LoadFile(default_filename);
      logger() << LogTags::backends << LogTags::debug << "Successfully loaded default backend location file "
               << default_filename << "." << EOM;
    }
    catch (YAML::Exception &e)
    {
      std::ostringstream msg;
      msg << "Could not read default backend locations file \""<<filename<<"\"!" << endl;
      msg << "Please check that file exists and contains valid YAML." << endl;
      msg << "("<<e.what()<<")";
      backend_error().raise(LOCAL_INFO,msg.str());
    }
  }

  /// Indicate whether a custom backend locations file exists
  bool Backends::backend_info::custom_locations_exist() const
  {
    return custom_bepathfile_exists;
  }

  /// Return the path to any custom user backend locations file
  str Backends::backend_info::backend_locations() const
  {
    return filename;
  }

  /// Return the path to the default backend locations file
  str Backends::backend_info::default_backend_locations() const
  {
    return default_filename;
  }

  /// Return the path to a backend library, given a backend name and version.
  str Backends::backend_info::path(str be, str ver) const
  {
    const str default_path("no path in config/backend_locations.yaml.default");
    str p;
    auto be_it = bepathoverrides.find(be);
    bool override_present = (be_it != bepathoverrides.end());
    if (override_present)
    {
      auto ver_it = be_it->second.find(ver);
      if (ver_it != be_it->second.end())
      {
        p = ver_it->second;
        if (p.substr(0,2) == "./") p = p.substr(2,p.npos);
      }
      else
      {
        override_present = false;
      }
    }
    if (not override_present)
    {
      if (custom_bepathfile_exists and bepathfile[be] and bepathfile[be][ver])
      {
        p = bepathfile[be][ver].as<str>();
        if (p.substr(0,2) == "./") p = p.substr(2,p.npos);
      }
      else
      {
        if (default_bepathfile[be] and default_bepathfile[be][ver])
        {
          p = default_bepathfile[be][ver].as<str>();
          if (p.substr(0,2) == "./") p = p.substr(2,p.npos);
        }
        else
        {
          p = default_path;
          static bool warning_raised = false;
          if (not warning_raised)
          {
            std::ostringstream msg;
            msg << "Could not find path for backend "<< be <<" v" << ver << endl;
            msg << "in " << default_filename;
            if (custom_bepathfile_exists) msg << " nor in " << filename;
            msg << "." << endl;
            msg << "Setting path to \"" << default_path << "\".";
            backend_warning().raise(LOCAL_INFO,msg.str());
            warning_raised = true;
          }
        }
      }
    }
    return p;
  }

  /// Return the complete path to a backend library, given a backend name and version.
  str Backends::backend_info::corrected_path(str be, str ver) const
  {
    str p = path(be,ver);
    if (p.substr(0,1) != "/")
    {
      p = GAMBIT_DIR "/"+p;
    }
    return p;
  }

  /// Return the path to the folder in which a backend library resides
  str Backends::backend_info::path_dir(str be, str ver) const
  {
    str p = corrected_path(be,ver);
    for (int i = p.length()-1; i >= 0; --i)
    {
      if (p[i] == '/') return p.substr(0,i);
    }
    return p;
  }

  /// Given a backend and a safe version (with no periods), return the true version
  str Backends::backend_info::version_from_safe_version (str be, str sv) const
  {
    return safe_version_map.at(be).first.at(sv);
  }

  /// Given a backend and a true version (with periods), return the safe version
  str Backends::backend_info::safe_version_from_version (str be, str v) const
  {
    return safe_version_map.at(be).second.at(v);
  }

  /// Link a backend's version and safe version
  void Backends::backend_info::link_versions(str be, str v, str sv)
  {
    safe_version_map[be].first[sv] = v;
    safe_version_map[be].second[v] = sv;
  }

  /// Override a backend's config file location
  void Backends::backend_info::override_path(str& be, str& ver, str path)
  {
    int l = str(GAMBIT_DIR).length();
    if (path.substr(0,l) == GAMBIT_DIR) path.replace(0, l, ".");
    bepathoverrides[be][ver] = path;
  }

}



