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

namespace Gambit {

namespace slhahelp {

   /// type defs for pair types etc that we will use in maps
   typedef std::pair<int,std::string> p_int_string;
   typedef std::pair<int,int> pair_ints;
   typedef std::pair<std::string,pair_ints> pair_string_ints;
   typedef std::pair<std::string,std::string> pair_strings;
   typedef std::set<int>::iterator iter;
   
   /// setup all the maps
   void init_maps();

   /******************* gauge_es <-> mass_es helpers ****************/

   //get column of the mixing matrix
   std::vector<double> get_Pole_Mixing_col(std::string type, int gauge_index,
                                           const SubSpectrum* mssm);
   //get row of the mixing matrix
   std::vector<double> get_Pole_Mixing_row(std::string type, int mass_index,
                                           const SubSpectrum* mssm);
   
   /// returns vector representing composition of requested gauge state
   /// in terms of the slha2 mass eigenstates (~u_1 ...~u_6 etc)
   /// which is just a column in the mixing matrix 
   std::vector<double> get_mass_comp_for_gauge(std::string gauge_es,
                                               const SubSpectrum* mssm);
   /// returns vector representing composition of requested mass eigenstate
   /// in terms of the slha2 gauge eigenstates (~u_L,~c_L,...~t_R etc)
   /// which is just a row in the mixing matrix 
   /// really just wraps get_Pole_Mixing_col after extracting info from string
   std::vector<double> get_gauge_comp_for_mass(std::string mass_es,
                                               const SubSpectrum* mssm);
      
   // get largest admix and indentifies the state by filling mass_es
   /// could pass tol for test here, but maybe better to leave til step after
   double largest_mass_mixing_for_gauge(std::string gauge_es, 
                                        std::string & mass_es,
                                        const SubSpectrum* mssm);
       /// get largest mixing and identifies the state by filling gauge_es
   double largest_gauge_mixing_for_mass(std::string mass_es, 
                                        std::string & gauge_es, 
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
   std::vector<double> get_gauge_comp_for_family_state(std::string familystate,
                                                       std::string & mass_es,
                                                       const SubSpectrum* mssm);

   /// identifies the mass_es which best matches specified family state
   /// then returns the mixing elements into the two gauge states of that family
   /// ie the appropriate row in the stop mixing matrix 
   /// and stores the rest of the gauge content for this state in a std::vector
   /// The latter should have entries which are zero in absense of family mixing
   std::vector<double> family_state_mix_elements(std::string familystate,
                                                 std::string & mass_es,
                                                 std::vector<double> & 
                                                 wrong_fam_gauge_content,
                                                 const SubSpectrum* mssm);

   /// identifies the two mass_es which best matches specified family state
   /// storing them in strings and then returns 
   /// the 2by2 mixing matrix for that family state in the form
   /// (Mix_{11}, Mix_{12}, Mix_{21}, Mix_{22})
   /// It also fills a double, max_mix_mag_sq, which represents the
   /// deviation from the assumption of no family mixing for these states
   /// More precisely it is the largest magnitude squared of two vectors 
   /// (one for each of the two family states) which hold the off-family mixing
   // elements, eg. the mixing between ~t_1 and the ~u_L, ~c_L, ~u_R, ~c_R 
   /// This will be zero in absense of family mixing
   std::vector<double> family_state_mix_matrix(std::string type,
                                               int family,
                                               std::string & mass_es1,
                                               std::string & mass_es2,
                                               double & max_mix_mag_sq,
                                               const SubSpectrum* mssm);
   
   

      
   }  // namespace slhahelp
} // namespace gambit

#endif 
