#pragma once
#include "gambit/ColliderBit/BaseCollider.hpp"

namespace Gambit {
  namespace ColliderBit {

    /// @brief A specializable, recyclable class interfacing ColliderBit and Pythia.
    class SpecializablePythia : public BaseCollider<Pythia8::Event> {
      /// @name Pythia-specific variables
      //@{
      protected:
        Pythia8::Pythia* _pythiaInstance;
      public:
        Pythia8::Pythia* const pythia() const { return _pythiaInstance; }
      //@}

      /// @name Specialization function pointers
      //@{
      protected:
        std::vector<std::string> _pythiaSettings;
        void (*_specialInit)(SpecializablePythia*);
      //@}

      /// @name Custom exceptions
      //@{
      protected:
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
      //@}

      /// @name Construction, Destruction, and Recycling
      //@{
      public:
        SpecializablePythia() : _pythiaInstance(nullptr) { }
        ~SpecializablePythia() { _pythiaSettings.clear(); delete _pythiaInstance; }
        void clear() { _pythiaSettings.clear(); delete _pythiaInstance; _pythiaInstance=nullptr; }
      //@}

      /// @name (Re-)Initialization functions
      //@{
      public:
        /// @brief Add a command to the list of settings used by "init"
        void addToSettings(const std::string& command) { _pythiaSettings.push_back(command); }

        /// @brief General init for any Pythia interface to Gambit.
        void init(const std::vector<std::string>&);

        /// @brief Specialize this Pythia interface to Gambit with a specialization function.
        void setSpecialization(const std::string&);
      //@}

      /// @name Event generation functions
      //@{
      public:
        /// @brief Event generation for any Pythia interface to Gambit.
        void nextEvent(EventType& event) const {
          // Try to make and populate an event
          if (!_pythiaInstance->next()) throw EventFailureError();
          event = _pythiaInstance->event;
        }
      //@}

     };

  }
}
