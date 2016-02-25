//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Class defining the parameters that SubSpectrum 
///  objects providing Scalar Singlet Dark Matter
///  spectrum data must provide
///
///  *********************************************
///
///  Authors: 
///  <!-- add name and date if you modify -->
///   
///  \author Ben Farmer
///          (benjamin.farmer@fysik.su.se)
///  \date 2016 Feb 
///
///  *********************************************

#ifndef __scalar_singlet_DM_contents_hpp__ 
#define __scalar_singlet_DM_contents_hpp__ 

#include "gambit/SpectrumContents/RegisteredSpectra.hpp"

namespace Gambit {

  /// Only have to define the constructor
  SpectrumContents::ScalarSingletDM::ScalarSingletDM()
  {
     setName("ScalarSingletDM");

     addParameter(Par::mass1, "vev"      );
     addParameter(Par::mass1, "lambda_hS");

     addParameter(Par::Pole_Mass, "h0");
     addParameter(Par::Pole_Mass, "S" );
  }

}
#endif
