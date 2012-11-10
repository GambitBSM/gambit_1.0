#ifndef __gambit_core_hpp__
#define __gambit_core_hpp__
#include "logcore.hpp"

namespace gambit {
  /*! \brief core sutup
   *
   * Usage: gambit::gambit_core::init();
   *
   * Effect: gambit traps ctrl-c and some other signals and tries to
   * close logfiles and other cleanups in such cases.
   *
   * \author Johan Lundberg
   * \date 2011-08-19
   */
  class gambit_core{
  private:
    gambit_core(){}
    ~gambit_core(){}
  public:
    static void init();
    static void exiter(int i);
  };
}
#endif
