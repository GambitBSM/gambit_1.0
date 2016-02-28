//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file HiggsBounds.cpp
///
///  Frontend source for the HiggsBounds backend.
///
///  Actual implementation of HiggsBounds ini function.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Christopher S. Rogan
///          (crogan@cern.ch)
///  \date 2015 Sept
///
///  *********************************************

#include "gambit/Backends/frontend_macros.hpp"
#include "gambit/Backends/frontends/HiggsBounds.hpp"
#include "gambit/Utils/mpiwrapper.hpp"

BE_INI_FUNCTION
{

  static bool scan_level = true;

  // Scan-level initialisation
  if(scan_level)
  {

    int nHneut = 3; // number of neutral higgses
    int nHplus = 1; // number of charged higgses
    int ANA = 1;    // indicates LEP-only analysis

    int rank = 0;
    int totprocs = 1;

    #ifdef WITH_MPI
    if(GMPI::Is_initialized())
    {
      GMPI::Comm comm;
      rank = comm.Get_rank();
      totprocs = comm.Get_size();
    }
    #endif

    // Initialize HiggsBounds. Do this one-by-one for each MPI process, as HB
    // is insane (it writes files here then reads them back in later).
    for (int i = 0; i < totprocs; i++)
    {

      if (i == rank)
      {
        // initialize LEP chisq tables
        initialize_HiggsBounds_chisqtables();
        // initialize HiggsBounds to LEP only
        initialize_HiggsBounds_int(nHneut,nHplus,ANA);
      }

      #ifdef WITH_MPI
      if (totprocs > 1)
      {
        GMPI::Comm comm;
        comm.Barrier();
      }
      #endif

    }

  }
  
  scan_level = false;
  
}
END_BE_INI_FUNCTION
