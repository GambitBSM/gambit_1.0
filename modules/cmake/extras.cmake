include(ExternalProject)

ExternalProject_Add(DDCal0
  SOURCE_DIR ${PROJECT_SOURCE_DIR}/../extras/DDCalc0
  BUILD_IN_SOURCE 1
  CONFIGURE_COMMAND ""
  BUILD_COMMAND make libDDCalc0.so FC=${CMAKE_Fortran_COMPILER} FFLAGS=${CMAKE_Fortran_FLAGS} COMMAND cp libDDCalc0.so ${PROJECT_SOURCE_DIR}/Backends/lib/.
  INSTALL_COMMAND ""
  INSTALL_DIR ${CMAKE_BINARY_DIR}/install
  CMAKE_ARGS -DCMAKE_INSTALL_PREFIX=${CMAKE_BINARY_DIR}/install
)

set(clean_files ${clean_files} "${PROJECT_SOURCE_DIR}/../extras/DDCalc0/libDDCalc0.so" "${PROJECT_SOURCE_DIR}/Backends/lib/libDDCalc0.so")

ExternalProject_Add(gamLike
  SOURCE_DIR ${PROJECT_SOURCE_DIR}/../extras/gamLike
  BUILD_IN_SOURCE 1
  CONFIGURE_COMMAND ""
  BUILD_COMMAND make CXX=${CMAKE_CXX_COMPILER} CXXFLAGS=${CMAKE_CXX_FLAGS} LDFLAGS=${CMAKE_SHARED_LIBRARY_CREATE_CXX_FLAGS} COMMAND cp gamLike.so ${PROJECT_SOURCE_DIR}/Backends/lib/libgamLike.so
  INSTALL_COMMAND ""
  INSTALL_DIR ${CMAKE_BINARY_DIR}/install
  CMAKE_ARGS -DCMAKE_INSTALL_PREFIX=${CMAKE_BINARY_DIR}/install
)

set(clean_files ${clean_files} "${PROJECT_SOURCE_DIR}/../extras/gamLike/gamLike.so" "${PROJECT_SOURCE_DIR}/Backends/lib/libgamLike.so")

ExternalProject_Add(DarkSUSY
  SOURCE_DIR ${PROJECT_SOURCE_DIR}/../extras/DarkSUSY
  BUILD_IN_SOURCE 1
  CONFIGURE_COMMAND ""
  BUILD_COMMAND ./install_DarkSUSY.script FC=${CMAKE_Fortran_COMPILER} COMMAND cp libdarksusy.so ${PROJECT_SOURCE_DIR}/Backends/lib/.
  INSTALL_COMMAND ""
  INSTALL_DIR ${CMAKE_BINARY_DIR}/install
  CMAKE_ARGS -DCMAKE_INSTALL_PREFIX=${CMAKE_BINARY_DIR}/install
)

set(clean_files ${clean_files} "${PROJECT_SOURCE_DIR}/../extras/DarkSUSY/libdarksusy.so" "${PROJECT_SOURCE_DIR}/Backends/lib/libdarksusy.so")

ExternalProject_Add(micromegas
  SOURCE_DIR ${PROJECT_SOURCE_DIR}/../extras/micromegas
  BUILD_IN_SOURCE 1
  CONFIGURE_COMMAND ""
  BUILD_COMMAND ./install_micromegas.script FC=${CMAKE_Fortran_COMPILER} COMMAND cp libmicromegas.so ${PROJECT_SOURCE_DIR}/Backends/lib/.
  INSTALL_COMMAND ""
  INSTALL_DIR ${CMAKE_BINARY_DIR}/install
  CMAKE_ARGS -DCMAKE_INSTALL_PREFIX=${CMAKE_BINARY_DIR}/install
)

set(clean_files ${clean_files} "${PROJECT_SOURCE_DIR}/../extras/micromegas/libmicromegas.so" "${PROJECT_SOURCE_DIR}/Backends/lib/libmicromegas.so")

ExternalProject_Add(pythia
  SOURCE_DIR ${PROJECT_SOURCE_DIR}/../extras/boss/bossed_pythia_source
  BUILD_IN_SOURCE 1
  CONFIGURE_COMMAND ""
  BUILD_COMMAND make CXX=${CMAKE_CXX_COMPILER} CXXFLAGS=${CMAKE_CXX_FLAGS} LDFLAGS=${CMAKE_SHARED_LIBRARY_CREATE_CXX_FLAGS} COMMAND cp lib/libpythia8.so ${PROJECT_SOURCE_DIR}/Backends/lib/libpythia8.so
  INSTALL_COMMAND ""
  INSTALL_DIR ${CMAKE_BINARY_DIR}/install
  CMAKE_ARGS -DCMAKE_INSTALL_PREFIX=${CMAKE_BINARY_DIR}/install
)

set(clean_files ${clean_files} "${PROJECT_SOURCE_DIR}/../extras/boss/bossed_pythia_source/lib/libpythia8.so" "${PROJECT_SOURCE_DIR}/Backends/lib/libpythia8.so")

ExternalProject_Add(FastSim
  SOURCE_DIR ${PROJECT_SOURCE_DIR}/../extras/fast_sim
  BUILD_IN_SOURCE 1
  CONFIGURE_COMMAND ""
  BUILD_COMMAND make CXX=${CMAKE_CXX_COMPILER} CXXFLAGS=${CMAKE_CXX_FLAGS} LDFLAGS=${CMAKE_SHARED_LIBRARY_CREATE_CXX_FLAGS} libfastsim.so COMMAND cp lib/libfastsim.so ${PROJECT_SOURCE_DIR}/Backends/lib/libfastsim.so
  INSTALL_COMMAND ""
  INSTALL_DIR ${CMAKE_BINARY_DIR}/install
  CMAKE_ARGS -DCMAKE_INSTALL_PREFIX=${CMAKE_BINARY_DIR}/install
)

set(clean_files ${clean_files} "${PROJECT_SOURCE_DIR}/../extras/fast_sim/lib/libfastsim.so" "${PROJECT_SOURCE_DIR}/Backends/lib/libfastsim.so")

ExternalProject_Add(BOSSMinimalExample
  SOURCE_DIR ${PROJECT_SOURCE_DIR}/../extras/boss
  BUILD_IN_SOURCE 1
  CONFIGURE_COMMAND ""
  BUILD_COMMAND make CXX=${CMAKE_CXX_COMPILER} CXXFLAGS=${CMAKE_CXX_FLAGS} LDFLAGS=${CMAKE_SHARED_LIBRARY_CREATE_CXX_FLAGS} all COMMAND cp libminimal_1_0.so ${PROJECT_SOURCE_DIR}/Backends/lib/ COMMAND cp libminimal_1_1.so ${PROJECT_SOURCE_DIR}/Backends/lib/ COMMAND cp libminimal_1_2.so ${PROJECT_SOURCE_DIR}/Backends/lib/
  INSTALL_COMMAND ""
  INSTALL_DIR ${CMAKE_BINARY_DIR}/install
  CMAKE_ARGS -DCMAKE_INSTALL_PREFIX=${CMAKE_BINARY_DIR}/install
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
  BUILD_COMMAND make libnulike.so FC=${CMAKE_Fortran_COMPILER} FFLAGS=${nulikeFFLAGS} MODULE=${FMODULE} COMMAND cp lib/libnulike.so ${PROJECT_SOURCE_DIR}/Backends/lib/.
  INSTALL_COMMAND ""
  INSTALL_DIR ${CMAKE_BINARY_DIR}/install
  CMAKE_ARGS -DCMAKE_INSTALL_PREFIX=${CMAKE_BINARY_DIR}/install
)

set(clean_files ${clean_files} "${PROJECT_SOURCE_DIR}/../extras/nulike/lib/libnulike.so" "${PROJECT_SOURCE_DIR}/Backends/lib/libnulike.so")

set_target_properties(DDCal0 gamLike DarkSUSY micromegas nulike pythia FastSim BOSSMinimalExample PROPERTIES EXCLUDE_FROM_ALL 1)

add_custom_target(backends COMMAND make gamLike nulike DDCal0 pythia FastSim BOSSMinimalExample) #DarkSUSY micromegas

