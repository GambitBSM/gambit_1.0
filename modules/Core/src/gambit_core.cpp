#include "gambit_core.hpp"
#include "exceptions.hpp"
#include <boost/exception_ptr.hpp>
#include <iostream>
#include <signal.h>

namespace GAMBIT {

  /*! \brief core setup
   *
   * \author Johan Lundberg
   * \date 2011-08-19
   */

  void GAMBIT_core::init(){
    signal(SIGABRT, &exiter);
    signal(SIGTERM, &exiter);
    signal(SIGHUP, &exiter);
    signal(SIGINT,  &exiter);
  }
  void GAMBIT_core::exiter(int i){
    std::cerr << std::endl;
    if (i!=SIGHUP) {
      std::cerr << "GAMBIT_core:: ---------------------------------------"<<std::endl;
      std::cerr << "GAMBIT_core:: received signal "<<i << std::endl;
      std::cerr << "GAMBIT_core:: note: for controlled termination use kill -1  "<<std::endl;
      std::cerr << "GAMBIT_core:: ---------------------------------------"<<std::endl;
    }
    if (i==SIGHUP) {
      // Controlled termination.
      // Add other cleanups here if required.
    }
    GAMBIT_MSG_FATAL("received system signal "<<i );
  }
}
