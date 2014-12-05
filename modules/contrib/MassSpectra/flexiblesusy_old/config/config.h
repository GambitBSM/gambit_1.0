/* DO NOT EDIT! GENERATED AUTOMATICALLY! */
/* generated at Thu Nov 13 17:53:38 EST 2014 */

#define PKGNAME "FlexibleSUSY"

#define FLEXIBLESUSY_VERSION  "1.0.2"
#define FLEXIBLESUSY_MAJOR    1
#define FLEXIBLESUSY_MINOR    0
#define FLEXIBLESUSY_PATCH    2
#define FLEXIBLESUSY_EXTRA    ""
#define GIT_COMMIT            "unknown"

#define SARAH_VERSION         "unknown"
#define SARAH_MAJOR           0
#define SARAH_MINOR           0
#define SARAH_PATCH           0

#define MATHEMATICA_VERSION   0

/* System information */
#define OPERATING_SYSTEM      "Linux"
#define KERNEL_VERSION        "2.6.18-308.8.2.el5.centos.plusxen"

/* Build variables */
#define BLASLIBS              "-lblas"
#define BOOSTFLAGS            " -I/usr/include"
#define BOOSTTESTLIBS         "-lboost_unit_test_framework"
#define BOOSTTHREADLIBS       ""
#define CXX                   "g++"
#define CXXFLAGS              "-std=c++11 -O2"
#define EIGENFLAGS            "-I../../../../extras/eigen3"
#define FC                    "gfortran"
#define FFLAGS                "-O2 -frecursive"
#define FLIBS                 "-L/usr/local/gcc/4.7.2/lib64/../lib64/ -lgfortran -lm"
#define GSLFLAGS              "-I/usr/local/gsl/1.12-gcc/include"
#define GSLLIBS               "-L/usr/local/gsl/1.12-gcc/lib -lgsl -lgslcblas -lm"
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
