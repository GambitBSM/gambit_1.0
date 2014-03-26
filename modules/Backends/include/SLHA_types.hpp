//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Definitions of container classes/types
///  for SLHA emulation, and interaction with
///  SLHA-compatible backends
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///  
///  \author Ben Farmer  
///          (benjamin.farmer@monash.edu)
///  \date 2013 Jun
///
///  \author Pat Scott 
///          (patscott@physics.mcgill.ca)
///  \date 2013 Oct
///
///  *********************************************


#ifndef __SLHA_types_hpp__
#define __SLHA_types_hpp__

// Pythia8 SLHA reader classes
#include "Pythia8/SusyLesHouches.h"

namespace Gambit
{
  // Pythia 8 SLHA class
  typedef ::Pythia8::SusyLesHouches Py8SLHA;
}

#endif // defined __SLHA_types_hpp__
