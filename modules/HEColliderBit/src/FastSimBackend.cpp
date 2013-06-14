//  GAMBIT: Global and Modular BSM Inference Tool
//  //  ********************************************
//  //
//  //  Functions for FastSimBackend
//  //
//  //  ********************************************
//  //
//  //  Authors
//  //  =======
//  //
//  //  (add name and date if you modify)
//  //
//  //  Aldo Saavedra
//  //  2013 June 13
//  //
//  //  ********************************************
//
//
#include <stdexcept>
#include <string>
#include <iostream>
#include <cstdlib>

#include "Event.hpp"
#include "PIDCodes.hpp"
#include "Particle.hpp"
#include "Jet.hpp"


#include "FastSimBackend.hpp"

using namespace std;

namespace GAMBIT
{
  namespace HEColliderBit
  {
    FastSimBackend::FastSimBackend(DetectorType detector)
    {

      modularFastSim = new FastSim();
      modularFastSim->init(detector);


      /*
         try
         {
         FastSim sim;
         FastSimEvent fastevent;
      //  sim.init(NOMINAL);
      sim.init(ACERDET);


      // To read Delphes Config File
      confReader = new ExRootConfReader();
      confReader->ReadFile(configFileName.c_str());

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
      }
      catch(runtime_error &e)
      {
      cerr << "** ERROR: " << e.what() << endl;
      exit(EXIT_FAILURE);
      }
      */
    }


    FastSimBackend::~FastSimBackend()
    {
      delete modularFastSim;

#define DELETE_PTRVEC(vec) for (size_t i = 0; i < _electrons.size();i++) delete _electrons[i]; _electrons.clear()
      DELETE_PTRVEC(_electrons);
      DELETE_PTRVEC(_muons);
      DELETE_PTRVEC(_photons);
      DELETE_PTRVEC(_bjets);
      DELETE_PTRVEC(_tauhads);
      DELETE_PTRVEC(_chargedhads);
      DELETE_PTRVEC(_weakly_interacting);
#undef DELETE_PTRVEC


      /*
         try
         {
      // Finalization and deletion of stuff
      modularDelphes->FinishTask();
      delete confReader;
      delete modularDelphes;
      }
      catch(runtime_error &e)
      {
      cerr << "** ERROR: " << e.what() << endl;
      exit(EXIT_FAILURE);
      }
      */
    }


    void FastSimBackend::processEvent(Pythia8::Event &eventIn, Event &eventOut)
    {

      try
      {
        modularFastSim->clear();
        convertInput(eventIn);
        modularFastSim->doDetectorResponse();
        convertOutput(eventOut);
      }
      catch(runtime_error &e)
      {
        cerr << "** ERROR: " << e.what() << endl;
        exit(EXIT_FAILURE);
      }

    }


    void FastSimBackend::convertInput(Pythia8::Event &event)
    {
      Particle* chosen;
      P4 particle_mom;

      clear(); // clears the vectors
      // iterate through each of the particles, select and sort them into the different vectors
      for (int i = 0; i < event.size(); ++i) {

        if (event[i].isFinal()) {

          if (event[i].isCharged()) {
            switch (int(fabs(event[i].id()))) {
              /// @todo This needs to change, it should be only prompt leptons.. not just any lepton
              case 11: // electron
                chosen = new Particle(event[i].px(), event[i].py(), event[i].pz(), event[i].e(), event[i].id());
                _electrons.push_back(chosen);
                break;
              case 13: // muon
                chosen = new Particle(event[i].px(), event[i].py(), event[i].pz(), event[i].e(), event[i].id());
                _muons.push_back(chosen);
                break;
              default: // every other hadronic charged particle - for the jets
                chosen = new Particle(event[i].px(), event[i].py(), event[i].pz(), event[i].e(), event[i].id());
                _chargedhads.push_back(chosen);
                // printf("charged final particle missed %d\n",event[i].id());
            }
          }
          else {
            switch (int(fabs(event[i].id()))) {
              case 22: // photon

                particle_mom=P4::mkXYZM(event[i].px(), event[i].py(), event[i].pz(),0);
                chosen = new Particle(particle_mom,event[i].id());

                //            chosen = new Particle(event[i].px(), event[i].py(), event[i].pz(), event[i].e(), event[i].id());
                //            printf("Photons eta %.2f phi %.2f px %f py %f pz %f E %f  m %f e %f \n",(float)chosen->mom().eta(),(float)chosen->mom().phi(),
                //                (float)chosen->mom().px(),(float)chosen->mom().py(),(float)chosen->mom().pz(),(float)chosen->mom().E(),
                //                (float)chosen->mom().m(), event[i].e());
                _photons.push_back(chosen);
                break;
              case 12: // electron neutrinos
              case 14: // muon neutrinos
              case 16: // tau neutrinos

                particle_mom=P4::mkXYZM(event[i].px(), event[i].py(), event[i].pz(),0);
                chosen = new Particle(particle_mom,event[i].id());
                //            chosen = new Particle(event[i].px(), event[i].py(), event[i].pz(), event[i].e(), event[i].id());
                _weakly_interactings.push_back(chosen);
                break;
              case -2112:
              case 2112: // neutrons
              case 130: // neutral kaon - not sure what to do
                break;

              default: printf("neutral final particle missed %d\n",event[i].id());
            }
          }
        }

        if ((event[i].isQuark()) && (fabs(event[i].id()) == 6)) {

          chosen = new Particle(event[i].px(), event[i].py(), event[i].pz(), event[i].e(), event[i].id());
          _bjets.push_back(chosen);
        }


        // lets get our taus, they are unstable so we need a special list and case for them
        if ((event[i].isLepton()) && (fabs(event[i].id()) == 15)) {

          int daughter1 = event[i].daughter1();
          int daughter2 = event[i].daughter2();

          for (int j=daughter1; j<=daughter2;j++) {
            // printf("tau daughters (%d) are %d pdgId %d pt %.2f\n",j,event[j].id(),event[j].pT());
            cout << "tau daughters (" << j << ") are pdgId = " << event[j].id() << ", pt = " << event[j].pT() << " GeV" << endl;
          }

          // we need to remove the leptonically decaying taus - perhaps do an overlap removal with electrons
          chosen = new Particle(event[i].px(), event[i].py(), event[i].pz(), event[i].e(), event[i].id());
          _tauhads.push_back(chosen);
        }

      }
      modularFastSim->setParticles(_electrons, _muons, _photons, _chargedhads, _bjets, _tauhads, _weakly_interactings);
    }

    /*
       const Pythia8::Particle& p = event[ip];
       candidate = factory->NewCandidate();

       candidate->PID = p.id();
       pdgCode = TMath::Abs(candidate->PID);

       candidate->Status = p.status();

       pdgParticle = pdg->GetParticle(p.id());
       candidate->Charge = pdgParticle ? Int_t(pdgParticle->Charge()/3.0) : -999;
       candidate->Mass = pdgParticle ? pdgParticle->Mass() : -999.9;

       candidate->Momentum.SetPxPyPzE(p.px(), p.py(), p.pz(), p.e());
       candidate->Position.SetXYZT(p.xProd(), p.yProd(), p.zProd(), p.tProd());

       allParticleOutputArray->Add(candidate);
       if(!pdgParticle)
       continue;
       if(p.isFinal())
       {
       stableParticleOutputArray->Add(candidate);
       }
       else if(pdgCode <= 5 || pdgCode == 21 || pdgCode == 15)
       {
       partonOutputArray->Add(candidate);
       }
       }
       */

    // ReconstructedEvent is a boring class in the HEColliderBit namespace
    //    See the DelphesGambit.hpp file for details
    void FastSimBackend::convertOutput(Event &event)
    {

      modularFastSim->getRecoEvent(event);

    }

    /*
       Particle *recoParticle;
       Jet *recoJet;
    // Delphes particle arrays: Post-Detector Sim
    //    MISSING ET:
    const TObjArray *arrayMissingET = modularDelphes->ImportArray("MissingET/momentum");
    if((candidate = static_cast<Candidate*>(arrayMissingET->At(0))))
    {
    const TLorentzVector &momentum = candidate->Momentum;
    event.setMissingMom(P4::mkXYZM(momentum.Px(), momentum.Py(), 0., 0.));
    }

    // Delphes particle arrays: Post-Detector Sim
    //    PHOTONS:
    const TObjArray *arrayPhotons = modularDelphes->ImportArray("UniqueObjectFinder/photons");
    TIter iteratorPhotons(arrayPhotons);
    iteratorPhotons.Reset();
    while((candidate = static_cast<Candidate*>(iteratorPhotons.Next())))
    {
    const TLorentzVector &momentum = candidate->Momentum;
    recoParticle = new Particle(momentum.Px(), momentum.Py(), momentum.Pz(), 
    momentum.E(), PID::PHOTON);
    event.addParticle(recoParticle);
    }

    // Delphes particle arrays: Post-Detector Sim
    //    ELECTRONS:
    const TObjArray *arrayElectrons = modularDelphes->ImportArray("UniqueObjectFinder/electrons");
    TIter iteratorElectrons(arrayElectrons);
    iteratorElectrons.Reset();
    while((candidate = static_cast<Candidate*>(iteratorElectrons.Next())))
    {
    const TLorentzVector &momentum = candidate->Momentum;
    if(candidate->Charge < 0)
    recoParticle = new Particle(momentum.Px(), momentum.Py(), momentum.Pz(), 
    momentum.E(), PID::ELECTRON);
    else
    recoParticle = new Particle(momentum.Px(), momentum.Py(), momentum.Pz(), 
    momentum.E(), PID::POSITRON);
    event.addParticle(recoParticle);
    }

    // Delphes particle arrays: Post-Detector Sim
    //    MUONS:
    const TObjArray *arrayMuons = modularDelphes->ImportArray("MuonIsolation/muons");
    TIter iteratorMuons(arrayMuons);
    iteratorMuons.Reset();
    while((candidate = static_cast<Candidate*>(iteratorMuons.Next())))
    {
    const TLorentzVector &momentum = candidate->Momentum;
    if(candidate->Charge < 0)
    recoParticle = new Particle(momentum.Px(), momentum.Py(), momentum.Pz(), 
    momentum.E(), PID::MUON);
    else
    recoParticle = new Particle(momentum.Px(), momentum.Py(), momentum.Pz(), 
    momentum.E(), PID::ANTIMUON);
    event.addParticle(recoParticle);
    }

    // Delphes particle arrays: Post-Detector Sim
    //    JETS and TAUS:
    const TObjArray *arrayJets = modularDelphes->ImportArray("UniqueObjectFinder/jets");
    TIter iteratorJets(arrayJets);
    iteratorJets.Reset();
    while((candidate = static_cast<Candidate*>(iteratorJets.Next())))
    {
    const TLorentzVector &momentum = candidate->Momentum;
    if (candidate->TauTag)
    {
    if(candidate->Charge < 0)
    recoParticle = new Particle(momentum.Px(), momentum.Py(), momentum.Pz(), 
    momentum.E(), PID::TAU);
    else
      recoParticle = new Particle(momentum.Px(), momentum.Py(), momentum.Pz(), 
          momentum.E(), PID::ANTITAU);
    event.addParticle(recoParticle);
    continue;
}
if(candidate->BTag)
  recoJet = new Jet(momentum.Px(), momentum.Py(), momentum.Pz(), 
      momentum.E(), true);
else
recoJet = new Jet(momentum.Px(), momentum.Py(), momentum.Pz(), 
    momentum.E(), false);
event.addJet(recoJet);
}
*/

void FastSimBackend::clear() {

  _electrons.clear();
  _muons.clear();
  _photons.clear();
  _bjets.clear();
  _tauhads.clear();
  _chargedhads.clear();
  _weakly_interactings.clear(); // stdm neutrinos, susy neutralinos

}

}
}
