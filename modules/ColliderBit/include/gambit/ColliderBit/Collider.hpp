#pragma once
#include "gambit/ColliderBit/BaseCollider.hpp"

/// TODO Because ColliderSpec functors are better than templates and function pointers...

/// @note To configure a new collider, follow these steps [see extra notes in the code below]:
/// @note STEP1)   BOSS / Backend your favorite collider simulator.
/// @note STEP2)   Declare a BaseCollider sub-class. The type of event is the template parameter.
/// @note STEP3)   Declare the BaseColliderSpec sub-classes for specializations.
/// @note STEP4)   Declare a recycler for your sub-class.
/// @note STEP5-6) [Continue in the cpp source file. See TemplatePythia.cpp for example]

namespace Gambit {
  namespace ColliderBit {

/// @note STEP2)  Gambit needs a rather full declaration for the subclass of BaseCollider:
    class TemplatePythia : public BaseCollider<Pythia8::Event> {
      protected:
        typedef BaseColliderSpec<Pythia8::Event> super;

      /// @name Pythia specific variables
      //@{
        Pythia8::Pythia* _pythiaInstance;
        std::vector<std::string> _settings;
      //@}

      /// @name Custom exceptions
      //@{
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
   
      /// @name Collider Specialization Functors
      //@{
/// @note STEP3a) Only declare the BaseColliderSpec functions you intend to overwrite:
      class Pythia_SUSY_LHC_8TeV: public BaseColliderSpec {
        public:
          void initBySpec();
      };
      class Pythia_glusq_LHC_8TeV: public BaseColliderSpec {
        public:
          void initBySpec();
      };
/// @note STEP3b) Declare one pointer for  each BaseColliderSpec subclass:
      Pythia_SUSY_LHC_8TeV* _pythia_SUSY_LHC_8TeV;
      Pythia_glusq_LHC_8TeV* _pythia_glusq_LHC_8TeV;
      //@}

      public:
      /// @name Pythia specific constructor, destructor, and clear function
      //@{
        TemplatePythia() : super(), _pythiaInstance(nullptr) {
          _settings.push_back("../extras/boss/bossed_pythia_source/xmldoc/");
/// @note STEP3c) New each BaseColliderSpec subclass in the constructor
          _pythia_SUSY_LHC_8TeV = new Pythia_SUSY_LHC_8TeV();
          _pythia_glusq_LHC_8TeV = new Pythia_glusq_LHC_8TeV();
        }

        ~TemplatePythia() {
          delete _pythiaInstance;
          delete _pythia_SUSY_LHC_8TeV;
          delete _pythia_glusq_LHC_8TeV;
        }

        void clear() {
          _settings.clear(); _settings.push_back("../extras/boss/bossed_pythia_source/xmldoc/");
          delete _pythiaInstance; _pythiaInstance=nullptr;
        }
      //@}

      /// @name Setters and getters
      //@{
        /// @brief Send a command to the Pythia instance
        void set(const std::string& command) { _pythiaInstance->readString(command); }
        /// @brief Get a const copy of the settings vector
        std::vector<std::string> const getSettings() const { return _settings; }
        /// @brief Get a const pointer of the Pythia instance
        Pythia8::Pythia* const pythia() const { return _pythiaInstance; }
      //@}

      /// @name (Re-)Initialization functions
      //@{
        /// @brief Choose a functor to use for specialization
        void setActiveSpecialization(const std::string& name);
        /// @brief General init for all specializations
        void init(const std::vector<std::string>& externalSettings);
      //@}
    };

/// @note STEP3)  Declare a recycler for each new subclass
    /// @brief Recycle to a new Pythia initialization via ColliderSpec class.
    void recycleTemplatePythia(TemplatePythia&, const std::string&,
                               const std::vector<std::string>&);

  }
}
