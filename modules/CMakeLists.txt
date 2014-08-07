# CMakeLists files in this project can refer to the root source directory of the project as ${GAMBIT_SOURCE_DIR} and to the root binary directory of the project as ${GAMBIT_BINARY_DIR}.

# require a minimum cmake version of 2.6
cmake_minimum_required(VERSION 2.6)

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
 
# add the binary tree to the search path for include files so that we will find TutorialConfig.h
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
  option(DEPLOY "Deployment build on Mac" OFF)
  if (${DEPLOY})
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -mmacosx-version-min=10.7")
    EXEC_PROGRAM(xcodebuild
                 ARGS -version -sdk macosx10.9 Path
		 OUTPUT_VARIABLE SDKPATH)
    set(CMAKE_C_FLAGS "${CMAKE_CXX_FLAGS} -isysroot ${SDKPATH}")
    set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -mmacosx-version-min=10.7")
    set(CMAKE_SHARED_LINKER_FLAGS "${CMAKE_SHARED_LINKER_FLAGS} -mmacosx-version-min=10.7")
    set(CMAKE_MODULE_LINKER_FLAGS "${CMAKE_MODULE_LINKER_FLAGS} -mmacosx-version-min=10.7")
  endif()
endif()

# don't relink all binaries when shared lib changes (programs will be rebuilt any way if used headers change)
set(CMAKE_LINK_DEPENDS_NO_SHARED 1)

# include cmake scripts
include(cmake/warnings.cmake)
include(cmake/gambit.cmake)

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

find_package(Boost 1.42 COMPONENTS date_time REQUIRED)
include_directories(${Boost_INCLUDE_DIR})

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

include(FindPythonInterp)
find_package (PythonInterp)
if(NOT EXISTS "{PROJECT_SOURCE_DIR}/Utils/include/all_functor_types.hpp")
  execute_process(COMMAND python ${PROJECT_SOURCE_DIR}/Utils/scripts/functor_type_harvester.py WORKING_DIRECTORY ${PROJECT_SOURCE_DIR})
endif()

# add subdirectories. This does not actually cause another cmake executable to run. The same process will walk through the project's entire directory structure.
add_subdirectory(Backends)
add_subdirectory(Logs)
#add_subdirectory(Utils)
#add_subdirectory(Models)
#add_subdirectory(Printers)
add_subdirectory(Core)

export(PACKAGE GAMBIT)