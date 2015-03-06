#pragma once
#include <string>
#include <vector>
#include <exception>

/// @note To configure a new collider, follow these steps:
/// @note (To configure a new subprocess group, only do STEPS >= 5)
/// @note STEP1)  BOSS your favorite collider simulator. Then:
#include "gambit/Utils/shared_types.hpp"
#include "gambit/ColliderBit/ColliderBit_macros.hpp"

namespace Gambit {
  namespace ColliderBit {

    /// @note Abstract base class Collider
    template <typename EventT>
    class Collider {
    public:
      typedef EventT EventType;
      Collider() { }
      virtual ~Collider() { }

      /// @name Initialization functions
      //@{

      /// @brief Settings parsing and initialization for each sub-class.
      virtual void init(const std::vector<std::string>& settings) = 0;
      //@}

      /// @name Event generation function. Pure virtual; must override.
      //@{
        //@note Gambit requires a const function, so here it is pure virtual.
      virtual void nextEvent(EventT& event) const = 0;
        //@note The non-const version might not even be used.
      virtual void nextEvent(EventT& event) = 0;
      //@}

    };


/// @note STEP2)  Sub-class Collider. Give the type of event as the Collider template parameter.
    class TemplatePythia : public Collider<Pythia8::Event> {
      protected:
        Pythia8::Pythia* _pythiaInstance;
        std::vector<std::string> _settings;

        /// @note ColliderBit will catch this, then use ColliderBit_error()
        class EventFailureError : public std::exception {
          virtual const char* what() const throw() {
            return "For whatever reason, Pythia could not make the next event.";
          }
        };

      public:
        TemplatePythia() { _pythiaInstance=nullptr; }
        ~TemplatePythia() { delete _pythiaInstance; }

        /// @name Member variable access
        //@{
        const std::vector<std::string> getSettings() const { return _settings; }
        Pythia8::Pythia* pythia() { return _pythiaInstance; }
        //@}

        /// @name (Re-)Initialization functions
        //@{
        void reset() { _settings.clear(); delete _pythiaInstance; }
        void set(const std::string& command) { _pythiaInstance->readString(command); }
          /// @note Definitions of the following functions in Collider_Pythia.cpp
        /// @brief General init, via external input "settings"
        virtual void init(const std::vector<std::string>& settings);
        /// @brief Special, hard-coded init. Template specializations go in cpp file.
        template <typename T> void specialize() {}
        //@}

/// @note STEP3) Here in the header, code things which ALL Colliders of this subclass to do.
        /// @name Event generation functions
        //@{
          /// @note I already 'forgot' the event type, so let's use EventType.
        void nextEvent(EventType& event) const {
          // Try to make and populate an event
          if (!_pythiaInstance->next()) throw EventFailureError();
          event = _pythiaInstance->event;
        }

        void nextEvent(EventType& event) {
          // Try to make and populate an event
          if (!_pythiaInstance->next()) throw EventFailureError();
          event = _pythiaInstance->event;
        }

    };

    /// @brief Recycle to a new Pythia initialization via name (Template parameter).
    bool recycleTemplatePythia(TemplatePythia&, const std::string&,
                               const std::vector<std::string>&);

/// @note STEP4)  Continue to colliders/Collide_Pythia.cpp
  }
}
