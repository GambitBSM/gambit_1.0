#pragma once

//  GAMBIT: Global and Modular BSM Inference Tool
//  //  ********************************************
//  //
//  //  Header for eventual rollcall for the
//  //  HEColliderBit FastSimBackend
//  //
//  //  Also contains some useful Utility functions
//  //  which are used by FastSimBackend
//  //
//  //  ********************************************
//  //
//  //  Authors
//  //  =======
//  //
//  //  (add name and date if you modify)
//  //
//  //  Aldo F Saavedra
//  //  2013 June 13
//  //
//  //  ********************************************
//
//

#include <string>
#include <vector>
#include <cassert>
#include <cmath>

/*
#include "TROOT.h"
#include "TTask.h"
#include "TApplication.h"
#include "TObjArray.h"
#include "TDatabasePDG.h"
#include "TParticlePDG.h"
#include "TLorentzVector.h"
*/

#include "Pythia.h"
#include "Event.hpp"
#include "FastSim.hpp"


namespace Gambit {
  namespace HEColliderBit {


    class FastSimBackend {
    public:
      FastSimBackend(DetectorType detector);
      ~FastSimBackend();

      void processEvent(Pythia8::Event &eventIn, Event &eventOut);
      void convertInput(Pythia8::Event &event);
      void convertOutput(Event &event);

      void clear(); // clear the vector, each time at the begining fo the event

    private:
      
      FastSim *modularFastSim;

      vector<Particle*> _electrons;
      vector<Particle*> _muons;
      vector<Particle*> _photons;
      vector<Particle*> _bjets;
      vector<Particle*> _tauhads;
      vector<Particle*> _chargedhads;
      vector<Particle*> _weakly_interactings; // stdm neutrinos, susy neutralinos



      /*
      // To read Delphes Config File
      ExRootConfReader *confReader;
      // Modularity of Delphes is set by said Config File.
      Delphes *modularDelphes;
      // Factory production of particle "candidates"
      DelphesFactory *factory;
      // Delphes particle arrays: Pre-Detector-Sim
      TObjArray *allParticleOutputArray;
      TObjArray *stableParticleOutputArray;
      TObjArray *partonOutputArray;
      // Database of PDG codes and particle info
      TDatabasePDG *pdg;
      // Used within the event Converters below
      Candidate *candidate;
      TParticlePDG *pdgParticle;
      Int_t pdgCode;
      */
      // TODO: rollcall?
    };


  }
}
