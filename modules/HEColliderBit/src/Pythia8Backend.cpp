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
    Pythia8Backend::Pythia8Backend(const SLHAConfig& cfg)
    {
      pythiaInstance = new Pythia8::Pythia();
      Pythia8::Settings& pycfg = pythiaInstance->settings;

      // Some examples of using readString
      pycfg.parm("Beams:eCM", 8000);
      pycfg.mode("Main:numberOfEvents", 1000);
      pycfg.mode("Main:timesAllowErrors", 1000);
      pycfg.flag("Init:showProcesses", true);
      pycfg.flag("Init:showMultipartonInteractions", false);
      pycfg.flag("Init:showChangedSettings", false);
      pycfg.flag("Init:showChangedParticleData", false);
      pycfg.mode("Next:numberShowEvent", 0);
      pycfg.mode("Next:numberShowInfo", 0);
      pycfg.mode("Next:numberShowProcess", 0);
      pycfg.flag("Random:setSeed", true);
      pycfg.mode("Random:seed", cfg.seed);

      pycfg.flag("PartonLevel:MPI", false);
      pycfg.flag("PartonLevel:FSR", true);
      pycfg.flag("HadronLevel:all", true);

      // pycfg.flag("SUSY:all", true);
      // pycfg.flag("SUSY:qqbar2chi0chi0", false);
      // pycfg.flag("SUSY:qqbar2chi+-chi0", false);
      // pycfg.flag("SUSY:qqbar2chi+chi-", false);

      pycfg.flag("SUSY:gg2gluinogluino", true);
      pycfg.flag("SUSY:qqbar2gluinogluino", true);
      pycfg.flag("SUSY:qg2squarkgluino", true);
      pycfg.flag("SUSY:gg2squarkantisquark", true);
      pycfg.flag("SUSY:qqbar2squarkantisquark ", true);
      pycfg.flag("SUSY:qq2squarksquark ", true);
      pycfg.flag("SUSY:qg2chi0squark", true);
      pycfg.flag("SUSY:qg2chi+-squark", true);
      pycfg.flag("SUSY:qqbar2chi0gluino", true);
      pycfg.flag("SUSY:qqbar2chi+-gluino", true);
      pycfg.word("SLHA:file", cfg.filename);

      pythiaInstance->init();
    }


    Pythia8Backend::Pythia8Backend(const CmndConfig& cfg)
    {
      pythiaInstance = new Pythia8::Pythia();
      pythiaInstance->readFile(cfg.filename);
      pythiaInstance->settings.flag("Random:setSeed", true);
      pythiaInstance->settings.mode("Random:seed", cfg.seed);
      pythiaInstance->init();
    }


    Pythia8Backend::~Pythia8Backend()
    {
      delete pythiaInstance;
    }


    int Pythia8Backend::nEvents() {
     int nEvents = pythiaInstance->mode("Main:numberOfEvents");
     return nEvents;
    }


    int Pythia8Backend::nAborts() {
     int nAborts = pythiaInstance->mode("Main:timesAllowErrors");
     return nAborts;
    }


    void Pythia8Backend::nextEvent(Pythia8::Event& event)
    {
      if (!pythiaInstance->next())
        throw eventFailureError;
      else
        event = pythiaInstance->event;
    }


  }
}
