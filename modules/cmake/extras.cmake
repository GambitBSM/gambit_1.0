# GAMBIT: Global and Modular BSM Inference Tool  
#************************************************
# \file                                          
#                                                
#  Cmake configuration script for 'extra'
#  packages in GAMBIT, i.e. backend codes that
#  we want to make accessible via the cmake 
#  system.  Note that this is not the canonical
#  way to manage the compilation of backends,
#  and GAMBIT support for backend compilation is
#  minimal, even with this method!  
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

set(remove_files_from_libdarksusy dssetdsinstall.o dssetdsversion.o ddilog.o drkstp.o eisrs1.o tql2.o tred2.o)
set(remove_files_from_libisajet fa12.o  func_int.o  func.o  isalhd.o  isared.o)
if(${CMAKE_SYSTEM_NAME} MATCHES "Darwin")
  set(_ld_prefix "-Wl,-all_load")
  set(_ld_suffix "")
elseif(${CMAKE_SYSTEM_NAME} MATCHES "Linux")
  set(_ld_prefix "-Wl,--whole-archive")
  set(_ld_suffix "-Wl,--no-whole-archive")
endif()
set(libs ${_ld_prefix} <SOURCE_DIR>/lib/libFH.a <SOURCE_DIR>/lib/libHB.a <SOURCE_DIR>/lib/libdarksusy.a <SOURCE_DIR>/lib/libisajet.a ${_ld_suffix})

ExternalProject_Add(darksusy
  URL http://www.fysik.su.se/~edsjo/darksusy/tars/darksusy-5.1.1.tar.gz
  DOWNLOAD_DIR ${PROJECT_SOURCE_DIR}/../extras/DarkSUSY
  SOURCE_DIR ${PROJECT_SOURCE_DIR}/../extras/DarkSUSY/DarkSUSY
  BUILD_IN_SOURCE 1
  CONFIGURE_COMMAND <SOURCE_DIR>/configure FC=${CMAKE_Fortran_COMPILER} FCFLAGS=${CMAKE_Fortran_FLAGS} FFLAGS=${CMAKE_Fortran_FLAGS} CC=${CMAKE_C_COMPILER} CFLAGS=${CMAKE_C_FLAGS} CXX=${CMAKE_CXX_COMPILER} CXXFLAGS=${CMAKE_CXX_FLAGS}
  BUILD_COMMAND make COMMAND ar d <SOURCE_DIR>/lib/libdarksusy.a ${remove_files_from_libdarksusy} COMMAND ar d <SOURCE_DIR>/lib/libisajet.a ${remove_files_from_libisajet}
  INSTALL_COMMAND ${CMAKE_Fortran_COMPILER} -shared ${libs} -o <SOURCE_DIR>/lib/libdarksusy.so COMMAND cp <SOURCE_DIR>/lib/libdarksusy.so ${PROJECT_SOURCE_DIR}/Backends/lib/.
)

set_property(TARGET darksusy PROPERTY _EP_DOWNLOAD_ALWAYS 0)

set(clean_files ${clean_files} "${PROJECT_SOURCE_DIR}/../extras/DarkSUSY/libdarksusy.so" "${PROJECT_SOURCE_DIR}/Backends/lib/libdarksusy.so")

ExternalProject_Add(ddcalc
  SOURCE_DIR ${PROJECT_SOURCE_DIR}/../extras/DDCalc0
  BUILD_IN_SOURCE 1
  CONFIGURE_COMMAND ""
  BUILD_COMMAND make libDDCalc0.so FC=${CMAKE_Fortran_COMPILER} FFLAGS=${CMAKE_Fortran_FLAGS} OUTPUT_PIPE=>/dev/null
  INSTALL_COMMAND cp libDDCalc0.so ${PROJECT_SOURCE_DIR}/Backends/lib/.
)

set(clean_files ${clean_files} "${PROJECT_SOURCE_DIR}/../extras/DDCalc0/libDDCalc0.so" "${PROJECT_SOURCE_DIR}/Backends/lib/libDDCalc0.so")

if(GSL_FOUND)
  execute_process(
    COMMAND gsl-config --libs
    OUTPUT_VARIABLE GAMLIKE_GSL_LIBS
    RESULT_VARIABLE RET
  )
  if( RET EQUAL 0 )
    string( STRIP "${GAMLIKE_GSL_LIBS}" GAMLIKE_GSL_LIBS )
  endif()
endif()

set(gamlike_CXXFLAGS "${CMAKE_CXX_FLAGS}")
if (NOT GSL_INCLUDE_DIRS STREQUAL "")
  set(gamlike_CXXFLAGS "${gamlike_CXXFLAGS} -I${GSL_INCLUDE_DIRS}")
endif()

ExternalProject_Add(gamlike
  SOURCE_DIR ${PROJECT_SOURCE_DIR}/../extras/gamLike
  BUILD_IN_SOURCE 1
  CONFIGURE_COMMAND ""
  BUILD_COMMAND make CXX=${CMAKE_CXX_COMPILER} CXXFLAGS=${gamlike_CXXFLAGS} LDFLAGS=${CMAKE_SHARED_LIBRARY_CREATE_CXX_FLAGS} LDLIBS=${GAMLIKE_GSL_LIBS}
  INSTALL_COMMAND cp gamLike.so ${PROJECT_SOURCE_DIR}/Backends/lib/libgamLike.so
)

set(clean_files ${clean_files} "${PROJECT_SOURCE_DIR}/../extras/gamLike/gamLike.so" "${PROJECT_SOURCE_DIR}/Backends/lib/libgamLike.so")

ExternalProject_Add(micromegas
  SOURCE_DIR ${PROJECT_SOURCE_DIR}/../extras/micromegas
  BUILD_IN_SOURCE 1
  CONFIGURE_COMMAND ""
  BUILD_COMMAND ./install_micromegas.script FC=${CMAKE_Fortran_COMPILER}
  INSTALL_COMMAND cp libmicromegas.so ${PROJECT_SOURCE_DIR}/Backends/lib/.
)

set(clean_files ${clean_files} "${PROJECT_SOURCE_DIR}/../extras/micromegas/libmicromegas.so" "${PROJECT_SOURCE_DIR}/Backends/lib/libmicromegas.so")

ExternalProject_Add(pythia
  SOURCE_DIR ${PROJECT_SOURCE_DIR}/../extras/boss/bossed_pythia_source
  BUILD_IN_SOURCE 1
  CONFIGURE_COMMAND ""
  BUILD_COMMAND make CXX=${CMAKE_CXX_COMPILER} CXXFLAGS=${CMAKE_CXX_FLAGS} LDFLAGS=${CMAKE_SHARED_LIBRARY_CREATE_CXX_FLAGS}
  INSTALL_COMMAND cp lib/libpythia8.so ${PROJECT_SOURCE_DIR}/Backends/lib/libpythia8.so
)

set(clean_files ${clean_files} "${PROJECT_SOURCE_DIR}/../extras/boss/bossed_pythia_source/lib/libpythia8.so" "${PROJECT_SOURCE_DIR}/Backends/lib/libpythia8.so")

ExternalProject_Add(fastsim
  SOURCE_DIR ${PROJECT_SOURCE_DIR}/../extras/fast_sim
  BUILD_IN_SOURCE 1
  CONFIGURE_COMMAND ""
  BUILD_COMMAND make CXX=${CMAKE_CXX_COMPILER} CXXFLAGS=${CMAKE_CXX_FLAGS} LDFLAGS=${CMAKE_SHARED_LIBRARY_CREATE_CXX_FLAGS} libfastsim.so
  INSTALL_COMMAND cp lib/libfastsim.so ${PROJECT_SOURCE_DIR}/Backends/lib/libfastsim.so
)

set(clean_files ${clean_files} "${PROJECT_SOURCE_DIR}/../extras/fast_sim/lib/libfastsim.so" "${PROJECT_SOURCE_DIR}/Backends/lib/libfastsim.so")

ExternalProject_Add(BOSSMinimalExample
  SOURCE_DIR ${PROJECT_SOURCE_DIR}/../extras/boss
  BUILD_IN_SOURCE 1
  CONFIGURE_COMMAND ""
  BUILD_COMMAND make CXX=${CMAKE_CXX_COMPILER} CXXFLAGS=${CMAKE_CXX_FLAGS} LDFLAGS=${CMAKE_SHARED_LIBRARY_CREATE_CXX_FLAGS} all
  INSTALL_COMMAND cp libminimal_1_0.so ${PROJECT_SOURCE_DIR}/Backends/lib/ COMMAND cp libminimal_1_1.so ${PROJECT_SOURCE_DIR}/Backends/lib/ COMMAND cp libminimal_1_2.so ${PROJECT_SOURCE_DIR}/Backends/lib/
)

set(clean_files ${clean_files} "${PROJECT_SOURCE_DIR}/../extras/boss/*.so" "${PROJECT_SOURCE_DIR}/Backends/lib/libminimal_1_0.so" "${PROJECT_SOURCE_DIR}/Backends/lib/libminimal_1_1.so" "${PROJECT_SOURCE_DIR}/Backends/lib/libminimal_1_2.so")

if("${CMAKE_Fortran_COMPILER_ID}" STREQUAL "Intel")
  set(FMODULE "module")
elseif("${CMAKE_Fortran_COMPILER_ID}" STREQUAL "GNU")
  set(FMODULE "J")
endif()
set(nulikeFFLAGS "${CMAKE_Fortran_FLAGS} -I${PROJECT_SOURCE_DIR}/../extras/nulike/include")

ExternalProject_Add(nulike
  SOURCE_DIR ${PROJECT_SOURCE_DIR}/../extras/nulike
  BUILD_IN_SOURCE 1
  CONFIGURE_COMMAND ""
  BUILD_COMMAND make libnulike.so FC=${CMAKE_Fortran_COMPILER} FFLAGS=${nulikeFFLAGS} MODULE=${FMODULE} 
  INSTALL_COMMAND cp lib/libnulike.so ${PROJECT_SOURCE_DIR}/Backends/lib/.
)

set(clean_files ${clean_files} "${PROJECT_SOURCE_DIR}/../extras/nulike/lib/libnulike.so" "${PROJECT_SOURCE_DIR}/Backends/lib/libnulike.so")

set_target_properties(ddcalc gamlike darksusy micromegas nulike pythia fastsim BOSSMinimalExample PROPERTIES EXCLUDE_FROM_ALL 1)

add_custom_target(backends COMMAND make gamlike nulike ddcalc pythia BOSSMinimalExample darksusy) #fastsim micromegas

