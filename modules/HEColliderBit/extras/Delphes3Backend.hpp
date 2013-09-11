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

#include "Pythia.h"
#include "Event.hpp"
#include "modules/Delphes.h"
#include "classes/DelphesClasses.h"
#include "classes/DelphesFactory.h"
#include "ExRootAnalysis/ExRootConfReader.h"

namespace Gambit
{
  namespace HEColliderBit
  {
    class Delphes3Backend
    {
    public:
      Delphes3Backend(string configFileName);
      ~Delphes3Backend();

      void processEvent(Pythia8::Event &eventIn, Event &eventOut);
      void convertInput(Pythia8::Event &event);
      void convertOutput(Event &event);

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
