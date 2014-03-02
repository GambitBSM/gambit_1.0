#pragma once

//  GAMBIT: Global and Modular BSM Inference Tool
//  //  ********************************************
//  //
//  //  Header for eventual rollcall for the
//  //  HEColliderBit Pythia8Backend
//  //
//  //  ********************************************
//  //
//  //  Authors
//  //  =======
//  //
//  //  (add name and date if you modify)
//  //
//  //  Abram Krislock
//  //  2013 Apr 22, Apr 23
//  //  Aldo F Saavedra
//  //  2013 June 14
//  //  Andy Buckley
//  //  2013 July 18
//  //  Aldo Saavedra
//  //  2014 March 2nd
//  //
//  //  ********************************************

#include "HEColliderBit_types.hpp"
#include "Py8Utils.hpp"
#include "Event.hpp"

// #define PYTHIA8BACKEND_PRIVATE Gambit::HEColliderBit::Pythia8Backend::pythiaInstance,Gambit::HEColliderBit::Pythia8Backend::eventFailureError

namespace Gambit {
  namespace HEColliderBit {


    class Pythia8Backend {
    public:

      /// Constructor with a random number seed argument
      Pythia8Backend(int seed);

      /// Destructor
      /// @todo Use a smart ptr and eliminate the need for a destructor?
      ~Pythia8Backend() {
        delete _pythiaInstance;
      }

      /// @name Access the internal Pythia instance (non-const and const versions)
      //@{
      Pythia8::Pythia& py() { return *_pythiaInstance; }
      const Pythia8::Pythia& py() const { return *_pythiaInstance; }
      //@}

      /// @name Parameter setting functions
      /// @todo Throw an exception if already initialized
      //@{
      void set(const std::string& key, int val) { _pythiaInstance->settings.mode(key, val); }
      void set(const std::string& key, bool val) { _pythiaInstance->settings.flag(key, val); }
      void set(const std::string& key, double val) { _pythiaInstance->settings.parm(key, val); }
      void set(const std::string& key, const std::string& val) { _pythiaInstance->settings.word(key, val); }
      void set(const std::string& key, vector<double> val) { _pythiaInstance->settings.pvec(key, val); }
      void set(const std::string& key, vector<int> val) { _pythiaInstance->settings.mvec(key, val); }
      void set(const std::string& command) { _pythiaInstance->readString(command); }
      //@}

      /// Make the next event and fill it into the Py8::Event
      void nextEvent(PythiaEvent& event);
      /// Make the next event and directly fill a Gambit event (no Py8::Event copy)
      void nextEvent(HEP_Simple_Lib::Event& event);

      /// Convert the supplied Py8 event into a Gambit event
      void convertOutput(const PythiaEvent& pevt, HEP_Simple_Lib::Event& gevt) const;

      /// @name Get the number of events requested / errors permitted in a run
      //@{
      int nEvents() { return _pythiaInstance->mode("Main:numberOfEvents"); }
      int nAborts() { return _pythiaInstance->mode("Main:timesAllowErrors"); }
      //@}

      /// @name Cross-section and error in pb
      /// @todo What will our std xsec unit be (in HEColliderBit or GAMBIT as a whole)?
      //@{
      double xsec() { return _pythiaInstance->info.sigmaGen() * 1e9; }
      double xsecErr() { return _pythiaInstance->info.sigmaErr() * 1e9; }
      //@}


    private:

      /// @todo Should this be/use a standard GAMBIT exception?
      class EventFailureError : public exception {
        virtual const char* what() const throw() {
          return "For whatever reason, Pythia could not make the next event.";
        }
      };


      /// Initialization flag
      bool _initialized;

      /// @todo Smart ptr?
      Pythia8::Pythia* _pythiaInstance;

      /// @todo Rollcall?

    };


  }
}
