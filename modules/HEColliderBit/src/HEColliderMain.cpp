//  GAMBIT: Global and Modular BSM Inference Tool
//  //  ********************************************
//  //
//  //  For now, this is a main script for testing
//  //  the Pythia8Backend and Delphes3Backend codes.
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
//  //  Abram Krislock
//  //  2013 Apr 23
//  //  Aldo Saavedra
//  //  2013 June 14
//  //
//  //  ********************************************
//
//
#include "Pythia8Backend.hpp"
#include "Delphes3Backend.hpp"
#include "Analysis.hpp"
#include "Event.hpp"

#include <string>
#include <iostream>
#include <fstream>
#include "boost/archive/text_oarchive.hpp"
#include "boost/lexical_cast.hpp"

// External
#include "omp.h"
#define NEVENTS 10000
#define MAIN_SHARED counter,slhaFileName,delphesConfigFile,myDelphes
#define MAIN_PRIVATE genEvent,recoEvent,outFile,outArchive,temp,myPythia


using namespace std;

int main()
{
  // simulation setup...
  //string slhaFileName = "mhmodBenchmark.slha";
  string slhaFileName = "sps1aWithDecays.spc";
  string delphesConfigFile = "delphes_card_ATLAS.tcl";

  // variables used during parallelization
  string temp;
  ofstream outFile;
  boost::archive::text_oarchive* outArchive;
  int counter;

  // For event generation
  GAMBIT::HEColliderBit::Pythia8Backend* myPythia;
  GAMBIT::HEColliderBit::Delphes3Backend* myDelphes;
  myDelphes = new GAMBIT::HEColliderBit::Delphes3Backend(delphesConfigFile);

  // For event storage
  Pythia8::Event genEvent;
  GAMBIT::Event recoEvent;

  cout << endl << "Running parallelized HECollider simulation" << endl << endl;

  /// @todo Generalise to a vector of (vector of) analyses, populated by names
  GAMBIT::Analysis* ana = GAMBIT::mkAnalysis("ATLAS_0LEP_7TeV");
  ana->init(); //< @todo Convert to auto-initialize

  #pragma omp parallel shared(MAIN_SHARED) private(MAIN_PRIVATE)
  {
    // Initialize the backends
    myPythia = new GAMBIT::HEColliderBit::Pythia8Backend(omp_get_thread_num());
    myPythia->set("SLHA:file", slhaFileName);

    // Subprocesses
    myPythia->set("SUSY:gg2gluinogluino", true);
    myPythia->set("SUSY:qqbar2gluinogluino", true);
    myPythia->set("SUSY:qg2squarkgluino", true);
    myPythia->set("SUSY:gg2squarkantisquark", true);
    myPythia->set("SUSY:qqbar2squarkantisquark ", true);
    myPythia->set("SUSY:qq2squarksquark ", true);
    myPythia->set("SUSY:qg2chi0squark", true);
    myPythia->set("SUSY:qg2chi+-squark", true);
    myPythia->set("SUSY:qqbar2chi0gluino", true);
    myPythia->set("SUSY:qqbar2chi+-gluino", true);
    // This way doesn't work!
    // myPythia->set("SUSY:all", true);
    // myPythia->set("SUSY:qqbar2chi0chi0", false);
    // myPythia->set("SUSY:qqbar2chi+-chi0", false);
    // myPythia->set("SUSY:qqbar2chi+chi-", false);


    // For a reasonable output
    temp = "tester_thread"+boost::lexical_cast<string>(omp_get_thread_num())+".dat";
    outFile.open(temp.c_str());
    outArchive = new boost::archive::text_oarchive(outFile);

    int nevents = myPythia->nEvents(); // this is hardwired for slha files, so use the def for now
    cout << " The number of events to process is " << NEVENTS << endl;
    #pragma omp for schedule(guided)
    for (counter=0; counter<NEVENTS; counter++)
    {
      genEvent.clear();
      recoEvent.clear();
      myPythia->nextEvent(genEvent);
      #pragma omp critical
      {
        myDelphes->processEvent(genEvent, recoEvent);
      }
      ana->analyze(recoEvent);
      // write recoEvent instance to file
      (*outArchive) << recoEvent;
    }
    cout << endl;
    delete outArchive;
    outFile.close();
    delete myPythia;
  } // end omp parallel block

  ana->finalize();
  //cout << "LIKELIHOOD = " << ana->likelihood() << endl;
  delete ana;
  delete myDelphes;

  return 0;
}
