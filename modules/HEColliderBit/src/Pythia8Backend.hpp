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
//  //
//  //  ********************************************

#include "Pythia.h"

// #define PYTHIA8BACKEND_PRIVATE GAMBIT::HEColliderBit::Pythia8Backend::pythiaInstance,GAMBIT::HEColliderBit::Pythia8Backend::eventFailureError

namespace GAMBIT {
  namespace HEColliderBit {


    class Pythia8Backend {
    public:

      Pythia8Backend(int seed);

      ~Pythia8Backend() {
        delete _pythiaInstance;
      }

      /// @todo Throw an exception if already initialized
      void set(const std::string& key, int val) { _pythiaInstance->settings.mode(key, val); }
      void set(const std::string& key, bool val) { _pythiaInstance->settings.flag(key, val); }
      void set(const std::string& key, double val) { _pythiaInstance->settings.parm(key, val); }
      void set(const std::string& key, const std::string& val) { _pythiaInstance->settings.word(key, val); }
      void set(const std::string& key, vector<double> val) { _pythiaInstance->settings.vect(key, val); }
      void set(const std::string& key, vector<int> val) { _pythiaInstance->settings.ivect(key, val); }
      void set(const std::string& command) { _pythiaInstance->readString(command); }

      void nextEvent(Pythia8::Event& event);

      int nEvents() { return _pythiaInstance->mode("Main:numberOfEvents"); }
      int nAborts() { return _pythiaInstance->mode("Main:timesAllowErrors"); }

    private:

      /// @todo Should this be/use a standard GAMBIT exception?
      class EventFailureError : public exception {
        virtual const char* what() const throw() {
          return "For whatever reason, Pythia could not make the next event.";
        }
      };

      bool _initialized;

      Pythia8::Pythia* _pythiaInstance;

      /// @todo Rollcall?

    };


  }
}
