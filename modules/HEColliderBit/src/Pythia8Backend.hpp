#pragma once

//  GAMBIT: Global and Modular BSM Inference Tool
//  //  ********************************************
//  //
//  //  Header for eventual rollcall for the
//  //  HEColliderBit Pythia8Backend
//  //
//  //  ********************************************
//  //
//  //  Authors
//  //  =======
//  //
//  //  (add name and date if you modify)
//  //
//  //  Abram Krislock
//  //  2013 Apr 22, Apr 23
//  //  Aldo F Saavedra
//  //  2013 June 14
//  //
//  //  ********************************************
//
//

#include "Pythia.h"

// #define PYTHIA8BACKEND_PRIVATE GAMBIT::HEColliderBit::Pythia8Backend::pythiaInstance,GAMBIT::HEColliderBit::Pythia8Backend::eventFailureError

namespace GAMBIT {
  namespace HEColliderBit {


    struct SLHAConfig {
      SLHAConfig(){}
      SLHAConfig(int seed, string filename ) : seed(seed), filename(filename) {}
      int seed;
      string filename;
    };


    struct CmndConfig {
      CmndConfig(){}
      CmndConfig(int seed, string filename ) : seed(seed), filename(filename) {}
      int seed;
      string filename;
    };


    class Pythia8Backend {
    public:

      Pythia8Backend(const SLHAConfig& slhaf);
      Pythia8Backend(const CmndConfig& cmndf);
      ~Pythia8Backend();
      void nextEvent(Pythia8::Event& event);

      int nEvents();
      int nAborts();

    private:
      // TODO: should this be/use a standard GAMBIT exception?
      class EventFailureError: public exception
      {
        virtual const char* what() const throw()
        {
          return "For whatever reason, Pythia could not make the next event.";
        }
      } eventFailureError;


      Pythia8::Pythia *pythiaInstance;

      /// @todo Rollcall?

    };


  }
}
