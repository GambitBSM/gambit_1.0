// Identify backend and set macro flags

#include "cats.hpp"

#ifdef BACKENDRENAME
  #define BACKENDNAME BACKENDRENAME
#else
  #define BACKENDNAME BOSSMinimalExample
#endif

#define LIBPATH "Backends/lib/libminimal_1_1.so"

#define VERSION 1.1
#define SAFE_VERSION 1_1

#undef DO_CLASSLOADING
#define DO_CLASSLOADING 1
