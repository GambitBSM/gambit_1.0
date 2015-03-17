# GAMBIT: Global and Modular BSM Inference Tool
#************************************************
# \file
#
#  CMake CMakeLists.txt file for Backends
#
#************************************************
#
#  Authors (add name and date if you modify):
#
#  \author Antje Putze
#          (antje.putze@lapth.cnrs.fr)
#  \date 2014 Aug, Oct
#  \date 2015 Feb
#
#  \author Pat Scott
#          (p.scott@imperial.ac.uk)
#  \date 2014 Dec
#  \date 2015 Feb
#
#************************************************

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

set(source_files src/backend_singleton.cpp
                 src/backend_info.cpp)

set(header_files include/gambit/Backends/backend_singleton.hpp
                 include/gambit/Backends/backend_info.hpp
                 include/gambit/Backends/ini_functions.hpp)

add_gambit_library(Backends OPTION OBJECT SOURCES ${source_files} HEADERS ${header_files})
