//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Simple function for returning SM Higgs partial
///  and total widths as a function of virtuality,
///  as read from data files from CERN Yellow 
///  Paper arXiv:1101.0593.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///
///  \author Christoph Weniger
///          <c.weniger@uva.nl>
///  \date Dec 2014
///
///  \author Pat Scott
///          <p.scott@imperial.ac.uk>
///  \date 2015 May
///
///  *********************************************


#include "gambit/Elements/funktions.hpp"
#include "gambit/Utils/util_types.hpp"

namespace Gambit
{
  
  /// Higgs branching ratios and total width Gamma [GeV], as function of mass [GeV] (90 - 300 GeV)
  double virtual_SMHiggs_widths(str, double);
  
}
