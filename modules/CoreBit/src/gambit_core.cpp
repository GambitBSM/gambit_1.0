#include "gambit_core.hpp"
#include <iostream>
#include <signal.h>
#include "exceptions.hpp"
#include <boost/exception_ptr.hpp>

namespace gambit {

  /*! \brief core sutup
   *
   * Please read gambit_core.h
   *
   * \author Johan Lundberg
   * \date 2011-08-19
   */

  void gambit_core::init(){
    signal(SIGABRT, &exiter);
    signal(SIGTERM, &exiter);
    signal(SIGHUP, &exiter);
    signal(SIGINT,  &exiter);
  }
  void gambit_core::exiter(int i){
    std::cerr << std::endl;
    if (i!=SIGHUP) {
      std::cerr << "gambit_core:: ---------------------------------------"<<std::endl;
      std::cerr << "gambit_core:: received signal "<<i << std::endl;
      std::cerr << "gambit_core:: note: for controlled termination use kill -1  "<<std::endl;
      std::cerr << "gambit_core:: ---------------------------------------"<<std::endl;
    }
    if (i==SIGHUP) {
      // Controlled termination.
      // Add other cleanups here if required.
    }
    SUFIT_MSG_FATAL("received system signal "<<i );
  }
}
