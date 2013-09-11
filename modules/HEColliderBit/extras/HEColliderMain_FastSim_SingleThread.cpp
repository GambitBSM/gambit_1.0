//  GAMBIT: Global and Modular BSM Inference Tool
//  //  ********************************************
//  //
//  //  For now, this is a main script for testing
//  //  the Pythia8Backend and FastSimBackend codes.
//  //
//  //  Later on, it should be converted to a module
//  //  with a proper rollcall.
//  //
//  //  ********************************************
//  //
//  //  Authors
//  //  =======
//  //
//  //  (add name and date if you modify)
//  //
//  //  Aldo F. Saavedra
//  //  2013 June 14
//  //
//  //  ********************************************
//
//
#include "Pythia8Backend.hpp"
#include "FastSimBackend.hpp"
#include "Analysis.hpp"
#include "Event.hpp"

#include <string>
#include <iostream>
#include <fstream>
#include "boost/archive/text_oarchive.hpp"
#include "boost/lexical_cast.hpp"

using namespace std;

int main()
{
  // simulation setup...
  DetectorType myDetector = ACERDET;

  // variables used during parallelization
  string temp;
  ofstream outFile;
  boost::archive::text_oarchive *outArchive;
  int counter;

  // For event generation
  Gambit::HEColliderBit::cmndFileName *pythia8_input;
  Gambit::HEColliderBit::Pythia8Backend *myPythia;
  Gambit::HEColliderBit::FastSimBackend *myFastSim;
  myFastSim = new Gambit::HEColliderBit::FastSimBackend(myDetector);

  // For event storage
  Pythia8::Event genEvent;
  Gambit::Event recoEvent;

  cout<<"\n\n Now Testing HECollider FastSimulation:\n\n";

  /// @todo Generalise to a vector of analyses, populated by names
//  Gambit::Analysis* ana = Gambit::mkAnalysis("ATLAS_0LEP");
  Gambit::Analysis* ana = Gambit::mkAnalysis("PERF");

  // at the moment the ouptut file for the analysis is hardwired
  ana->init();


  pythia8_input = new Gambit::HEColliderBit::cmndFileName(12345,"cmndpythia_zee.cmnd");
  myPythia = new Gambit::HEColliderBit::Pythia8Backend(*pythia8_input);

  // For a reasonable output

    temp = "testing_pythia8_fastsim.dat";
    outFile.open(temp.c_str());
    outArchive = new boost::archive::text_oarchive(outFile);

  int nevents = myPythia->nEvents();
  cout << " The number of events to process is " << nevents << endl;
  for (counter=0; counter<nevents; counter++)
  {
    genEvent.clear();
    recoEvent.clear();
    myPythia->nextEvent(genEvent);
    {
      myFastSim->processEvent(genEvent, recoEvent);
    }
    ana->analyze(recoEvent);
    // write recoEvent instance to file
    (*outArchive) << recoEvent;
  }
  cout<<"\n\n";
  delete outArchive;
  outFile.close();

  delete pythia8_input;
  delete myPythia;

  ana->finalize();
  //cout << "LIKELIHOOD = " << ana->likelihood() << endl;
  delete ana;
  delete myFastSim;

  cout<<"\n\n HECollider Fast Simulation + Analysis finished.\n\n";
  return 0;
}
