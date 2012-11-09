#include "core/sufit_core.hh"
#include <iostream>
#include <signal.h>
#include "core/exceptions.hh"
#include <boost/exception_ptr.hpp>

namespace sufit {

  /*! \brief core sutup
   *
   * Please read sufit_core.h
   *
   * \author Johan Lundberg
   * \date 2011-08-19
   */

  void sufit_core::init(){
    signal(SIGABRT, &exiter);
    signal(SIGTERM, &exiter);
    signal(SIGHUP, &exiter);
    signal(SIGINT,  &exiter);
  }
  void sufit_core::exiter(int i){
    std::cerr << std::endl;
    if (i!=SIGHUP) {
      std::cerr << "sufit_core:: ---------------------------------------"<<std::endl;
      std::cerr << "sufit_core:: received signal "<<i << std::endl;
      std::cerr << "sufit_core:: note: for controlled termination use kill -1  "<<std::endl;
      std::cerr << "sufit_core:: ---------------------------------------"<<std::endl;
    }
    if (i==SIGHUP) {
      // Controlled termination.
      // Add other cleanups here if required.
    }
    SUFIT_MSG_FATAL("received system signal "<<i );
  }
}
