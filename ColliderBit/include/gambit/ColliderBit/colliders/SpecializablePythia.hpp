#pragma once
//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  The SpecializablePythia class.

#include <ostream>
// #include "gambit/Elements/gambit_module_headers.hpp"
// #include "gambit/ColliderBit/ColliderBit_rollcall.hpp"
#include "gambit/ColliderBit/colliders/BaseCollider.hpp"
#include "SLHAea/slhaea.h"

namespace Gambit {
  namespace ColliderBit {

    /// A specializable, recyclable class interfacing ColliderBit and Pythia.
    class SpecializablePythia : public BaseCollider<Pythia8::Event>
    {
      protected:
        Pythia8::Pythia* _pythiaInstance;
        Pythia8::Pythia* _pythiaBase;
        std::vector<std::string> _pythiaSettings;
        void (*_specialInit)(SpecializablePythia*);

      /// @name Getters:
      //@{
      public:
        /// Get the Pythia instance.
        const Pythia8::Pythia* pythia() const { return _pythiaInstance; }
      //@}

      /// @name Custom exceptions:
      ///@{
      public:
        /// An exception for when Pythia fails to initialize.
        class InitializationError : public std::exception
        {
          virtual const char* what() const throw()
          {
            return "Pythia could not initialize.";
          }
        };
        /// An exception for when Pythia fails to generate events.
        class EventGenerationError : public std::exception
        {
          virtual const char* what() const throw()
          {
            return "Pythia could not make the next event.";
          }
        };
      ///@}

      /// @name Construction, Destruction, and Recycling:
      ///@{
      public:
        SpecializablePythia() : _pythiaInstance(nullptr), _pythiaBase(nullptr) {}
        ~SpecializablePythia();
        void clear();
      ///@}

      /// @name (Re-)Initialization functions
      ///@{
      public:
        /// Add a command to the list of settings used by "init".
        void addToSettings(const std::string& command) { _pythiaSettings.push_back(command); }
        /// Create a useless Pythia instance just to print the banner.
        void banner(const std::string pythiaDocPath) { Pythia8::Pythia myPythia(pythiaDocPath); }
        /// Initialize with no settings (error): override version.
        void init() { std::cout<<"No settings given to Pythia!\n\n"; throw InitializationError(); }

        /// Initialize from some external settings: override version.
        /// @note A string denoting the path to Pythia's xmldoc directory is
        /// @note assumed to be at the end of the settings vector:
        void init(const std::vector<std::string>& externalSettings)
        {
          std::string docPath = externalSettings.back();
          std::vector<std::string> settings(externalSettings);
          settings.pop_back();
          init(docPath, settings);
        }

        /// Initialize from some external settings.
        /// @note This override is most commonly used in ColliderBit.
        void init(const std::string pythiaDocPath,
                  const std::vector<std::string>& externalSettings,
                  const SLHAea::Coll* slhaea=nullptr, std::ostream& os=std::cout);
        /// Initialize from some external settings.
        void init_user_model(const std::string pythiaDocPath,
                             const std::vector<std::string>& externalSettings,
                             const SLHAea::Coll* slhaea=nullptr, std::ostream& os=std::cout);

        /// Initialize from some external settings, assuming no given SLHAea instance.
        void init(const std::string pythiaDocPath,
                  const std::vector<std::string>& externalSettings, std::ostream& os)
        {
          init(pythiaDocPath, externalSettings, nullptr, os);
        }
        /// Initialize from some external settings, assuming no given SLHAea instance.
        void init_user_model(const std::string pythiaDocPath,
                             const std::vector<std::string>& externalSettings, std::ostream& os)
        {
          init_user_model(pythiaDocPath, externalSettings, nullptr, os);
        }

        /// Specialize this Pythia interface to Gambit with a specialization function.
        void resetSpecialization(const std::string&);
      ///@}

      /// @name Event generation and cross section functions
      ///@{
      public:
        /// Event generation for any Pythia interface to Gambit.
        void nextEvent(EventType& event) const
        {
          // Try to make and populate an event
          bool accepted_event = _pythiaInstance->next();
          event = _pythiaInstance->event;
          if (!accepted_event)
          {
            throw EventGenerationError();
          }
        }

        /// Report the cross section (in pb) at the end of the subprocess.
        double xsec_pb() const { return _pythiaInstance->info.sigmaGen() * 1e9; }
        /// Report the cross section uncertainty (in pb) at the end of the subprocess.
        double xsecErr_pb() const { return _pythiaInstance->info.sigmaErr() * 1e9; }
      ///@}
     };

  }
}
