#pragma once

#include "Event.hpp"


namespace GAMBIT {


  class Analysis {
    
    virtual void init() {  }

    virtual void analyze(const Event* e) = 0;

    virtual void finalize() {  }

  };


}
