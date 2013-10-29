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
      _pythiaInstance = new Pythia8::Pythia("DUMMYPATH", false);

      // Basic setup
      set("Beams:eCM", 8000);
      set("Main:numberOfEvents", 1000);
      set("Main:timesAllowErrors", 1000);
      set("Print:quiet", true);
      set("SLHA:verbose", 0);
      // set("Init:showProcesses", true);
      // set("Init:showMultipartonInteractions", false);
      // set("Init:showChangedSettings", false);
      // set("Init:showChangedParticleData", false);
      // set("Next:numberShowEvent", 10);
      // set("Next:numberShowInfo", 0);
      // set("Next:numberShowProcess", 0);

      // Default to SUSY with precise subprocess control
      // set("SUSY:all", true);
      // set("SUSY:idA", 1);

      // Modelling elements
      set("PartonLevel:MPI", false);
      // set("PartonLevel:ISR", false);
      // set("PartonLevel:FSR", false);
      // set("HadronLevel:all", false);

      // Random seed setup
      set("Random:setSeed", true);
      set("Random:seed", seed);
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
