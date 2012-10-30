#ifndef __sufit_core_hh__
#define __sufit_core_hh__
#include "logcore.hh"

namespace sufit {
  /*! \brief core sutup
   *
   * Usage: sufit::sufit_core::init();
   *
   * Effect: sufit traps ctrl-c and some other signals and tries to
   * close logfiles and other cleanups in such cases.
   *
   * \author Johan Lundberg
   * \date 2011-08-19
   */
  class sufit_core{
  private:
    sufit_core(){}
    ~sufit_core(){}
  public:
    static void init();
    static void exiter(int i);
  };
}
#endif
