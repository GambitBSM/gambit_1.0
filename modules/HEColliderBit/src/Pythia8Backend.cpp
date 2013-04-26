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
    Pythia8Backend::Pythia8Backend(int seed, string slhaFileName)
    {
      pythiaInstance = new Pythia8::Pythia();
      // some examples of using readString
      pythiaInstance->readString("Beams:eCM = 8000.");
      pythiaInstance->readString("Main:numberOfEvents = 1000");
      pythiaInstance->readString("Main:timesAllowErrors = 1000");
      pythiaInstance->readString("Init:showProcesses = off");
      pythiaInstance->readString("Init:showMultipartonInteractions = off");
      pythiaInstance->readString("Init:showChangedSettings = off");
      pythiaInstance->readString("Init:showChangedParticleData = off");
      pythiaInstance->readString("Next:numberShowEvent = 0");
      pythiaInstance->readString("Next:numberShowInfo = 0");
      pythiaInstance->readString("Next:numberShowProcess = 0");
      pythiaInstance->readString("Random:setSeed = on");
      pythiaInstance->readString("Random:seed = " + boost::lexical_cast<string>(seed));

      pythiaInstance->readString("PartonLevel:MPI = off");
      pythiaInstance->readString("PartonLevel:FSR = off");
      pythiaInstance->readString("HadronLevel:all = off");

      pythiaInstance->readString("SUSY:all = on");
      pythiaInstance->readString("SLHA:file = " + slhaFileName);

      pythiaInstance->init();
    }


    Pythia8Backend::~Pythia8Backend()
    {
      delete pythiaInstance;
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
