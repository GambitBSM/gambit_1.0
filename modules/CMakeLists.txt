# GAMBIT: Global and Modular BSM Inference Tool
#************************************************
# \file
#
#  Master cmake configuration script for GAMBIT.
#
#  CMakeLists files in this project can refer to
#  the root source directory of the project as
#  ${PROJECT_SOURCE_DIR} and to the root binary
#  directory of the project as ${PROJECT_BINARY_DIR}.
#
#************************************************
#
#  Authors (add name and date if you modify):
#
#  \author Antje Putzerator
#          (antje.putze@lapth.cnrs.fr)
#  \date 2014 Sep, Oct, Nov
#
#  \author Pat Scott
#          (p.scott@imperial.ac.uk)
#  \date 2014 Nov, Dec
#
#************************************************

# Require a minimum cmake version of 2.8.11
cmake_minimum_required(VERSION 2.8.11 FATAL_ERROR)

if(NOT CMAKE_BUILD_TYPE)
  SET(CMAKE_BUILD_TYPE RelWithDebInfo CACHE STRING
      "Choose the type of build, options are: None Debug Release RelWithDebInfo MinSizeRel." FORCE)
endif()

# Set certain policies to NEW
foreach(p
  CMP0012 # CMake 2.8.0
  CMP0022 # CMake 2.8.12
  CMP0025 # CMake 3.0
  CMP0042 # CMake 3.0
  )
  if(POLICY ${p})
    cmake_policy(SET ${p} NEW)
  endif()
endforeach()

# Set the project name
project(GAMBIT)

# Don't relink all binaries when shared lib changes (programs will be rebuilt anyway if used headers change)
set(CMAKE_LINK_DEPENDS_NO_SHARED 1)

# Include ./cmake in search path for projects
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${PROJECT_SOURCE_DIR}/cmake)

# When building, use the install RPATH already
set(CMAKE_BUILD_WITH_INSTALL_RPATH TRUE)

# Add the automatically determined parts of the RPATH that point to directories outside the build tree to the install RPATH
SET(CMAKE_INSTALL_RPATH_USE_LINK_PATH TRUE)

# Check for optional packages and disable sections of GAMBIT accordingly
include(cmake/optional.cmake)

# Include cmake utility scripts
include(cmake/utilities.cmake)

# Check for Python and required libs
include(FindPythonInterp)
find_package(PythonInterp REQUIRED)
foreach(module yaml os re datetime sys getopt shutil itertools)
  find_python_module(${module} REQUIRED)
endforeach()

# Reprocess the ditch set into a comma-separated list
string (REPLACE ";" "," itch_with_commas "${itch}")

# Generate the cmake_variables.hpp.in file
message("-- Updating GAMBIT with config data")
set(locate_scanners ${PROJECT_SOURCE_DIR}/cmake/locate_scanners.py -x __not_a_real_name__,${itch_with_commas})
execute_process(COMMAND python ${locate_scanners} WORKING_DIRECTORY ${PROJECT_SOURCE_DIR})
message("-- Updating GAMBIT with config data - done.")

# Generate the CMakeLists.txt files for GAMBIT modules
message("-- Updating GAMBIT module cmake files")
set(update_cmakelists ${PROJECT_SOURCE_DIR}/cmake/update_cmakelists.py -x __not_a_real_name__,${itch_with_commas})
execute_process(COMMAND python ${update_cmakelists} WORKING_DIRECTORY ${PROJECT_SOURCE_DIR})
message("-- Updating GAMBIT module cmake files - done.")

# Haha
message("-- Downloading latest ATLAS proprietary data files...")
message("-- That was fast!")

# Do OSX checks
include(cmake/MacOSX.cmake)

# Enable Fortran compiler
enable_language(Fortran)

# Set the version number
set(GAMBIT_VERSION_MAJOR 1)
set(GAMBIT_VERSION_MINOR 0)

# Finish configuring the header file to pass some of the CMake settings to the source code
configure_file("${PROJECT_SOURCE_DIR}/cmake/cmake_variables.hpp.in"
               "${PROJECT_BINARY_DIR}/cmake_variables.hpp")

# Add the binary tree to the search path for include files so that we will find cmake_variables.hpp
include_directories("${PROJECT_BINARY_DIR}")

# Generate the backend_locations.yaml file if there isn't one
if(NOT EXISTS "${PROJECT_SOURCE_DIR}/config/backend_locations.yaml")
  configure_file("${PROJECT_SOURCE_DIR}/config/backend_locations.yaml.example" "${PROJECT_SOURCE_DIR}/config/backend_locations.yaml" COPYONLY)
endif()

# Add -fPIC for 64 bit systems
if(CMAKE_SYSTEM_PROCESSOR MATCHES "x86_64")
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fPIC")
  set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -fPIC")
  set(CMAKE_Fortran_FLAGS "${CMAKE_Fortran_FLAGS} -fPIC")
endif()

# Add some Fortran compiler flags
if(CMAKE_Fortran_COMPILER MATCHES "gfortran*" OR CMAKE_Fortran_COMPILER MATCHES "f95*")
  set(CMAKE_Fortran_FLAGS "${CMAKE_Fortran_FLAGS} -ffixed-line-length-none")
elseif(CMAKE_Fortran_COMPILER MATCHES "ifort*")
  set(CMAKE_Fortran_FLAGS "${CMAKE_Fortran_FLAGS} -extend-source")
endif()

# Set output paths
set(mylibdir ${PROJECT_SOURCE_DIR}/lib)
set(mybindir ${PROJECT_SOURCE_DIR})
# First for the generic no-config case (e.g. with mingw)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${mybindir} )
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${mylibdir} )
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${mylibdir} )
# Second, for multi-config builds (e.g. msvc)
foreach(OUTPUTCONFIG ${CMAKE_CONFIGURATION_TYPES} )
    string(TOUPPER ${OUTPUTCONFIG} OUTPUTCONFIG )
    set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_${OUTPUTCONFIG} ${mybindir} )
    set(CMAKE_LIBRARY_OUTPUT_DIRECTORY_${OUTPUTCONFIG} ${mylibdir} )
    set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY_${OUTPUTCONFIG} ${mylibdir} )
endforeach()

enable_testing()

# Check for C++11 support -- if we use special c++11 features we should check for them too at a later stage...
include(CheckCXXCompilerFlag)
CHECK_CXX_COMPILER_FLAG("-std=c++11" COMPILER_SUPPORTS_CXX11)
CHECK_CXX_COMPILER_FLAG("-std=c++0x" COMPILER_SUPPORTS_CXX0X)
if(COMPILER_SUPPORTS_CXX11)
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
  set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c++11")
elseif(COMPILER_SUPPORTS_CXX0X)
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++0x")
  set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c++0x")
else()
   message(FATAL_ERROR "The compiler ${CMAKE_CXX_COMPILER} has no C++11 support. Please use a different C++ compiler.")
endif()

# Check for Boost
set(required_boost_libs system filesystem)
set(Boost_NO_BOOST_CMAKE ON)
find_package(Boost 1.41 REQUIRED ${required_boost_libs})
if(Boost_FOUND)
  if (NOT Boost_INCLUDE_DIR STREQUAL "")
    include_directories("${Boost_INCLUDE_DIR}")
  endif()
else()
  set(err "GAMBIT requires Boost v1.41 or greater")
  if (NOT "${required_boost_libs}" STREQUAL "")
    set(err "${err} and compiled libraries:\n")
    foreach(lib ${required_boost_libs})
      set(err "${err} boost_${lib}\n")
    endforeach()
    set(err "${err}Please install these and rerun cmake.")
  else()
    set(err "${err}.\nPlease install a suitable version of Boost and rerun cmake.")
  endif()
  message(FATAL_ERROR ${err})
endif()

# Check for OpenMP
find_package(OpenMP REQUIRED)
if (OPENMP_FOUND)
    set (CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${OpenMP_C_FLAGS}")
    set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${OpenMP_CXX_FLAGS}")
endif()

# Check for Gnu Scientific Library (GSL)
include(cmake/FindGSL.cmake)
if(GSL_FOUND)
  if (NOT GSL_INCLUDE_DIRS STREQUAL "")
    include_directories("${GSL_INCLUDE_DIRS}")
  endif()
else()
  message(FATAL_ERROR "GAMBIT requires the GSL libraries.")
endif()

# Check for DL libraries
include(cmake/FindLibDL.cmake)

# Identify the different harvester scripts
set(MODEL_HARVESTER ${PROJECT_SOURCE_DIR}/Models/scripts/model_harvester.py)
set(BACKEND_HARVESTER ${PROJECT_SOURCE_DIR}/Backends/scripts/backend_harvester.py)
set(MODULE_HARVESTER ${PROJECT_SOURCE_DIR}/Utils/scripts/module_harvester.py)

# Create all_functor_types.hpp, module_rollcall.hpp, module_types_rollcall.hpp, models_rollcall.hpp,
# model_types_rollcall.hpp, backend_rollcall.hpp and backend_types_rollcall.hpp
file(GLOB MODEL_HARVESTER_FILES   "${PROJECT_SOURCE_DIR}/Models/include/models/*.hpp")
file(GLOB BACKEND_HARVESTER_FILES "${PROJECT_SOURCE_DIR}/Backends/include/frontends/*.hpp")
file(GLOB MODULE_HARVESTER_FILES  "${PROJECT_SOURCE_DIR}/*Bit*/include/*_rollcall.hpp")
list(REMOVE_ITEM MODULE_HARVESTER_FILES "${PROJECT_SOURCE_DIR}/ScannerBit//include//priors_rollcall.hpp"
                                        "${PROJECT_SOURCE_DIR}/ScannerBit//include//test_function_rollcall.hpp")
add_custom_command(OUTPUT ${PROJECT_SOURCE_DIR}/Models/include/model_rollcall.hpp
                   COMMAND python ${MODEL_HARVESTER} -x __not_a_real_name__,${itch_with_commas}
                   WORKING_DIRECTORY ${PROJECT_SOURCE_DIR}
                   DEPENDS ${MODEL_HARVESTER} ${MODEL_HARVESTER_FILES} ${PROJECT_BINARY_DIR}/CMakeCache.txt)
add_custom_command(OUTPUT ${PROJECT_SOURCE_DIR}/Backends/include/backend_rollcall.hpp
                   COMMAND python ${BACKEND_HARVESTER} -x __not_a_real_name__,${itch_with_commas}
                   WORKING_DIRECTORY ${PROJECT_SOURCE_DIR}
                   DEPENDS ${BACKEND_HARVESTER} ${BACKEND_HARVESTER_FILES} ${PROJECT_BINARY_DIR}/CMakeCache.txt)
add_custom_command(OUTPUT ${PROJECT_SOURCE_DIR}/Utils/include/all_functor_types.hpp
                   COMMAND python ${MODULE_HARVESTER} -x __not_a_real_name__,${itch_with_commas}
                   WORKING_DIRECTORY ${PROJECT_SOURCE_DIR}
                   DEPENDS ${MODULE_HARVESTER} ${MODULE_HARVESTER_FILES} ${PROJECT_BINARY_DIR}/CMakeCache.txt)
add_custom_target(model_harvest   DEPENDS ${PROJECT_SOURCE_DIR}/Models/include/model_rollcall.hpp ${MODEL_HARVESTER_FILES})
add_custom_target(backend_harvest DEPENDS ${PROJECT_SOURCE_DIR}/Backends/include/backend_rollcall.hpp ${BACKEND_HARVESTER_FILES})
add_custom_target(functor_harvest DEPENDS ${PROJECT_SOURCE_DIR}/Utils/include/all_functor_types.hpp ${MODULE_HARVESTER_FILES} backend_harvest)
add_custom_target(module_harvest  DEPENDS ${PROJECT_SOURCE_DIR}/Core/include/module_rollcall.hpp functor_harvest)

# Arrange for removal of all_functor_types.hpp and other generated headers upon "make clean".
set(clean_files ${clean_files} "${PROJECT_SOURCE_DIR}/Backends/include/backend_rollcall.hpp")
set(clean_files ${clean_files} "${PROJECT_SOURCE_DIR}/Models/include/model_rollcall.hpp")
set(clean_files ${clean_files} "${PROJECT_SOURCE_DIR}/Utils/include/all_functor_types.hpp")
set(clean_files ${clean_files} "${PROJECT_SOURCE_DIR}/Core/include/module_rollcall.hpp")

# Work out which modules to include in the compile
retrieve_bits(GAMBIT_BITS ${PROJECT_SOURCE_DIR} "${itch}" "Loud")

# Include Delphes only if ColliderBit is in use
if(";${GAMBIT_BITS};" MATCHES ";ColliderBit;")
  include_directories("${PROJECT_SOURCE_DIR}/ColliderBit/include/delphes")
  set (EXCLUDE_DELPHES FALSE)
else()
  set (EXCLUDE_DELPHES TRUE)
endif()

# Include FlexibleSUSY only if SpecBit is in use
if(";${GAMBIT_BITS};" MATCHES ";SpecBit;")
  set (EXCLUDE_FLEXIBLESUSY FALSE)
else()
  set (EXCLUDE_FLEXIBLESUSY TRUE)
endif()

# Include other cmake scripts
include(cmake/contrib.cmake)
include(cmake/warnings.cmake)
include(cmake/gambit.cmake)
include(cmake/extras.cmake)

# Add subdirectories. This does not actually cause another cmake executable to run. The same process will walk through the project's entire directory structure.
add_subdirectory(Backends)
add_subdirectory(Logs)
add_subdirectory(Utils)
add_subdirectory(Models)

# List of GAMBIT common library object files to link
set(GAMBIT_COMMON_OBJECTS $<TARGET_OBJECTS:Backends>
                          $<TARGET_OBJECTS:Logs>
                          $<TARGET_OBJECTS:Utils>
                          $<TARGET_OBJECTS:Models>
)

# List of GAMBIT core library object files to link
add_subdirectory(Core)
add_subdirectory(Printers)
set(GAMBIT_OBJECTS $<TARGET_OBJECTS:Core> $<TARGET_OBJECTS:Printers>)

# Set compilation targets for GAMBIT modules
foreach(bit ${GAMBIT_BITS})
  add_subdirectory(${bit})
  set(GAMBIT_BIT_OBJECTS ${GAMBIT_BIT_OBJECTS} "$<TARGET_OBJECTS:${bit}>")
  if (SpecBit STREQUAL ${bit})
    # Ben: My attempt to add "SpecBit only" include targets. Seems to work.
    target_include_directories(SpecBit PRIVATE
                               ${FLEXIBLESUSY_DIR}/config
                               ${FLEXIBLESUSY_DIR}/legacy
                               ${FLEXIBLESUSY_DIR}/src)
    message("-- Adding FlexibleSUSY model headers to SpecBit include list")
    # Dig through flexiblesusy "models" directory and add all subdirectories to the include list
    # (these contain the headers for the generated spectrum generators)
    #file(GLOB _ALL_FILES ${FLEXIBLESUSY_DIR}/models ${FLEXIBLESUSY_DIR}/models/*)
    foreach(_MODEL ${BUILT_FS_MODELS})
      #if(IS_DIRECTORY ${_FILE})
        message("      ${_MODEL}")
        target_include_directories(SpecBit PRIVATE ${FLEXIBLESUSY_DIR}/models/${_MODEL})
      #endif()
    endforeach()
  endif()
endforeach()

# Add the executables
include(cmake/executables.cmake)

# Finish setting the link commands and rpath variables
include(cmake/linkedout.cmake)

# Arrange clean commands
include(cmake/cleaning.cmake)
