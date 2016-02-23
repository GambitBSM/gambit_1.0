#pragma once
#include <ostream>
#include "gambit/ColliderBit/colliders/BaseCollider.hpp"
#include "SLHAea/slhaea.h"

namespace Gambit
{

  namespace ColliderBit
  {

    /// @brief A specializable, recyclable class interfacing ColliderBit and Pythia.
    class SpecializablePythia : public BaseCollider<Pythia8::Event> {

      protected:

        /// @name Pythia-specific variables
        ///@{
        Pythia8::Pythia* _pythiaInstance;
        Pythia8::Pythia* _pythiaBase;
        ///@}

        /// @name Specialization function pointers
        ///@{
        std::vector<std::string> _pythiaSettings;
        void (*_specialInit)(SpecializablePythia*);
        ///@}

      public:

        const Pythia8::Pythia* pythia() const { return _pythiaInstance; }

        /// @name Custom exceptions
        ///@{

        class InitializationError : public std::exception {
          virtual const char* what() const throw() {
            return "Pythia could not initialize.";
          }
        };

        class EventFailureError : public std::exception {
          virtual const char* what() const throw() {
            return "Pythia could not make the next event.";
          }
        };

        ///@}

        /// @name Construction, Destruction, and Recycling
        ///@{
        SpecializablePythia() : _pythiaInstance(nullptr), _pythiaBase(nullptr) {}        
        ~SpecializablePythia();
        void clear();
        ///@}

        /// @name (Re-)Initialization functions
        ///@{

        /// @brief Add a command to the list of settings used by "init"
        void addToSettings(const std::string& command) { _pythiaSettings.push_back(command); }

        /// @brief Create a useless Pythia instance just to print the banner
        void banner(const std::string pythiaDocPath) { Pythia8::Pythia myPythia(pythiaDocPath); }

        /// @brief Initialize with no settings (error): override version
        void init() { std::cout<<"No settings given to Pythia!\n\n"; throw InitializationError(); }

        /// @brief Initialize from some external settings: override version
        void init(const std::vector<std::string>& externalSettings) {
          std::string docPath = externalSettings.back();
          std::vector<std::string> settings(externalSettings);
          settings.pop_back();
          init(docPath, settings);
        }

        /// @brief Initialize from some external settings
        void init(const std::string pythiaDocPath,
                  const std::vector<std::string>& externalSettings,
                  const SLHAea::Coll* slhaea=nullptr, std::ostream& os=std::cout);

        /// @brief Special initialization for externally provided process generation.
        void init_external(const std::string pythiaDocPath,
                           const std::vector<std::string>& externalSettings,
                           const SLHAea::Coll* slhaea=nullptr, std::ostream& os=std::cout);

        void init(const std::string pythiaDocPath,
                  const std::vector<std::string>& externalSettings, std::ostream& os) {
          init(pythiaDocPath, externalSettings, nullptr, os);
        }

        void init_external(const std::string pythiaDocPath,
                           const std::vector<std::string>& externalSettings, std::ostream& os) {
          init_external(pythiaDocPath, externalSettings, nullptr, os);
        }
      
        /// @brief Specialize this Pythia interface to Gambit with a specialization function.
        void resetSpecialization(const std::string&);

        ///@}

        /// @name Event generation and cross section functions
        ///@{

        /// @brief Event generation for any Pythia interface to Gambit.
        void nextEvent(EventType& event) const {
          // Try to make and populate an event
          if (!_pythiaInstance->next()) throw EventFailureError();
          event = _pythiaInstance->event;
        }

        /// @brief Report the cross section (in pb) at the end of the subprocess.
        double xsec_pb() const { return _pythiaInstance->info.sigmaGen() * 1e9; }
        /// @brief Report the cross section uncertainty (in pb) at the end of the subprocess.
        double xsecErr_pb() const { return _pythiaInstance->info.sigmaErr() * 1e9; }

        ///@}

     };

  }
}
