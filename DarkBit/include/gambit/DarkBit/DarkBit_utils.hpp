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

      // Helper function for recursively importing decays and decays of resulting final states into a process catalog
      void ImportDecays(std::string pID, TH_ProcessCatalog &catalog, 
                        std::set<std::string> &importedDecays, 
                        const DecayTable* tbl, double minBranching,
                        std::vector<std::string> excludeDecays = std::vector<std::string>());
    }

  }

}

#endif // defined __DarkBit_utils_hpp__
