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
//  //  2013 Apr 19, Apr 23
//  //                                              
//  //  ********************************************
//                                                  
//                                                  

#ifndef __Delphes3Backend_hpp__
#define __Delphes3Backend_hpp__

#include <string>
#include <vector>
#include <cassert>
#include <cmath>

#include "TROOT.h"
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

#define DELPHES3BACKEND_PRIVATE GAMBIT::HEColliderBit::Delphes3Backend::confReader,GAMBIT::HEColliderBit::Delphes3Backend::modularDelphes,GAMBIT::HEColliderBit::Delphes3Backend::factory,GAMBIT::HEColliderBit::Delphes3Backend::allParticleOutputArray,GAMBIT::HEColliderBit::Delphes3Backend::stableParticleOutputArray,GAMBIT::HEColliderBit::Delphes3Backend::partonOutputArray,GAMBIT::HEColliderBit::Delphes3Backend::pdg,GAMBIT::HEColliderBit::Delphes3Backend::candidate,GAMBIT::HEColliderBit::Delphes3Backend::pdgParticle,GAMBIT::HEColliderBit::Delphes3Backend::pdgCode

namespace GAMBIT
{
  namespace HEColliderBit
  {
    namespace Delphes3Backend
    {
      // To read Delphes Config File
      extern ExRootConfReader *confReader;
      // Modularity of Delphes is set by said Config File.
      extern Delphes *modularDelphes;
      // Factory production of particle "candidates"
      extern DelphesFactory *factory;
      // Delphes particle arrays: Pre-Detector-Sim
      extern TObjArray *allParticleOutputArray;
      extern TObjArray *stableParticleOutputArray;
      extern TObjArray *partonOutputArray;
      // Database of PDG codes and particle info
      extern TDatabasePDG *pdg;
      // Used within the event Converters below
      extern Candidate *candidate;
      extern TParticlePDG *pdgParticle;
      extern Int_t pdgCode;

      void initialize(string configFileName);
      void finalize();

      void analyzeEvent(Pythia8::Event &eventIn, Event &eventOut);
      void convertInput(Pythia8::Event &event);
      void convertOutput(Event &event);
      // TODO: rollcall!!
    }
  }
}

#endif /* defined(__Delphes3Backend_hpp__) */

