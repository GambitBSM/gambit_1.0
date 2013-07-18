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

#define MAIN_SHARED counter,slhaFileName,delphesConfigFile,myDelphes
#define MAIN_PRIVATE genEvent,recoEvent,outFile,outArchive,temp,myPythia


using namespace std;

int main()
{
  // Basic setup
  const string slhaFileName = "sps1aWithDecays.spc"; //"mhmodBenchmark.slha";
  const string delphesConfigFile = "delphes_card_ATLAS.tcl";
  const int NEVENTS = 10000;

  // Variables used during parallelization
  string temp;
  ofstream outFile;
  boost::archive::text_oarchive* outArchive;
  int counter;

  // For event generation
  GAMBIT::HEColliderBit::Pythia8Backend* myPythia;
  GAMBIT::HEColliderBit::Delphes3Backend* myDelphes = new GAMBIT::HEColliderBit::Delphes3Backend(delphesConfigFile);

  // For event storage
  Pythia8::Event genEvent;
  GAMBIT::Event recoEvent;

  cout << endl << "Running parallelized HECollider simulation" << endl << endl;

  // Subprocess group setup
  vector<string> foo = {{ "SUSY:gg2gluinogluino", "SUSY:qqbar2gluinogluino", "SUSY:qg2squarkgluino" }};
  vector<string> bar = {{ "SUSY:gg2squarkantisquark", "SUSY:qqbar2squarkantisquark", "SUSY:qq2squarksquark" }};
  vector<string> baz = {{ "SUSY:qg2chi0squark", "SUSY:qg2chi+-squark", "SUSY:qqbar2chi0gluino", "SUSY:qqbar2chi+-gluino" }};

  // Decide how many events of each subprocess group to use, split according to number of threads
  /// @todo Use fast lookup of interpolated NLO subprocess cross-sections to do this
  /// @note Hard-coded for now, so I can do *something*
  const int num_threads = omp_get_num_threads();
  const int num_events_per_thread = (int) ceil(NEVENTS / (double) num_threads);
  const double xsecs[3] = { 0.1, 0.2, 0.4 };
  double total_xsec = 0; for (double x : xsecs) total_xsec += x;
  vector<int> num_threads_per_process;
  for (double x : xsecs) {
    /// @note Only round *up* numbers? Don't want to round any processes down to 0 threads...
    ///       ... unless they are really negligible: need to check rel size > some threshold
    const double frac_nthreads = num_threads * x / total_xsec;
    num_threads_per_process.push_back((int) round(frac_nthreads));
  }
  /// @todo Normalize / make sure that all cores are used and no extras / ensure that time isn't
  /// wasted on negligible processes but equally that processes just below the integer ncore threshold
  /// don't get accidentally missed

  /// @todo Object for thread config: contain xsec, effective lumi, pointers to Analysis (-> AnaGroup), nevents, ...

  /// @todo Bind subprocesses to analysis pointers

  /// @todo Generalise to a vector of (vector of) analyses, populated by names
  GAMBIT::Analysis* ana = GAMBIT::mkAnalysis("ATLAS_0LEP");
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
    myPythia->set("SUSY:qqbar2squarkantisquark", true);
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
