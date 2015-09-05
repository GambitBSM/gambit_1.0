//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Abstract class for accessing general spectrum information.
///
///  *********************************************
///
///  Authors: 
///  <!-- add name and date if you modify -->
///   
///  \author Peter Athron  
///          (peter.athron@coepp.org.au)
///  \date 2014, 2015 Jan, Feb, Mar 
///
///  \author Ben Farmer
///          (benjamin.farmer@fysik.su.se)
///  \date 2014, 2015 Jan - Jul 
///
///  *********************************************

#include <fstream>

#include "gambit/Elements/subspectrum.hpp"
#include "gambit/Elements/spec_fptrfinder.hpp"

namespace Gambit
{

  /// @{ Remnants of old interface (PDG overloads for getter functions)
  DEFINE_PDG_GETTERS(RunningPars,mass_parameter)
  DEFINE_PDG_GETTERS(RunningPars,mass2_parameter)
  DEFINE_PDG_GETTERS(RunningPars,mass3_parameter)
  DEFINE_PDG_GETTERS(RunningPars,mass4_parameter)
  DEFINE_PDG_GETTERS(RunningPars,dimensionless_parameter)
  DEFINE_PDG_GETTERS(RunningPars,mass_eigenstate)

  DEFINE_PDG_GETTERS(Phys,Pole_Mass)
  DEFINE_PDG_GETTERS(Phys,Pole_Mixing)
  /// @}

  /// Dump out spectrum information to an SLHA file (if possible)
  void SubSpectrum::getSLHA(const str& filename) const
  {
    std::ofstream ofs(filename);
    if (ofs)
    { 
      ofs << getSLHAea();
    }
    else
    { 
      utils_error().raise(LOCAL_INFO,"Could not open file '"+filename+
       "' for writing. Please check that the path exists!"); 
    }     
    ofs.close();
  }
           
  /// Get spectrum information in SLHAea format (if possible)
  SLHAstruct SubSpectrum::getSLHAea() const
  {
    SLHAstruct slha;
    this->add_to_SLHAea(slha);
    return slha;    
  }

}



