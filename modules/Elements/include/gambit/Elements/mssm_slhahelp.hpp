//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Header file for mss_slhahelp.cpp 
///  with routines to help users / Bits 
///  translate between SLHA2 sfermions 
///  and SLHA1 (or similar) sfermions 
///
///  *********************************************
///
///  Authors: 
///  <!-- add name and date if you modify -->
///   
///  \author Peter Athron  
///          (peter.athron@coepp.org.au)
///  \date 2015 
///
///  *********************************************


#ifndef __MSSM_slhahelp_hpp__
#define __MSSM_slhahelp_hpp__

#include <iostream>
#include <map>
#include <string>
#include <utility> 
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <set>
#include "gambit/Elements/subspectrum.hpp"
#include "gambit/Elements/spectrum.hpp"
#include "gambit/Utils/util_types.hpp"

namespace Gambit
{

   namespace slhahelp
   {
   
      /// ***************** gauge_es <-> mass_es helpers ****************
      /// @{
   
      /// identifies the state with largest gauge_es content
      /// also fills largest max_mixing and full gauge_composition
      str mass_es_from_gauge_es(str gauge_es, double & max_mixing, 
                                std::vector<double> & gauge_composition, 
                                const SubSpectrum* mssm);
   
      /// as mass_es_from_gauge_es but doesn't fill a gauge_composition vector 
      /// would have a slight efficiency saving if we didn't use wrapper and 
      /// avoided skipped gauge_composition entirely but at the cost of a lot of
      /// code duplication
      str mass_es_from_gauge_es(str gauge_es, double & max_mixing,
                                const SubSpectrum* mssm);
      
      /// as mass_es_from_gauge_es but doesn't fill max_mixing
      /// would have a slight efficiency saving if we didn't use wrapper and
      /// avoided skipped max_mixing entirely but at the cost of a lot of
      /// code duplication
      str mass_es_from_gauge_es(str gauge_es,
                                std::vector<double> & gauge_composition,
                                const SubSpectrum* mssm);
   
      /// as mass_es_from_gauge_es but do test against tol internally
      str mass_es_from_gauge_es(str gauge_es, const SubSpectrum* mssm, double tol,
                                str context);
   
      /// mirrors of mass_es_from_gauge_es routines
      str gauge_es_from_mass_es(str mass_es, double & max_mixing,
                                std::vector<double> & mass_composition,
                                const SubSpectrum* mssm);
      
      str gauge_es_from_mass_es(str mass_es, double & max_mixing,
                                const SubSpectrum* mssm);
   
      str gauge_es_from_mass_es(str mass_es,
                                std::vector<double> & mass_composition, 
                                const SubSpectrum* mssm); 
   
      str gauge_es_from_mass_es(str mass_es, const SubSpectrum* mssm,
                                double tol, str context);
      /// @}
   
   
      ///***************** family state <-> mass_es, gauge_es  helpers ***********/
      /// @{
      
      /// Note: when there is family mixing there's no clear definition ~t_1, 
      /// ~t_2 etc as these are neither gauge_es nor mass_es
      /// If defined as the states you get from diagonalising a 2by2 
      /// mass (sub)matrix then extensive manipulations would be required
      /// Here we define the family states to be the mass eigenstates made up 
      /// predominantly of gauge states from the appropriate family, so ~t_1 is the
      /// lightest of the two mass_es which are made up predominatly of third 
      /// family squarks.
      /// This is moore useful for our purposes
   
      /// identifies the mass_es which best matches specified family state
      /// then fills the mixing elements to the two gauge es of that family into 
      /// std::vector gauge_composition (ie appropriate stop mixing matrix row) 
      /// to test against family mixing check the square sum of elements of the row
      /// are sufficiently close to 1, i.e. if(sqr(vec(1))+sqr(vec(2)) > 1-tol)
      /// where vec is the std::vector returned by this method
      str mass_es_closest_to_family(str familystate,
                                    std::vector<double> & gauge_composition,
                                    const SubSpectrum* mssm);
      /// as above but also fills off-family-mixings
      str mass_es_closest_to_family(str familystate,
                                    std::vector<double> & gauge_composition,
                                    std::vector<double> & off_family_mixing,
                                    const SubSpectrum* mssm);
      /// identifies the mass_es that is closest match to specified family state
      /// and fills sqr_sum_mix with the square sum of each of the two mixings 
      /// into gauge_es of that family
      str mass_es_closest_to_family(str familystate,
                                    double & sqr_sum_mix,
                                    const SubSpectrum* mssm);
   
      /// identifies the mass_es that is closest match to specified family
      /// does tol-test internally to check correctness of assumptions
      str mass_es_closest_to_family(str familystate, const SubSpectrum* mssm,
                                    double tol, str context);
   
      /// returns family state that best matches the given mass_es
      /// fills a double with the sum of the square mixings to gauge_es
      /// of the matching family
      /// and fills the mixing of the matching mass_es into gauge eigenstates 
      str family_state_closest_to_mass_es(str mass_es, double &  sum_sq_mix,
                                          std::vector<double> & mass_comp,
                                          const SubSpectrum* mssm);
      /// returns family state that best matches the given mass_es
      /// fills a double with the sum of the square mixings to gauge_es
      /// of the matching family
      str family_state_closest_to_mass_es(str mass_es, double & sum_sq_mix,
                                          const SubSpectrum* mssm);   
      /// returns family state that best matches the given mass_es
      /// and fills the mixing of the matching mass_es into gauge eigenstates 
      str family_state_closest_to_mass_es(str mass_es, 
                                          std::vector<double> & mass_comp,
                                          const SubSpectrum* mssm);   
         
      str family_state_closest_to_mass_es(str mass_es, const SubSpectrum* mssm,
                                          double tol, str context);
      /// identifies the two mass_es which best matches specified family state
      /// storing them in strings and then returns 
      /// the 2by2 mixing matrix for that family state in the form
      /// (Mix_{11}, Mix_{12}, Mix_{21}, Mix_{22})
      /// to test there is negligible family mixing chek that for both rows
      /// the square sum of each element is sufficently close to 1
      /// ie if(sqr(vec(1))+sqr(vec(2)) > 1-tol && sqr(vec(3))+sqr(vec(4)) > 1-tol)
      /// where vec is the std::vector returned by this method
      std::vector<double> family_state_mix_matrix(str type,
                                                  int family,
                                                  str & mass_es1,
                                                  str & mass_es2,
                                                  const SubSpectrum* mssm);  

      /// @}
      
   }  // namespace slhahelp
   
} // namespace gambit

#endif 
