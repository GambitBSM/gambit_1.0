include(ExternalProject)

ExternalProject_Add(DDCal0
  SOURCE_DIR ${PROJECT_SOURCE_DIR}/../extras/DDCalc0
  BUILD_IN_SOURCE 1
  CONFIGURE_COMMAND ""
  BUILD_COMMAND make libDDCalc0.so FC=${CMAKE_Fortran_COMPILER} FFLAGS=${CMAKE_Fortran_FLAGS} COMMAND cp libDDCalc0.so ${PROJECT_SOURCE_DIR}/Backends/lib/.
)

add_custom_target(backends COMMAND make DDCal0)

set(clean_files ${clean_files} "${PROJECT_SOURCE_DIR}/../extras/DDCalc0/libDDCalc0.so")