#include "gambit/ColliderBit/detectors/DelphesBase.hpp"


namespace Gambit {
  namespace ColliderBit {

    DECLARE_DETECTOR_FACTORY(DelphesVanilla, DelphesBase)

    class DelphesVanilla : public DelphesBase {
      /// @name Class variables
      //@{
      protected:
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
        // Used within the event Converters below
        Candidate *candidate;
        TParticlePDG *pdgParticle;
        Int_t pdgCode;
      //@}

      /// @name Construction, Destruction, and Recycling
      //@{
      public:
        DelphesVanilla() : confReader(nullptr), factory(nullptr),
                           allParticleOutputArray(nullptr),
                           stableParticleOutputArray(nullptr),
                           partonOutputArray(nullptr), pdg(nullptr),
                           candidate(nullptr), pdgParticle(nullptr) { }
        virtual ~DelphesVanilla() { clear(); }
        /// @brief Reset this instance for reuse, avoiding the need for "new" or "delete".
        virtual void clear() {
          delete confReader; confReader=nullptr;
          // hmm... I wonder whether or not Delphes cleans up its own memory?
          delete factory; factory=nullptr;
          delete allParticleOutputArray; allParticleOutputArray=nullptr;
          delete stableParticleOutputArray; stableParticleOutputArray=nullptr;
          delete partonOutputArray; partonOutputArray=nullptr;
          delete pdg; pdg=nullptr;
          delete candidate; candidate=nullptr;
          delete pdgParticle; pdgParticle=nullptr;
          DelphesBase::clear(); //< deletes _modularDelphes
        }
      //@}

      /// @name Initialization functions
      //@{
      public:
        virtual void init(const std::vector<std::string>& settings) {
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
      //@}
 
      /// @name Event conversion functions.
      //@{
      protected:
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


        virtual void convertOutput(HEPUtils::Event &event) {
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
      //@}

    };

    DelphesBase* mkDelphes(const std::string& name, 
                                      const std::vector<std::string>& settings) {
      #define IF_X_RTN_CREATEX(A) if (name == #A) \
              return create_ ## A(settings)
      IF_X_RTN_CREATEX(DelphesVanilla);
      throw std::runtime_error(name + " isn't a known Delphes configuration, you empty-headed animal food trough wiper!");
      return nullptr;
      #undef IF_X_RTN_CREATEX
    }

    DEFINE_DETECTOR_FACTORY(DelphesVanilla, DelphesBase)
  }
}
