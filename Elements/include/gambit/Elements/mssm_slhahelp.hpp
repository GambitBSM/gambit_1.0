//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Routines to help translate between SLHA2 sfermions 
///  and SLHA1 (or similar) sfermions. 
///
///  Note that when family mixing occurs, there is no clear
///  definition of ~t_1, ~t_2, etc, as these are neither
///  gauge eigenstates nor mass eigenstates.  Extensive
///  matrix manipulations would be required in order to 
///  define the family states as the results of diagonalising
///  a 2x2 submatrix of the full 6x6 mass matrix.  Here 
///  we instead define the family states to be the two mass 
///  eigenstates with the largest contributions from gauge 
///  eigenstates of the appropriate family.  For example,
///  this means that ~t_1 is the lightest of the two mass 
///  eigenstates that have the largest combined contribution
///  from the gauge eigenstates ~t_L and ~t_R.  
///      
///  *********************************************
///
///  Authors: 
///   
///  \author Peter Athron  
///          (peter.athron@coepp.org.au)
///  \date 2015 
///
///  \author Pat Scott
///          (p.scott@imperial.ac.uk)
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
   
      /// ***************** Gauge <-> Mass Eigenstate Helpers ****************
      /// @{
   
      /// Identifies the mass eigenstate with largest gauge eigenstate content.
      ///   @{
      /// Version that tests internally agains a user-requested tolerance
      str mass_es_from_gauge_es(str gauge_es, const SubSpectrum* mssm, double tol,
                                str context);
      /// Version returning maximum mixing
      str mass_es_from_gauge_es(str gauge_es, double & max_mixing,
                                const SubSpectrum* mssm);
      /// Version returning gauge composition of identified mass eigenstate
      str mass_es_from_gauge_es(str gauge_es,
                                std::vector<double> & gauge_composition,
                                const SubSpectrum* mssm);
      /// Version returning maximum mixing and full gauge composition of 
      /// identified mass eigenstate.
      str mass_es_from_gauge_es(str gauge_es, double & max_mixing, 
                                std::vector<double> & gauge_composition, 
                                const SubSpectrum* mssm);
      ///   @}
   
      /// Identifies the gauge eigenstate with largest mass eigenstate content.
      ///   @{
      /// Version that tests internally agains a user-requested tolerance
      str gauge_es_from_mass_es(str mass_es, const SubSpectrum* mssm,
                                double tol, str context);      
      /// Version returning maximum mixing
      str gauge_es_from_mass_es(str mass_es, double & max_mixing,
                                const SubSpectrum* mssm);
      /// Version returning mass composition of identified gauge eigenstate
      str gauge_es_from_mass_es(str mass_es,
                                std::vector<double> & mass_composition, 
                                const SubSpectrum* mssm); 
      /// Version returning maximum mixing and full mass composition of 
      /// identified gauge eigenstate.
      str gauge_es_from_mass_es(str mass_es, double & max_mixing,
                                std::vector<double> & mass_composition,
                                const SubSpectrum* mssm);   
      ///   @}
      /// @}
   
   
      ///***************** Family <-> Mass Eigenstate Helpers ***********/
      /// @{

      /// Identifies the mass eigenstate that best matches the requested family state.
      ///   @{
      /// Version that tests internally agains a user-requested tolerance for family mixing
      str mass_es_closest_to_family(str familystate, const SubSpectrum* mssm,
                                    double tol, str context);
      /// Version returning mixing elements of the resulting mass eigenstate 
      /// into the two gauge eigenstates of the requested family.  To test 
      /// against family mixing, check that the square sum of elements of this
      /// mixing matrix row are sufficiently close to 1.  That is, compare
      /// gauge_composition(1)^2 + gauge_composition(2)^2 to 1-tolerance.
      str mass_es_closest_to_family(str familystate,
                                    std::vector<double> & gauge_composition,
                                    const SubSpectrum* mssm);
      /// Version returning the square sum of gauge mixing elements
      str mass_es_closest_to_family(str familystate,
                                    double & sum_sqr_mix,
                                    const SubSpectrum* mssm);  
      /// Version returning mixing elements of the resulting mass eigenstate 
      /// into the two gauge eigenstates of the requested family, and off-family mixing.
      str mass_es_closest_to_family(str familystate,
                                    std::vector<double> & gauge_composition,
                                    std::vector<double> & off_family_mixing,
                                    const SubSpectrum* mssm);
      ///   @}
   
      /// Identifies the family state that best matches the requested mass eigenstate.
      ///   @{
      /// Version that tests internally agains a user-requested tolerance for family mixing
      str family_state_closest_to_mass_es(str mass_es, const SubSpectrum* mssm,
                                          double tol, str context);
      /// Version returning the mass eigenstate composition of the gauge 
      /// eigenstate that best matches the requested mass eigenstate.  
      str family_state_closest_to_mass_es(str mass_es, std::vector<double> & mass_comp,
                                          const SubSpectrum* mssm);   
      /// Version returning the summed squares of the contributions to the
      /// gauge eigenstate that best matches the requested mass eigenstate,  
      /// of the two mass eigenstates that look most like the resulting family.
      /// (Seriously, just use the tol version.)  To test against family 
      /// mixing, you can check that this square of elements is sufficiently
      /// close to 1.
      str family_state_closest_to_mass_es(str mass_es, double & sum_sqr_mix,
                                          const SubSpectrum* mssm);   
      /// Version returning the mass eigenstate composition of the best-matching
      /// gauge eigenstate, and the summed squares of the contributions to this
      /// from the two mass eigenstates that look most like the resulting family.
      str family_state_closest_to_mass_es(str mass_es, double & sum_sqr_mix,
                                          std::vector<double> & mass_comp,
                                          const SubSpectrum* mssm);
      ///   @}

      /// Identifies the two mass eigenstates which best match a requested family,
      /// as well as the resulting 2x2 family mixing matrix between them.
      /// The matrix has the form (Mix_{11}, Mix_{12}, Mix_{21}, Mix_{22}).
      ///   @{
      /// Version that tests internally agains a user-requested tolerance for family mixing
      std::vector<double> family_state_mix_matrix(str type /*"~u", "~d" or "~e"*/, int generation,
                                                  str & mass_es1, str & mass_es2, const SubSpectrum* mssm,
                                                  double tol, str context);       
      /// Version that leaves the test up to the user.
      /// To test that there is negligible family mixing, you can check that for both rows of the 
      /// family mixing matrix, the sum of squares of elements is sufficently close to 1.  That is,
      /// check Mix_{11}^2 + Mix_{12}^2 > 1-tolerance && Mix_{21}^2 + Mix_{22}^2 > 1-tolerance.
      /// where vec is the std::vector returned by this method
      std::vector<double> family_state_mix_matrix(str type /*"~u", "~d" or "~e"*/, int generation,
                                                  str & mass_es1, str & mass_es2, const SubSpectrum* mssm);  
      ///   @}

      /// @}
      
   }  // namespace slhahelp
   
} // namespace gambit

#endif 
