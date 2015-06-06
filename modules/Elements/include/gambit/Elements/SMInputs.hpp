//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Parameters used to define the Standard Model,
///  in SLHA2 format.
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

#ifndef __SMInputs_hpp__
#define __SMInputs_hpp__

// Could remove this dependency if we refactor a little
#include "slhaea.h"

namespace Gambit {

   // Container class for Standard Model input information (defined as in SLHA2)
   struct SMInputs
   {
      // Block SMINPUTS 
      // SLHA1
      double alphainv;  // 1: Inverse electromagnetic coupling at the Z pole in the MSbar scheme (with 5 active flavours)
      double GF;        // 2: Fermi constant (in units of GeV^-2)
      double alphaS;    // 3: Strong coupling at the Z pole in the MSbar scheme (with 5 active flavours). 
      double mZ;        // 4: Z pole mass
      double mBmB;      // 5: b quark running mass in the MSbar scheme (at mB)
      double mT;        // 6: Top quark pole mass
      double mTau;      // 7: Tau pole mass
   
      // SLHA2
      double mNu3;      // 8: Heaviest neutrino pole mass
     
      double mE;        // 11: Electron pole mass
      double mNu1;      // 12: Lightest neutrino pole mass
      double mMu;       // 13: Muon pole mass
      double mNu2;      // 14: Second lightest neutrino pole mass
     
      double mD;        // 21: d quark running mass in the MSbar scheme at 2 GeV        
      double mU;        // 22: u quark running mass in the MSbar scheme at 2 GeV        
      double mS;        // 23: s quark running mass in the MSbar scheme at 2 GeV        
      double mCmC;      // 24: c quark running mass in the MSbar scheme at mC      
   
      // Block VCKMIN
      // Note: from SLHA2 manual:
      // "The input CKM matrix in the Wolfenstein parameterisation
      // Note that present CKM studies do not precisely define a 
      // renormalisation scheme for this matrix since the electroweak 
      // effects that renormalise it are highly suppressed and 
      // generally neglected. We therefore assume that the CKM elements
      // given by PDG (or by UTFit[31] and CKMFitter [32], the main 
      // collaborations that extract the CKM parameters) refer to SM
      // MSbar quantities defined at Q=mZ, to avoid any possible ambiguity."
      struct CKMdef { 
        double lambda;
        double A;  
        double rhobar;
        double etabar;
      };
      CKMdef CKM;

      // Block UPMNSIN
      // PDG parameterisation in terms of rotation angles (all in radians)
      struct PMNSdef {
        double theta12; // the solar angle
        double theta23; // the atmospheric mixing angle
        double theta13;
        double delta13; // the Dirac CP-violating phase
        double alpha1;  // the first Majorana CP-violating phase
        double alpha2;  // the second CP-violating Majorana phase
      };
      PMNSdef PMNS;

      // Add any missing information to the input SLHAea object
      // (since many codes will leave out information that they don't use)
      void add_to_SLHAea(SLHAea::Coll& data /*modify*/) const;
   };
   
   // Get an entry from an SLHAea object, with some error checking
   double SLHAea_get(const SLHAea::Coll& data, const std::string& block, const int index);

   // Add an entry to an SLHAea object if it doesn't already exist (unless overwrite=true)
   template <typename VALTYPE>
   void SLHAea_add(SLHAea::Coll& data /*modify*/, const std::string& block, const int index, const VALTYPE value, const std::string& comment="", const bool overwrite=false)
   {
     // Check if block exists
     try
     {
       data.at(block);
     }
     catch (const std::out_of_range& e)
     {
       // Nope; add it.
       data[block][""] << "BLOCK" << block;  
     }
     // Check for existing entry
     if(not overwrite)
     {
       try
       {
         data.at(block).at(index).at(1);
         // Entry exists, no further action required
         return;
       }
       catch (const std::out_of_range& e) { /*entry doesn't exist; continue with writing*/ } 
     }
     std::ostringstream commentwhash;
     commentwhash << "# " << comment;
     //std::cout << "Adding entry to block "<<block<<": "<<index<<"\t"<<value<<"\t"<<commentwhash.str()<<std::endl;
     data[block][""] << index << value << commentwhash.str();
     return;
   }

   // Fill SMInputs struct from an SLHAea object
   SMInputs fill_SMInputs_from_SLHAea(SLHAea::Coll&);

} // end namespace Gambit

#endif
