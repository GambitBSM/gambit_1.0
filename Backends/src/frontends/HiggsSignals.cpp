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


BE_INI_FUNCTION
{

  // Scan-level initialisation
  static bool scan_level = true;
  if(scan_level){
    int nHneut = 3; // number of neutral higgses
    int nHplus = 1; // number of charged higgses
    
    // initialize HiggsSignals with the latest results
    initialize_HiggsSignals_latestresults(nHneut,nHplus);

    // choose which pdf style to use for Higgs lineshape
    int pdf = 2; // Gaussian
    setup_pdf(pdf);
  }
  scan_level = false;

  // clean-up
  // finish_HiggsSignals();

}
END_BE_INI_FUNCTION
