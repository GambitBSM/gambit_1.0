#pragma once

// Just convenience includes
#include "MathUtils.hpp"
#include "Vectors.hpp"
#include "Event.hpp"
#include "Particle.hpp"
#include "FastJetUtils.hpp"
#include "Py8Utils.hpp"


namespace GAMBIT {


  /// @name PID stuff
  /// @todo Move to PIDUtils
  //@{

  template<size_t D> unsigned int digit(unsigned int val)    { return digit<D-1>(val/10); }
  template<>         unsigned int digit<1>(unsigned int val) { return val % 10; }

  inline bool hasQuark(unsigned int qid, int pid) {
    const unsigned int apid = abs(pid);
    if (apid == qid) return true;
    if (apid < 100 || abs(pid) > 10000) return false;
    return digit<2>(apid) == qid || digit<3>(apid) == qid || digit<4>(apid) == qid;
  }

  inline bool hasCharm(int pid) { return hasQuark(4, pid); }
  inline bool hasBottom(int pid) { return hasQuark(5, pid); }

  //@}


}
