// Pythia8
#include "Pythia.h"

// ROOT
#include "TH1.h"
#include "TVirtualPad.h"
#include "TApplication.h"
#include "TFile.h"

// GAMBIT
#include "Particle.hpp"
#include "FastSim.hpp"
using namespace Gambit;


//////////////////////////////////////////////////


class MyAnalysis {

public:

  // Constructor can be empty.
  MyAnalysis() {}

  ~MyAnalysis();

  // Initialization actions.
  void init();

  // Analysis of each new event.
  void analyze(Pythia8::Event& event);

  // Show final results.
  void finish();

  TFile *m_ROOToutFile;

  void SelectParticles(Pythia8::Event& event);

private:

  // Declare variables and objects that span init - analyze - finish.
  int  nEvt;

  // the list of particles that are input to the detector response
  vector<Particle*> _electrons;
  vector<Particle*> _muons;
  vector<Particle*> _photons;
  vector<Particle*> _bjets;
  vector<Particle*> _tauhads;
  vector<Particle*> _chargedhads;
  vector<Particle*> _weakly_interactings; // stdm neutrinos, susy neutralinos

  TH1F *m_hBosonPt, *m_hBosoneta, *m_hBosonphi;
  TH1F *m_hElectronPt, *m_hElectroneta, *m_hElectronphi;

};

//--------------------------------------------------------------------------

// The initialization code.

MyAnalysis::~MyAnalysis() {

  // release the allocated memory
  for (size_t i = 0; i < _electrons.size();i++) {
    delete(_electrons[i]);
    _electrons.erase(_electrons.begin());
  }

  for (size_t i = 0; i < _muons.size();i++) {
    delete(_muons[i]);
    _muons.erase(_muons.begin());
  }

  for (size_t i = 0; i < _photons.size();i++) {
    delete(_photons[i]);
    _photons.erase(_photons.begin());
  }

  for (size_t i = 0; i < _bjets.size();i++) {
    delete(_bjets[i]);
    _bjets.erase(_bjets.begin());
  }

  for (size_t i = 0; i < _tauhads.size();i++) {
    delete(_tauhads[i]);
    _tauhads.erase(_tauhads.begin());
  }

  for (size_t i = 0; i < _chargedhads.size();i++) {
    delete(_chargedhads[i]);
    _chargedhads.erase(_chargedhads.begin());
  }

  for (size_t i = 0; i < _weakly_interactings.size();i++) {
    delete(_weakly_interactings[i]);
    _weakly_interactings.erase(_weakly_interactings.begin());
  }

}


void MyAnalysis::init() {

  // Initialize counter for number of events.
  nEvt = 0;


  m_ROOToutFile= new TFile("PythiaOutput.root","RECREATE");

  // Book histograms.
  m_hBosonPt = new TH1F("BosonPt"," Boson Generated Pt;GeV;",100, 0., 200.);
  m_hBosoneta = new TH1F("Bosoneta"," Boson Generated eta;",100, -5., 5.);
  m_hBosonphi = new TH1F( "BosonPhi","Boson Generated Phi;",100, -6.0, 6.0);

  m_hElectronPt = new TH1F("ElectronPt"," Electron Generated Pt;GeV;",100, 0., 200.);
  m_hElectroneta = new TH1F("Electroneta"," Electron Generated eta;",100, -5., 5.);
  m_hElectronphi = new TH1F( "ElectronPhi","Electron Generated Phi;",100, -6.0, 6.0);

}

//--------------------------------------------------------------------------

void MyAnalysis::SelectParticles(Pythia8::Event& event) {
  // this method selects and categorizes the particles into the respective vectors
  //
  Particle* chosen;

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
            chosen = new Particle(event[i].px(), event[i].py(), event[i].pz(), event[i].e(), event[i].id());
            _photons.push_back(chosen);
            break;
          case 12: // electron neutrinos
          case 14: // muon neutrinos
          case 16: // tau neutrinos
            chosen = new Particle(event[i].px(), event[i].py(), event[i].pz(), event[i].e(), event[i].id());
            _weakly_interactings.push_back(chosen);
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
}


// The event analysis code.
void MyAnalysis::analyze(Pythia8::Event& event) {

  // select the different particles for the fast simulator
  SelectParticles(event);

  FastSim sim;
  sim.InitSimulation(ACERDET);
  sim.SetParticles(_electrons, _muons, _photons, _chargedhads, _bjets, _tauhads, _weakly_interactings);

}

/*
  // Increase counter.
  ++nEvt;


  for (int i = 0; i < (int)event.size(); ++i) {
    if((event[i].isFinal())&&((abs(event[i].id())==12)||(abs(event[i].id())==14)||(abs(event[i].id())==16))){

      pxxnues += event[i].px();
      pyynues += event[i].py();

    }

  // Plot pseudorapidity distribution. Sum up charged multiplicity.
  for (int i = 0; i < event.size(); ++i) {

    switch (event[i].id()) {

      case 23: // z boson

        m_hBosonPt->Fill(event[i].pT());
        m_hBosoneta->Fill(event[i].eta());
        m_hBosonphi->Fill(event[i].phi());

        printf(" Boson %.2f (GeV) %.2f %.2f\n",event[i].pT(),event[i].eta(),event[i].phi());
        break;

      case 11: // electron
      case -11: // electron

        m_hElectronPt->Fill(event[i].pT());
        m_hElectroneta->Fill(event[i].eta());
        m_hElectronphi->Fill(event[i].phi());

        printf(" Electron %.2f (GeV) %.2f %.2f\n",event[i].pT(),event[i].eta(),event[i].phi());
        break;
      default:
        printf(" what other particles are there id %d %.2f (GeV) %.2f %.2f\n",event[i].id(),event[i].pT(),event[i].eta(),event[i].phi());

    }

  }

}
*/

//--------------------------------------------------------------------------

// The finishing code.

void MyAnalysis::finish() {

  // Normalize histograms.
//  double binFactor = 5. / nEvt;
//  yH     *= binFactor;
//  etaChg *= binFactor;

  // Print histograms.
  //  cout << m_hBosonPt << mBosoneta << Bosonphi;

  m_ROOToutFile->Write();


}

//==========================================================================

// You should not need to touch the main program: its actions are
// determined by the .cmnd file and the rest belongs in MyAnalysis.

int main(int argc, char* argv[]) {

  // Check that correct number of command-line arguments
  if (argc != 2) {
    cerr << " Unexpected number of command-line arguments. \n"
         << " You are expected to provide a file name and nothing else. \n"
         << " Program stopped! " << endl;
    return 1;
  }

  // Check that the provided file name corresponds to an existing file.
  ifstream is(argv[1]);
  if (!is) {
    cerr << " Command-line file " << argv[1] << " was not found. \n"
         << " Program stopped! " << endl;
    return 1;
  }

  // Confirm that external file will be used for settings..
  cout << " PYTHIA settings will be read from file " << argv[1] << endl;

//  TApplication theApp("hist", &argc, argv);
  cout << " PYTHIA settings will be read from file " << argv[1] << endl;

  // Declare generator. Read in commands from external file.
  Pythia8::Pythia pythia;
  pythia.readFile(argv[1]);


  // Initialization.
  pythia.init();

  // Declare user analysis class. Do initialization part of it.
  MyAnalysis myAnalysis;
  myAnalysis.init();

  // Read in number of event and maximal number of aborts.
  int nEvent = pythia.mode("Main:numberOfEvents");
  int nAbort = pythia.mode("Main:timesAllowErrors");

  // Begin event loop.
  int iAbort = 0;
  for (int iEvent = 0; iEvent < nEvent; ++iEvent) {

    printf("Event %d\n",iEvent);

    // Generate events. Quit if too many failures.
    if (!pythia.next()) {
      if (++iAbort < nAbort) continue;
      cout << " Event generation aborted prematurely, owing to error!\n";
      break;
    }

    // User Analysis of current event.
    myAnalysis.analyze( pythia.event);

  // End of event loop.
  }

  // Final statistics.
  pythia.stat();

  // User finishing.
  myAnalysis.finish();

  // Done.
  return 0;
}
