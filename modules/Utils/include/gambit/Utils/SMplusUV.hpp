//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  This class is used to deliver both information defined in the Standard
///  Model (or potentially just QED X QCD) as a low-energy effective theory (as
///  opposed to correspending information defined in a UV model) as well as a
///  corresponding UV theory. Parameters defined in the low-energy model are
///  often used as input to a physics calculators. In addition, parameters used
///  to define the Standard Model, in SLHA2 format, are provided in the 
///  SMINPUTS data member.
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

#ifndef __SMplusUV_hpp__
#define __SMplusUV_hpp__

#include "gambit/Utils/Spectrum.hpp"

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
   double mU;        // 21: u quark running mass in the MSbar scheme at 2 GeV        
   double mS;        // 21: s quark running mass in the MSbar scheme at 2 GeV        
   double mCmC;      // 21: c quark running mass in the MSbar scheme at mC      

   // CKM? PMNS? 
};

/// Standard Model plus UV Model container class
class SMplusUV
{
   private:
      std::unique_ptr<Spectrum> SM_new;
      std::unique_ptr<Spectrum> UV_new;
      Spectrum* SM;
      Spectrum* UV;
      SMInputs SMINPUTS;
      bool initialised;
   
      void check_init() const {
        if(not initialised) utils_error().raise(LOCAL_INFO,"Access or deepcopy of empty SMplusUV object attempted!");
      }

   /// Swap resources of two SMplusUV objects
   // Note: Not a member function! This is an external function which is a friend of this class.
   friend void swap(SMplusUV& first, SMplusUV& second)
   {
       using std::swap; // enable ADL
       swap(first.SM, second.SM); 
       swap(first.UV, second.UV); 
       swap(first.SM_new, second.SM_new); 
       swap(first.UV_new, second.UV_new);
       swap(first.SMINPUTS, second.SMINPUTS);
       swap(first.initialised, second.initialised);
   }

   public:
      /// Need custom copy and move constructors plus copy-assignment operator
      /// in order to manage the unique_ptrs properly.
      /// @{

      /// Default constructor
      SMplusUV() : initialised(false) {}
 
      /// Construct new object, cloning the Spectrum objects supplied and taking posession of them.
      SMplusUV(const Spectrum& sm, const Spectrum& uv, const SMInputs& smi)
        : SM_new(sm.clone())
        , UV_new(uv.clone())
        , SM(SM_new.get())   
        , UV(UV_new.get())
        , SMINPUTS(smi)
        , initialised(true) 
      {}

      /// Construct new object, wrapping existing Spectrum objects
      //  Make sure the original objects don't get deleted before this wrapper does!
      SMplusUV(Spectrum* const sm, Spectrum* const uv, const SMInputs& smi)
        : SM(sm)
        , UV(uv)
        , SMINPUTS(smi)
        , initialised(true) 
      {}

      /// Copy constructor, clones Spectrum objects.
      // Make a non-const copy in order to use e.g. RunBothToScale function.
      SMplusUV(const SMplusUV& other)
        : SM_new(other.clone_SM())
        , UV_new(other.clone_UV())
        , SM(SM_new.get())   
        , UV(UV_new.get())
        , SMINPUTS(other.SMINPUTS)
        , initialised(other.initialised) 
      {}

      /// Copy-assignment
      // Using "copy-and-swap" idiom
      SMplusUV& operator=(SMplusUV other)
      {
         swap(*this, other);
         return *this;
      } 

      /// Move constructor
      SMplusUV(SMplusUV&& other)
      {
         swap(*this, other);
      }

      /// @}

      /// Linked running
      // Only possible with non-const object
      void RunBothToScale(double scale)
      {
        SM->runningpars.RunToScale(scale);
        UV->runningpars.RunToScale(scale);
      }

      /// Standard getters
      // Return non-owning pointers. Make sure original SMplusUV object doesn't
      // get destroyed before you finish using these or you will cause a segfault.
      const Spectrum* get_SM() const {check_init(); return SM;}
      const Spectrum* get_UV() const {check_init(); return UV;}
      const SMInputs& get_SMINPUTS() const {check_init(); return SMINPUTS;}

      /// Clone getters
      // To clone whole object, just use copy constructor. 
      std::unique_ptr<Spectrum> clone_SM() const {check_init(); return SM->clone();} 
      std::unique_ptr<Spectrum> clone_UV() const {check_init(); return UV->clone();} 
};

/// Typedef for rollcall headers; I think the space would kill the type harvester.
typedef const SMplusUV CSMplusUV; 

} // end namespace Gambit

#endif
