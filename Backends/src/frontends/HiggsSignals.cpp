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
#include "gambit/Utils/file_lock.hpp"

BE_INI_FUNCTION
{

  static bool scan_level = true;
  if(scan_level)
  {
    int nHneut = 3; // number of neutral higgses
    int nHplus = 1; // number of charged higgses
    int pdf = 2;    // choose which pdf style to use for Higgs lineshape; 2 = Gaussian
    // Initialize HiggsSignals. Do this one-by-one for each MPI process with
    // locks, as HS writes files here then reads them back in later (crazy). 
    Utils::FileLock mylock("HiggsSignals_" STRINGIFY(SAFE_VERSION) "_init");
    mylock.get_lock();
    { 
      // initialize HiggsSignals with the latest results and set pdf shape
      initialize_HiggsSignals_latestresults(nHneut,nHplus);
      setup_pdf(pdf);
    }
    mylock.release_lock();    
    scan_level = false;
  }

}
END_BE_INI_FUNCTION
