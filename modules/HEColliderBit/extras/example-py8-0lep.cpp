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
using namespace Gambit;
using namespace fastjet;
using namespace std;


int main() {

  Pythia8::Pythia py;
  Pythia8::Settings& pycfg = py.settings;
  pycfg.parm("Beams:eCM", 8000);
  pycfg.mode("Main:numberOfEvents", 1000);
  pycfg.mode("Main:timesAllowErrors", 1000);
  pycfg.flag("Init:showProcesses", false);
  pycfg.flag("Init:showMultipartonInteractions", false);
  pycfg.flag("Init:showChangedSettings", false);
  pycfg.flag("Init:showChangedParticleData", false);
  pycfg.mode("Next:numberShowEvent", 0);
  pycfg.mode("Next:numberShowInfo", 0);
  pycfg.mode("Next:numberShowProcess", 0);
  pycfg.flag("Random:setSeed", true);
  pycfg.mode("Random:seed", 12345);

  pycfg.flag("PartonLevel:MPI", false);
  // pycfg.flag("PartonLevel:ISR", false);
  pycfg.flag("PartonLevel:FSR", false);
  pycfg.flag("HadronLevel:all", false);

  // pycfg.flag("HardQCD:all", true);
  // pycfg.parm("PhaseSpace:pTHatMin", 20);

  // pycfg.flag("HardQCD:gg2bbbar", true);

  // pycfg.flag("SUSY:qg2squarkgluino", true);
  pycfg.flag("SUSY:all", true);
  pycfg.word("SLHA:file", "sps1aWithDecays.spc");

  // pycfg.flag("WeakSingleBoson:ffbar2gmZ", true);
  // pycfg.flag("23:onMode", false);
  // pycfg.mode("23:onIfAny", 11);
  // pycfg.parm("PhaseSpace:mHatMin", 50.);
  // pycfg.parm("PhaseSpace:mHatMax", 120.);

  py.init();

  Gambit::Analysis* ana = Gambit::mkAnalysis("ATLAS_0LEP");
  ana->init();

  for (size_t i = 0; i < 1000; ++i) {
    if (!py.next()) continue;
    cout << py.event.size() << endl;
    
    Gambit::Event evt;
    fillGambitEvent(py.event, evt);
    
    ana->analyze(evt);
  }
  ana->finalize();
  
  return 0;
}
