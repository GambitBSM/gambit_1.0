//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Utility functions for DarkBit
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Torsten Bringmann 
///          (torsten.bringmann@fys.uio.no)
///  \date 2015 May
///  
///  *********************************************


#ifndef __DarkBit_utils_hpp__
#define __DarkBit_utils_hpp__

#include <vector>
#include <map>

#include "gambit/Utils/util_types.hpp"
#include "gambit/Elements/funktions.hpp"


namespace Gambit
{

  namespace DarkBit
  {

    namespace DarkBit_utils
    {

        // Functions

  // DSparticle_code translates GAMBIT string identifiers to the SUSY
  // particle codes used internally in DS (as stored in common block /pacodes/)          
  int DSparticle_code(const str particleID);


    };


  }

}

#endif // defined __DarkBit_utils_hpp__
