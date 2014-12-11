# CMakeLists files in this project can refer to the root source directory of the project as ${PROJECT_SOURCE_DIR} and to the root binary directory of the project as ${PROJECT_BINARY_DIR}.

# require a minimum cmake version of 2.6
cmake_minimum_required(VERSION 2.6 FATAL_ERROR)

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

# set the project name
project(GAMBIT)

# don't relink all binaries when shared lib changes (programs will be rebuilt any way if used headers change)
set(CMAKE_LINK_DEPENDS_NO_SHARED 1)

# include ./cmake in search path for projects
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${PROJECT_SOURCE_DIR}/cmake)

# when building, use the install RPATH already
set(CMAKE_BUILD_WITH_INSTALL_RPATH TRUE) 

# check for optional packages and disable sections of GAMBIT accordingly
include(cmake/optional.cmake)

# check for Python
include(FindPythonInterp)
find_package(PythonInterp REQUIRED)

# generate the CMakeLists.txt files for GAMBIT modules
message("-- Updating GAMBIT module cmake files")
set(PRECMAKE ${PROJECT_SOURCE_DIR}/cmake/update_cmakelists.py)
execute_process(COMMAND python ${PRECMAKE} WORKING_DIRECTORY ${PROJECT_SOURCE_DIR})
message("-- Updating GAMBIT module cmake files - done")

# do OSX checks
include(cmake/MacOSX.cmake)

# enable Fortran compiler
enable_language(Fortran)

# set the version number
set(GAMBIT_VERSION_MAJOR 1)
set(GAMBIT_VERSION_MINOR 0)

# configure a header file to pass some of the CMake settings to the source code
configure_file("${PROJECT_SOURCE_DIR}/cmake/cmake_variables.hpp.in"
               "${PROJECT_BINARY_DIR}/cmake_variables.hpp")
 
# add the binary tree to the search path for include files so that we will find cmake_variables.hpp
include_directories("${PROJECT_BINARY_DIR}")

# add -fPIC for 64 bit systems
if(CMAKE_SYSTEM_PROCESSOR MATCHES "x86_64")
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fPIC")
  set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -fPIC")
  set(CMAKE_Fortran_FLAGS "${CMAKE_Fortran_FLAGS} -fPIC")
endif()

# add some Fortran compiler flags
if(CMAKE_Fortran_COMPILER MATCHES "gfortran*" OR CMAKE_Fortran_COMPILER MATCHES "f95*")
  set(CMAKE_Fortran_FLAGS "${CMAKE_Fortran_FLAGS} -ffixed-line-length-none")
elseif(CMAKE_Fortran_COMPILER MATCHES "ifort*")
  set(CMAKE_Fortran_FLAGS "${CMAKE_Fortran_FLAGS} -extend-source")
endif()

# set output paths
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

#check for C++11 support -- if we use special c++11 features we should check for them too at a later stage...
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

# check for Boost
find_package(Boost 1.42 REQUIRED)
if(Boost_FOUND)
  if (NOT Boost_INCLUDE_DIR STREQUAL "")
    include_directories("${Boost_INCLUDE_DIR}")
  endif()
endif()

# check for OpenMP
find_package(OpenMP REQUIRED)
if (OPENMP_FOUND)
    set (CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${OpenMP_C_FLAGS}")
    set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${OpenMP_CXX_FLAGS}")
endif()

# check for Gnu Scientific Library (GSL)
include(cmake/FindGSL.cmake)
if(GSL_FOUND)
  if (NOT GSL_INCLUDE_DIRS STREQUAL "")
    include_directories("${GSL_INCLUDE_DIRS}")
  endif()
else()
  message(FATAL_ERROR "Need gsl libraries")
endif()

# check for DL libraries
include(cmake/FindLibDL.cmake)

# identify the different harvester scripts
set(MODEL_HARVESTER ${PROJECT_SOURCE_DIR}/Models/scripts/model_harvester.py)
set(BACKEND_HARVESTER ${PROJECT_SOURCE_DIR}/Backends/scripts/backend_harvester.py)
set(MODULE_HARVESTER ${PROJECT_SOURCE_DIR}/Utils/scripts/module_harvester.py)

# create all_functor_types.hpp, module_rollcall.hpp, module_types_rollcall.hpp, models_rollcall.hpp, 
# model_types_rollcall.hpp, backend_rollcall.hpp and backend_types_rollcall.hpp
string (REPLACE ";" "," itch_with_commas "${itch}")
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

# arrange for removal of all_functor_types.hpp and other generated headers upon "make clean". 
set(clean_files ${clean_files} "${PROJECT_SOURCE_DIR}/Backends/include/backend_rollcall.hpp")
set(clean_files ${clean_files} "${PROJECT_SOURCE_DIR}/Models/include/model_rollcall.hpp")
set(clean_files ${clean_files} "${PROJECT_SOURCE_DIR}/Utils/include/all_functor_types.hpp")
set(clean_files ${clean_files} "${PROJECT_SOURCE_DIR}/Core/include/module_rollcall.hpp")

# include cmake scripts
include(cmake/utilities.cmake)
include(cmake/warnings.cmake)
include(cmake/gambit.cmake)
include(cmake/contrib.cmake)
include(cmake/extras.cmake)

# add subdirectories. This does not actually cause another cmake executable to run. The same process will walk through the project's entire directory structure.
add_subdirectory(Backends)
add_subdirectory(Logs)
add_subdirectory(Utils)
add_subdirectory(Models)

# list of GAMBIT common library object files to link
set(GAMBIT_COMMON_OBJECTS $<TARGET_OBJECTS:Backends>
                          $<TARGET_OBJECTS:Logs>
                          $<TARGET_OBJECTS:Utils>
                          $<TARGET_OBJECTS:Models>
)

# list of GAMBIT core library object files to link
add_subdirectory(Core)
add_subdirectory(Printers)
set(GAMBIT_OBJECTS $<TARGET_OBJECTS:Core> $<TARGET_OBJECTS:Printers>)

# set compilation targets for GAMBIT modules
retrieve_bits(GAMBIT_BITS ${PROJECT_SOURCE_DIR} "${itch}" "Loud")
foreach(bit ${GAMBIT_BITS})
  if(bit STREQUAL "ColliderBit")
    include_directories("${PROJECT_SOURCE_DIR}/ColliderBit/include/delphes")
  endif()
  add_subdirectory(${bit})
  set(GAMBIT_BIT_OBJECTS ${GAMBIT_BIT_OBJECTS} "$<TARGET_OBJECTS:${bit}>")
endforeach()

# ensure that clean removes automatically-generated CMakeLists.txt files in modules
foreach(bit ${GAMBIT_BITS})
  if(NOT ScannerBit STREQUAL ${bit})
    set(clean_files ${clean_files} "${PROJECT_SOURCE_DIR}/${bit}/CMakeLists.txt"
                                   "${PROJECT_SOURCE_DIR}/${bit}/CMakeLists.txt.candidate")
  endif()
endforeach()

# ensure that clean sweeps out the scratch directory
set(clean_files ${clean_files} "${PROJECT_SOURCE_DIR}/scratch/*")

# Add all the clean files
set_directory_properties(PROPERTIES ADDITIONAL_MAKE_CLEAN_FILES "${clean_files}")

# Add the executables
include(cmake/executables.cmake)

