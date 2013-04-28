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
//  //
//  //  ********************************************
//
//

#include "Pythia.h"

// #define PYTHIA8BACKEND_PRIVATE GAMBIT::HEColliderBit::Pythia8Backend::pythiaInstance,GAMBIT::HEColliderBit::Pythia8Backend::eventFailureError

namespace GAMBIT
{
  namespace HEColliderBit
  {
    class Pythia8Backend
    {
    public:
      Pythia8Backend(int seed, string slhaFileName);
      ~Pythia8Backend();
      void nextEvent(Pythia8::Event &event);

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

      // TODO: rollcall?
    };
  }
}
