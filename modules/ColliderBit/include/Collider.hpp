#pragma once
#include <string>
#include <vector>
#include <exception>

/// @note To configure a new collider, follow these steps:
/// @note (To configure a new subprocess group, only do STEPS >= 5)
/// @note STEP1)  BOSS your favorite collider simulator. Then:
#include "shared_types.hpp"

/// Some other includes
#include "ColliderBit_macros.hpp"


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

      /// @brief Default settings for each sub-class.
      virtual void defaults() = 0;
      /// @brief Settings parsing and initialization for each sub-class.
      virtual void init(const std::vector<std::string>& settings) = 0;
/// @TODO worry about adding Analyses later.
//      void addAnalysis(Analysis* a) { analyses.push_back(shared_ptr<Analysis>(a)); }

      //@}

      /// @name Event generation function. Pure virtual; must override.
      //@{
      virtual EventT& nextEvent() = 0;
      //@}

    };


/// @note STEP2)  Sub-class Collider as a general Base class for your simulator.
    class PythiaBase : public Collider<Pythia8::Event> {
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
        PythiaBase() { _pythiaInstance = new Pythia8::Pythia("../extras/boss/bossed_pythia_source/xmldoc", false); }
        virtual ~PythiaBase() { delete _pythiaInstance; }

        /// @name Initialization functions
        //@{
        virtual void defaults() = 0;

        virtual void init(const std::vector<std::string>& settings) {
          /// @note As long as the settings are pythia commands, no parsing!
          for(const auto command : settings) { set(command); }
          _pythiaInstance->init();
        }

        void set(const std::string& command) {
          _pythiaInstance->readString(command);
          _settings.push_back(command);
        }
        //@}

        /// @name Access the internals
        //@{
        /// I might use this to make a copy constructor. still thinking --Abram
        const std::vector<std::string> getSettings() const { return _settings; }
        Pythia8::Pythia* pythia() { return _pythiaInstance; }
        //@}

        /// @name Event generation functions
        //@{
        /// @note I already 'forgot' the event type, so let's use the typedef.
        virtual EventType& nextEvent() {
          // Try to make and populate an event
          if (!_pythiaInstance->next()) throw EventFailureError();
          return _pythiaInstance->event;
        }

    };

    /// @brief Create a new Pythia Collider based on a name string
    ///
    /// The caller is responsible for deleting the returned PythiaBase.
    PythiaBase* mkPythia(const std::string&, const std::vector<std::string>&);

/// @note STEP3)  Continue to Collider.cpp
  }
}
