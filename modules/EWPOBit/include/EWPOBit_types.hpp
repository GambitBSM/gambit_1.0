//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Type definition header for module EWPOBit.
///
///  Compile-time registration of type definitions 
///  required for the rest of the code to
///  communicate with EWPOBit.
///
///  Add to this if you want to define a new type
///  for the functions in EWPOBit to return, but
///  you don't expect that type to be needed by 
///  any other modules.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Christopher Rogan
///          (crogan@cern.ch)
///  \date 2015 Feb
///
///  *********************************************


#ifndef __EWPOBit_types_hpp__
#define __EWPOBit_types_hpp__

#include <cmath>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#include <array>
#include <cmath>

namespace Gambit
{

  namespace EWPOBit
  {

    // A simple example
    struct MYstruct
    {
      double valA;
      double valB;
    };

  }
}

#endif // defined __EWPOBit_types_hpp__


