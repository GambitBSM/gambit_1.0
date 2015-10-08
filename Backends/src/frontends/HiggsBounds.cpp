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


BE_INI_FUNCTION
{

 // Scan-level initialisation
  static bool scan_level = true;
  if(scan_level){
    // initialize LEP chisq tables
    initialize_HiggsBounds_chisqtables();
  
    int nHneut = 3; // number of neutral higgses
    int nHplus = 1; // number of charged higgses
    int ANA = 1;    // indicates LEP-only analysis
    
    // initialize HiggsBounds to LEP only
    initialize_HiggsBounds_int(nHneut,nHplus,ANA);
  }
  scan_level = false;
  
  // clean-up
  // finish_HiggsBounds_chisqtables();
  // finish_HiggsBounds();

}
END_BE_INI_FUNCTION
