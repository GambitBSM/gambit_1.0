// Identify backend and set macro flags

#ifdef BACKENDRENAME
  #define BACKENDNAME BACKENDRENAME
#else
  #define BACKENDNAME BOSSMinimalExample
#endif

#define LIBPATH      "Backends/lib/libBOSSMinimalExample_1_0.so"

#define VERSION 1.0
#define SAFE_VERSION 1_0

#undef DO_CLASSLOADING
#define DO_CLASSLOADING 1
