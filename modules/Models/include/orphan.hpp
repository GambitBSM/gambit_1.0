//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
///  \file
///
///  Base lineage for starting orphan models.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Pat Scott
///          (patscott@physics.mcgill.ca)
///  \date 2014 Aug
///
///  *********************************************

#ifndef __orphan_hpp__
#define __orphan_hpp__


#include "util_types.hpp"

namespace Gambit
{
          
  namespace Models
  {  

    namespace PARENT
    {
      // Base lineage that all parentless models copy
      const std::vector<str> lineage;
    }
         
  }

}

#endif /* defined(__orphan_hpp__) */

