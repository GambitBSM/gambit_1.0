#pragma once
#include "gambit/ColliderBit/BaseCollider.hpp"

/// @note To configure a new collider, follow these steps:
/// @note STEP1)  BOSS / Backend your favorite collider simulator.
/// @note STEP2)  Sub-class BaseCollider. The type of event is the template parameter:
/// @note STEP3)  Declare a recycler for your sub-class.
/// @note STEP4)  [Continue in the cpp source file. See TemplatePythia.cpp for example]
/// @note STEP5)  [Continue in the cpp source file. See TemplatePythia.cpp for example]

namespace Gambit {
  namespace ColliderBit {

    class TemplatePythia : public BaseCollider<Pythia8::Event> {
/// @note STEP2a) Note the use of the BASECOLLIDER_SUBCLASS_HELPER macro
      /// @name Standard BaseCollider subclass declarations via macro
      //@{
        BASECOLLIDER_SUBCLASS_HELPER(TemplatePythia, Pythia8::Event)
      //@}

/// @note STEP2b) The remainder of the declaration is specific to your collider sim.
      protected:
      /// @name Member variables and custom exceptions
      //@{
        Pythia8::Pythia* _pythiaInstance;
        std::vector<std::string> _settings;
        class InitializationError : public std::exception {
          virtual const char* what() const throw() {
            return "For whatever reason, Pythia could not initialize.";
          }
        };
        class EventFailureError : public std::exception {
          virtual const char* what() const throw() {
            return "For whatever reason, Pythia could not make the next event.";
          }
        };
      //@}

      public:
        TemplatePythia() : _pythiaInstance(nullptr) {
          _settings.push_back("../extras/boss/bossed_pythia_source/xmldoc/");
        }
        ~TemplatePythia() { delete _pythiaInstance; }

      /// @name Member variable access
      //@{
        std::vector<std::string> const getSettings() const { return _settings; }
        Pythia8::Pythia* const pythia() const { return _pythiaInstance; }
      //@}

      /// @name (Re-)Initialization functions
      //@{
        /// @brief Prepare for a new Pythia configuration
        void reset() {
          _settings.clear(); _settings.push_back("../extras/boss/bossed_pythia_source/xmldoc/");
          delete _pythiaInstance; _pythiaInstance=nullptr;
        }
        /// @brief Send a command to the Pythia instance
        void set(const std::string& command) { _pythiaInstance->readString(command); }
      //@}
    };

/// @note STEP3) Declare a recycler for the new subclass
    /// @brief Recycle to a new Pythia initialization via name (Template parameter).
    bool recycleTemplatePythia(TemplatePythia&, const std::string&,
                               const std::vector<std::string>&);

  }
}
