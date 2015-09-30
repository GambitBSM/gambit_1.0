#include "gambit/ColliderBit/detectors/DelphesVanilla.hpp"

#ifndef DITCH_DELPHES
namespace Gambit {
  namespace ColliderBit {

    /// @name DelphesVanilla definitions
    //@{
      void DelphesVanilla::init(const std::vector<std::string>& settings) {
        try {
          // To read Delphes Config File
          std::string configFilename = settings[0];
          confReader = new ExRootConfReader();
          confReader->ReadFile(configFilename.c_str());

          // Modularity of Delphes set by Config File
          _modularDelphes = new Delphes("Delphes");
          _modularDelphes->SetConfReader(confReader);

          // Factory production of particle "candidates"
          factory = _modularDelphes->GetFactory();

          // Delphes particle arrays: Pre-Detector-Sim
          allParticleOutputArray = _modularDelphes->ExportArray("allParticles");
          stableParticleOutputArray = _modularDelphes->ExportArray("stableParticles");
          partonOutputArray = _modularDelphes->ExportArray("partons");

          // Database of PDG codes and particle info
          pdg = TDatabasePDG::Instance();

          _modularDelphes->InitTask();
        } catch(std::runtime_error &e) {
          std::cerr << "** ERROR: " << e.what() << endl;
          exit(EXIT_FAILURE);
        }
      }
 

      void DelphesVanilla::convertInput(const Pythia8::Event& event) const {
        Int_t pdgCode;
        Candidate *candidate;
        TParticlePDG *pdgParticle;

        for (int ip = 0; ip < event.size(); ++ip) {
          const Pythia8::Particle& p = event[ip];
          candidate = factory->NewCandidate();

          /// @TODO How to convert Py8 events without hadronisation?
          candidate->PID = p.id();
          pdgCode = abs(candidate->PID);

          candidate->Status=p.status();
          pdgParticle = pdg->GetParticle(p.id());

          candidate->Charge = pdgParticle ? Int_t(pdgParticle->Charge()/3.0) : -999;
          candidate->Mass = pdgParticle ? pdgParticle->Mass() : -999.9;

          candidate->Momentum.SetPxPyPzE(p.px(), p.py(), p.pz(), p.e());
          candidate->Position.SetXYZT(p.xProd(), p.yProd(), p.zProd(), p.tProd());
          candidate->D1 = p.daughter1();
          candidate->D2 = p.daughter2();
          /// @TODO Why do the non-final particles (other than B's and taus) need to be passed? Speedup?
          allParticleOutputArray->Add(candidate);
          if (!pdgParticle) continue;
          if (p.isFinal()) stableParticleOutputArray->Add(candidate);

          if (pdgCode <= 5 || pdgCode == 21 || pdgCode == 15) partonOutputArray->Add(candidate);
        }
      }


      void DelphesVanilla::convertOutput(HEPUtils::Event &event) const {
        Candidate *candidate;
        event.clear();

        HEPUtils::Particle *recoParticle;
        HEPUtils::Jet *recoJet;
        // Delphes particle arrays: Post-Detector Sim
        //    MISSING ET:
        const TObjArray *arrayMissingET = _modularDelphes->ImportArray("MissingET/momentum");
        if ((candidate = static_cast<Candidate*>(arrayMissingET->At(0)))) {
          const TLorentzVector &momentum = candidate->Momentum;
          event.set_missingmom(HEPUtils::P4::mkXYZM(-1*momentum.Px(), -1*momentum.Py(), 0., 0.));
        }

        // Delphes particle arrays: Post-Detector Sim
        //    PHOTONS:
        const TObjArray *arrayPhotons = _modularDelphes->ImportArray("PhotonIsolation/photons");
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
        const TObjArray *arrayElectrons = _modularDelphes->ImportArray("ElectronIsolation/electrons");
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
        const TObjArray *arrayMuons = _modularDelphes->ImportArray("MuonIsolation/muons");
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
        const TObjArray *arrayJets = _modularDelphes->ImportArray("FastJetFinder/jets");
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
        try {
          _modularDelphes->Clear();
          convertInput(eventIn);
          _modularDelphes->ProcessTask();
          convertOutput(eventOut);
        } catch(std::runtime_error &e) {
          std::cerr << "** ERROR: " << e.what() << endl;
          exit(EXIT_FAILURE);
        }
      }
    //@}

  }
}
#endif // not defined DITCH_DELPHES
