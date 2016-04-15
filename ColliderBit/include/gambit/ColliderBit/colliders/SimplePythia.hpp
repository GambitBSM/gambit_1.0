#pragma once
//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  The SimplePythia class.

#include "gambit/ColliderBit/colliders/BaseCollider.hpp"

namespace Gambit {
  namespace ColliderBit {

    /// A simple, recyclable class interfacing ColliderBit and Pythia.
    class SimplePythia : public BaseCollider<Pythia8::Event> {
      protected:
        Pythia8::Pythia* _pythiaInstance;

      /// @name Getters:
      //@{
      public:
        /// Get the Pythia instance.
        const Pythia8::Pythia* pythia() const { return _pythiaInstance; }
      //@}

      /// @name Construction, Destruction, and Recycling:
      //@{
      public:
        SimplePythia() : _pythiaInstance(nullptr) { }
        ~SimplePythia() { delete _pythiaInstance; }
        /// Reset this instance for reuse, avoiding the need for "new" or "delete".
        void clear() { delete _pythiaInstance; _pythiaInstance=nullptr; }
      //@}

      /// @name (Re-)Initialization functions:
      //@{
      public:
        /// General init for any SimplePythia.
        /// @note A string denoting the path to Pythia's xmldoc directory is
        /// @note assumed to be at the end of the settings vector:
        void init(const std::vector<std::string>& externalSettings) {
          std::vector<std::string> settingsCopy = externalSettings;
          std::string pythiaDocPath = settingsCopy.back();
          settingsCopy.pop_back();

          if (!_pythiaInstance)
            _pythiaInstance = new Pythia8::Pythia(pythiaDocPath);
          // Use all settings to instantiate and initialize PythiaBase
          for (const auto command : settingsCopy)
            _pythiaInstance->readString(command);
        }

        /// SimplePythia needs settings... The no settings version throws an error.
        void init() { throw "SimplePythia demands settings. Use the other init function."; }
      //@}

      /// @name Event generation and cross section functions:
      //@{
      public:
        /// Event generation for any Pythia interface to Gambit.
        void nextEvent(EventType& event) const {
          _pythiaInstance->next();
          event = _pythiaInstance->event;
        }

        /// Report the cross section (in pb) at the end of the subprocess.
        double xsec_pb() const { return _pythiaInstance->info.sigmaGen() * 1e9; }
        /// Report the cross section uncertainty (in pb) at the end of the subprocess.
        double xsecErr_pb() const { return _pythiaInstance->info.sigmaErr() * 1e9; }
      //@}
     };

  }
}
