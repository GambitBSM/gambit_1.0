#pragma once

#include "gambit/cmake/cmake_variables.hpp"
#include "gambit/ColliderBit/detectors/BaseDetector.hpp"

#ifndef EXCLUDE_DELPHES

namespace Gambit {
  namespace ColliderBit {


    /// Forward declaration of a struct to hide Delphes-type member variables
    class DelphesVanillaImpl;


    /// @note Abstract base class Delphes_ToHEPUtilsBase
    class DelphesVanilla : public BaseDetector<Pythia8::Event, HEPUtils::Event> {
    protected:

      /// @name Member variable abstraction via a forward-declared type
      /// @note Abstraction means that external types are hidden cf. the PIMPL idiom
      DelphesVanillaImpl* _impl;

    public:

      /// @name Construction, destruction, and recycling
      //@{
      DelphesVanilla() : _impl(nullptr) { }

      ~DelphesVanilla() { clear(); }

      /// Reset this instance
      void clear();
      //@}

      /// @name Initialization functions
      //@{
      public:
        /// @brief Settings parsing and initialization for each sub-class.
        void init(const std::vector<std::string>&);
      //@}

      /// @name Event detection simulation.
      //@{
      public:
        /// @brief Convert the input event to a format Delphes can use.
        void convertInput(const Pythia8::Event&) const;
        /// @brief Convert the output event to the standard type used in Gambit.
        void convertOutput(HEPUtils::Event&) const;
        /// @brief Process the event with the detector simulation.
        void processEvent(const Pythia8::Event& eventIn, HEPUtils::Event& eventOut) const;
      //@}

    };

  }
}
#endif // not defined EXCLUDE_DELPHES
