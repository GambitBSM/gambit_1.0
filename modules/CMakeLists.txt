# CMakeLists files in this project can refer to the root source directory of the project as ${GAMBIT_SOURCE_DIR} and to the root binary directory of the project as ${GAMBIT_BINARY_DIR}.

# require a minimum cmake version of 2.6
cmake_minimum_required(VERSION 2.6)

# set the project name
project(GAMBIT)

# set the version number
set(GAMBIT_VERSION_MAJOR 1)
set(GAMBIT_VERSION_MINOR 0)

# configure a header file to pass some of the CMake settings
# to the source code
configure_fil(
  "${PROJECT_SOURCE_DIR}/GAMBITConfig.h.in"
  "${PROJECT_BINARY_DIR}/GAMBITConfig.h"
  )
 
# add the binary tree to the search path for include files
# so that we will find TutorialConfig.h
include_directories("${PROJECT_BINARY_DIR}")

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


# add subdirectories. This does not actually cause another cmake executable to run. The same process will walk through the project's entire directory structure.
add_subdirectory(Core)
add_subdirectory(Utils)
add_subdirectory(Printers)
add_subdirectory(Logs)
add_subdirectory(ModelBit)
add_subdirectory(Models)

