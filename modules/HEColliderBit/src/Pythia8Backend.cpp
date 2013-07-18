//  GAMBIT: Global and Modular BSM Inference Tool   
//  //  ********************************************
//  //                                              
//  //  Functions for Pythia8Backend
//  //  (Based off of Andy's py8-bsm.cpp)
//  //                                              
//  //  ********************************************
//  //                                              
//  //  Authors                                     
//  //  =======                                     
//  //                                              
//  //  (add name and date if you modify)           
//  //                                              
//  //  Abram Krislock
//  //  2013 Apr 19, Apr 23
//  //                                              
//  //  ********************************************
//                                                  
//                                                  
#include <string>
#include "boost/lexical_cast.hpp"
#include "Pythia8Backend.hpp"

using namespace std;

namespace GAMBIT
{
  namespace HEColliderBit
  {
    //Pythia8Backend::Pythia8Backend(int seed, string slhaFileName)
    Pythia8Backend::Pythia8Backend(slhaFileName & slhaf)
    {
      pythiaInstance = new Pythia8::Pythia();
      // some examples of using readString
      pythiaInstance->readString("Beams:eCM = 8000.");
      pythiaInstance->readString("Main:numberOfEvents = 1000");
      pythiaInstance->readString("Main:timesAllowErrors = 1000");
      pythiaInstance->readString("Init:showProcesses = on");
      pythiaInstance->readString("Init:showMultipartonInteractions = off");
      pythiaInstance->readString("Init:showChangedSettings = off");
      pythiaInstance->readString("Init:showChangedParticleData = off");
      pythiaInstance->readString("Next:numberShowEvent = 0");
      pythiaInstance->readString("Next:numberShowInfo = 0");
      pythiaInstance->readString("Next:numberShowProcess = 0");
      pythiaInstance->readString("Random:setSeed = on");
      pythiaInstance->readString("Random:seed = " + boost::lexical_cast<string>(slhaf._seed));

      pythiaInstance->readString("PartonLevel:MPI = off");
      pythiaInstance->readString("PartonLevel:FSR = on");
      pythiaInstance->readString("HadronLevel:all = on");

//    pythiaInstance->readString("SUSY:all = on");
//    pythiaInstance->readString("SUSY:qqbar2chi0chi0 = off");
//    pythiaInstance->readString("SUSY:qqbar2chi+-chi0 = off");
//    pythiaInstance->readString("SUSY:qqbar2chi+chi- = off");

      pythiaInstance->readString("SUSY:gg2gluinogluino = on");
      pythiaInstance->readString("SUSY:qqbar2gluinogluino = on");
      pythiaInstance->readString("SUSY:qg2squarkgluino = on");
      pythiaInstance->readString("SUSY:gg2squarkantisquark = on");
      pythiaInstance->readString("SUSY:qqbar2squarkantisquark  = on");
      pythiaInstance->readString("SUSY:qq2squarksquark  = on");
      pythiaInstance->readString("SUSY:qg2chi0squark = on");
      pythiaInstance->readString("SUSY:qg2chi+-squark = on");
      pythiaInstance->readString("SUSY:qqbar2chi0gluino = on");
      pythiaInstance->readString("SUSY:qqbar2chi+-gluino = on");
      pythiaInstance->readString("SLHA:file = " + slhaf._filename);
      
  
      pythiaInstance->init();
    }


    Pythia8Backend::Pythia8Backend(cmndFileName & cmndf)
    {

      pythiaInstance = new Pythia8::Pythia();
      pythiaInstance->readFile(cmndf._filename);
      pythiaInstance->readString("Random:setSeed = on");
      pythiaInstance->readString("Random:seed = " + boost::lexical_cast<string>(cmndf._seed));
      pythiaInstance->init();

    }


    Pythia8Backend::~Pythia8Backend()
    {
      delete pythiaInstance;
    }

    int Pythia8Backend::nEvents() {
      // returns the number of events

     int nEvents = pythiaInstance->mode("Main:numberOfEvents");
     return nEvents;
    }

    int Pythia8Backend::nAborts() {
      // returns the number of events

     int nAborts= pythiaInstance->mode("Main:timesAllowErrors");
     return nAborts;
    }

    void Pythia8Backend::nextEvent(Pythia8::Event &event)
    {
      if(!pythiaInstance->next())
        throw eventFailureError;
      else
        event = pythiaInstance->event;
    }
  }
}
