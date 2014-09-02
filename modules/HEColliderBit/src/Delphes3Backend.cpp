//  GAMBIT: Global and Modular BSM Inference Tool
//  //  ********************************************
//  //
//  //  Functions for Delphes3Backend
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
#include <stdexcept>
#include <iostream>
#include <cstdlib>
using namespace std;

#include "Delphes3Backend.hpp"
using namespace MCUtils;


namespace Gambit {
  namespace HEColliderBit {


    Delphes3Backend::Delphes3Backend(string configFilename) {
      try {
        // To read Delphes Config File
        confReader = new ExRootConfReader();
        confReader->ReadFile(configFilename.c_str());

        // Modularity of Delphes set by Config File
        modularDelphes = new Delphes("Delphes");
        modularDelphes->SetConfReader(confReader);

        // Factory production of particle "candidates"
        factory = modularDelphes->GetFactory();

        // Delphes particle arrays: Pre-Detector-Sim
        allParticleOutputArray = modularDelphes->ExportArray("allParticles");
        stableParticleOutputArray = modularDelphes->ExportArray("stableParticles");
        partonOutputArray = modularDelphes->ExportArray("partons");

        // Database of PDG codes and particle info
        pdg = TDatabasePDG::Instance();

        modularDelphes->InitTask();
      } catch(runtime_error &e) {
        cerr << "** ERROR: " << e.what() << endl;
        exit(EXIT_FAILURE);
      }
    }


    Delphes3Backend::~Delphes3Backend() {
      try {
        // Finalization and deletion of stuff
        modularDelphes->FinishTask();
        delete confReader;
        delete modularDelphes;
      } catch(runtime_error &e) {
        cerr << "** ERROR: " << e.what() << endl;
        exit(EXIT_FAILURE);
      }
    }


    void Delphes3Backend::processEvent(const Pythia8::Event& eventIn,
                                       HEP_Simple_Lib::Event &eventOut) {
      try {
        modularDelphes->Clear();
        convertInput(eventIn);
        modularDelphes->ProcessTask();
        convertOutput(eventOut);
      } catch(runtime_error &e) {
        cerr << "** ERROR: " << e.what() << endl;
        exit(EXIT_FAILURE);
      }
    }


    void Delphes3Backend::convertInput(const Pythia8::Event& event) {

      for (int ip = 0; ip < event.size(); ++ip) {
        const Pythia8::Particle& p = event[ip];
        candidate = factory->NewCandidate();

        /// @todo How to convert Py8 events without hadronisation?

        candidate->PID = p.id();
        pdgCode = abs(candidate->PID);

        //candidate->Status = p.status();
        //MJW changed this because it may be confusing DELPHES

        candidate->Status=p.status();

        pdgParticle = pdg->GetParticle(p.id());

        candidate->Charge = pdgParticle ? Int_t(pdgParticle->Charge()/3.0) : -999;
        candidate->Mass = pdgParticle ? pdgParticle->Mass() : -999.9;

        candidate->Momentum.SetPxPyPzE(p.px(), p.py(), p.pz(), p.e());
        candidate->Position.SetXYZT(p.xProd(), p.yProd(), p.zProd(), p.tProd());

        /// @todo Why do the non-final particles (other than B's and taus) need to be passed? Speedup?
        allParticleOutputArray->Add(candidate);
        if (!pdgParticle) continue;

        if (p.isFinal()) {
          stableParticleOutputArray->Add(candidate);
        }
        if (pdgCode <= 5 || pdgCode == 21 || pdgCode == 15) {
          partonOutputArray->Add(candidate);

        }
      }
    }


    // See the DelphesGambit.hpp file for details
    void Delphes3Backend::convertOutput(HEP_Simple_Lib::Event &event) {
      event.clear();

      HEP_Simple_Lib::Particle *recoParticle;
      HEP_Simple_Lib::Jet *recoJet;
      // Delphes particle arrays: Post-Detector Sim
      //    MISSING ET:
      const TObjArray *arrayMissingET = modularDelphes->ImportArray("MissingET/momentum");
      if ((candidate = static_cast<Candidate*>(arrayMissingET->At(0)))) {
        const TLorentzVector &momentum = candidate->Momentum;
        event.set_missingmom(P4::mkXYZM(-1*momentum.Px(), -1*momentum.Py(), 0., 0.));
      }

      // Delphes particle arrays: Post-Detector Sim
      //    PHOTONS:
      const TObjArray *arrayPhotons = modularDelphes->ImportArray("PhotonIsolation/photons");
      TIter iteratorPhotons(arrayPhotons);
      iteratorPhotons.Reset();
      while ((candidate = static_cast<Candidate*>(iteratorPhotons.Next()))) {
        const TLorentzVector &momentum = candidate->Momentum;
        recoParticle = new HEP_Simple_Lib::Particle(P4::mkXYZM(momentum.Px(), momentum.Py(), momentum.Pz(), 0.), PID::PHOTON);
        recoParticle->set_prompt(true);
        event.add_particle(recoParticle);
      }

      // Delphes particle arrays: Post-Detector Sim
      //    ELECTRONS:
      const TObjArray *arrayElectrons = modularDelphes->ImportArray("ElectronIsolation/electrons");
      TIter iteratorElectrons(arrayElectrons);
      iteratorElectrons.Reset();
      while ((candidate = static_cast<Candidate*>(iteratorElectrons.Next()))) {
        const TLorentzVector &momentum = candidate->Momentum;
        recoParticle = new HEP_Simple_Lib::Particle(P4::mkXYZM(momentum.Px(), momentum.Py(), momentum.Pz(), 0.000510998902),
                                    -sign(candidate->Charge) * PID::ELECTRON);
        recoParticle->set_prompt(true);
        event.add_particle(recoParticle);
      }

      // Delphes particle arrays: Post-Detector Sim
      //    MUONS:
      const TObjArray *arrayMuons = modularDelphes->ImportArray("MuonIsolation/muons");
      TIter iteratorMuons(arrayMuons);
      iteratorMuons.Reset();
      while ((candidate = static_cast<Candidate*>(iteratorMuons.Next()))) {
        const TLorentzVector &momentum = candidate->Momentum;
        recoParticle = new HEP_Simple_Lib::Particle(P4::mkXYZM(momentum.Px(), momentum.Py(), momentum.Pz(), 0.105658389),
                                    -sign(candidate->Charge) * PID::MUON);
        recoParticle->set_prompt(true);
        event.add_particle(recoParticle);
      }

      // Delphes particle arrays: Post-Detector Sim
      //    JETS and TAUS:
      const TObjArray *arrayJets = modularDelphes->ImportArray("FastJetFinder/jets");
      TIter iteratorJets(arrayJets);
      iteratorJets.Reset();
      while ((candidate = static_cast<Candidate*>(iteratorJets.Next()))) {
        const TLorentzVector &momentum = candidate->Momentum;
        if (candidate->TauTag) {
          recoParticle = new HEP_Simple_Lib::Particle(P4::mkXYZM(momentum.Px(), momentum.Py(), momentum.Pz(), 1e-6),
                                      -sign(candidate->Charge) * PID::TAU);
          recoParticle->set_prompt(true);
          event.add_particle(recoParticle);
          //continue;
        }
        else {
          /// @todo Should the jet mass be assigned properly rather than set as microscopic?
          recoJet = new HEP_Simple_Lib::Jet(P4::mkXYZM(momentum.Px(), momentum.Py(), momentum.Pz(), 1e-6), candidate->BTag);
          event.addJet(recoJet);
        }
      }
    }


  }
}
