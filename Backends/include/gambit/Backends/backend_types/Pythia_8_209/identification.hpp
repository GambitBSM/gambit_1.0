// Identify backend and set macro flags

#include "gambit/Utils/cats.hpp"

#ifdef BACKENDRENAME
  #define BACKENDNAME BACKENDRENAME
#else
  #define BACKENDNAME Pythia
#endif

#define VERSION 8.209
#define SAFE_VERSION 8_209

#undef DO_CLASSLOADING
#define DO_CLASSLOADING 1
