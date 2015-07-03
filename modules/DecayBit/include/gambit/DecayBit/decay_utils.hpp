//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Function definitions for DecayBit decay
///  utilities.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Pat Scott
///          (p.scott@imperial.ac.uk)
///  \date 2015 May
///
///  *********************************************

#include "gambit/Elements/decay_table.hpp"

namespace Gambit
{

  namespace DecayBit
  {
      
    /// Construct a decay table entry for a particle from the entry for its antiparticle
    DecayTable::Entry CP_conjugate(const DecayTable::Entry&);
    
    /// Helper functions for filling maps from MSSM gauge eigenstates to mass eigenstates.
    /// @{
    void fill_mass_es_psn_gauge(str&, str&, str, const SubSpectrum*, double);
    void fill_mass_es_psn_family(str&, str&, str, const SubSpectrum*, double);
    /// @}
    
  }

}
