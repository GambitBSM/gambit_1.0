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
///  *********************************************

#include "gambit/Utils/standalone_error_handlers.hpp"
#include "gambit/Elements/SMInputs.hpp"

namespace Gambit {

   // Get an entry from an SLHAea object, with some error checking
   double SLHAea_get(const SLHAea::Coll& data, const std::string& block, const int index)
   {
      double output;
      try {
        output = SLHAea::to<double>(data.at(block).at(index).at(1));
      }
      catch (const std::out_of_range& e) {
        std::ostringstream errmsg;
        errmsg << "Error accessing data at index "<<index<<" of block "<<block<<". Please check that the SLHAea object was properly filled." << std::endl;
        errmsg  << "(Received out_of_range error from SLHAea class with message: " << e.what() << ")";
        utils_error().raise(LOCAL_INFO,errmsg.str());    
      }
      return output;
   }

   double SLHAea_get_or_def(const SLHAea::Coll& data, const std::string& block, const int index, const double defvalue)
   {
      double output;
      try {
        output = SLHAea::to<double>(data.at(block).at(index).at(1));
      }
      catch (const std::out_of_range& e) {
        std::ostringstream warn;
        warn << "Warning! No entry found at index "<<index<<" of block "<<block<<". Using default value: "<<defvalue<< std::endl;
        utils_warning().raise(LOCAL_INFO,warn.str());    
        output = defvalue;
      }
      return output;
   }

   // Add an entry to an SLHAea object if it doesn't already exist
   void SLHAea_add(SLHAea::Coll& data /*modify*/, const std::string& block, const int index, const double value, const std::string& comment, const bool overwrite)
   {
     // Check if block exists
     try {
       data.at(block);
     }
     catch (const std::out_of_range& e) {
       // Nope; add it.
       data[block][""] << "BLOCK" << block;  
     }
     // Check for existing entry
     if(not overwrite) {
       try {
         data.at(block).at(index).at(1);
         // Entry exists, no further action required
         return;
       }
       catch (const std::out_of_range& e) {
         // entry doesn't exist; continue with writing
       } 
     }
     std::ostringstream commentwhash;
     commentwhash << "# " << comment;
     std::cout << "Adding entry to block "<<block<<": "<<index<<"\t"<<value<<"\t"<<commentwhash.str()<<std::endl;
     data[block][""] << index << value << commentwhash.str();
     return;
   }

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
      sminputs.alphainv = SLHAea_get_or_def(data,"SMINPUTS",1 , 1.27940010E+02);   // alpha^{-1}(mZ)^MSbar *
      sminputs.GF       = SLHAea_get_or_def(data,"SMINPUTS",2 , 1.16637870E-05);   // G_Fermi **
      sminputs.alphaS   = SLHAea_get_or_def(data,"SMINPUTS",3 , 1.19300000E-01);   // alpha_s(mZ)^MSbar *
      sminputs.mZ       = SLHAea_get_or_def(data,"SMINPUTS",4 , 9.11880000E+01);   // mZ(pole) *   
      sminputs.mBmB     = SLHAea_get_or_def(data,"SMINPUTS",5 , 4.19900000E+00);   // mb(mb)^MSbar *
      sminputs.mT       = SLHAea_get_or_def(data,"SMINPUTS",6 , 1.73240000E+02);   // mtop(pole) *
      sminputs.mTau     = SLHAea_get_or_def(data,"SMINPUTS",7 , 1.77682000E+00);   // mtau(pole) §
      sminputs.mNu3     = SLHAea_get_or_def(data,"SMINPUTS",8 ,              0);   // mnu3(pole)

      sminputs.mE       = SLHAea_get_or_def(data,"SMINPUTS",11, 5.10998928E-04);   // melectron(pole) § **
      sminputs.mNu1     = SLHAea_get_or_def(data,"SMINPUTS",12,              0);   // mnu1(pole)
      sminputs.mMu      = SLHAea_get_or_def(data,"SMINPUTS",13, 1.05658372E-01);   // mmuon(pole) §
      sminputs.mNu2     = SLHAea_get_or_def(data,"SMINPUTS",14,              0);   // mnu2(pole)
      sminputs.mD       = SLHAea_get_or_def(data,"SMINPUTS",21, 4.80000000E-03);   // md(2 GeV)^MSbar @
      sminputs.mU       = SLHAea_get_or_def(data,"SMINPUTS",22, 2.30000000E-03);   // mu(2 GeV)^MSbar @
      sminputs.mS       = SLHAea_get_or_def(data,"SMINPUTS",23, 9.50000000E-02);   // ms(2 GeV)^MSbar @
      sminputs.mCmC     = SLHAea_get_or_def(data,"SMINPUTS",24, 1.27400000E+00);   // mc(mc)^MSbar *
 
      /// TODO: should I also add sin(theta_W) and Higgs pole mass? Not in SLHA, they are considered as derived parameters.
 
      /// CKM parameters
      // from http://pdg.lbl.gov/2014/reviews/rpp2014-rev-ckm-matrix.pdf
      sminputs.CKM.lambda = SLHAea_get_or_def(data,"VCKMIN",1, 0.22537);
      sminputs.CKM.A      = SLHAea_get_or_def(data,"VCKMIN",2, 0.814);
      sminputs.CKM.rhobar = SLHAea_get_or_def(data,"VCKMIN",3, 0.117);
      sminputs.CKM.etabar = SLHAea_get_or_def(data,"VCKMIN",4, 0.353);

      /// PMNS parameters
      // from     http://pdg.lbl.gov/2014/tables/rpp2014-sum-leptons.pdf
      // see also http://pdg.lbl.gov/2014/reviews/rpp2014-rev-neutrino-mixing.pdf
      // Note: angles given as x = sin^2(2*theta), so I have converted them as:
      // theta = 0.5*arcsin(sqrt(x))
      // CP-violating phases not measured, so I set them to zero. 
      sminputs.PMNS.theta12 = SLHAea_get_or_def(data,"UPMNSIN",1, 0.58376); // the solar angle
      sminputs.PMNS.theta23 = SLHAea_get_or_def(data,"UPMNSIN",2, 0.76958); // the atmospheric mixing angle
      sminputs.PMNS.theta13 = SLHAea_get_or_def(data,"UPMNSIN",3, 0.15495);                                           
      sminputs.PMNS.delta13 = SLHAea_get_or_def(data,"UPMNSIN",4, 0);       // the Dirac CP-violating phase
      sminputs.PMNS.alpha1  = SLHAea_get_or_def(data,"UPMNSIN",5, 0);       // the first Majorana CP-violating phase
      sminputs.PMNS.alpha2  = SLHAea_get_or_def(data,"UPMNSIN",6, 0);       // the second CP-violating Majorana phase
  
      return sminputs;
   }

   // Add any missing information to the input SLHAea object
   // (since many codes will leave out information that they don't use)
   void SMInputs::add_to_SLHAea(SLHAea::Coll& data) const
   {
      // SMINPUTS block
      SLHAea_add(data,"SMINPUTS",1 , alphainv, "alpha^{-1}(mZ)^MSbar");
      SLHAea_add(data,"SMINPUTS",2 , GF      , "G_Fermi"             );
      SLHAea_add(data,"SMINPUTS",3 , alphaS  , "alpha_s(mZ)^MSbar"   );
      SLHAea_add(data,"SMINPUTS",4 , mZ      , "mZ(pole)"            );
      SLHAea_add(data,"SMINPUTS",5 , mBmB    , "mb(mb)^MSbar"        );
      SLHAea_add(data,"SMINPUTS",6 , mT      , "mtop(pole)"          );
      SLHAea_add(data,"SMINPUTS",7 , mTau    , "mtau(pole)"          );
      SLHAea_add(data,"SMINPUTS",8 , mNu3    , "mnu3(pole)"          );

      SLHAea_add(data,"SMINPUTS",11, mE      , "melectron(pole)"     );
      SLHAea_add(data,"SMINPUTS",12, mNu1    , "mnu1(pole)"          );
      SLHAea_add(data,"SMINPUTS",13, mMu     , "mmuon(pole)"         );
      SLHAea_add(data,"SMINPUTS",14, mNu2    , "mnu2(pole)"          );
      SLHAea_add(data,"SMINPUTS",21, mD      , "md(2 GeV)^MSbar"     );
      SLHAea_add(data,"SMINPUTS",22, mU      , "mu(2 GeV)^MSbar"     );
      SLHAea_add(data,"SMINPUTS",23, mS      , "ms(2 GeV)^MSbar"     );
      SLHAea_add(data,"SMINPUTS",24, mCmC    , "mc(mc)^MSbar"        );   

      // VCKMIN block
      SLHAea_add(data,"VCKMIN",1, CKM.lambda, "lambda");
      SLHAea_add(data,"VCKMIN",2, CKM.A     , "A"     );
      SLHAea_add(data,"VCKMIN",3, CKM.rhobar, "rhobar");
      SLHAea_add(data,"VCKMIN",4, CKM.etabar, "etabar");

      // UPMNSIN block
      SLHAea_add(data,"UPMNSIN",1, PMNS.theta12, "theta12 (solar angle)");
      SLHAea_add(data,"UPMNSIN",2, PMNS.theta23, "theta12 (atmospheric mixing angle)");
      SLHAea_add(data,"UPMNSIN",3, PMNS.theta13, "theta13");
      SLHAea_add(data,"UPMNSIN",4, PMNS.delta13, "delta13 (Dirac CP-violating phase)");
      SLHAea_add(data,"UPMNSIN",5, PMNS.alpha1 , "alpha1 (first Majorana CP-violating phase)" );
      SLHAea_add(data,"UPMNSIN",6, PMNS.alpha2 , "alpha2 (second CP-violating Majorana phase)");

      return;
   }

 
} // end namespace Gambit

