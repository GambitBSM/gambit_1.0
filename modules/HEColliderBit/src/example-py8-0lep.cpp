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

  Pythia8::Pythia py;
  py.settings.parm("Beams:eCM", 8000);
  py.settings.mode("Main:numberOfEvents", 1000);
  py.settings.mode("Main:timesAllowErrors", 1000);
  py.settings.flag("Init:showProcesses", false);
  py.settings.flag("Init:showMultipartonInteractions", false);
  py.settings.flag("Init:showChangedSettings", false);
  py.settings.flag("Init:showChangedParticleData", false);
  py.settings.mode("Next:numberShowEvent", 0);
  py.settings.mode("Next:numberShowInfo", 0);
  py.settings.mode("Next:numberShowProcess", 0);
  py.settings.flag("Random:setSeed", true);
  py.settings.mode("Random:seed", 12345);

  py.settings.flag("PartonLevel:MPI", false);
  // py.settings.flag("PartonLevel:ISR", false);
  py.settings.flag("PartonLevel:FSR", false);
  py.settings.flag("HadronLevel:all", false);

  // py.settings.flag("HardQCD:all", true);
  // py.settings.parm("PhaseSpace:pTHatMin", 20);

  // py.settings.flag("HardQCD:gg2bbbar", true);

  // py.settings.flag("SUSY:qg2squarkgluino", true);
  py.settings.flag("SUSY:all", true);
  py.settings.word("SLHA:file", "sps1aWithDecays.spc");

  // py.settings.flag("WeakSingleBoson:ffbar2gmZ", true);
  // py.settings.flag("23:onMode", false);
  // py.settings.mode("23:onIfAny", 11);
  // py.settings.parm("PhaseSpace:mHatMin", 50.);
  // py.settings.parm("PhaseSpace:mHatMax", 120.);

  py.init();

  GAMBIT::Analysis* ana = GAMBIT::mkAnalysis("ATLAS_0LEP");
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
