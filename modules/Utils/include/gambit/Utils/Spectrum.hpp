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
///  Access to the pole masses of either SubSpectrum is provided by the
///  "get_Pole_Mass" function, which will search both subspectra for a match.
///  For running parameters, one should access them via the getters of "LE" or 
///  "UV" subspectra.
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

#ifndef __Spectrum_hpp__
#define __Spectrum_hpp__

#include "gambit/Utils/SMInputs.hpp"
#include "gambit/Utils/SubSpectrum.hpp"

namespace Gambit {

/// Standard Model plus UV Model container class
class Spectrum
{
   private:
      std::unique_ptr<SubSpectrum> LE_new; // low energy model
      std::unique_ptr<SubSpectrum> UV_new; // UV model
      SubSpectrum* LE;
      SubSpectrum* UV;
      SMInputs SMINPUTS;
      bool initialised;
   
      void check_init() const {
        if(not initialised) utils_error().raise(LOCAL_INFO,"Access or deepcopy of empty Spectrum object attempted!");
      }

   /// Swap resources of two Spectrum objects
   // Note: Not a member function! This is an external function which is a friend of this class.
   friend void swap(Spectrum& first, Spectrum& second)
   {
       using std::swap; // enable ADL
       swap(first.LE, second.LE); 
       swap(first.UV, second.UV); 
       swap(first.LE_new, second.LE_new); 
       swap(first.UV_new, second.UV_new);
       swap(first.SMINPUTS, second.SMINPUTS);
       swap(first.initialised, second.initialised);
   }

   public:
      /// Need custom copy and move constructors plus copy-assignment operator
      /// in order to manage the unique_ptrs properly.
      /// @{

      /// Default constructor
      Spectrum() : initialised(false) {}
 
      /// Construct new object, cloning the SubSpectrum objects supplied and taking posession of them.
      Spectrum(const SubSpectrum& le, const SubSpectrum& uv, const SMInputs& smi)
        : LE_new(le.clone())
        , UV_new(uv.clone())
        , LE(LE_new.get())   
        , UV(UV_new.get())
        , SMINPUTS(smi)
        , initialised(true) 
      {}

      /// Construct new object, wrapping existing SubSpectrum objects
      //  Make sure the original objects don't get deleted before this wrapper does!
      Spectrum(SubSpectrum* const le, SubSpectrum* const uv, const SMInputs& smi)
        : LE(le)
        , UV(uv)
        , SMINPUTS(smi)
        , initialised(true) 
      {}

      /// Copy constructor, clones SubSpectrum objects.
      // Make a non-const copy in order to use e.g. RunBothToScale function.
      Spectrum(const Spectrum& other)
        : LE_new(other.clone_LE())
        , UV_new(other.clone_UV())
        , LE(LE_new.get())   
        , UV(UV_new.get())
        , SMINPUTS(other.SMINPUTS)
        , initialised(other.initialised) 
      {}

      /// Copy-assignment
      // Using "copy-and-swap" idiom
      Spectrum& operator=(Spectrum other)
      {
         swap(*this, other);
         return *this;
      } 

      /// Move constructor
      Spectrum(Spectrum&& other)
      {
         swap(*this, other);
      }

      /// @}

      /// Linked running
      // Only possible with non-const object
      void RunBothToScale(double scale)
      {
        LE->runningpars.RunToScale(scale);
        UV->runningpars.RunToScale(scale);
      }

      /// Standard getters
      // Return non-owning pointers. Make sure original Spectrum object doesn't
      // get destroyed before you finish using these or you will cause a segfault.
      const SubSpectrum* get_LE() const {check_init(); return LE;}
      const SubSpectrum* get_UV() const {check_init(); return UV;}
      const SMInputs& get_SMINPUTS() const {check_init(); return SMINPUTS;}

      /// Clone getters
      // To clone whole object, just use copy constructor. 
      std::unique_ptr<SubSpectrum> clone_LE() const {check_init(); return LE->clone();} 
      std::unique_ptr<SubSpectrum> clone_UV() const {check_init(); return UV->clone();} 
};


} // end namespace Gambit

#endif
