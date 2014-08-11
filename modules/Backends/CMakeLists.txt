# create libraries
add_library(first SHARED lib/libfirst.cpp include/libfirst_types.hpp)
add_library(fortran SHARED lib/libfortran.f90)
add_library(FarrayTest SHARED lib/libFarrayTest.f90 include/libFarrayTest_types.hpp)

if(${CMAKE_SYSTEM_NAME} MATCHES "Darwin")
  set_target_properties(first PROPERTIES SUFFIX .so)
  set_target_properties(fortran PROPERTIES SUFFIX .so)
  set_target_properties(FarrayTest PROPERTIES SUFFIX .so)
endif()