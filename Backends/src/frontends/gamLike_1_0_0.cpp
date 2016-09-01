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
///  \date 2016 Feb
///
///  \author Sebastian Wild
///          (sebastian.wild@ph.tum.de)
///  \date 2016 Aug
///
///  *********************************************

#include "gambit/Backends/frontend_macros.hpp"
#include "gambit/Backends/frontends/gamLike_1_0_0.hpp"

BE_INI_FUNCTION
{
  // Scan-level initialisation
  static bool scan_level = true;
  if (scan_level)
  {
    scan_level = false;
    std::string path = runOptions->getValueOrDef<std::string>(backendDir+"/../data/", "datapath");
    set_data_path(path);  // Note that passing per reference is default per backend system
  }

  daFunk::Funk profile = (Dep::GalacticHalo)->DensityProfile;
  auto r = daFunk::logspace(-3, 2, 100);
  auto rho = daFunk::logspace(-3, 2, 100);
  double dist = (Dep::GalacticHalo)->r_sun;
  for ( size_t i = 0; i<r.size(); i++ )
  {
    rho[i] = profile->bind("r")->eval(r[i]);
  }
  set_halo_profile(0, r, rho, dist);

}
END_BE_INI_FUNCTION
