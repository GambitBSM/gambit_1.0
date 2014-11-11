# create libraries
add_library(first SHARED lib/libfirst.cpp)
add_library(fortran SHARED lib/libfortran.f90)
add_library(FarrayTest SHARED lib/libFarrayTest.f90)

if(${CMAKE_SYSTEM_NAME} MATCHES "Darwin")
  set_target_properties(first PROPERTIES SUFFIX .so)
  set_target_properties(fortran PROPERTIES SUFFIX .so)
  set_target_properties(FarrayTest PROPERTIES SUFFIX .so)
endif()

set_target_properties( first fortran FarrayTest
PROPERTIES
  ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/lib"
  LIBRARY_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/lib"
  RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/bin"
)

set(source_files src/backend_singleton.cpp)

set(header_files include/backend_singleton.hpp)

add_gambit_library(Backends OPTION OBJECT SOURCES ${source_files} HEADERS ${header_files})
