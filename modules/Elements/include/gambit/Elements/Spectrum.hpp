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

#include "gambit/Elements/SMInputs.hpp"
#include "gambit/Elements/SubSpectrum.hpp"
#include "gambit/Models/partmap.hpp"
#include "SLHAea/slhaea.h"

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
      void check_init() const;

   /// Swap resources of two Spectrum objects
   // Note: Not a member function! This is an external function which is a friend of this class.
   friend void swap(Spectrum& first, Spectrum& second);

   public:
      /// @{ Constructors/Destructors
      /// Need custom copy and move constructors plus copy-assignment operator
      /// in order to manage the unique_ptrs properly.

      /// Default constructor
      Spectrum();
      /// Construct new object, cloning the SubSpectrum objects supplied and taking possession of them.
      Spectrum(const SubSpectrum& le, const SubSpectrum& uv, const SMInputs& smi);
      /// Construct new object, wrapping existing SubSpectrum objects
      ///  Make sure the original objects don't get deleted before this wrapper does!
      Spectrum(SubSpectrum* const le, SubSpectrum* const uv, const SMInputs& smi);
      /// Copy constructor, clones SubSpectrum objects.
      /// Make a non-const copy in order to use e.g. RunBothToScale function.
      Spectrum(const Spectrum& other);
      /// Copy-assignment
      /// Using "copy-and-swap" idiom
      Spectrum& operator=(Spectrum other);
      /// Move constructor
      Spectrum(Spectrum&& other);

      /// @}

      /// Linked running
      /// Only possible with non-const object
      void RunBothToScale(double scale);

      /// @{ Standard SubSpectrum getters
      /// Return non-owning pointers. Make sure original Spectrum object doesn't
      /// get destroyed before you finish using these or you will cause a segfault.
      const SubSpectrum* get_LE() const; 
      const SubSpectrum* get_UV() const; 
      const SMInputs& get_SMInputs() const;
      /// @}

      /// @{ Clone SubSpectrum getters
      /// To clone whole object, just use copy constructor. 
      std::unique_ptr<SubSpectrum> clone_LE() const; 
      std::unique_ptr<SubSpectrum> clone_UV() const; 
      /// @}

      /// @{ Pole mass getters
      /// "Shortcut" getters to access pole masses in hosted SubSpectrum objects.
      /// UV object given higher priority; if no match found, LE object will be 
      /// checked. If still no match, error is thrown.
      bool   has_Pole_Mass(const std::string& mass) const; 
      double get_Pole_Mass(const std::string& mass) const; 
      bool   has_Pole_Mass(const std::string& mass, const int index) const; 
      double get_Pole_Mass(const std::string& mass, const int index) const; 
      DECLARE_PDG_GETTERS(Pole_Mass) // Overloads for PDG types
      /// @}

      /// SLHAea object getter
      /// "Shortcut" getter. Tries to retrieve SLHAea object from UV SubSpectrum. If this fails,
      /// attempts to get it from the LE SubSpectrum (though probably this will never work).
      /// Error raised if this still fails.
      SLHAea::Coll getSLHAea() const;
};
/// Overloads for PDG types
/// These just convert the types and then call the properly defined functions
/// (Note; they are inline due to their use in SubSpectrum.hpp, so need to be in header)
DEFINE_PDG_GETTERS(Spectrum,Pole_Mass)

} // end namespace Gambit

#endif
