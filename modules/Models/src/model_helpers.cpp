//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
//
//  Helper functions used in Model definitions
//  and translation functions
//
//  *********************************************
//
//  Authors
//  =======
//
//  (add name and date if you modify)
//
//  Ben Farmer
//  2014 Dec
//
//  *********************************************

#include "model_helpers.hpp"

namespace Gambit {
  namespace Models {
  
    // Set many string-named ModelParameters to a single value
    void set_many_to_one(ModelParameters &myP, const std::vector<std::string>& v, const double value)
    {
       for(std::vector<std::string>::const_iterator it = v.begin(); it != v.end(); ++it) {
         myP.setValue(*it, value);
       }       
    }

  }
}
