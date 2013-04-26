// Gambit
#include "Py8Utils.hpp"
#include "Analysis.hpp"

// External
#include "Pythia.h"
#include "fastjet/ClusterSequence.hh"
// #include "boost/lexical_cast.hpp"
// #include "omp.h"
// #include "TH1F.h"
// #include "TCanvas.h"

using namespace Pythia8;
using namespace GAMBIT;
using namespace fastjet;
using namespace std;


int main() {

  Pythia py;
  py.readString("Beams:eCM = 8000.");
  py.readString("Main:numberOfEvents = 1000");
  py.readString("Main:timesAllowErrors = 1000");
  py.readString("Init:showProcesses = off");
  py.readString("Init:showMultipartonInteractions = off");
  py.readString("Init:showChangedSettings = off");
  py.readString("Init:showChangedParticleData = off");
  py.readString("Next:numberShowEvent = 0");
  py.readString("Next:numberShowInfo = 0");
  py.readString("Next:numberShowProcess = 0");
  py.readString("Random:setSeed = on");
  py.readString("Random:seed = 12345");

  py.readString("PartonLevel:MPI = off");
  // py.readString("PartonLevel:ISR = off");
  py.readString("PartonLevel:FSR = off");
  py.readString("HadronLevel:all = off");

  // py.readString("HardQCD:all = on");
  // py.readString("PhaseSpace:pTHatMin = 20.");

  // py.readString("HardQCD:gg2bbbar = on");

  // py.readString("SUSY:qg2squarkgluino = on");
  py.readString("SUSY:all = on");
  py.readString("SLHA:file = sps1aWithDecays.spc");

  //py.readString("WeakSingleBoson:ffbar2gmZ = on");
  //py.readString("23:onMode = off");
  //py.readString("23:onIfAny = 11");
  //py.readString("PhaseSpace:mHatMin = 50.");
  //py.readString("PhaseSpace:mHatMax = 120.");

  py.init();

  GAMBIT::Analysis* ana = mkAnalysis("ATLAS_0LEP");
  ana->init();

  for (size_t i = 0; i < 1000; ++i) {
    if (!py.next()) continue;
    cout << py.event.size() << endl;

    GAMBIT::Event evt;
    fillGambitEvent(py.event, evt);

    ana->analyze(evt);
  }
  ana->finalize();

  return 0;
}
