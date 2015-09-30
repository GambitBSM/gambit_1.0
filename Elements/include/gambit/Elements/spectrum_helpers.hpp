//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Helpers for using the spectrum and subspectrum
///  classes.
///
///  *********************************************
///
///  Authors: 
///  <!-- add name and date if you modify -->
///   
///  \author Peter Athron  
///          (peter.athron@coepp.org.au)
///  \date 2014, 2015 Jan, Feb, Mar 
///
///  \author Ben Farmer
///          (benjamin.farmer@fysik.su.se)
///  \date 2014, 2015 Jan - Jul
///
///  *********************************************

#ifndef __spectrum_helpers_hpp__
#define __spectrum_helpers_hpp__

#include <map>
#include <string>
#include <set>
//#include <sstream>

//#include "gambit/Utils/cats.hpp"
//#include "gambit/Utils/standalone_error_handlers.hpp"
//#include "gambit/Elements/slhaea_helpers.hpp"
//#include "gambit/Models/partmap.hpp"


namespace Gambit
{

   /// Helper function for checking if indices are valid
   inline bool within_bounds(const int i, const std::set<int> allowed)
   {
     return ( allowed.find(i) != allowed.end() );
   }
   
   /// List of parameter types used to classify spectrum contents
   namespace Par
   {
     enum Phys
     {
         Pole_Mass = 0,
         Pole_Mass_1srd_high,
         Pole_Mass_1srd_low,
         Pole_Mixing
     };

     // Stick enum values in a vector to help auto-generate maps that use them as keys
     inline std::vector<Phys> get_Phys_all()
     {
        std::vector<Phys> vec;
        vec.push_back(Pole_Mass);
        vec.push_back(Pole_Mass_1srd_high);
        vec.push_back(Pole_Mass_1srd_low);
        vec.push_back(Pole_Mixing);
        return vec;
     }

     enum Running
     {
         mass4 = Pole_Mixing+1,
         mass3,
         mass2,
         mass1,
         dimensionless,
         mass_eigenstate
      };

      // Stick enum values in a vector to help auto-generate maps that use them as keys
      inline std::vector<Running> get_Running_all()
      {
         std::vector<Running> vec;
         vec.push_back(mass4);
         vec.push_back(mass3);
         vec.push_back(mass2);
         vec.push_back(mass1);
         vec.push_back(dimensionless);
         vec.push_back(mass_eigenstate);
         return vec;
      }

      /// Map from enum value to string, for error messages
      static std::map<int,std::string> fill_map()
      {
         std::map<int,std::string> name;
         name[Pole_Mass]       = "Pole_Mass";
         name[Pole_Mass_1srd_high] = "Pole_Mass_1srd_high";
         name[Pole_Mass_1srd_low]  = "Pole_Mass_1srd_low";
         name[Pole_Mixing]     = "Pole_Mixing";
         name[mass4]           = "mass4";
         name[mass3]           = "mass3";
         name[mass2]           = "mass2";
         name[mass1]           = "mass1";
         name[dimensionless]   = "dimensionless";
         name[mass_eigenstate] = "mass4";
         return name;
      }
      static const std::map<int,std::string> toString = fill_map();
   }

}

#endif // #defined __spectrum_helpers_hpp__
