//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Type definition header for module
///  HEColliderBit.
///
///  Compile-time registration of type definitions 
///  required for the rest of the code to
///  communicate with HEColliderBit.
///
///  Add to this if you want to define a new type
///  for the functions in HEColliderBit to return,
///  but you don't expect that type to be needed
///  by any other modules.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Abram Krislock
///          (abram.krislock@fysik.su.se)
///  \date 2013 Dec
///
///  *********************************************


#ifndef __HEColliderBit_types_hpp__
#define __HEColliderBit_types_hpp__

#include "Pythia8Backend.hpp"
#include "Delphes3Backend.hpp"
#include "Analysis.hpp"
#include "Event.hpp"

namespace Gambit {
  namespace HEColliderBit {
    /// \todo Some of these types may eventually need to be in shared_types
    /// \note They may be shared between backends, depending on how we backend Pythia, Delphes, FastSim, etc...
    
    // I'm putting these typedefs in here for verbosity and readability.
    // In any case, they are used to communicate between HEColliderBit
    // module functions. --Abram
    typedef Pythia8Backend MyPythia;
    typedef Delphes3Backend MyDelphes;

    typedef Pythia8::Event PythiaEvent;
    typedef Event StandardEvent;
    typedef Analysis ColliderAnalysis;

  }
}
