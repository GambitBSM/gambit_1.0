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
///  \author Pat Scott
///          (p.scott@imperial.ac.uk)
///  \date 2016 Jan
///  *********************************************

#ifndef __spectrum_helpers_hpp__
#define __spectrum_helpers_hpp__

#include <map>
#include <string>
#include <set>

#include "gambit/Elements/spectrum.hpp"

namespace Gambit
{

   /// Create a skeleton spectrum object from an SLHA file
   template <typename HE>
   Spectrum spectrum_from_SLHA(str slha)
   {
     // Read the SLHA file in to an SLHAea object
     SLHAstruct slhaea;
     std::ifstream ifs(slha.c_str());
     if (!ifs.good())
     {
       stringstream err;
       err << "ERROR: SLHA file " << slha << " not found.";
       utils_error().raise(LOCAL_INFO,err.str());
     }
     ifs >> slhaea;
     ifs.close();
      
     // Create the final object from the SLHAea object
     return spectrum_from_SLHAea<HE>(slhaea)
   }

   /// Create a skeleton spectrum object from an SLHAea object
   template <typename HE>
   Spectrum spectrum_from_SLHAea(SLHAstruct slhaea)
   {
     // Create HE skeleton SubSpectrum object from the SLHAea object
     // (interacts with MSSM blocks in MSSM case)
     HE heskel(slhaea);

     // Create SMInputs object from the SLHAea object
     SMInputs sminputs(slhaea);

     // Create SMskeleton SubSpectrum object from the SLHAea object
     // (basically just interacts with SMINPUTS block)
     SMskeleton smskel(slhaea);

     // Create full Spectrum object from components above
     // Note subtlety! There are TWO constructors for the Spectrum object:
     // If pointers to SubSpectrum objects are passed, it is assumed that
     // these objects are managed EXTERNALLY! So if we were to do this:
     //   matched_spectra = Spectrum(&smskel,&mssmskel,sminputs);
     // then the SubSpectrum objects would end up DELETED at the end of
     // this scope, and we will get a segfault if we try to access them
     // later. INSTEAD, we should just pass the objects themselves, and
     // then they will be CLONED and the Spectrum object will take
     // possession of them:
     return Spectrum(smskel,heskel,sminputs,NULL);
   }


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
