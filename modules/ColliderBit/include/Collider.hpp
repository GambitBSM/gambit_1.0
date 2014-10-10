#pragma once
#include <string>
#include <vector>
#include <exception>

/// @TODO worry about adding Analyses later.
//#include "Analysis.hpp"
#include "Py8Utils.hpp"
#include "Event.hpp"

/// @note To configure a new collider, follow these steps:
/// @note (To configure a new subprocess group, only do STEPS >= 5) 
/// @note STEP1)  #include the header from your favorite simulation software
/// @todo ** Replace with a proper backend **
#include "Pythia8/Pythia.h"


namespace Gambit {
  namespace ColliderBit {

    /// Macros for collider factory fns
    #define DECLARE_COLLIDER_FACTORY(CNAME, CCLASS)                            \
        CCLASS* create_ ## CNAME(const std::vector<std::string>& settings);
    #define DEFINE_COLLIDER_FACTORY(CNAME, CCLASS)                             \
        CCLASS* create_ ## CNAME(const std::vector<std::string>& settings) {   \
          CCLASS* result = new CNAME();                                        \
          result->defaults();                                                   \
          result->init(settings);                                               \
          return result;                                                       \
        }


    /// @note Abstract base class Collider
    template <typename EventT>
    class Collider {
    protected:
      /// @TODO implement these properly!!
      /// @TODO Is nevts any of Collider's fuggin business??
      double xsec;
      int nevts;

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



/// @note STEP2)  Sub-class Collider. One may find it easy to make a very
///               general "Base" sub-class, then sub-class it further
///               for more specific set-ups.
    class PythiaBase : public Collider<Pythia8::Event> {
      protected:
        Pythia8::Pythia* _pythiaInstance;

        /// @note ColliderBit will catch this, then use ColliderBit_error()
        class EventFailureError : public std::exception {
          virtual const char* what() const throw() {
            return "For whatever reason, Pythia could not make the next event.";
          }
        };

      public:
        virtual ~PythiaBase() { delete _pythiaInstance; }

        /// @name Initialization functions
        //@{
        virtual void defaults() = 0;

        virtual void init(const std::vector<std::string>& settings) {
          _pythiaInstance = new Pythia8::Pythia("DUMMYPATH", false);

          /// @note As long as the settings are pythia commands, no parsing!
          for(const auto command : settings) { set(command); }

          _pythiaInstance->init();
        }
        //@}

        /// @name Access the internal Pythia instance (non-const and const versions)
        //@{
        Pythia8::Pythia& pythia() { return *_pythiaInstance; }
        const Pythia8::Pythia& pythia() const { return *_pythiaInstance; }
        //@}

        /// @name Parameter setting functions
        /// @todo Throw an exception if already initialized
        //@{
        void set(const std::string& key, int val)
            { _pythiaInstance->settings.mode(key, val); }
        void set(const std::string& key, bool val)
            { _pythiaInstance->settings.flag(key, val); }
        void set(const std::string& key, double val)
            { _pythiaInstance->settings.parm(key, val); }
        void set(const std::string& key, const std::string& val)
            { _pythiaInstance->settings.word(key, val); }
        void set(const std::string& key, vector<double> val)
            { _pythiaInstance->settings.pvec(key, val); }
        void set(const std::string& key, vector<int> val)
            { _pythiaInstance->settings.mvec(key, val); }
        void set(const std::string& command)
            { _pythiaInstance->readString(command); }
        //@}

        /// @name Event generation functions
        //@{
        /// Generate an event, Gambit style reference return
        /// @note I already 'forgot' the event type, so let's use the typedef.
        virtual EventType& nextEvent() {
          // Try to make and populate an event
          if (!_pythiaInstance->next()) throw EventFailureError();
          return _pythiaInstance->event;
        }

    };

/// @note STEP3)  Create factory functions for further subclasses.
    /// @brief Create a new Pythia Collider based on a name string
    ///
    /// The caller is responsible for deleting the returned PythiaBase.
    PythiaBase* mkPythia(const std::string& name,
                         const std::vector<std::string>& settings);

/// @note STEP4)  Continue to Collider.cpp
  }
}
