//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Example retrieval of data from Spectrum 
///  object.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///
///  \author Ben Farmer
///          (ben.farmer@gmail.com)
///    \date 2014 Dec
///  
///  *********************************************

#include <string>
#include <sstream>
#include "gambit_module_headers.hpp"
#include "SpecBit_rollcall.hpp"

// includes that are already done by the above headers, 
// just for clarity
#include "Spectrum.hpp"
#include <slhaea.h> 

namespace Gambit
{

  namespace SpecBit
  {

    using namespace LogTags;

    // Example showing reading of SLHA information from Spectrum object, using
    // both SLHAea objects and direct Spectrum getter functions.
    void exampleRead (bool &result)
    {

      // Retreive pointer to Spectrum object, delivered by dependency resolver
      // Module function asks for Spectrum* with capability MSSM_spectrum.
      // i.e. has DEPENDENCY(MSSM_spectrum, Spectrum*) 
      namespace Pipe = Pipes::exampleRead;
      Spectrum* spec = *Pipe::Dep::MSSM_spectrum;

      // Extract SLHAea object
      // This copies the data out. Could possible change it to pass out a
      // reference instead, or have another function to do that.
      SLHAea::Coll slhaea = spec->getSLHAea();

      // Display all available data in SLHAea object
      std::cout << slhaea;

    }

  }      
}













