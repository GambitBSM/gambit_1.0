# GAMBIT: Global and Modular BSM Inference Tool
#************************************************
# \file
#
#  Master CMake configuration script for GAMBIT.
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
#  \author Antje Putze
#          (antje.putze@lapth.cnrs.fr)
#  \date 2014 Sep, Oct, Nov
#        2015 Jan, Feb, Apr, Sep
#
#  \author Pat Scott
#          (p.scott@imperial.ac.uk)
#  \date 2014 Nov, Dec
#
#************************************************

# Require a minimum cmake version of 2.8.0
cmake_minimum_required(VERSION 2.8.0 FATAL_ERROR)

if(NOT CMAKE_BUILD_TYPE)
  SET(CMAKE_BUILD_TYPE Debug CACHE STRING
      "Choose the type of build, options are: None Debug Release RelWithDebInfo MinSizeRel." FORCE)
endif()

# Set certain policies to NEW
foreach(p
  CMP0003 # CMake 2.6.0
  CMP0012 # CMake 2.8.0
  CMP0022 # CMake 2.8.12
  CMP0025 # CMake 3.0
  CMP0042 # CMake 3.0
  CMP0054 # CMake 3.1
  )
  if(POLICY ${p})
    cmake_policy(SET ${p} NEW)
  endif()
endforeach()

# Set the project name, enabling C, C++ and Fortran support
project(GAMBIT C CXX Fortran)

# Disable clang support
if (CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  message(FATAL_ERROR "GAMBIT does not support the Clang compiler. Please choose another compiler.")
endif()

# Don't relink all binaries when shared lib changes (programs will be rebuilt anyway if used headers change)
set(CMAKE_LINK_DEPENDS_NO_SHARED 1)

# Include ./cmake in search path for projects
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${PROJECT_SOURCE_DIR}/cmake)

# Add common system library search variables to cmake library search variable, used by find_library
set(CMAKE_LIBRARY_PATH ${CMAKE_LIBRARY_PATH} $ENV{LIBRARY_PATH})
string(REPLACE ":" ";" CMAKE_LIBRARY_PATH "${CMAKE_LIBRARY_PATH}")

# When building, use the install RPATH already
set(CMAKE_BUILD_WITH_INSTALL_RPATH TRUE)

# Add the automatically determined parts of the RPATH that point to directories outside the build tree to the install RPATH
SET(CMAKE_INSTALL_RPATH_USE_LINK_PATH TRUE)

# Include cmake utility scripts, including colour definitions.
include(cmake/utilities.cmake)

# Check for Python and required libs
include(FindPythonInterp)
find_package(PythonInterp REQUIRED)
foreach(module yaml os re datetime sys getopt shutil itertools)
  find_python_module(${module} REQUIRED)
endforeach()

# Do OSX checks
include(cmake/MacOSX.cmake)

# Add -fPIC for 64 bit systems
if(CMAKE_SYSTEM_PROCESSOR MATCHES "x86_64")
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fPIC")
  set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -fPIC")
  set(CMAKE_Fortran_FLAGS "${CMAKE_Fortran_FLAGS} -fPIC")
endif()

# Add some Fortran compiler flags
if(CMAKE_Fortran_COMPILER MATCHES "gfortran*" OR CMAKE_Fortran_COMPILER MATCHES "f95*")
  set(CMAKE_Fortran_FLAGS "${CMAKE_Fortran_FLAGS} -ffree-line-length-none -ffixed-line-length-none -cpp")
elseif(CMAKE_Fortran_COMPILER MATCHES "ifort*")
  set(CMAKE_Fortran_FLAGS "${CMAKE_Fortran_FLAGS} -extend-source -fpp")
endif()

# Check for optional packages and disable sections of GAMBIT accordingly
include(cmake/optional.cmake)

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
if(COMPILER_SUPPORTS_CXX11)
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
else()
  CHECK_CXX_COMPILER_FLAG("-std=c++0x" COMPILER_SUPPORTS_CXX0X)
  if(COMPILER_SUPPORTS_CXX0X)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++0x")
  else()
   message(FATAL_ERROR "The compiler ${CMAKE_CXX_COMPILER} has no C++11 support. Please use a different C++ compiler.")
  endif()
endif()

# Check for Boost
set(Boost_NO_BOOST_CMAKE ON)
set(required_boost_libs "")  # Don't need these anymore: system filesystem
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

# Set the version number
set(GAMBIT_VERSION_MAJOR 1)
set(GAMBIT_VERSION_MINOR 0)

# Reprocess the ditch set into a comma-separated list
string (REPLACE ";" "," itch_with_commas "${itch}")

# Generate the cmake_variables.hpp file
include(cmake/preprocessor.cmake)

# Create the scratch directory if it isn't there already
if(NOT EXISTS "${PROJECT_SOURCE_DIR}/scratch")
  message("${Yellow}-- Creating scratch directory${ColourReset}")
  execute_process(COMMAND ${CMAKE_COMMAND} -E make_directory scratch WORKING_DIRECTORY ${PROJECT_SOURCE_DIR})
  message("${Yellow}-- Creating scratch directory - done.${ColourReset}")
endif()

# Generate the ScannerBit compilation files
message("${Yellow}-- Updating GAMBIT scanner cmake and related files${ColourReset}")
set(locate_scanners ${PROJECT_SOURCE_DIR}/cmake/locate_scanners.py ${PROJECT_BINARY_DIR} -x __not_a_real_name__,${itch_with_commas})
execute_process(RESULT_VARIABLE result COMMAND python ${locate_scanners} WORKING_DIRECTORY ${PROJECT_SOURCE_DIR})
check_result(${result} ${locate_scanners}) 
message("${Yellow}-- Updating GAMBIT scanner cmake and related files - done.${ColourReset}")

# Add a true clean target that can have dependencies, to allow us to trigger cleaning of external projects (or run any other custom commands)
add_custom_target(distclean COMMAND ${CMAKE_MAKE_PROGRAM} clean)

# Work out which modules to include in the compile
retrieve_bits(GAMBIT_BITS ${PROJECT_SOURCE_DIR} "${itch}" "Loud")

# Include contributed packages
include(cmake/contrib.cmake)

# Generate the backend_locations.yaml file if there isn't one
if(NOT EXISTS "${PROJECT_SOURCE_DIR}/config/backend_locations.yaml")
  configure_file("${PROJECT_SOURCE_DIR}/config/backend_locations.yaml.example" "${PROJECT_SOURCE_DIR}/config/backend_locations.yaml" COPYONLY)
endif()

# Identify the different harvester scripts
set(MODEL_HARVESTER ${PROJECT_SOURCE_DIR}/Models/scripts/model_harvester.py)
set(BACKEND_HARVESTER ${PROJECT_SOURCE_DIR}/Backends/scripts/backend_harvester.py)
set(MODULE_HARVESTER ${PROJECT_SOURCE_DIR}/Elements/scripts/module_harvester.py)
set(PRINTER_HARVESTER ${PROJECT_SOURCE_DIR}/Printers/scripts/printer_harvester.py)
set(HARVEST_TOOLS ${PROJECT_SOURCE_DIR}/Utils/scripts/harvesting_tools.py)

# Create all_functor_types.hpp, module_rollcall.hpp, module_types_rollcall.hpp, models_rollcall.hpp,
# model_types_rollcall.hpp, backend_rollcall.hpp, backend_types_rollcall.hpp, printer_rollcall.hpp
# and the various standalone_functors.cpp.
file(GLOB MODEL_HARVESTER_FILES   "${PROJECT_SOURCE_DIR}/Models/include/gambit/Models/models/*.hpp")
file(GLOB BACKEND_HARVESTER_FILES "${PROJECT_SOURCE_DIR}/Backends/include/gambit/Backends/frontends/*.hpp")
file(GLOB PRINTER_HARVESTER_FILES "${PROJECT_SOURCE_DIR}/Printers/include/gambit/Printers/printers/*.hpp")
file(GLOB MODULE_HARVESTER_FILES  "${PROJECT_SOURCE_DIR}/*Bit*/include/gambit/*Bit*/*_rollcall.hpp"
                                  "${PROJECT_SOURCE_DIR}/*Bit*/include/gambit/*Bit*/*_types.hpp"
                                  "${PROJECT_SOURCE_DIR}/Backends/include/gambit/Backends/frontends/*.hpp")
list(REMOVE_ITEM MODULE_HARVESTER_FILES "${PROJECT_SOURCE_DIR}/ScannerBit//include//gambit//ScannerBit//priors_rollcall.hpp"
                                        "${PROJECT_SOURCE_DIR}/ScannerBit//include//gambit//ScannerBit//test_function_rollcall.hpp")
foreach(bit ${GAMBIT_BITS})
  if(NOT ScannerBit STREQUAL ${bit})
    set(STANDALONE_FUNCTOR_CPPS ${STANDALONE_FUNCTOR_CPPS} "${PROJECT_SOURCE_DIR}/${bit}/examples/standalone_functors.cpp")
    file(WRITE ${PROJECT_SOURCE_DIR}/${bit}/examples/standalone_functors.cpp "#include \"gambit/Elements/functor_definitions.hpp\"")
  endif()
endforeach()
remove_scratch_files(models_harvested backends_harvested modules_harvested printers_harvested)
add_gambit_custom(model_harvest   models_harvested   ${MODEL_HARVESTER}   ${MODEL_HARVESTER_FILES}  )
add_gambit_custom(backend_harvest backends_harvested ${BACKEND_HARVESTER} ${BACKEND_HARVESTER_FILES})
add_gambit_custom(module_harvest  modules_harvested  ${MODULE_HARVESTER}  ${MODULE_HARVESTER_FILES} ${BACKEND_HARVESTER_FILES} 
                                                     ${PROJECT_SOURCE_DIR}/config/resolution_type_equivalency_classes.yaml)
add_gambit_custom(printer_harvest printers_harvested ${PRINTER_HARVESTER} ${PRINTER_HARVESTER_FILES})
add_dependencies(module_harvest backend_harvest)
add_dependencies(printer_harvest module_harvest)

# Generate the CMakeLists.txt files for GAMBIT modules (and backends, and printers)
message("${Yellow}-- Updating GAMBIT module, backend, and printer CMake files.${ColourReset}")
set(update_cmakelists ${PROJECT_SOURCE_DIR}/cmake/update_cmakelists.py -x __not_a_real_name__,${itch_with_commas})
execute_process(RESULT_VARIABLE result COMMAND python ${update_cmakelists} WORKING_DIRECTORY ${PROJECT_SOURCE_DIR})
check_result(${result} ${update_cmakelists})
message("${Yellow}-- Updating GAMBIT module, backend, and printer CMake files - done.${ColourReset}")

# Include other cmake scripts
include(cmake/warnings.cmake)
include(cmake/gambit.cmake)
include(cmake/externals.cmake)

# Add GAMBIT subdirectories.
add_subdirectory(Logs)
add_subdirectory(Utils)
add_subdirectory_if_present(Models)
add_subdirectory_if_present(Backends)
add_subdirectory_if_present(Elements)
add_subdirectory_if_present(Printers)
add_subdirectory_if_present(Core)

# Lists of different GAMBIT object files to link
set(GAMBIT_BASIC_COMMON_OBJECTS "${GAMBIT_BASIC_COMMON_OBJECTS}" $<TARGET_OBJECTS:Logs> $<TARGET_OBJECTS:Utils>)
set(GAMBIT_ALL_COMMON_OBJECTS "${GAMBIT_BASIC_COMMON_OBJECTS}" $<TARGET_OBJECTS:Models> $<TARGET_OBJECTS:Backends> $<TARGET_OBJECTS:Elements>)

# Set compilation targets for GAMBIT modules
foreach(bit ${GAMBIT_BITS})
  add_subdirectory(${bit})
  set(GAMBIT_BIT_OBJECTS ${GAMBIT_BIT_OBJECTS} "$<TARGET_OBJECTS:${bit}>")
endforeach()

# Add the executables
include(cmake/executables.cmake)

# Finish setting the link commands and rpath variables
include(${PROJECT_BINARY_DIR}/linkedout.cmake)

# Arrange clean commands
include(cmake/cleaning.cmake)
