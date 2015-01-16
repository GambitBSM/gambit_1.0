/* DO NOT EDIT! GENERATED AUTOMATICALLY! */
/* generated at Fri Jan 16 13:38:08 CET 2015 */

#define PKGNAME "FlexibleSUSY"

#define FLEXIBLESUSY_VERSION  "1.0.4"
#define FLEXIBLESUSY_MAJOR    1
#define FLEXIBLESUSY_MINOR    0
#define FLEXIBLESUSY_PATCH    4
#define FLEXIBLESUSY_EXTRA    ""
#define GIT_COMMIT            "unknown"

#define SARAH_VERSION         "unknown"
#define SARAH_MAJOR           0
#define SARAH_MINOR           0
#define SARAH_PATCH           0

#define MATHEMATICA_VERSION   0

/* System information */
#define OPERATING_SYSTEM      "Linux"
#define KERNEL_VERSION        "3.2.0-75-generic"

/* Build variables */
#define BLASLIBS              "-lblas"
#define BOOSTFLAGS            " -I/usr/local/include"
#define BOOSTTESTLIBS         "-lboost_unit_test_framework"
#define BOOSTTHREADLIBS       ""
#define CXX                   "g++"
#define CXXFLAGS              "-std=c++11 -O2"
#define EIGENFLAGS            "-I/usr/include/eigen3"
#define FC                    "gfortran"
#define FFLAGS                "-O2 -frecursive"
#define FLIBS                 "-L/usr/lib/gcc/x86_64-linux-gnu/4.6/ -lgfortran -lm"
#define GSLFLAGS              "-I/usr/include"
#define GSLLIBS               "-L/usr/lib -lgsl -lgslcblas -lm"
#define LAPACKLIBS            "-llapack"
#define THREADLIBS            "-lpthread"

/* Switches */

/* Enable colored printout */
#undef ENABLE_COLOR

/* Enable eigenvalues error check */
#undef CHECK_EIGENVALUE_ERROR

/* Enable debug mode */
#undef ENABLE_DEBUG

/* Enable silent mode */
#undef ENABLE_SILENT

/* Enable verbose mode */
#undef ENABLE_VERBOSE

/* Enable fflite */
#undef ENABLE_FFLITE

/* Enable LoopTools */
#undef ENABLE_LOOPTOOLS

/* Enable multi-threading */
#define ENABLE_THREADS 1

/* Enable <random> header */
#define ENABLE_RANDOM 1
