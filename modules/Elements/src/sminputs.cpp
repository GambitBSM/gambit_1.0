//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Helper functions for SMInputs struct
///
///  *********************************************
///
///  Authors: 
///  <!-- add name and date if you modify -->
///   
///  \author Ben Farmer
///          (benjamin.farmer@fysik.su.se)
///  \date 2015 Mar 
///
///  \author Pat Scott
///          (p.scott@imperial.ac.uk)
///  \date 2015 Jul
/// 
///  *********************************************

#include "gambit/Elements/sminputs.hpp"
#include "gambit/Elements/slhaea_helpers.hpp"
#include "gambit/Utils/standalone_error_handlers.hpp"


namespace Gambit
{

   // Fill SMInputs struct from an SLHAea object
   SMInputs fill_SMInputs_from_SLHAea(SLHAea::Coll& data)
   { 
      /// Construct from SMInputs block of SLHAea object 
      SMInputs sminputs;
  
      /// Defaults set from PDG 2014
      //  * from http://pdg.lbl.gov/2014/reviews/rpp2014-rev-standard-model.pdf
      // ** from http://pdg.lbl.gov/2014/reviews/rpp2014-rev-phys-constants.pdf
      //  § from http://pdg.lbl.gov/2014/tables/rpp2014-sum-leptons.pdf
      //  @ from http://pdg.lbl.gov/2014/tables/rpp2014-sum-quarks.pdf 
      //    (for reference: http://pdg.lbl.gov/2014/reviews/rpp2014-rev-quark-masses.pdf)
      // If more than one source listed, values are equal in both sources.
      // Values in GeV where units apply.
      sminputs.alphainv = Utils::SLHAea_get(data,"SMINPUTS",1 , 1.27940010E+02);   // alpha^{-1}(mZ)^MSbar *
      sminputs.GF       = Utils::SLHAea_get(data,"SMINPUTS",2 , 1.16637870E-05);   // G_Fermi **
      sminputs.alphaS   = Utils::SLHAea_get(data,"SMINPUTS",3 , 1.19300000E-01);   // alpha_s(mZ)^MSbar *
      sminputs.mZ       = Utils::SLHAea_get(data,"SMINPUTS",4 , 9.11880000E+01);   // mZ(pole) *   
      sminputs.mBmB     = Utils::SLHAea_get(data,"SMINPUTS",5 , 4.19900000E+00);   // mb(mb)^MSbar *
      sminputs.mT       = Utils::SLHAea_get(data,"SMINPUTS",6 , 1.73240000E+02);   // mtop(pole) *
      sminputs.mTau     = Utils::SLHAea_get(data,"SMINPUTS",7 , 1.77682000E+00);   // mtau(pole) §
      sminputs.mNu3     = Utils::SLHAea_get(data,"SMINPUTS",8 ,              0);   // mnu3(pole)

      sminputs.mE       = Utils::SLHAea_get(data,"SMINPUTS",11, 5.10998928E-04);   // melectron(pole) § **
      sminputs.mNu1     = Utils::SLHAea_get(data,"SMINPUTS",12,              0);   // mnu1(pole)
      sminputs.mMu      = Utils::SLHAea_get(data,"SMINPUTS",13, 1.05658372E-01);   // mmuon(pole) §
      sminputs.mNu2     = Utils::SLHAea_get(data,"SMINPUTS",14,              0);   // mnu2(pole)
      sminputs.mD       = Utils::SLHAea_get(data,"SMINPUTS",21, 4.80000000E-03);   // md(2 GeV)^MSbar @
      sminputs.mU       = Utils::SLHAea_get(data,"SMINPUTS",22, 2.30000000E-03);   // mu(2 GeV)^MSbar @
      sminputs.mS       = Utils::SLHAea_get(data,"SMINPUTS",23, 9.50000000E-02);   // ms(2 GeV)^MSbar @
      sminputs.mCmC     = Utils::SLHAea_get(data,"SMINPUTS",24, 1.27400000E+00);   // mc(mc)^MSbar *
 
      /// TODO: should I also add sin(theta_W) and Higgs pole mass? Not in SLHA, they are considered as derived parameters.
 
      /// CKM parameters
      // from http://pdg.lbl.gov/2014/reviews/rpp2014-rev-ckm-matrix.pdf
      sminputs.CKM.lambda = Utils::SLHAea_get(data,"VCKMIN",1, 0.22537);
      sminputs.CKM.A      = Utils::SLHAea_get(data,"VCKMIN",2, 0.814);
      sminputs.CKM.rhobar = Utils::SLHAea_get(data,"VCKMIN",3, 0.117);
      sminputs.CKM.etabar = Utils::SLHAea_get(data,"VCKMIN",4, 0.353);

      /// PMNS parameters
      // from     http://pdg.lbl.gov/2014/tables/rpp2014-sum-leptons.pdf
      // see also http://pdg.lbl.gov/2014/reviews/rpp2014-rev-neutrino-mixing.pdf
      // Note: angles given as x = sin^2(2*theta), so I have converted them as:
      // theta = 0.5*arcsin(sqrt(x))
      // CP-violating phases not measured, so I set them to zero. 
      sminputs.PMNS.theta12 = Utils::SLHAea_get(data,"UPMNSIN",1, 0.58376); // the solar angle
      sminputs.PMNS.theta23 = Utils::SLHAea_get(data,"UPMNSIN",2, 0.76958); // the atmospheric mixing angle
      sminputs.PMNS.theta13 = Utils::SLHAea_get(data,"UPMNSIN",3, 0.15495); // the reactor angle                                          
      sminputs.PMNS.delta13 = Utils::SLHAea_get(data,"UPMNSIN",4, 0);       // the Dirac CP-violating phase
      sminputs.PMNS.alpha1  = Utils::SLHAea_get(data,"UPMNSIN",5, 0);       // the first Majorana CP-violating phase
      sminputs.PMNS.alpha2  = Utils::SLHAea_get(data,"UPMNSIN",6, 0);       // the second CP-violating Majorana phase
  
      return sminputs;
   }

   // Add any missing information to the input SLHAea object
   // (since many codes will leave out information that they don't use)
   void SMInputs::add_to_SLHAea(SLHAea::Coll& data) const
   {
      // SMINPUTS block
      Utils::SLHAea_add(data,"SMINPUTS",1 , alphainv, "alpha^{-1}(mZ)^MSbar");
      Utils::SLHAea_add(data,"SMINPUTS",2 , GF      , "G_Fermi"             );
      Utils::SLHAea_add(data,"SMINPUTS",3 , alphaS  , "alpha_s(mZ)^MSbar"   );
      Utils::SLHAea_add(data,"SMINPUTS",4 , mZ      , "mZ(pole)"            );
      Utils::SLHAea_add(data,"SMINPUTS",5 , mBmB    , "mb(mb)^MSbar"        );
      Utils::SLHAea_add(data,"SMINPUTS",6 , mT      , "mtop(pole)"          );
      Utils::SLHAea_add(data,"SMINPUTS",7 , mTau    , "mtau(pole)"          );
      Utils::SLHAea_add(data,"SMINPUTS",8 , mNu3    , "mnu3(pole)"          );

      Utils::SLHAea_add(data,"SMINPUTS",11, mE      , "melectron(pole)"     );
      Utils::SLHAea_add(data,"SMINPUTS",12, mNu1    , "mnu1(pole)"          );
      Utils::SLHAea_add(data,"SMINPUTS",13, mMu     , "mmuon(pole)"         );
      Utils::SLHAea_add(data,"SMINPUTS",14, mNu2    , "mnu2(pole)"          );
      Utils::SLHAea_add(data,"SMINPUTS",21, mD      , "md(2 GeV)^MSbar"     );
      Utils::SLHAea_add(data,"SMINPUTS",22, mU      , "mu(2 GeV)^MSbar"     );
      Utils::SLHAea_add(data,"SMINPUTS",23, mS      , "ms(2 GeV)^MSbar"     );
      Utils::SLHAea_add(data,"SMINPUTS",24, mCmC    , "mc(mc)^MSbar"        );   

      // VCKMIN block
      Utils::SLHAea_add(data,"VCKMIN",1, CKM.lambda, "lambda");
      Utils::SLHAea_add(data,"VCKMIN",2, CKM.A     , "A"     );
      Utils::SLHAea_add(data,"VCKMIN",3, CKM.rhobar, "rhobar");
      Utils::SLHAea_add(data,"VCKMIN",4, CKM.etabar, "etabar");

      // UPMNSIN block
      Utils::SLHAea_add(data,"UPMNSIN",1, PMNS.theta12, "theta12 (solar angle)");
      Utils::SLHAea_add(data,"UPMNSIN",2, PMNS.theta23, "theta12 (atmospheric mixing angle)");
      Utils::SLHAea_add(data,"UPMNSIN",3, PMNS.theta13, "theta13");
      Utils::SLHAea_add(data,"UPMNSIN",4, PMNS.delta13, "delta13 (Dirac CP-violating phase)");
      Utils::SLHAea_add(data,"UPMNSIN",5, PMNS.alpha1 , "alpha1 (first Majorana CP-violating phase)" );
      Utils::SLHAea_add(data,"UPMNSIN",6, PMNS.alpha2 , "alpha2 (second CP-violating Majorana phase)");

      return;
   }

 
} // end namespace Gambit

