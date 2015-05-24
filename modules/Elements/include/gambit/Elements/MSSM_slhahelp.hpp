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
   /// maps to extact info from strings
   std::map<std::string, p_int_string> gauge_label_to_index_type;
   std::map<std::string, p_int_string> mass_label_to_index_type;
   /// map to extract info from family state   
   std::map<std::string, pair_string_ints> familystate_label;
   
   ///map to obtain left_right gauge_pairs from state info
   /// helps us reuse other routiones with string arguments 
   std::map<p_int_string, pair_strings>  type_family_to_gauge_states;
   ///maps directly from family string to left_right gauge_pairs
   /// helps us reuse other routines that take string arguments 
   std::map<std::string, pair_strings>  family_state_to_gauge_state;
   /// map from string representing type (ie up-squars, down-squars or 
   /// charged selptons) to appropriate set of mass eigenstates 
   std::map<std::string,std::set<std::string>> type_to_set_of_mass_es;
   ///maps between type and the sets of indices
   std::map<std::string,std::set<int>> type_to_set_of_row_indices;
   std::map<std::string,std::set<int>> type_to_set_of_col_indices;

   /// setup all the maps
   void init_maps();
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
   ///routine to return mass state admixure for given gauge state
   double get_mass_addmix_for_gauge(std::string gauge_es, std::string mass_es,
                                    const SubSpectrum* mssm);
   /// slower alterantive as currently implemented that resuses earlier routine
   /// quick cross check - to be removed after tests
   double get_mass_addmix_for_gauge2(std::string gauge_es, std::string mass_es,
                                     const SubSpectrum* mssm);
   /// returns vector representing composition of requested mass eigenstate
   /// in terms of the slha2 gauge eigenstates (~u_L,~c_L,...~t_R etc)
   /// which is just a row in the mixing matrix 
   /// really just wraps get_Pole_Mixing_col after extracting info from string
   std::vector<double> get_gauge_comp_for_mass(std::string mass_es,
                                               const SubSpectrum* mssm);
   /// get largest addmix and indentifies the state by filling mass_es
   /// could pass tol for test here, but maybe better to leave til step after
   double get_largest_mass_addmix_for_gauge(std::string gauge_es, 
                                            std::string & mass_es,
                                            const SubSpectrum* mssm);
   /// indentify the two mass eigenstate corresponding to the approximate 
   /// family states, e.g. stops ("~u",3), smuons ("~mu", 2) etc 
   /// Note: when there is family mixing there's no clear definition of ~t_1, 
   //~t_2 etc if defined as the states you get from diagonalising a 2by2 
   /// mass (sub)matrix then extensive manipulations would be required
   /// So here we identify the mass eigenstates closest to the family ones 
   ///which is more useful here anyway
   //returns a pair of mass ordered strings 
   pair_strings identify_mass_es_closest_to_family(std::string type, int family,
                                                   const SubSpectrum* mssm);
   /// overloaded version which takes string and returns only requested state
   /// I suspect this is the more useful one
   std::string identify_mass_es_closest_to_family(std::string familystate,
                                                  const SubSpectrum* mssm);
   /// returns vector with composition of closest the mass state 
   /// to give family state in terms of gauge eigenstates 
   std::vector<double> get_gauge_comp_for_family_state(std::string familystate,
                                                       const SubSpectrum* mssm);
   ///As above but returns specific admixture
   double get_gauge_admix_for_family_state(std::string familystate, 
                                           std::string gauge_es,
                                           const SubSpectrum* mssm);
   /// cross check of above - to be removed after tests
   double get_gauge_admix_for_family_state2(std::string familystate, 
                                            std::string gauge_es,
                                            const SubSpectrum* mssm);
}
}
