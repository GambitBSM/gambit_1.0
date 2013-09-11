//  GAMBIT: Global and Modular BSM Inference Tool
//  //  ********************************************
//  //
//  //  Functions for Pythia8Backend
//  //  (Based off of Andy's py8-bsm.cpp)
//  //
//  //  ********************************************
//  //
//  //  Authors
//  //  =======
//  //
//  //  (add name and date if you modify)
//  //
//  //  Abram Krislock
//  //  2013 Apr 19, Apr 23
//  //  Andy Buckley
//  //  2013 July 18
//  //
//  //  ********************************************

#include "Pythia8Backend.hpp"

namespace Gambit {
  namespace HEColliderBit {


    Pythia8Backend::Pythia8Backend(int seed)
    {
      _initialized = false;
      _pythiaInstance = new Pythia8::Pythia();

      // Basic setup
      _pythiaInstance->settings.parm("Beams:eCM", 8000);
      _pythiaInstance->settings.mode("Main:numberOfEvents", 1000);
      _pythiaInstance->settings.mode("Main:timesAllowErrors", 1000);
      _pythiaInstance->settings.flag("Init:showProcesses", true);
      _pythiaInstance->settings.flag("Init:showMultipartonInteractions", false);
      _pythiaInstance->settings.flag("Init:showChangedSettings", false);
      _pythiaInstance->settings.flag("Init:showChangedParticleData", false);
      _pythiaInstance->settings.mode("Next:numberShowEvent", 10);
      _pythiaInstance->settings.mode("Next:numberShowInfo", 0);
      _pythiaInstance->settings.mode("Next:numberShowProcess", 0);

      // Default to SUSY with precise subprocess control
      _pythiaInstance->settings.flag("SUSY:all", true);
      _pythiaInstance->settings.mode("SUSY:idA", 1);

      // Modelling elements
      _pythiaInstance->settings.flag("PartonLevel:MPI", false);
      _pythiaInstance->settings.flag("PartonLevel:FSR", false); //true);
      _pythiaInstance->settings.flag("HadronLevel:all", false); //true);

      // Random seed setup
      _pythiaInstance->settings.flag("Random:setSeed", true);
      _pythiaInstance->settings.mode("Random:seed", seed);
    }


    void Pythia8Backend::nextEvent(Pythia8::Event& event) {
      // Automatically initialize when a first event is requested
      if (!_initialized) {
        _pythiaInstance->init();
        _initialized = true;
      }

      // Try to make and populate an event
      if (!_pythiaInstance->next()) throw EventFailureError();
      event = _pythiaInstance->event;
    }


  }
}
