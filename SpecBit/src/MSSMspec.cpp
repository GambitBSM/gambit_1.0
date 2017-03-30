//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Source file definable quantities for 
///  MSSMSpec class
///
///  *********************************************
///
///  Authors: 
///  <!-- add name and date if you modify -->
///   
///  \author Ben Farmer
///          (benjamin.farmer@fysik.su.se)
///  \date Aug 2016 
///
///  *********************************************

#include "gambit/SpecBit/MSSMSpec_head.hpp"

namespace Gambit 
{
   namespace SpecBit 
   {
      MSSM_strs::MSSM_strs() {} // Constructor needed to silence certain compiler warnings

      /// Const strings for use in MSSMspec class 
      
      /// some strings are used in multiple mass
      /// comments indicate first map they appear 
      /// dimension 2, no index
      const str MSSM_strs::BMu = "BMu";
      const str MSSM_strs::mHd2 = "mHd2";
      const str MSSM_strs::mHu2 = "mHu2";
      /// dimension 2, 2 indices 
      const str MSSM_strs::mq2 =  "mq2";
      const str MSSM_strs::ml2 =  "ml2";
      const str MSSM_strs::md2 =  "md2";
      const str MSSM_strs::mu2 =  "mu2";
      const str MSSM_strs::me2 =  "me2";
      /// dimension 1, no index 
      const str MSSM_strs::M1 =  "M1";
      const str MSSM_strs::M2 =  "M2";
      const str MSSM_strs::M3 =  "M3";
      const str MSSM_strs::Mu =  "Mu";
      const str MSSM_strs::vu =  "vu";
      const str MSSM_strs::vd =  "vd";
      /// dimension 1, 2 indices
      const str MSSM_strs::TYd =  "TYd";
      const str MSSM_strs::TYe =  "TYe";
      const str MSSM_strs::TYu =  "TYu";
      const str MSSM_strs::ad  =  "ad";
      const str MSSM_strs::ae  =  "ae";
      const str MSSM_strs::au  =  "au";
      /// dimension 0, no index 
      const str MSSM_strs::g1  =  "g1";
      const str MSSM_strs::g2  =  "g2";
      const str MSSM_strs::g3  =  "g3";
      /// dimension 0, no index, special map  
      const str MSSM_strs::tanbeta = "tanbeta";
      const str MSSM_strs::sinW2 = "sinW2";
      /// dimension 1, no index, special map  
      const str MSSM_strs::mA2 = "mA2";
      /// dimension 0, 2 indices
      const str MSSM_strs::Yd  =  "Yd";
      const str MSSM_strs::Yu  =  "Yu";
      const str MSSM_strs::Ye  =  "Ye";

      ///Pole mass
      /// dimension 1, no index , special for setters
      const str MSSM_strs::gluino = "~g";
      const str MSSM_strs::A0 = "A0";
      const str MSSM_strs::Hplus= "H+";
      const str MSSM_strs::Hminus ="H-";
      const str MSSM_strs::Goldstone0 ="Goldstone0";
      const str MSSM_strs::Goldstoneplus ="Goldstone+";
      const str MSSM_strs::Goldstoneminus ="Goldstone-";
      const str MSSM_strs::Wplus = "W+";
      const str MSSM_strs::Wminus = "W-";
      const str MSSM_strs::Z0 = "Z0";

      
      /// dimension 1, 1 index , special for setters
      const str MSSM_strs::su        =   "~u";
      const str MSSM_strs::sd	   =   "~d";
      const str MSSM_strs::se	   =   "~e-";
      const str MSSM_strs::snu	   =   "~nu";
      const str MSSM_strs::chiplus   =   "~chi+";
      const str MSSM_strs::chi0      =   "~chi0";
      const str MSSM_strs::h0	   =   "h0";
      const str MSSM_strs::subar     =   "~ubar";
      const str MSSM_strs::sdbar     =   "~dbar";
      const str MSSM_strs::seplus    =   "~e+";
      const str MSSM_strs::snubar    =   "~nubar";
      const str MSSM_strs::chiminus  =   "~chi-";

      /// @{ "Metadata" vectors
      // TODO: replace with a more integrated system
 
      /// @{ Pole_Mass tagged entries

      // pole mass strings with no index
      const std::vector<str> MSSM_strs::pole_mass_strs = initVector( gluino, A0, Hplus,
       					     Hminus, Goldstone0,
       					     Goldstoneplus,
       					     Goldstoneminus,
       					     Wplus, Wminus, Z0 );

      // as above but without Z0 since we do not predict that mass
      const std::vector<str> MSSM_strs::pole_mass_pred = initVector( gluino, A0, Hplus,
       					     Hminus, Goldstone0,
       					     Goldstoneplus,
       					     Goldstoneminus,
       					     Wplus, Wminus );

      /// pole mass strings with 1 index
      const std::vector<str> MSSM_strs::pole_mass_strs_1 = initVector( su, sd, se, 
                                                      subar, sdbar, seplus,
       					       chiplus, chiminus, chi0, h0, 
       					       snu, snubar );

      ///  pole mass strings with 1 index and six entries
      const std::vector<str> MSSM_strs::pole_mass_strs_1_6  = initVector( su, sd, se,
       						  subar, sdbar, seplus );

      ///  pole mass strings with 1 index and four entries
      const std::vector<str> MSSM_strs::pole_mass_strs_1_4  = initVector( chi0 );
      
      ///  pole mass strings with 1 index and three entries
      const std::vector<str> MSSM_strs::pole_mass_strs_1_3  = initVector( snu, snubar );

      ///  pole mass strings with 1 index and two entries
      const std::vector<str> MSSM_strs::pole_mass_strs_1_2  = initVector( chiplus, chiminus, h0 );

      /// @}

      /// @{ Pole_Mixing tagged entries

      ///  2 index, 6x6 entries
      const std::vector<str> MSSM_strs::pole_mixing_strs_2_6x6  = initVector( sd, su, se );

      ///  2 index, 4x4 entries
      const std::vector<str> MSSM_strs::pole_mixing_strs_2_4x4  = initVector( chi0 );

      ///  2 index, 3x3 entries
      const std::vector<str> MSSM_strs::pole_mixing_strs_2_3x3  = initVector( snu );

      ///  2 index, 2x2 entries
      const std::vector<str> MSSM_strs::pole_mixing_strs_2_2x2  = initVector( h0, A0, Hplus, chiminus, chiplus );

      /// @}

      /// @{ mass2 tagged entries

      // no index 
      const std::vector<str> MSSM_strs::mass2_strs = initVector( BMu, mHd2, mHu2, mA2 );

      // two-index, 3x3 entries
      const std::vector<str> MSSM_strs::mass2_strs_2_3x3= initVector( mq2, ml2, md2, mu2, me2 );

      /// @}

      /// @{ mass1 tagged entries
   
      // no index
      const std::vector<str> MSSM_strs::mass1_strs = initVector( M1, M2, M3, Mu, vu, vd );
      
      // two-index, 3x3 entries
      const std::vector<str> MSSM_strs::mass1_strs_2_3x3 = initVector( TYd, TYe, TYu, ad, ae, au );

      /// @}
 
      /// @{ dimensionless tagged entries
   
      // no index
      const std::vector<str> MSSM_strs::dimensionless_strs = initVector( g1, g2, g3, tanbeta, sinW2 );

      // two-index, 3x3 entries
      const std::vector<str> MSSM_strs::dimensionless_strs_2_3x3 = initVector( Yd, Yu, Ye );

      /// @}
      
      /// TODO: left out mass_eigenstate entries for now
   }
}

