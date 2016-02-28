//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file HiggsSignals.cpp
///
///  Frontend source for the HiggsSignals backend.
///
///  Actual implementation of HiggsSignals ini function.
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
#include "gambit/Backends/frontends/HiggsSignals.hpp"
#include "gambit/Utils/mpiwrapper.hpp"

BE_INI_FUNCTION
{

  static bool scan_level = true;

  // Scan-level initialisation
  if(scan_level)
  {
    
    int nHneut = 3; // number of neutral higgses
    int nHplus = 1; // number of charged higgses
    int pdf = 2;    // which pdf style to use for Higgs lineshape (2=Gaussian)

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

    // Initialize HiggsSignals with the latest results and set up the lineshape pdf.
    // Do this one-by-one for each MPI process, as HS is insane (it writes files
    // here then reads them back in later).
    for (int i = 0; i < totprocs; i++)
    {
      
      if (i == rank)
      {
        initialize_HiggsSignals_latestresults(nHneut,nHplus);   
        setup_pdf(pdf);
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
