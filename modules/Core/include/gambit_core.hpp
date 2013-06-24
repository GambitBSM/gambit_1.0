#ifndef __gambit_core_hpp__
#define __gambit_core_hpp__
#include "logcore.hpp"

namespace GAMBIT {

  /*! \brief core sutup
   *
   * Usage: GAMBIT::GAMBIT_core::init();
   *
   * Effect: GAMBIT traps ctrl-c and some other signals and tries to
   * close logfiles and other cleanups in such cases.
   *
   * \author Johan Lundberg
   * \date 2011-08-19
   */
  class GAMBIT_core{
  private:
    GAMBIT_core(){}
    ~GAMBIT_core(){}
  public:
    static void init();
    static void exiter(int i);
  };

}
#endif
