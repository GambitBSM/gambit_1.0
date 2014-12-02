#pragma once
#include <string>
#include <vector>
#include <exception>

/// @note To configure a new detector, follow these steps:
/// @note (To configure a new subprocess group, only do STEPS >= 5)
/// @note STEP1)  BOSS your favorite collider simulator. Then:
#include "shared_types.hpp"

/// Some other includes
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

#include "HEPUtils/Event.h"
#include "HEPUtils/Particle.h"
#include "HEPUtils/Jet.h"
#include "MCUtils/PIDCodes.h"

#include "Py8Utils.hpp"
#include "ColliderBit_macros.hpp"


namespace Gambit {
  namespace ColliderBit {

    /// @note Abstract base class Detector
    template <typename EventIn, typename EventOut>
    class Detector {
    public:
      typedef EventIn EventInType;
      typedef EventOut EventOutType;
      Detector() { }
      virtual ~Detector() { }

      /// @name Initialization functions
      //@{

      /// @brief Default settings for each sub-class.
      virtual void defaults() = 0;
      /// @brief Settings parsing and initialization for each sub-class.
      virtual void init(const std::vector<std::string>& settings) = 0;
      //@}

      /// @name Event detection simulation. Pure virtual; must override.
      //@{
      virtual void processEvent(const EventIn&, EventOut&) = 0;
      //@}

    };


    /// @TODO Ugh, do I really need to have ALL of this here?
    ///       Answer: yep, otherwise some error about "incomplete type"
    /// @note Abstract base class DelphesToHEPUtilsBase
    template <typename EventIn>
    class DelphesToHEPUtilsBase : public Detector<EventIn, HEPUtils::Event> {
    public:
      /// @name Initialization functions
      //@{
      virtual void defaults() {}
      virtual void init(const std::vector<std::string>& settings) {
        try {
          // To read Delphes Config File
          std::string configFilename = settings[0];
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
        } catch(std::runtime_error &e) {
	  std::cerr << "** ERROR: " << e.what() << endl;
          exit(EXIT_FAILURE);
        }
      }
      //@}

      /// @name Event detection simulation.
      //@{
      virtual void processEvent(const EventIn& eventIn, HEPUtils::Event& eventOut)  {
        try {
          modularDelphes->Clear();
          convertInput(eventIn);
          modularDelphes->ProcessTask();
          convertOutput(eventOut);
        } catch(std::runtime_error &e) {
	  std::cerr << "** ERROR: " << e.what() << endl;
          exit(EXIT_FAILURE);
        }
      }
      //@}

    protected:
      /// @name Event conversion functions.
      //@{
      virtual void convertInput(const EventIn&) = 0; //< @note Pure virtual.
      virtual void convertOutput(HEPUtils::Event &event) {
        event.clear();

        HEPUtils::Particle *recoParticle;
        HEPUtils::Jet *recoJet;
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
          recoParticle = new HEPUtils::Particle(P4::mkXYZM(momentum.Px(), momentum.Py(), momentum.Pz(), 0.), PID::PHOTON);
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
          recoParticle = new HEPUtils::Particle(P4::mkXYZM(momentum.Px(), momentum.Py(), momentum.Pz(), 0.000510998902),
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
          recoParticle = new HEPUtils::Particle(P4::mkXYZM(momentum.Px(), momentum.Py(), momentum.Pz(), 0.105658389),
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
            recoParticle = new HEPUtils::Particle(P4::mkXYZM(momentum.Px(), momentum.Py(), momentum.Pz(), 1e-6),
                                        -sign(candidate->Charge) * PID::TAU);
            recoParticle->set_prompt(true);
            event.add_particle(recoParticle);
            //continue;
          }
          else {
            /// @todo Should the jet mass be assigned properly rather than set as microscopic?
            recoJet = new HEPUtils::Jet(P4::mkXYZM(momentum.Px(), momentum.Py(), momentum.Pz(), 1e-6), candidate->BTag);
            event.addJet(recoJet);
          }
        }
      }
      //@}


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
    };
    

    class Delphes_PythiaToHEPUtils : public DelphesToHEPUtilsBase<Pythia8::Event> {
    protected:
      /// @name Event conversion functions.
      //@{
      virtual void convertInput(const Pythia8::Event& event) {
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
      //@}
    };

    /// @TODO subclass further to configure different detector configurations?
    ///       Or just continue to use Delphes configuration file?

    /// Extra simple factory function, until we decide to make more subclasses
    DECLARE_COLLIDER_FACTORY(Delphes_PythiaToHEPUtils, Delphes_PythiaToHEPUtils)
    Delphes_PythiaToHEPUtils* mkDelphes(const std::string&, const std::vector<std::string>& settings);
  }
}
