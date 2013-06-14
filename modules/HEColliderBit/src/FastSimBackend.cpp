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
//  //  2013 June 13,14
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
                _photons.push_back(chosen);
                break;
              case 12: // electron neutrinos
              case 14: // muon neutrinos
              case 16: // tau neutrinos

                particle_mom=P4::mkXYZM(event[i].px(), event[i].py(), event[i].pz(),0);
                chosen = new Particle(particle_mom,event[i].id());
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

    // ReconstructedEvent is a boring class in the HEColliderBit namespace
    //    See the DelphesGambit.hpp file for details
    void FastSimBackend::convertOutput(Event &event)
    {
      modularFastSim->getRecoEvent(event);
    }

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
