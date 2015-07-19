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

#include "gambit/Elements/SubSpectrum.hpp"
#include "gambit/Elements/SpecFptrFinder.hpp"

namespace Gambit {

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

}



