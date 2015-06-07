//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Header file for MSSM_slhahelp.cpp 
///  with routines to help users / Bits 
///  translate between SLHA2 sfermions 
///  and SLHA1 (or similar) sfermions 
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
#include "gambit/Elements/SubSpectrum.hpp"
#include "gambit/Elements/Spectrum.hpp"
#include "gambit/Utils/util_types.hpp"


namespace Gambit {

namespace slhahelp {

   /// type defs for pair types etc that we will use in maps
   typedef std::pair<int,str> p_int_string;
   typedef std::pair<int,int> pair_ints;
   typedef std::pair<str,pair_ints> pair_string_ints;
   typedef std::pair<str,str> pair_strings;
   typedef std::set<int>::iterator iter;
   
   /// setup all the maps
   void init_maps();

   /******************* gauge_es <-> mass_es helpers ****************/

   /// returns vector representing composition of requested gauge state
   /// in terms of the slha2 mass eigenstates (~u_1 ...~u_6 etc)
   /// which is just a column in the mixing matrix 
   std::vector<double> get_mass_comp_for_gauge(str gauge_es,
                                               const SubSpectrum* mssm);
   /// returns vector representing composition of requested mass eigenstate
   /// in terms of the slha2 gauge eigenstates (~u_L,~c_L,...~t_R etc)
   /// which is just a row in the mixing matrix 
   /// really just wraps get_Pole_Mixing_col after extracting info from string
   std::vector<double> get_gauge_comp_for_mass(str mass_es,
                                               const SubSpectrum* mssm);
      
   // get largest admix and indentifies the state by filling mass_es
   /// could pass tol for test here, but maybe better to leave til step after
   double largest_mass_mixing_for_gauge(str gauge_es, 
                                        str & mass_es,
                                        const SubSpectrum* mssm);
       /// get largest mixing and identifies the state by filling gauge_es
   double largest_gauge_mixing_for_mass(str mass_es, 
                                        str & gauge_es, 
                                        const SubSpectrum* mssm);
      

   /******************* family state -> mass_es, gauge_es  helpers ***********/
   
   /// Note: when there is family mixing there's no clear definition ~t_1, 
   /// ~t_2 etc as these are neither gauge_es nor mass_es
   /// If defined as the states you get from diagonalising a 2by2 
   /// mass (sub)matrix then extensive manipulations would be required
   /// Here we defone the family states to be the mass eigenstates made up 
   /// predominatly of gauge states from the appropriate family, so ~t_1 is the
   /// lightest of the two mass_es which are made up predominatly of third 
   /// family squarks.
   /// This is moore useful for our purposes


   /// returns vector with composition of closest the mass state 
   /// to give family state in terms of gauge eigenstates 
   // and fills string mass_es to tell user which mass_es matches family state
   /// thus it mirrors the get_gauge_comp_for_mass_es given earlier, but 
   /// fills an additional argument to tell the user what mass_es the family
   /// state is defined as
   std::vector<double> get_gauge_comp_for_family_state(str familystate,
                                                       str & mass_es,
                                                       const SubSpectrum* mssm);

   /// identifies the mass_es which best matches specified family state
   /// then returns the mixing elements into the two gauge states of that family
   /// ie the appropriate row in the stop mixing matrix 
   /// to test against family mixing check the square sum of elements of the row
   /// are sufficiently close to 1, i.e. if(sqr(vec(1))+sqr(vec(2)) > 1-tol)
   /// where vec is the std::vector returned by this method
   std::vector<double> family_state_mix_elements(str familystate,
                                                 str & mass_es,
                                                 const SubSpectrum* mssm);

   /// identifies the two mass_es which best matches specified family state
   /// storing them in strings and then returns 
   /// the 2by2 mixing matrix for that family state in the form
   /// (Mix_{11}, Mix_{12}, Mix_{21}, Mix_{22})
   /// to test there is negligible family mixing chek that for both rows
   /// the squar some of each element is sufficently close to 1
   /// ie if(sqr(vec(1))+sqr(vec(2)) > 1-tol && sqr(vec(3))+sqr(vec(4)) > 1-tol)
   /// where vec is the std::vector returned by this method
   std::vector<double> family_state_mix_matrix(str type,
                                               int family,
                                               str & mass_es1,
                                               str & mass_es2,
                                               const SubSpectrum* mssm);
   
  
   /******************* closer to Pat's suggestions *********************/

   /// identifies the state with largest gauge_es content
   /// also fills mlargest max_mixing and full gauge_composition 
   str mass_es_from_gauge_es(str gauge_es, double & max_mixing, 
                             std::vector<double> & gauge_composition, 
                             const SubSpectrum* mssm);
   
   /// as above but doesn't fill a gauge_composition vector 
   /// would have a slight efficiency saving if we didn't use wrapper and 
   /// avoided skipped gauge_composition entirely but at the cost of a lot of
   /// code duplication
   str mass_es_from_gauge_es(str gauge_es, double & max_mixing,
                             const SubSpectrum* mssm);
   
   /// as above but doesn't fill max_mixing 
   /// would have a slight efficiency saving if we didn't use wrapper and 
   /// avoided skipped max_mixing entirely but at the cost of a lot of
   /// code duplication
   str mass_es_from_gauge_es(str gauge_es, 
                             std::vector<double> & gauge_composition,
                             const SubSpectrum* mssm);
   
   /// as above but do test against tol internally as Pat prefers
   str mass_es_from_gauge_es(str gauge_es, const SubSpectrum* mssm, double tol);

   /// mirrors of mass_es_from_gauge_es routines
   str gauge_es_from_mass_es(str mass_es, double & max_mixing, 
                             std::vector<double> & mass_composition,
                             const SubSpectrum* mssm);
   
   str gauge_es_from_mass_es(str mass_es, double & max_mixing, 
                             const SubSpectrum* mssm);
   
   str gauge_es_from_mass_es(str mass_es, 
                             std::vector<double> & mass_composition, 
                             const SubSpectrum* mssm); 
   
   str gauge_es_from_mass_es(str mass_es, const SubSpectrum* mssm);
      
   }  // namespace slhahelp
} // namespace gambit

#endif 
