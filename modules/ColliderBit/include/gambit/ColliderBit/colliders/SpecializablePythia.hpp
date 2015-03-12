#pragma once
#include "gambit/ColliderBit/BaseCollider.hpp"

namespace Gambit {
  namespace ColliderBit {

    /// @brief A base class for a minimalistic Pythia interface to ColliderBit.
    class RecyclablePythia : public BaseCollider<Pythia8::Event> {
      /// @name Pythia-specific variables
      //@{
      protected:
        /// @brief Pythia specific variable
        Pythia8::Pythia* _pythiaInstance;
        /// @brief Local copy of Pythia settings strings for specialization
        std::vector<std::string> _settings;
      //@}

      /// @name Custom exceptions
      //@{
      protected:
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

      /// @name Construction and Destruction
      //@{
      public:
        RecyclablePythia() : _pythiaInstance(nullptr) {
          _settings.push_back("../extras/boss/bossed_pythia_source/xmldoc/");
        }
        ~RecyclablePythia() { _settings.clear(); delete _pythiaInstance; }
        void recycle() {
          _settings.clear(); _settings.push_back("../extras/boss/bossed_pythia_source/xmldoc/");
          delete _pythiaInstance; _pythiaInstance=nullptr;
        }
      //@}

      /// @name Getters
      //@{
      public:
        /// @brief Get a const pointer of the Pythia instance
        Pythia8::Pythia* const pythia() const { return _pythiaInstance; }
        /// @brief Get a const copy of the settings vector
        std::vector<std::string> const getSettings() const { return _settings; }
      //@}

      /// @name (Re-)Initialization functions
      //@{
      public:
        /// @brief Add a command to the list of settings used by "init"
        void addToSettings(const std::string& command) { _settings.push_back(command); }
        /// @brief General init for any Pythia interface to Gambit.
        void init(const std::vector<std::string>& externalSettings) {
        /// @note As long as the settings are pythia commands, no parsing!
          for(const auto command : externalSettings) {
            _settings.push_back(command);
          }
          for(const auto command : _settings)
            if(command.find(":") == (size_t) -1)
              _pythiaInstance = new Pythia8::Pythia(command, false);
            else
              _pythiaInstance->readString(command);

          if(!_pythiaInstance) throw InitializationError();
          _pythiaInstance->init();
        }
      //@}

      /// @name Event generation functions
      //@{
      protected:
        /// @brief Default event generation for any Pythia interface to Gambit.
        void nextEventDefault(EventType& event) {
          // Try to make and populate an event
          if (!_pythiaInstance->next()) throw EventFailureError();
          event = _pythiaInstance->event;
        }
      //@}

     };


    /// @brief A base class used to specialize Pythia within ColliderBit.
    class PythiaSpec: public BaseColliderSpec<Pythia8::Event> {
      protected:
        RecyclablePythia *_pythiaToSpec;
      public:
        typedef BaseColliderSpec<Pythia8::Event> super;
        PythiaSpec(RecyclablePythia *pythiaToSpec) :
            super(pythiaToSpec), _pythiaToSpec(pythiaToSpec) { }
        virtual ~PythiaSpec() { }
        virtual void initBySpec() { }
    };

    /// @brief A class used to specialize Pythia for a "SUSY:all" LHC 8TeV simulation.
    class Pythia_SUSY_LHC_8TeV: public PythiaSpec {
      public:
        Pythia_SUSY_LHC_8TeV(RecyclablePythia *pythiaToSpec) : PythiaSpec(pythiaToSpec) { }
        void initBySpec();
    };
    /// @brief A class used to specialize Pythia for gluino-squark only LHC 8TeV simulation.
    class Pythia_glusq_LHC_8TeV: public Pythia_SUSY_LHC_8TeV {
      public:
        Pythia_glusq_LHC_8TeV(RecyclablePythia *pythiaToSpec) :
            Pythia_SUSY_LHC_8TeV(pythiaToSpec) { }
        void initBySpec();
    };
    /// @brief A class used to specialize Pythia for total external (yaml) control.
    class Pythia_external: public PythiaSpec {
      public:
        Pythia_external(RecyclablePythia *pythiaToSpec) : PythiaSpec(pythiaToSpec) { }
    };


    class SpecializablePythia : public SpecializationContainer<Pythia8::Event> {
      /// @name Collider Specialization Members
      //@{
      protected:
        RecyclablePythia* _recyclablePythia;
        Pythia_SUSY_LHC_8TeV* _pythia_SUSY_LHC_8TeV;
        Pythia_glusq_LHC_8TeV* _pythia_glusq_LHC_8TeV;
        Pythia_external* _pythia_external;
      //@}

      /// @name Construction and Destruction
      //@{
      public:
        SpecializablePythia() {
          _recyclablePythia = new RecyclablePythia();
          _pythia_SUSY_LHC_8TeV = new Pythia_SUSY_LHC_8TeV(_recyclablePythia);
          _pythia_glusq_LHC_8TeV = new Pythia_glusq_LHC_8TeV(_recyclablePythia);
          _pythia_external = new Pythia_external(_recyclablePythia);
        }

        ~SpecializablePythia() {
          delete _recyclablePythia;
          delete _pythia_SUSY_LHC_8TeV;
          delete _pythia_glusq_LHC_8TeV;
          delete _pythia_external;
        }

        /// @brief Recycle this SpecializablePythia for re-use by Gambit
        void recycle(const std::string&, const std::vector<std::string>&); 
      //@}

      /// @name (Re-)Initialization functions
      //@{
      protected:
        /// @brief Specialization setter
        void setActiveSpecialization(const std::string&);
      //@}

      /// @name Getters
      //@{
      public:
        /// @brief Convenient typedef
        typedef Pythia8::Pythia* PythiaPtr;
        /// @brief Get a const pointer of the Pythia instance
        PythiaPtr const pythia() const { return _recyclablePythia->pythia(); }
      //@}
    };

  }
}
