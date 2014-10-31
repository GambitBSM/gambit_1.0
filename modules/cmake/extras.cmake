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

set(GAMLIKE_LDFLAGS "${CMAKE_CXX_FLAGS} -dynamiclib -Wl,-headerpad_max_install_names")
ExternalProject_Add(gamLike
  SOURCE_DIR ${PROJECT_SOURCE_DIR}/../extras/gamLike
  BUILD_IN_SOURCE 1
  CONFIGURE_COMMAND ""
  BUILD_COMMAND make CC=${CMAKE_CXX_COMPILER} CFLAGS=${CMAKE_CXX_FLAGS} COMMAND cp gamLike.so ${PROJECT_SOURCE_DIR}/Backends/lib/libgamLike.so
  INSTALL_COMMAND ""
  INSTALL_DIR ${CMAKE_BINARY_DIR}/install
  CMAKE_ARGS -DCMAKE_INSTALL_PREFIX=${CMAKE_BINARY_DIR}/install
)

set(clean_files ${clean_files} "${PROJECT_SOURCE_DIR}/../extras/gamLike/gamLike.so" "${PROJECT_SOURCE_DIR}/Backends/lib/gamLike.so")

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

add_custom_target(backends COMMAND make DDCal0 gamLike DarkSUSY nulike)

