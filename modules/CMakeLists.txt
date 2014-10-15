# CMakeLists files in this project can refer to the root source directory of the project as ${GAMBIT_SOURCE_DIR} and to the root binary directory of the project as ${GAMBIT_BINARY_DIR}.

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

# Set a consistent MACOSX_RPATH default across all CMake versions.
# When CMake 2.8.12 is required, change this default to 1.
# When CMake 3.0.0 is required, remove this block (see CMP0042).
if(NOT DEFINED CMAKE_MACOSX_RPATH)
  set(CMAKE_MACOSX_RPATH 0)
endif()

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
set(HAVE_MAC 1)
set(SSH 1)
###################### FIXME

# add -fPIC for 64 bit systems
if(CMAKE_SYSTEM_PROCESSOR MATCHES "x86_64")
  add_definitions(-fPIC)
endif()

# set minimal MacOS SDK version for deployment reasons
if (${CMAKE_SYSTEM_NAME} MATCHES "Darwin")
  option(DEPLOY "Deployment build on Mac" 0)
  if (${DEPLOY})
    message(STATUS "Deployment build on Mac is on")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -mmacosx-version-min=10.7")
    EXEC_PROGRAM(xcodebuild 
      ARGS -version -sdk macosx10.9 Path
      OUTPUT_VARIABLE SDKPATH
      )
    set(CMAKE_C_FLAGS "${CMAKE_CXX_FLAGS} -isysroot ${SDKPATH}")
    set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -mmacosx-version-min=10.7")
    set(CMAKE_SHARED_LINKER_FLAGS "${CMAKE_SHARED_LINKER_FLAGS} -mmacosx-version-min=10.7")
    set(CMAKE_MODULE_LINKER_FLAGS "${CMAKE_MODULE_LINKER_FLAGS} -mmacosx-version-min=10.7")
  endif()
endif()

if (${CMAKE_SYSTEM_NAME} MATCHES "Darwin")
# use, i.e. don't skip the full RPATH for the build tree
  SET(CMAKE_SKIP_BUILD_RPATH  FALSE)

# when building, don't use the install RPATH already
# (but later on when installing)
  SET(CMAKE_BUILD_WITH_INSTALL_RPATH FALSE)

  SET(CMAKE_INSTALL_RPATH "${CMAKE_INSTALL_PREFIX}/lib")

# add the automatically determined parts of the RPATH
# which point to directories outside the build tree to the install RPATH
  SET(CMAKE_INSTALL_RPATH_USE_LINK_PATH TRUE)


# the RPATH to be used when installing, but only if it's not a system directory
  LIST(FIND CMAKE_PLATFORM_IMPLICIT_LINK_DIRECTORIES "${CMAKE_INSTALL_PREFIX}/lib" isSystemDir)
  IF("${isSystemDir}" STREQUAL "-1")
   SET(CMAKE_INSTALL_RPATH "${CMAKE_INSTALL_PREFIX}/lib")
  ENDIF("${isSystemDir}" STREQUAL "-1")
endif()

# don't relink all binaries when shared lib changes (programs will be rebuilt any way if used headers change)
set(CMAKE_LINK_DEPENDS_NO_SHARED 1)

# include ./cmake in search path for projects
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${PROJECT_SOURCE_DIR}/cmake)

# set output paths to ./bin and ./lib
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib CACHE PATH "Installation directory for libraries.")
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin CACHE PATH "Installation directory for executables.")
set(LIBRARY_OUTPUT_PATH_RELEASE ${PROJECT_SOURCE_DIR}/lib CACHE PATH "Installation directory for libraries.")
set(EXECUTABLE_OUTPUT_PATH_RELEASE ${PROJECT_SOURCE_DIR}/bin CACHE PATH "Installation directory for executables.")
set(LIBRARY_OUTPUT_PATH_DEBUG ${PROJECT_SOURCE_DIR}/lib CACHE PATH "Installation directory for libraries.")
set(EXECUTABLE_OUTPUT_PATH_DEBUG ${PROJECT_SOURCE_DIR}/bin CACHE PATH "Installation directory for executables.")
set(RUNTIME_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/bin")
set(RUNTIME_OUTPUT_DIRECTORY_RELEASE "${PROJECT_SOURCE_DIR}/bin")
set(RUNTIME_OUTPUT_DIRECTORY_DEBUG "${PROJECT_SOURCE_DIR}/bin")

set(mylibdir ${PROJECT_SOURCE_DIR}/lib)
set(mybindir ${PROJECT_SOURCE_DIR}/bin)
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
elseif(COMPILER_SUPPORTS_CXX0X)
	set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++0x")
else()
        message(STATUS "The compiler ${CMAKE_CXX_COMPILER} has no C++11 support. Please use a different C++ compiler.")
endif()

# check for Boost
set(BOOST_ROOT
    "/usr/local/Cellar/boost/1.55.0_2"
    CACHE PATH "")
find_package(Boost 1.42 COMPONENTS date_time REQUIRED)
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
find_package (PythonInterp)
if(EXISTS "${PROJECT_SOURCE_DIR}/Utils/include/all_functor_types.hpp")
  message(STATUS "${PROJECT_SOURCE_DIR}/Utils/include/all_functor_types.hpp already exists. Do nothing.")
else(NOT EXISTS "${PROJECT_SOURCE_DIR}/Utils/include/all_functor_types.hpp")
  execute_process(COMMAND python ${PROJECT_SOURCE_DIR}/Utils/scripts/functor_type_harvester.py WORKING_DIRECTORY ${PROJECT_SOURCE_DIR})
endif()

# include cmake scripts
include(cmake/warnings.cmake)
include(cmake/gambit.cmake)
include(cmake/contrib.cmake)
include(cmake/mergestaticlibs.cmake)


# add subdirectories. This does not actually cause another cmake executable to run. The same process will walk through the project's entire directory structure.
add_subdirectory(Backends)
add_subdirectory(Logs)
add_subdirectory(Utils)
add_subdirectory(Models)

# list static libs to link
set(GAMBIT_LIBRARIES Backends
                     Logs
                     Utils
                     Models
)

#merge_static_libs(gambitbase ${GAMBIT_LIBRARIES})
#set_target_properties(gambitbase PROPERTIES VERSION "${GAMBIT_MAJOR_VERSION}.${GAMBIT_MINOR_VERSION}")

#set link_interface_libraries to an empty string, otherwise cmake will link all binaries with the static libs
#set_target_properties(gambitbase PROPERTIES LINK_INTERFACE_LIBRARIES "")
#set_target_properties(gambitbase PROPERTIES INTERFACE_LINK_LIBRARIES "")

#add_subdirectory(Printers)
#add_subdirectory(ScannerBit)
#add_subdirectory(Core)

#add_gambit_executable(gambit_example SOURCES Core/examples/gambit_example.cpp HEADERS)
#if(NOT yaml_FOUND)
#  add_dependencies(gambit_example yaml)
#endif()
#target_link_libraries(gambit_example ScannerBit)

add_subdirectory(ExampleBit_A)
add_gambit_executable(ExampleBit_A_standalone SOURCES ExampleBit_A/examples/ExampleBit_A_standalone_example.cpp)
if(NOT yaml_FOUND)
  add_dependencies(ExampleBit_A_standalone yaml)
endif()
 
add_dependencies(ExampleBit_A_standalone slha)
target_link_libraries(ExampleBit_A_standalone ${GAMBIT_LIBRARIES} ExampleBit_A fortran ${} ${slha_LDFLAGS})

export(PACKAGE GAMBIT)