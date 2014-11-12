// Identify backend and set macro flags

#include "cats.hpp"

#ifdef BACKENDRENAME
  #define BACKENDNAME BACKENDRENAME
#else
  #define BACKENDNAME BOSSMinimalExample
#endif

#define LIBPATH "Backends/lib/libminimal_1_2.so"

#define VERSION 1.2
#define SAFE_VERSION 1_2

#undef DO_CLASSLOADING
#define DO_CLASSLOADING 1
