//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Frontend header for the gamLike backend.
///
///  Compile-time registration of available 
///  functions and variables from this backend.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Christoph Weniger
///          (c.weniger@uva.nl)
///  \date 2014 Sep, Oct
///
///  *********************************************

// Identify backend
#ifdef BACKENDRENAME
  #define BACKENDNAME BACKENDRENAME
#else
  #define BACKENDNAME gamLike
#endif
#define VERSION 1.0.0
#define SAFE_VERSION 1_0_0

// Load it
LOAD_LIBRARY

// Import functions
BE_FUNCTION(fermi_dwarfs_init, void, (int), "fermi_dwarfs_init_", "fermi_dwarfs_init")
BE_FUNCTION(fermi_gc_init, void, (int, int), "fermi_gc_init_", "fermi_gc_init")
BE_FUNCTION(fermi_dwarfs_likelihood, double, (const std::vector<double> &, const std::vector<double> &), "fermi_dwarfs_likelihood_vec_", "lnL_dwarfs")
BE_FUNCTION(fermi_gc_likelihood, double, (const std::vector<double> &, const std::vector<double> &), "fermi_gc_likelihood_vec_", "lnL_GC")
BE_FUNCTION(set_data_path, void, (const char *), "set_data_path_", "set_data_path")

BE_INI_FUNCTION
{
  // Scan-level initialisation
  static bool scan_level = true;
  if (scan_level)
  {
    scan_level = false;
    std::string path = runOptions->getValueOrDef<std::string>(backendDir+"/data/", "datapath");
    set_data_path(path.c_str());
    fermi_dwarfs_init(0);
    fermi_gc_init(0, 1);
  }
}
DONE

// Undefine macros to avoid conflict with other backends
#include "gambit/Backends/backend_undefs.hpp"

