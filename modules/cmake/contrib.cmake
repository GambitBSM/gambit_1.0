# GAMBIT: Global and Modular BSM Inference Tool  
#************************************************
# \file                                          
#                                                
#  Cmake configuration script for contributed
#  packages in GAMBIT.
#    
#************************************************
#                                                
#  Authors (add name and date if you modify):                                    
#                                                
#  \author Antje Putze
#          (antje.putze@lapth.cnrs.fr)              
#  \date 2014 Sep, Oct, Nov
#
#  \author Pat Scott
#          (p.scott@imperial.ac.uk)              
#  \date 2014 Nov, Dec
#                                               
#************************************************

include(ExternalProject)

#contrib/slhaea
include_directories("${PROJECT_SOURCE_DIR}/contrib/slhaea/include")

#contrib/mcutils
include_directories("${PROJECT_SOURCE_DIR}/contrib/mcutils/include")

#contrib/heputils
include_directories("${PROJECT_SOURCE_DIR}/contrib/heputils/include")

#contrib/flexiblesusy
if (NOT ${EXCLUDE_FLEXIBLESUSY})

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
  set(BUILT_FS_MODELS CMSSM MSSMatMGUT MSSM)
  
  # To skip flexiblesusy build, run cmake with SKIP_FS=1 set as an environment variable, or just ditch SpecBit (e.g. run "SKIP_FS=1 cmake .." or "cmake .. -Ditch="SpecBit")
  if(($ENV{SKIP_FS}) OR (${EXCLUDE_FLEXIBLESUSY}))
     message("-- SKIP_FS flag detected or SpecBit excluded: skipping build of flexiblesusy libraries")
     set(flexiblesusy_projects false)
     foreach(_MODEL ${BUILT_FS_MODELS})
       set(flexiblesusy_LDFLAGS "${flexiblesusy_LDFLAGS} -L${FLEXIBLESUSY_DIR}/models/${_MODEL} -l${_MODEL}")
     endforeach()
  else()
     message("-- NOTE! FlexibleSUSY takes kind of a while to build, so you probably")
     message("   don't want to build it every time you compile gambit. It is built")
     message("   in its own source so you should only have to do it once. For")
     message("   subsequent builds of gambit you can run cmake with SKIP_FS=1 to")
     message("   skip the flexiblesusy build. I.e. when you run cmake, do it like")
     message("   this: \"SKIP_FS=1 cmake ..\"")
  
     # Temporary variable to help chain the external flexible susy build dependencies, so that
     # they are forced to build one at a time in parallel builds.
     set(previous_FSlib false) 
  
     # FlexibleSUSY configure options
     set(FS_OPTIONS ${FS_OPTIONS} 
          --with-cxx=${CMAKE_CXX_COMPILER}
          --with-cxx-dep-gen=${CMAKE_CXX_COMPILER}
          --with-fc=${CMAKE_Fortran_COMPILER}
          --with-fortran-dep-gen=${CMAKE_Fortran_COMPILER}
          --with-eigen-incdir=${EIGEN3_DIR}
          --with-boost-libdir=${Boost_LIBRARY_DIR}
          --with-boost-incdir=${Boost_INCLUDE_DIR}
        )
     #--enable-verbose flag causes verbose output at runtime as well. Set it dynamically somehow.

     # Explain how to build each of the flexiblesusy spectrum generators we need
     # Note; using $(MAKE) rather than "make" so that -jN flags get passed on (for parallel build)
     foreach(_MODEL ${BUILT_FS_MODELS})
         ExternalProject_Add(flexiblesusy_project${_MODEL}
           SOURCE_DIR ${FLEXIBLESUSY_DIR}
           BUILD_IN_SOURCE 1
           CONFIGURE_COMMAND ./configure --with-models=${_MODEL} ${FS_OPTIONS}
           BUILD_COMMAND $(MAKE) alllib LAPACKLIBS=${LAPACK_LIBS}
           INSTALL_COMMAND ""
         )
         set(previous_FSlib flexiblesusy_project${_MODEL}) 
         list(APPEND flexiblesusy_projects flexiblesusy_project${_MODEL})
         set(flexiblesusy_LDFLAGS "${flexiblesusy_LDFLAGS} -L${FLEXIBLESUSY_DIR}/models/${_MODEL} -l${_MODEL}")
     endforeach()
  
  endif()

  if( NOT ${EXCLUDE_FLEXIBLESUSY} )
    # Link order matters! The core flexiblesusy libraries need to come after the model libraries
    set(flexiblesusy_LDFLAGS "${flexiblesusy_LDFLAGS} -L${FLEXIBLESUSY_DIR}/src -lflexisusy -L${FLEXIBLESUSY_DIR}/legacy -llegacy")
  endif()

  # Determine compiler libraries needed by flexiblesusy. The below simply clones the logic
  # used in "contrib/MassSpectra/flexiblesusy/configure": 
  #    check_fortran_libs() {
  #        case "$FC" in
  #            gfortran*)
  #                gfortran_lib_search_paths=`${FC} -print-search-dirs | sed -n -e '/libraries:/s/libraries: *=//p' | tr ':' ' '`
  #                check_library "libgfortran" "$gfortran_lib_search_paths" "$default_lib_paths"
  #                if test "x$found_lib" = "x" ; then
  #                    message "Error: libgfortran not found in $gfortran_lib_search_paths $default_lib_paths"
  #                    exit 1
  #                else
  #                    FLIBS="-L$found_dir -lgfortran -lm"
  #                fi ;;
  #            g77|f77)
  #                FLIBS="-lg2c -lm" ;;
  #            ifort)
  #                FLIBS="-lifcore -limf -ldl -lintlc -lsvml" ;;
  #        esac
  #    }
  # in a kind of brutish cmake style. "find_library" is failing to find libgfortran on my system though,
  # whereas this brute force way works... perhaps it won't be robust though.
  if(CMAKE_Fortran_COMPILER MATCHES "gfortran*")
     set(flexiblesusy_extralibs "${flexiblesusy_extralibs} -lgfortran -lm")
  elseif(CMAKE_Fortran_COMPILER MATCHES "g77" OR CMAKE_Fortran_COMPILER MATCHES "f77")
     set(flexiblesusy_extralibs "${flexiblesusy_extralibs} -lg2c -lm")
  elseif(CMAKE_Fortran_COMPILER MATCHES "ifort")
     set(flexiblesusy_extralibs "${flexiblesusy_extralibs} -lifcore -limf -ldl -lintlc -lsvml")
  endif()
  message("-- Determined flexiblesusy compiler library dependencies: ${flexiblesusy_extralibs}")
  set(flexiblesusy_LDFLAGS "${flexiblesusy_LDFLAGS} ${flexiblesusy_extralibs}")
  
  ## # This feels a little hacky but I'm not sure what a better way is right now...
  ## # Run a python script to suck necessary fortran linker flags from one of the 
  ## # flexiblesusy configure files (stuff like -lgfortran, in GNU case)
  ## set(errorcode true)
  ## execute_process(COMMAND python ${PROJECT_SOURCE_DIR}/contrib/MassSpectra/get_flexiblesusy_link_flags.py 
  ##                 OUTPUT_VARIABLE flexiblesusy_extralibs 
  ##                 ERROR_VARIABLE blackhole
  ##                 RESULT_VARIABLE errorcode)
  ## if(errorcode)
  ##   message(" -- Error retrieving flexiblesusy FLIB contents from config.h")
  ##   message("    Don't panic yet, this probably just means the flexiblesusy libraries")
  ##   message("    haven't been built yet. Your build of gambit may fail to link to the")
  ##   message("    library dependencies of flexiblesusy, so abort the build after the")
  ##   message("    flexiblesusy stuff finishes configuring to save yourself some time.")
  ##   message("    That is, once you see the message:")
  ##   message("      \"Performing build step for 'flexiblesusy_projectXXXX'\"")
  ##   message("    (which should appear very early in the make)")
  ##   message("    you should cancel the build and run cmake again, and it should then detect")
  ##   message("    config.h and build everything.")
  ##   message("    Once flexiblesusy has been built, you can configure subsequent gambit builds") 
  ##   message("    using:")
  ##   message("      SKIP_FS=1 cmake ..")
  ##   message("    to skip over the flexiblesusy build. I'd like to make these steps automatic")
  ##   message("    but I can't figure out how.")
  ## else()
  ##   message(" -- Retrieved flexiblesusy FLIB contents from config.h : ${flexiblesusy_extralibs}")
  ## endif()
  ## #separate_arguments(flexiblesusy_extralibs)
  ## set(flexiblesusy_LDFLAGS "${flexiblesusy_LDFLAGS} ${flexiblesusy_extralibs}")  # consolidate variables...
  # Apparently leading and trailing whitespace is getting in there, so strip it
  string(STRIP "${flexiblesusy_LDFLAGS}" flexiblesusy_LDFLAGS)

endif(NOT ${EXCLUDE_FLEXIBLESUSY})

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
  BUILD_COMMAND $(MAKE) YAML_CC=${CMAKE_CXX_COMPILER} CFLAGS=${yaml_CXXFLAGS}
  INSTALL_COMMAND ""
  INSTALL_DIR ${CMAKE_BINARY_DIR}/install
  CMAKE_ARGS -DCMAKE_INSTALL_PREFIX=${CMAKE_BINARY_DIR}/install
)
add_custom_target(yaml COMMAND $(MAKE) yaml-cpp)
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
    BUILD_COMMAND $(MAKE) all
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
