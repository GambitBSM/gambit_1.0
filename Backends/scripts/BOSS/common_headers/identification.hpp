// Identify backend and set macro flags

#include "gambit/Utils/cats.hpp"

#define BACKENDNAME __BACKEND_NAME__
#define VERSION __BACKEND_VERSION__
#define SAFE_VERSION __BACKEND_SAFE_VERSION__

#undef DO_CLASSLOADING
#define DO_CLASSLOADING 1
