//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
///  \file
///
///  Helper functions and pseudo-class for model 
///  definitions.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Ben Farmer
///          (benjamin.farmer@monash.edu.au)
///  \date 2013 May, June, July
///
///  \author Pat Scott
///          (patscott@physics.mcgill.ca)
///  \date 2013 July, Aug
///
///  *********************************************

#ifndef __model_functions_hpp__
#define __model_functions_hpp__

#include <map>
#include <set>
#include <vector>
#include <string>

#include "util_classes.hpp"

namespace Gambit
{

  /// \name Short functions to allow tidy model congruency tests
  /// @{
  bool descendant_of (const str&, const str&);
  bool ancestor_of (const str&, const str&);
  bool strict_descendant_of (const str&, const str&); 
  bool strict_ancestor_of (const str&, const str&); 
  /// @}

  /// Short function to allow quick test of the existence of a model, without
  /// knowledge of the modelClaw
  bool model_is_registered (const str&);

  /// Function to help static initialisation of our const data member vectors.
  /// Returns a copy of the vector with the string argument appended.
  std::vector<str> vecappend(const std::vector<str>&, const str&);
   
  /// Similar to vecappend(); joins two vectors and returns the result
  std::vector<str> vecjoin(const std::vector<str>&, const std::vector<str>&);
      
  /// As per vecjoin() but joins three vectors and returns the result.
  std::vector<str> vecjoin3(const std::vector<str>&, 
                            const std::vector<str>&,
                            const std::vector<str>&); 
          
  /// Helper function to test if a string matches a model recognised by GAMBIT
  void verify_model(const str&);

  namespace Models
  {  

    namespace PARENT
    {
      // Base lineage that all parentless models copy
      const std::vector<str> lineage;
    }
         
  }

}

#endif /* defined(__model_functions_hpp__) */

