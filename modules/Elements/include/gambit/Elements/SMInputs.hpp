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

   // Container class for SMINPUTS information (defined as in SLHA2)
   struct SMInputs
   {
      // Set some defaults?
   
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
   
      // CKM? PMNS? 
   
   };
   
   // Get an entry from an SLHAea object, with some error checking
   double SLHAea_get(const SLHAea::Coll& data, const std::string& block, const int index);
   
   // Fill SMInputs struct from an SLHAea object
   SMInputs fill_SMInputs_from_SLHAea(SLHAea::Coll&);

} // end namespace Gambit

#endif
