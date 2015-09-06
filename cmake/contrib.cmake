# GAMBIT: Global and Modular BSM Inference Tool  
#************************************************
# \file                                          
#                                                
#  CMake configuration script for contributed
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

#contrib/mkpath
set(mkpath_INCLUDE_DIR "${PROJECT_SOURCE_DIR}/contrib/mkpath/include")
include_directories("${mkpath_INCLUDE_DIR}")
add_gambit_library(mkpath OPTION OBJECT 
                          SOURCES ${PROJECT_SOURCE_DIR}/contrib/mkpath/src/mkpath.c 
                          HEADERS ${PROJECT_SOURCE_DIR}/contrib/mkpath/include/mkpath/mkpath.h)
set(GAMBIT_BASIC_COMMON_OBJECTS "${GAMBIT_BASIC_COMMON_OBJECTS}" $<TARGET_OBJECTS:mkpath>)

#contrib/yaml-cpp-0.5.1
set(yaml_INCLUDE_DIR ${PROJECT_SOURCE_DIR}/contrib/yaml-cpp-0.5.1/src ${PROJECT_SOURCE_DIR}/contrib/yaml-cpp-0.5.1/include)
include_directories("${yaml_INCLUDE_DIR}")
add_subdirectory(${PROJECT_SOURCE_DIR}/contrib/yaml-cpp-0.5.1 EXCLUDE_FROM_ALL)

if (${CMAKE_SYSTEM_NAME} MATCHES "Darwin")
  set(dashi "-i ''")
else()
  set(dashi "-i")
endif()

#contrib/Delphes-3.1.2; include only if ColliderBit is in use
if(";${GAMBIT_BITS};" MATCHES ";ColliderBit;")
  set (EXCLUDE_DELPHES FALSE)
  set (DELPH_BAD_LINE "\\(..CC)\ ..patsubst\ -std=%,,..CXXFLAGS))\\)\ \\(..CXXFLAGS.\\)")
  ExternalProject_Add(delphes
    SOURCE_DIR ${PROJECT_SOURCE_DIR}/contrib/Delphes-3.1.2
    BUILD_IN_SOURCE 1
    CONFIGURE_COMMAND ./configure 
              COMMAND cp <SOURCE_DIR>/Makefile <SOURCE_DIR>/Makefile.orig 
              COMMAND sed -i "s,\ ..EXECUTABLE.,,g" <SOURCE_DIR>/Makefile
              COMMAND sed -i "s/${DELPH_BAD_LINE}/\\1/g" <SOURCE_DIR>/Makefile
    BUILD_COMMAND $(MAKE) all
    INSTALL_COMMAND ""
    INSTALL_DIR ${CMAKE_BINARY_DIR}/install
    CMAKE_ARGS -DCMAKE_INSTALL_PREFIX=${CMAKE_BINARY_DIR}/install
  )
  set(delphes_INCLUDE_DIRS "${PROJECT_SOURCE_DIR}/contrib/Delphes-3.1.2" "${PROJECT_SOURCE_DIR}/contrib/Delphes-3.1.2/external")
  set(delphes_LIBRARIES "Delphes")
  set(delphes_LDFLAGS "-L${PROJECT_SOURCE_DIR}/contrib/Delphes-3.1.2 -l${delphes_LIBRARIES}")
  include_directories("${delphes_INCLUDE_DIRS}" )
  include_directories("${PROJECT_SOURCE_DIR}/ColliderBit/include/gambit/ColliderBit/delphes")
  set(CMAKE_INSTALL_RPATH "${PROJECT_SOURCE_DIR}/contrib/Delphes-3.1.2")
  set(clean_files ${clean_files} "${PROJECT_SOURCE_DIR}/contrib/Delphes-3.1.2/libDelphes*" "${PROJECT_SOURCE_DIR}/contrib/Delphes-3.1.2/Makefile*")
  set(clean_files ${clean_files} "${PROJECT_SOURCE_DIR}/contrib/Delphes-3.1.2/tmp" "${PROJECT_SOURCE_DIR}/contrib/Delphes-3.1.2/core")
  message("${Yellow}-- Generating Delphes ROOT dictionaries...${ColourReset}")
  execute_process(COMMAND ./make_dicts.sh
                  WORKING_DIRECTORY ${PROJECT_SOURCE_DIR}/ColliderBit/src/delphes
                  RESULT_VARIABLE result
                 )
  if (NOT "${result}" STREQUAL "0")
    message(FATAL_ERROR "Could not automatically generate Delphes ROOT dictionaries.  Blame ROOT.")
  endif()
  message("${Yellow}-- Generating Delphes ROOT dictionaries - done.${ColourReset}")
else()
  set (EXCLUDE_DELPHES TRUE)
endif()

#contrib/MassSpectra; include only if SpecBit is in use
if(";${GAMBIT_BITS};" MATCHES ";SpecBit;")
  
  set (EXCLUDE_FLEXIBLESUSY FALSE)
  set(MASS_SPECTRA_DIR "${PROJECT_SOURCE_DIR}/contrib/MassSpectra")
  
  # Determine compiler libraries needed by flexiblesusy.
  if(CMAKE_Fortran_COMPILER MATCHES "gfortran*")
    set(flexiblesusy_extralibs "${flexiblesusy_extralibs} -lgfortran -lm")
  elseif(CMAKE_Fortran_COMPILER MATCHES "g77" OR CMAKE_Fortran_COMPILER MATCHES "f77")
    set(flexiblesusy_extralibs "${flexiblesusy_extralibs} -lg2c -lm")
  elseif(CMAKE_Fortran_COMPILER MATCHES "ifort")
    set(flexiblesusy_extralibs "${flexiblesusy_extralibs} -lifcore -limf -ldl -lintlc -lsvml")
  endif()
  message("${BoldYellow}-- Determined FlexibleSUSY compiler library dependencies: ${flexiblesusy_extralibs}${ColourReset}")
  set(flexiblesusy_LDFLAGS "${flexiblesusy_LDFLAGS} ${flexiblesusy_extralibs}")

  # We need to include some stuff from the eigen3 library.  Just ship it until we can get rid of FlexibleSUSY.
  set(EIGEN3_DIR "${PROJECT_SOURCE_DIR}/contrib/eigen3")
  include_directories("${EIGEN3_DIR}")

  # The flexiblesusy configure script doesn't always find all the lapack libs, so use CMake to find them instead
  message("${BoldYellow}-- Adding LAPACK paths to FlexibleSUSY build: ${LAPACK_LINKLIBS}${ColourReset}")

  # FlexibleSUSY configure options
  set(FS_OPTIONS ${FS_OPTIONS} 
       --with-cxx=${CMAKE_CXX_COMPILER}
       --with-cxx-dep-gen=${CMAKE_CXX_COMPILER}
       --with-cxxflags=${CMAKE_CXX_FLAGS}
       --with-fc=${CMAKE_Fortran_COMPILER}
       --with-fortran-dep-gen=${CMAKE_Fortran_COMPILER}
       --with-fflags=${CMAKE_Fortran_FLAGS}
       --with-eigen-incdir=${EIGEN3_DIR}
       --with-boost-libdir=${Boost_LIBRARY_DIR}
       --with-boost-incdir=${Boost_INCLUDE_DIR}
       #--with-blas-libdir=${BLAS_LAPACK_LOCATION}
       #--with-lapack-libdir=${BLAS_LAPACK_LOCATION}
     )
  #--enable-verbose flag causes verbose output at runtime as well. Set it dynamically somehow.

  # Set the models (spectrum generators) existing in flexiblesusy (could autogen this, but that would build some things we don't need)
  set(BUILT_FS_MODELS CMSSM MSSMatMGUT MSSM)
 
  # Explain how to build each of the flexiblesusy spectrum generators we need.  Configure now, serially, to prevent parallel build issues.
  string (REPLACE ";" "," BUILT_FS_MODELS_COMMAS "${BUILT_FS_MODELS}")
  set(config_command ./configure ${FS_OPTIONS} --with-models=${BUILT_FS_MODELS_COMMAS})
  message("${Yellow}-- Configuring FlexibleSUSY for models: ${BoldYellow}${BUILT_FS_MODELS_COMMAS}${ColourReset}")
  execute_process(COMMAND ${config_command}
                  WORKING_DIRECTORY ${MASS_SPECTRA_DIR}/flexiblesusy
                  RESULT_VARIABLE result
                  OUTPUT_VARIABLE output
                 )
  if (NOT "${result}" STREQUAL "0")
    message("${BoldRed}-- Configuring FlexibleSUSY failed.  Here's what I tried to do:\n${config_command}\n${output}${ColourReset}" )
    message(FATAL_ERROR "Configuring FlexibleSUSY failed." ) 
  endif()
  message("${Yellow}-- Configuring FlexibleSUSY - done.${ColourReset}")

  # Add FlexibleSUSY as an external project
  ExternalProject_Add(flexiblesusy
    SOURCE_DIR ${MASS_SPECTRA_DIR}/flexiblesusy
    BUILD_IN_SOURCE 1
    BUILD_COMMAND $(MAKE) alllib LAPACKLIBS=${LAPACK_LINKLIBS}
    CONFIGURE_COMMAND ""
    INSTALL_COMMAND ""
  )
  
  # Set linking commands.  Link order matters! The core flexiblesusy libraries need to come after the model libraries but before the other link flags.
  set(flexiblesusy_LDFLAGS "-L${MASS_SPECTRA_DIR}/flexiblesusy/src -lflexisusy -L${MASS_SPECTRA_DIR}/flexiblesusy/legacy -llegacy ${flexiblesusy_LDFLAGS}")
  foreach(_MODEL ${BUILT_FS_MODELS})
    set(flexiblesusy_LDFLAGS "-L${MASS_SPECTRA_DIR}/flexiblesusy/models/${_MODEL} -l${_MODEL} ${flexiblesusy_LDFLAGS}")
  endforeach()
  
  # Set up include paths
  include_directories("${MASS_SPECTRA_DIR}")
  include_directories("${MASS_SPECTRA_DIR}/flexiblesusy/src")
  include_directories("${MASS_SPECTRA_DIR}/flexiblesusy/legacy")
  include_directories("${MASS_SPECTRA_DIR}/flexiblesusy/config")
  include_directories("${MASS_SPECTRA_DIR}/flexiblesusy/slhaea")
  # Dig through flexiblesusy "models" directory and add all subdirectories to the include list
  # (these contain the headers for the generated spectrum generators)
  #file(GLOB _ALL_FILES ${MASS_SPECTRA_DIR}/flexiblesusy/models ${MASS_SPECTRA_DIR}/flexiblesusy/models/*)
  foreach(_MODEL ${BUILT_FS_MODELS})
    #if(IS_DIRECTORY ${_FILE})
      include_directories("${MASS_SPECTRA_DIR}/flexiblesusy/models/${_MODEL}")
    #endif()
  endforeach()

  # Strip out leading and trailing whitespace
  string(STRIP "${flexiblesusy_LDFLAGS}" flexiblesusy_LDFLAGS)

  # Add clean info
  add_custom_target(clean-flexiblesusy COMMAND cd ${MASS_SPECTRA_DIR}/flexiblesusy && make clean && make distclean )
  add_dependencies(distclean clean-flexiblesusy)

else()

  set (EXCLUDE_FLEXIBLESUSY TRUE)

endif()
