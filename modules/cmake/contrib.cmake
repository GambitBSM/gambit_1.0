include(ExternalProject)

#contrib/slhaea
include_directories("${PROJECT_SOURCE_DIR}/contrib/slhaea")

#contrib/mcutils
include_directories("${PROJECT_SOURCE_DIR}/contrib/mcutils/include")

#contrib/heputils
include_directories("${PROJECT_SOURCE_DIR}/contrib/heputils/include")

#contrib/flexiblesusy
set(FLEXIBLESUSY_DIR "${PROJECT_SOURCE_DIR}/contrib/MassSpectra/flexiblesusy")
# We need to include some stuff from the eigen3 library... I'm not sure what the proper
# way to do this is so for now I am just sticking the include in here
set(EIGEN3_DIR "${PROJECT_SOURCE_DIR}/../extras/eigen3")
include_directories("${EIGEN3_DIR}")
# The flexiblesusy configure script doesn't find all the libraries needed to link to
# lapack on my system, so I am using CMake to find them instead
include(FindLAPACK)
foreach(_LIB ${LAPACK_LIBRARIES})
  set(LAPACK_LIBS "${LAPACK_LIBS} -L${_LIB}")
endforeach(_LIB)
message("Adding LAPACK paths to flexiblesusy build: ${LAPACK_LIBS}")

# Set the models (spectrum generators) which exist in the flexiblesusy source (could
# autogenerate this, but we'd end up building some stuff we don't need at the moment)
set(BUILT_FS_MODELS CMSSM MSSMatMGUT)
#message("-- Building FlexibleSUSY core object files")
#ExternalProject_Add(flexiblesusy
#  SOURCE_DIR ${FLEXIBLESUSY_DIR}
#  BUILD_IN_SOURCE 1
#  CONFIGURE_COMMAND ./configure --with-models=${_MODEL}
#  BUILD_COMMAND make YAML_CC=${CMAKE_CXX_COMPILER} CFLAGS=${yaml_CXXFLAGS}
#  INSTALL_COMMAND ""
#  INSTALL_DIR ${CMAKE_BINARY_DIR}/install
#  CMAKE_ARGS -DCMAKE_INSTALL_PREFIX=${CMAKE_BINARY_DIR}/install
#)

## # Temporary variable to help chain the external flexible susy build dependencies, so that
## # they are forced to build one at a time in parallel builds.
## set(previous_FSlib false) 
## set(flexiblesusy_LIBRARIES_MISSING false)
## set(flexiblesusy_build false) 
## foreach(_MODEL ${BUILT_FS_MODELS})
##   # Clear cache variable (needed to force search for library on second run of cmake)
##   set(flexiblesusy_lib${_MODEL} flexiblesusy_lib${_MODEL}-NOTFOUND)
##   # Find or build each flexiblesusy spectrum generator
##   find_library(flexiblesusy_lib${_MODEL}
##      NAMES ${_MODEL}
##      HINTS "${FLEXIBLESUSY_DIR}/models/${_MODEL}"
##   )
##   if(flexiblesusy-${_MODEL}) #FOUND
##     message(" -- Found flexiblesusy library: ${flexiblesusy_lib${_MODEL}}")
##     set(flexiblesusy_LIBRARIES ${flexiblesusy_LIBRARIES} ${flexiblesusy_lib${_MODEL}}) 
##   else()                     #NOTFOUND
##     ExternalProject_Add(flexiblesusy_build${_MODEL}
##       SOURCE_DIR ${FLEXIBLESUSY_DIR}
##       BUILD_IN_SOURCE 1
##       CONFIGURE_COMMAND ./configure --with-models=${_MODEL} --with-eigen-incdir=${EIGEN3_DIR}
##       BUILD_COMMAND make LAPACKLIBS=${LAPACK_LIBS}
##       INSTALL_COMMAND ""
##       #INSTALL_DIR ${CMAKE_BINARY_DIR}/install
##       #CMAKE_ARGS -DCMAKE_INSTALL_PREFIX=${CMAKE_BINARY_DIR}/install
##     )
##     add_dependencies(flexiblesusy_build${_MODEL} ${previous_FSlib})
##     set(previous_FSlib flexiblesusy-build${_MODEL}) 
##     set(flexiblesusy_LIBRARIES_MISSING true)
##     set(missing_FS_LIBS "${missing_FS_LIBS} lib${_MODEL};")
##     set(flexiblesusy_build ${flexiblesusy_build} ${flexiblesusy-build${_MODEL}}) 
##   endif()
## endforeach()
## 
## # Find the central flexiblesusy libraries (should be built if the spectrum generator libraries are built) 
## # Clear cache variable (needed to force search for library on second run of cmake)
## set(flexiblesusy-core flexiblesusy-core-NOTFOUND)
## set(flexiblesusy-legacy flexiblesusy-legacy-NOTFOUND)
## find_library(flexiblesusy-core
##    NAMES flexisusy
##    HINTS "${FLEXIBLESUSY_DIR}/src"
## )
## find_library(flexiblesusy-legacy
##    NAMES legacy
##    HINTS "${FLEXIBLESUSY_DIR}/legacy"
## )
## if(flexiblesusy-core AND flexiblesusy-legacy) #FOUND
##   message(" -- Found flexiblesusy library: ${flexiblesusy-core}")
##   message(" -- Found flexiblesusy library: ${flexiblesusy-legacy}")
##   set(flexiblesusy_LIBRARIES ${flexiblesusy_LIBRARIES} ${flexiblesusy-core} ${flexiblesusy-legacy}) 
## else()                     #NOTFOUND
##   # Rebuild them only if we aren't already building them via the model builds
##   if(NOT flexiblesusy_LIBRARIES_MISSING)
##     # Currently doesn't seem to be a way to rebuilt only the core libraries, so we'll have to
##     # rebuild one of the model libraries as well. I picked MSSMatMGUT.
##     ExternalProject_Add(flexiblesusy-corelibs
##         SOURCE_DIR ${FLEXIBLESUSY_DIR}
##         BUILD_IN_SOURCE 1
##         CONFIGURE_COMMAND ./configure --with-models=MSSMatMGUT --with-eigen-incdir=${EIGEN3_DIR}
##         BUILD_COMMAND make LAPACKLIBS=${LAPACK_LIBS}
##         INSTALL_COMMAND ""
##     )
##     set(flexiblesusy_build ${flexiblesusy_build} ${flexiblesusy-corelibs}) 
##   endif()
##   set(flexiblesusy_LIBRARIES_MISSING true)
##   if(NOT flexiblesusy-core)
##     set(missing_FS_LIBS "${missing_FS_LIBS} libflexisusy;")
##   endif()
##   if(NOT flexiblesusy-legacy)
##     set(missing_FS_LIBS "${missing_FS_LIBS} liblegacy;")
##   endif()
## endif()

# I cannot get the above fancy stuff to work correctly, so we'll just have to suffer and rebuild flexiblesusy over and over again like everything else
# Actually, we can at least have a flag to manually skip it when we know it is built.
# To skip flexiblesusy build, run cmake with SKIP_FS=1 set as an environment variable (e.g. run "SKIP_FS=1 cmake ..")
# Temporary variable to help chain the external flexible susy build dependencies, so that
# they are forced to build one at a time in parallel builds.
list(APPEND flexiblesusy_LDFLAGS "-L${FLEXIBLESUSY_DIR}/src -lflexisusy")
list(APPEND flexiblesusy_LDFLAGS "-L${FLEXIBLESUSY_DIR}/legacy -llegacy")
if($ENV{SKIP_FS})
   message(" -- SKIP_FS flag detected: skipping build of flexiblesusy libraries")
   foreach(_MODEL ${BUILT_FS_MODELS})
      list(APPEND flexiblesusy_LDFLAGS "-L${FLEXIBLESUSY_DIR}/models/${_MODEL} -l${_MODEL}")
   endforeach()
   set(flexiblesusy_projects false)
else()
   set(previous_FSlib false) 
   foreach(_MODEL ${BUILT_FS_MODELS})
       ExternalProject_Add(flexiblesusy_project${_MODEL}
         SOURCE_DIR ${FLEXIBLESUSY_DIR}
         BUILD_IN_SOURCE 1
         CONFIGURE_COMMAND ./configure --with-models=${_MODEL} --with-eigen-incdir=${EIGEN3_DIR}
         BUILD_COMMAND make LAPACKLIBS=${LAPACK_LIBS}
         INSTALL_COMMAND ""
       )
       add_dependencies(flexiblesusy_project${_MODEL} ${previous_FSlib}) #to force building one at a time
       set(previous_FSlib flexiblesusy_project${_MODEL}) 
       list(APPEND flexiblesusy_projects flexiblesusy_project${_MODEL})
       list(APPEND flexiblesusy_LDFLAGS "-L${FLEXIBLESUSY_DIR}/models/${_MODEL} -l${_MODEL}")
   endforeach()
endif()

# This feels a little hacky but I'm not sure what a better way is right now...
# Run a python script to suck necessary fortran linker flags from one of the 
# flexiblesusy configure files (stuff like -lgfortran, in GNU case)
set(errorcode true)
execute_process(COMMAND python ${PROJECT_SOURCE_DIR}/contrib/MassSpectra/get_flexiblesusy_link_flags.py 
                OUTPUT_VARIABLE flexiblesusy_extralibs 
                ERROR_VARIABLE blackhole
                RESULT_VARIABLE errorcode)
if(errorcode)
  message(" -- Error retrieving flexiblesusy FLIB contents from config.h")
  message("    Don't panic yet, this probably just means the flexiblesusy libraries")
  message("    haven't been built yet. Your build of gambit may fail to link")
  message("    to the library dependencies of flexiblesusy, so abort the build after")
  message("    the flexiblesusy stuff completes. Cmake should detect config.h")
  message("    after that. If flexiblesusy building completes the first time,")
  message("    you can run the build like \"SKIP_FS=1 cmake ..\" the second time")
  message("    to skip over the flexiblesusy build. I'd like to make this")
  message("    automatic but I can't figure out how.")
else()
  message(" -- Retrieved flexiblesusy FLIB contents from config.h : ${flexiblesusy_extralibs}")
endif()
separate_arguments(flexiblesusy_extralibs)
list(APPEND flexiblesusy_LDFLAGS ${flexiblesusy_extralibs})  # consolidate variables...
# Apparently leading and trailing whitespace is getting in there, so strip it
#string(STRIP "${flexiblesusy_LDFLAGS}" flexiblesusy_LDFLAGS)

#contrib/yaml-cpp-0.5.1
set(yaml_CXXFLAGS "${CMAKE_CXX_FLAGS}")
if (NOT Boost_INCLUDE_DIR STREQUAL "") 
  set(yaml_CXXFLAGS "${yaml_CXXFLAGS} -I${Boost_INCLUDE_DIR}")
endif()
if (NOT GSL_INCLUDE_DIRS STREQUAL "")
  set(yaml_CXXFLAGS "${yaml_CXXFLAGS} -I${GSL_INCLUDE_DIRS}")
endif()
ExternalProject_Add(yaml-cpp
  SOURCE_DIR ${PROJECT_SOURCE_DIR}/contrib/yaml-cpp-0.5.1
  BUILD_IN_SOURCE 1
  CONFIGURE_COMMAND ""
  BUILD_COMMAND make YAML_CC=${CMAKE_CXX_COMPILER} CFLAGS=${yaml_CXXFLAGS}
  INSTALL_COMMAND ""
  INSTALL_DIR ${CMAKE_BINARY_DIR}/install
  CMAKE_ARGS -DCMAKE_INSTALL_PREFIX=${CMAKE_BINARY_DIR}/install
)
add_custom_target(yaml COMMAND make yaml-cpp)
set(yaml_INCLUDE_DIRS "${PROJECT_SOURCE_DIR}/contrib/yaml-cpp-0.5.1/include")
set(yaml_LIBRARIES "yaml-cpp")
set(yaml_LDFLAGS "-L${PROJECT_SOURCE_DIR}/contrib/yaml-cpp-0.5.1 -l${yaml_LIBRARIES}")
include_directories("${yaml_INCLUDE_DIRS}")
set(clean_files ${clean_files} "${PROJECT_SOURCE_DIR}/contrib/yaml-cpp-0.5.1/libyaml-cpp.a")
file(GLOB yaml_o ${PROJECT_SOURCE_DIR}/contrib/yaml-cpp-0.5.1/build/*.o)
file(GLOB yaml_contrib_o ${PROJECT_SOURCE_DIR}/contrib/yaml-cpp-0.5.1/build/contrib/*.o)
set(clean_files ${clean_files} "${yaml_o}" "${yaml_contrib_o}")

#contrib/Delphes-3.1.2
if (NOT EXCLUDE_DELPHES)
  ExternalProject_Add(delphes
    SOURCE_DIR ${PROJECT_SOURCE_DIR}/contrib/Delphes-3.1.2
    BUILD_IN_SOURCE 1
    CONFIGURE_COMMAND "./configure; mv Makefile Makefile.orig; sed 's,\ ..EXECUTABLE.,,' Makefile.orig > Makefile;"
    BUILD_COMMAND make all
    INSTALL_COMMAND ""
    INSTALL_DIR ${CMAKE_BINARY_DIR}/install
    CMAKE_ARGS -DCMAKE_INSTALL_PREFIX=${CMAKE_BINARY_DIR}/install
  )
  set(delphes_INCLUDE_DIRS "${PROJECT_SOURCE_DIR}/contrib/Delphes-3.1.2" "${PROJECT_SOURCE_DIR}/contrib/Delphes-3.1.2/external")
  set(delphes_LIBRARIES "Delphes")
  set(delphes_LDFLAGS "-L${PROJECT_SOURCE_DIR}/contrib/Delphes-3.1.2 -l${delphes_LIBRARIES}")
  include_directories("${delphes_INCLUDE_DIRS}")
  set(CMAKE_INSTALL_RPATH "${PROJECT_SOURCE_DIR}/contrib/Delphes-3.1.2")
  set(clean_files ${clean_files} "${PROJECT_SOURCE_DIR}/contrib/Delphes-3.1.2/libDelphes*" "${PROJECT_SOURCE_DIR}/contrib/Delphes-3.1.2/Makefile*")
  set(clean_files ${clean_files} "${PROJECT_SOURCE_DIR}/contrib/Delphes-3.1.2/tmp" "${PROJECT_SOURCE_DIR}/contrib/Delphes-3.1.2/core")
endif()
