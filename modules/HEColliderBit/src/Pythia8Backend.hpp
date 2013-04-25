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

#ifndef __Pythia8Backend_hpp__
#define __Pythia8Backend_hpp__

#include "Pythia.h"

#define PYTHIA8BACKEND_PRIVATE GAMBIT::HEColliderBit::Pythia8Backend::pythiaInstance,GAMBIT::HEColliderBit::Pythia8Backend::eventFailureError

namespace GAMBIT
{
  namespace HEColliderBit
  {
    namespace Pythia8Backend
    {
      // TODO: should this be/use a standard GAMBIT exception?
      class EventFailureError: public exception
      {
        virtual const char* what() const throw()
        {
          return "For whatever reason, Pythia could not make the next event.";
        }
      };

      extern EventFailureError eventFailureError;
      extern Pythia8::Pythia *pythiaInstance;

      void initialize(int seed, string slhaFileName);
      void nextEvent(Pythia8::Event &event);

      // TODO: rollcall!!
    }
  }
}

#endif /* defined(__Pythia8Backend_hpp__) */
