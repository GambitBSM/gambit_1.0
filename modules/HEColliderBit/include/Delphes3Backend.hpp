#pragma once

//  GAMBIT: Global and Modular BSM Inference Tool
//  //  ********************************************
//  //
//  //  Header for eventual rollcall for the
//  //  HEColliderBit Delphes3Backend
//  //
//  //  Also contains some useful Utility functions
//  //  which are used by Delphes3Backend
//  //
//  //  ********************************************
//  //
//  //  Authors
//  //  =======
//  //
//  //  (add name and date if you modify)
//  //
//  //  Abram Krislock
//  //  2013 Apr 19, Apr 23, May 9
//  //  Aldo Saavedra
//  //  2014 March 2nd
//  //
//  //  ********************************************
//
//

#include <string>
#include <vector>
#include <cassert>
#include <cmath>

#include "TROOT.h"
#include "TTask.h"
#include "TApplication.h"
#include "TObjArray.h"
#include "TDatabasePDG.h"
#include "TParticlePDG.h"
#include "TLorentzVector.h"
#include "modules/Delphes.h"
#include "classes/DelphesClasses.h"
#include "classes/DelphesFactory.h"
#include "ExRootAnalysis/ExRootConfReader.h"

#include "Pythia8/Pythia.h"

#include "Event.hpp"
#include "Particle.hpp"
#include "Jet.hpp"
#include "Py8Utils.hpp"
#include "MCUtils/PIDCodes.h"

namespace Gambit {
  namespace HEColliderBit {

    class Delphes3Backend {
    public:
      Delphes3Backend(string configFilename);
      ~Delphes3Backend();

      void processEvent(const Pythia8::Event& eventIn, HEP_Simple_Lib::Event& eventOut);
      void convertInput(const Pythia8::Event& event);
      void convertOutput(HEP_Simple_Lib::Event& event);

    private:
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

      // TODO: rollcall?
    };


  }
}
