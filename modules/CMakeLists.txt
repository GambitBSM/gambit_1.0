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

include(cmake/MacOSX.cmake)

# enable Fortran compiler
enable_language(Fortran)

# set the project name
project(GAMBIT)

# set the version number
set(GAMBIT_VERSION_MAJOR 1)
set(GAMBIT_VERSION_MINOR 0)

# configure a header file to pass some of the CMake settings to the source code
configure_file("${PROJECT_SOURCE_DIR}/config.h.in"
               "${PROJECT_BINARY_DIR}/config.h")
 
# add the binary tree to the search path for include files so that we will find config.h
include_directories("${PROJECT_BINARY_DIR}")

###################### FIXME
if (${CMAKE_SYSTEM_NAME} MATCHES "Darwin")
  set(HAVE_MAC 1)
else()
  set(HAVE_MAC 0)
endif()
###################### FIXME

# add -fPIC for 64 bit systems
if(CMAKE_SYSTEM_PROCESSOR MATCHES "x86_64")
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fPIC")
  set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -fPIC")
  set(CMAKE_Fortran_FLAGS "${CMAKE_Fortran_FLAGS} -fPIC")
endif()

# add some Fortran compiler flags
message(${CMAKE_Fortran_COMPILER})
if(CMAKE_Fortran_COMPILER MATCHES "gfortran*" OR CMAKE_Fortran_COMPILER MATCHES "f95*")
  set(CMAKE_Fortran_FLAGS "${CMAKE_Fortran_FLAGS} -ffixed-line-length-none")
elseif(CMAKE_Fortran_COMPILER MATCHES "ifort*")
  set(CMAKE_Fortran_FLAGS "${CMAKE_Fortran_FLAGS} -extend-source")
endif()

# don't relink all binaries when shared lib changes (programs will be rebuilt any way if used headers change)
set(CMAKE_LINK_DEPENDS_NO_SHARED 1)

# include ./cmake in search path for projects
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${PROJECT_SOURCE_DIR}/cmake)

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
        message(STATUS "The compiler ${CMAKE_CXX_COMPILER} has no C++11 support. Please use a different C++ compiler.")
endif()

# check for Boost
set(BOOST_ROOT
    "/usr/local/Cellar/boost/1.55.0_2"
    CACHE PATH "")
find_package(Boost 1.42 REQUIRED)
if(Boost_FOUND)
  include_directories(${Boost_INCLUDE_DIR})
endif()

find_package(OpenMP REQUIRED)
if (OPENMP_FOUND)
    set (CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${OpenMP_C_FLAGS}")
    set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${OpenMP_CXX_FLAGS}")
endif()

# check for Gnu Scientific Library (GSL)
include(cmake/FindGSL.cmake)

# check for DL libraries
include(cmake/FindLibDL.cmake)

# check for Python and create all_functor_types.hpp
include(FindPythonInterp)
find_package(PythonInterp)

###################### FIXME
file(GLOB TYPE_HARVESTER_FILES "${PROJECT_SOURCE_DIR}/*/include/*_rollcall.hpp")
list(REMOVE_ITEM TYPE_HARVESTER_FILES "${PROJECT_SOURCE_DIR}/ColliderBit//include//ColliderBit_rollcall.hpp"
                                      "${PROJECT_SOURCE_DIR}/Printers//include//printer_rollcall.hpp"
                                      "${PROJECT_SOURCE_DIR}/ScannerBit//include//priors_rollcall.hpp" 
                                      "${PROJECT_SOURCE_DIR}/ScannerBit//include//test_function_rollcall.hpp" 
                                      "${PROJECT_SOURCE_DIR}/Models//include//model_rollcall.hpp" )
###################### FIXME

add_custom_command(OUTPUT ${PROJECT_SOURCE_DIR}/Utils/include/all_functor_types.hpp COMMAND python ${PROJECT_SOURCE_DIR}/Utils/scripts/module_harvester.py WORKING_DIRECTORY ${PROJECT_SOURCE_DIR} DEPENDS ${TYPE_HARVESTER_FILES})
add_custom_target(functor_types DEPENDS ${PROJECT_SOURCE_DIR}/Utils/include/all_functor_types.hpp ${TYPE_HARVESTER_FILES})

set(clean_files ${clean_files} "${PROJECT_SOURCE_DIR}/Utils/include/all_functor_types.hpp")

# include cmake scripts
include(cmake/warnings.cmake)
include(cmake/gambit.cmake)
include(cmake/contrib.cmake)
include(cmake/extras.cmake)

# add subdirectories. This does not actually cause another cmake executable to run. The same process will walk through the project's entire directory structure.
add_subdirectory(Backends)
add_subdirectory(Logs)
add_subdirectory(Utils)
add_subdirectory(Models)

# list of GAMBIT shared object files to link
set(GAMBIT_SHARED_OBJECTS $<TARGET_OBJECTS:Backends>
                          $<TARGET_OBJECTS:Logs>
                          $<TARGET_OBJECTS:Utils>
                          $<TARGET_OBJECTS:Models>
)

add_subdirectory(Core)
add_subdirectory(Printers)
# list of GAMBIT object files to link
set(GAMBIT_OBJECTS $<TARGET_OBJECTS:Core> $<TARGET_OBJECTS:Printers>)

set(GAMBIT_BITS ScannerBit
                DarkBit
                DecayBit
                HiggsBit
                FlavBit
                Example_SUSYspecBit
                ExampleBit_A
                ExampleBit_B
)

foreach(bit ${GAMBIT_BITS})
  if(EXISTS "${PROJECT_SOURCE_DIR}/${bit}/")
    add_subdirectory(${bit})
    if(${bit} STREQUAL Example_SUSYspecBit)
      set(bit SUSYspecBit)
    endif()
    set(GAMBIT_BIT_OBJECTS ${GAMBIT_BIT_OBJECTS} "$<TARGET_OBJECTS:${bit}>")
  endif()
endforeach()

if(EXISTS "${PROJECT_SOURCE_DIR}/ExampleBit_A/")
  add_gambit_executable(ExampleBit_A_standalone SOURCES ${PROJECT_SOURCE_DIR}/ExampleBit_A/examples/ExampleBit_A_standalone_example.cpp $<TARGET_OBJECTS:ExampleBit_A> ${GAMBIT_SHARED_OBJECTS})

  add_dependencies(ExampleBit_A_standalone yaml slha)
  target_link_libraries(ExampleBit_A_standalone fortran ${yaml_LDFLAGS} ${slha_LDFLAGS})
endif()

if(EXISTS "${PROJECT_SOURCE_DIR}/ExampleBit_A/")
  add_gambit_executable(gambit SOURCES ${PROJECT_SOURCE_DIR}/Core/src/gambit.cpp ${GAMBIT_SHARED_OBJECTS} ${GAMBIT_OBJECTS} ${GAMBIT_BIT_OBJECTS})
  add_dependencies(gambit yaml slha sample scantest)
  target_link_libraries(gambit ${yaml_LDFLAGS} ${slha_LDFLAGS})
endif()

set_directory_properties(PROPERTIES ADDITIONAL_MAKE_CLEAN_FILES "${clean_files}")
