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
///  *********************************************

#include "gambit/Backends/frontend_macros.hpp"
#include "gambit/Backends/frontends/gamLike.hpp"

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
  if ( ModelInUse("GalacticHalo_gNFW") or ModelInUse("GalacticHalo_gNFW") )
  {
    //std::cout << "Using GalacticHalo initialization" << std::endl;
    daFunk::Funk profile = *Dep::GalacticHalo;
    auto r = daFunk::logspace(-3, 2, 100);
    auto rho = daFunk::logspace(-3, 2, 100);
    double dist = 8.5;  // FIXME: Sun GC distance [kpc] should be free parameter
    for ( size_t i = 0; i<r.size(); i++ )
    {
      rho[i] = profile->bind("r")->eval(r[i]);
    }
    set_MW_profile(r, rho, dist);
  }
  /*
  else
  {
    std::cout << "Not using GalacticHalo initialization" << std::endl;
  }
  */
}
END_BE_INI_FUNCTION
