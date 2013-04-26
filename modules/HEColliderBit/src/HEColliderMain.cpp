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
//  //                                              
//  //  ********************************************
//                                                  
//                                                  
#include <string>
#include <iostream>
#include <fstream>
#include "boost/lexical_cast.hpp"

#include "Pythia8Backend.hpp"
#include "Delphes3Backend.hpp"
#include "Pythia.h"

// External
#include "omp.h"
#define NEVENTS 1000
#define MAIN_SHARED counter,slhaFileName,delphesConfigFile
#define MAIN_PRIVATE genEvent,recoEvent,outFile,temp

using namespace std;

int main()
{
  // simulation setup...
  string slhaFileName = "mhmodBenchmark.slha";
  string delphesConfigFile = "delphes_card_ATLAS.tcl";

  // variables used during parallelization
  string temp;
  ofstream outFile;
  int counter = 0;

  // For event storage
  Pythia8::Event genEvent;
  GAMBIT::HEColliderBit::ReconstructedEvent recoEvent;

  cout<<"\n\n Now testing Parallelized HECollider Simulation:\n\n";

  Analysis* ana0lep = Analysis_ATLAS0LEP();
  ana0lep->init();

/*  #pragma omp parallel shared(MAIN_SHARED) \
  private(MAIN_PRIVATE,DELPHES3BACKEND_PRIVATE,PYTHIA8BACKEND_PRIVATE) */
  {
      // Initialize the backends
      GAMBIT::HEColliderBit::Pythia8Backend::initialize(12345 + 17 * omp_get_thread_num(), slhaFileName);
      GAMBIT::HEColliderBit::Delphes3Backend::initialize(delphesConfigFile);

    // For a reasonable output
//    temp = "tester_thread.dat";
    temp = "tester_thread"+boost::lexical_cast<string>(omp_get_thread_num())+".dat";
    outFile.open(temp.c_str());

    for (int i=0; i<NEVENTS/omp_get_num_threads(); i++)
    {
      genEvent.clear();
      recoEvent.clear();
      GAMBIT::HEColliderBit::Pythia8Backend::nextEvent(genEvent);
      GAMBIT::HEColliderBit::Delphes3Backend::analyzeEvent(genEvent, recoEvent);
      ana0lep->analyze(recoEvent);
      counter++;
    }
  } // end omp parallel block

  ana0lep->finalize();
  //cout << ana0lep->likelihood() << endl;

  cout<<"\n\n Parallelized HECollider Simulation finished. Generated ";
  cout<<counter<<" events.\n\n";
}
