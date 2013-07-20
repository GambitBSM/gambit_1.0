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


// What to ask Torbjörn:
// It seems like KFactorHooks below may be able to apply the K factors within
// Pythia itself so that Pythia will generate the (roughly) appropriate 
// amount of each subprocess. If that is true, then we may want all the threads
// to initialize everything after all.
//
// However, we want the threads to be able to initialize quickly, as this seems
// to be the current bottleneck. There are two possible ways to do this, it seems:
// 1) Split the subprocesses up into different threads. In the current code, each 
//    thread is initializing all subprocesses, which is 4 times slower than we 
//    would like.
// 2) Initialize ONE Pythia instance (possibly parallelizing even the initialization)
//    and copy-construct it to the multiple threads. Then, if the KFactorHooks
//    class below works after all, we won't have to split the subprocesses up at all.


class KFactorHooks : public Pythia8::UserHooks
{
public:
  /// @todo TODO: once KFactorContainer is created, need to pass it in here.
  KFactorHooks() {}
  ~KFactorHooks() {}

  // To apply the KFactors directly within pythia, need to modify the
  // cross sections:
  virtual bool canModifySigma() {return true;}
  virtual double multiplySigmaBy(const SigmaProcess* sigmaProcessPtr,
        const PhaseSpace* phaseSpacePtr, bool inEvent)
  {
    // Get the process code:
    int processCode = sigmaProcessPtr->code();

    // Does it need to be conditional? Presumably, I want the KFactors to 
    // apply for ALL events...
    if (inEvent) return 1.;

    // Each process has a different KFactor... does something like this work?
    /// @todo TODO: this function has not been created yet....:
    return magicKFactor->getKFactorMagically(code);
  }

private:
  /// @todo TODO: this class has not been created yet....:
  KFactorContainer *magicKFactor;
};

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
  GAMBIT::HEColliderBit::SLHAConfig* pythia8_input;
  GAMBIT::HEColliderBit::Pythia8Backend* myPythia;
  GAMBIT::HEColliderBit::Delphes3Backend* myDelphes;
  myDelphes = new GAMBIT::HEColliderBit::Delphes3Backend(delphesConfigFile);

  // For event storage
  Pythia8::Event genEvent;
  GAMBIT::Event recoEvent;

  cout << "\n\n Testing parallelized HECollider simulation" << endl;

  /// @todo Generalise to a vector of (vector of) analyses, populated by names
  GAMBIT::Analysis* ana = GAMBIT::mkAnalysis("ATLAS_0LEP_7TeV");

  ana->init();

  #pragma omp parallel shared(MAIN_SHARED) private(MAIN_PRIVATE)
  {
    // Initialize the backends
    pythia8_input = new GAMBIT::HEColliderBit::SLHAConfig(12345 + 17 * omp_get_thread_num(), slhaFileName);
    myPythia = new GAMBIT::HEColliderBit::Pythia8Backend(*pythia8_input);

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
