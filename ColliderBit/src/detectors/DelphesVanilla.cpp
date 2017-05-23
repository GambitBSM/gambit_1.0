#include "gambit/ColliderBit/detectors/DelphesVanilla.hpp"
#ifndef EXCLUDE_DELPHES

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

using namespace std;

namespace Gambit {
  namespace ColliderBit {


    /// Container for external types, allowing them to be decoupled from public headers cf. the PIMPL idiom
    /// @todo Use smart ptrs to get automatic clean-up?
    /// @author Andy Buckley
    struct DelphesVanillaImpl {

      DelphesVanillaImpl() :
        modularDelphes(nullptr),
        confReader(nullptr),
        factory(nullptr),
        allParticleOutputArray(nullptr),
        stableParticleOutputArray(nullptr),
        partonOutputArray(nullptr),
        pdg(nullptr) {}

      ~DelphesVanillaImpl() {
        if(confReader)
          delete confReader;
        if(modularDelphes) {
          modularDelphes->Clear();
          delete modularDelphes;
        }
      }

      ////////////////////

      // Modularity of Delphes is set by Config File.
      /// @note: init of _modularDelphes left to subclasses.
      Delphes* modularDelphes;

      // To read Delphes Config File
      ExRootConfReader *confReader;

      // Factory production of particle "candidates"
      DelphesFactory *factory;

      // Delphes particle arrays: Pre-Detector-Sim
      TObjArray *allParticleOutputArray;
      TObjArray *stableParticleOutputArray;
      TObjArray *partonOutputArray;

      // Database of PDG codes and particle info
      TDatabasePDG *pdg;

    };



    void DelphesVanilla::init(const vector<string>& settings) {
      // Create the implementation object, for PIMPL abstraction
      _impl = new DelphesVanillaImpl();

      // To read Delphes Config File
      const string configFilename = settings[0];
      _impl->confReader = new ExRootConfReader();
      _impl->confReader->ReadFile(configFilename.c_str());

      // Modularity of Delphes set by Config File
      _impl->modularDelphes = new Delphes("Delphes");
      _impl->modularDelphes->SetConfReader(_impl->confReader);

      // Factory production of particle "candidates"
      _impl->factory = _impl->modularDelphes->GetFactory();

      // Delphes particle arrays: Pre-Detector-Sim
      _impl->allParticleOutputArray = _impl->modularDelphes->ExportArray("allParticles");
      _impl->stableParticleOutputArray = _impl->modularDelphes->ExportArray("stableParticles");
      _impl->partonOutputArray = _impl->modularDelphes->ExportArray("partons");

      // Database of PDG codes and particle info
      _impl->pdg = TDatabasePDG::Instance();

      _impl->modularDelphes->InitTask();
    }


    void DelphesVanilla::clear() {
      if(_impl)
        delete _impl;
      _impl = nullptr;
    }


    void DelphesVanilla::convertInput(const Pythia8::Event& event) const {
      Int_t pdgCode;
      Candidate* candidate;
      TParticlePDG* pdgParticle;

      for (int ip = 0; ip < event.size(); ++ip) {
        const Pythia8::Particle& p = event[ip];
        candidate = _impl->factory->NewCandidate();

        /// @todo How to convert Py8 events without hadronisation?
        candidate->PID = p.id();
        pdgCode = abs(candidate->PID);

        candidate->Status = p.status();
        pdgParticle = _impl->pdg->GetParticle(p.id());

        candidate->Charge = pdgParticle ? Int_t(pdgParticle->Charge()/3.0) : -999;
        candidate->Mass = pdgParticle ? pdgParticle->Mass() : -999.9;

        candidate->Momentum.SetPxPyPzE(p.px(), p.py(), p.pz(), p.e());
        candidate->Position.SetXYZT(p.xProd(), p.yProd(), p.zProd(), p.tProd());
        candidate->D1 = p.daughter1();
        candidate->D2 = p.daughter2();

        /// @todo Why do the non-final particles (other than B's and taus) need to be passed? Speedup?
        _impl->allParticleOutputArray->Add(candidate);
        if (!pdgParticle) continue;
        if (p.isFinal()) _impl->stableParticleOutputArray->Add(candidate);

        if (pdgCode <= 5 || pdgCode == 21 || pdgCode == 15) _impl->partonOutputArray->Add(candidate);
      }
    }


    void DelphesVanilla::convertOutput(HEPUtils::Event &event) const {
      Candidate *candidate;
      event.clear();

      HEPUtils::Particle *recoParticle;
      HEPUtils::Jet *recoJet;
      // Delphes particle arrays: Post-Detector Sim
      //    MISSING ET:
      const TObjArray *arrayMissingET = _impl->modularDelphes->ImportArray("MissingET/momentum");
      if ((candidate = static_cast<Candidate*>(arrayMissingET->At(0)))) {
        const TLorentzVector &momentum = candidate->Momentum;
        event.set_missingmom(HEPUtils::P4::mkXYZM(-1*momentum.Px(), -1*momentum.Py(), 0., 0.));
      }

      // Delphes particle arrays: Post-Detector Sim
      //    PHOTONS:
      const TObjArray *arrayPhotons = _impl->modularDelphes->ImportArray("PhotonIsolation/photons");
      TIter iteratorPhotons(arrayPhotons);
      iteratorPhotons.Reset();
      while ((candidate = static_cast<Candidate*>(iteratorPhotons.Next()))) {
        const TLorentzVector &momentum = candidate->Momentum;
        recoParticle = new HEPUtils::Particle(HEPUtils::P4::mkXYZM(momentum.Px(), momentum.Py(), momentum.Pz(), 0.), MCUtils::PID::PHOTON);
        recoParticle->set_prompt(true);
        event.add_particle(recoParticle);
      }

      // Delphes particle arrays: Post-Detector Sim
      //    ELECTRONS:
      const TObjArray *arrayElectrons = _impl->modularDelphes->ImportArray("ElectronIsolation/electrons");
      TIter iteratorElectrons(arrayElectrons);
      iteratorElectrons.Reset();
      while ((candidate = static_cast<Candidate*>(iteratorElectrons.Next()))) {
        const TLorentzVector &momentum = candidate->Momentum;
        recoParticle = new HEPUtils::Particle(HEPUtils::P4::mkXYZM(momentum.Px(), momentum.Py(), momentum.Pz(), 0.000510998902),
                                              -HEPUtils::sign(candidate->Charge) * MCUtils::PID::ELECTRON);
        recoParticle->set_prompt(true);
        event.add_particle(recoParticle);
      }

      // Delphes particle arrays: Post-Detector Sim
      //    MUONS:
      const TObjArray *arrayMuons = _impl->modularDelphes->ImportArray("MuonIsolation/muons");
      TIter iteratorMuons(arrayMuons);
      iteratorMuons.Reset();
      while ((candidate = static_cast<Candidate*>(iteratorMuons.Next()))) {
        const TLorentzVector &momentum = candidate->Momentum;
        recoParticle = new HEPUtils::Particle(HEPUtils::P4::mkXYZM(momentum.Px(), momentum.Py(), momentum.Pz(), 0.105658389),
                                              -HEPUtils::sign(candidate->Charge) * MCUtils::PID::MUON);
        recoParticle->set_prompt(true);
        event.add_particle(recoParticle);
      }

      // Delphes particle arrays: Post-Detector Sim
      //    JETS and TAUS:
      const TObjArray *arrayJets = _impl->modularDelphes->ImportArray("FastJetFinder/jets");
      TIter iteratorJets(arrayJets);
      iteratorJets.Reset();
      while ((candidate = static_cast<Candidate*>(iteratorJets.Next()))) {
        const TLorentzVector &momentum = candidate->Momentum;
        if (candidate->TauTag) {
          recoParticle = new HEPUtils::Particle(HEPUtils::P4::mkXYZM(momentum.Px(), momentum.Py(), momentum.Pz(), 1e-6),
                                                -HEPUtils::sign(candidate->Charge) * MCUtils::PID::TAU);
          recoParticle->set_prompt(true);
          event.add_particle(recoParticle);
          //continue;
        }
        else {
          /// @todo Should the jet mass be assigned properly rather than set as microscopic?
          recoJet = new HEPUtils::Jet(HEPUtils::P4::mkXYZM(momentum.Px(), momentum.Py(), momentum.Pz(), 1e-6), candidate->BTag);
          event.add_jet(recoJet);
        }
      }
    }


    void DelphesVanilla::processEvent(const Pythia8::Event& eventIn, HEPUtils::Event& eventOut) const {
      _impl->modularDelphes->Clear();
      convertInput(eventIn);
      _impl->modularDelphes->ProcessTask();
      convertOutput(eventOut);
    }


  }
}

#endif // not defined EXCLUDE_DELPHES
