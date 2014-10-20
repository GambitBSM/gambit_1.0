# check for yaml
#include(FindPkgConfig)
#pkg_check_modules(yaml yaml-cpp>=0.5.1)

include(ExternalProject)

#if(NOT yaml_FOUND)
  message(STATUS "No yaml package found. Need to compile the distributed one")
  ExternalProject_Add(yaml-cpp
    SOURCE_DIR ${PROJECT_SOURCE_DIR}/contrib/yaml-cpp-0.5.1
    BUILD_IN_SOURCE 1
    CONFIGURE_COMMAND ""
    BUILD_COMMAND make YAML_CC=${CMAKE_CXX_COMPILER} CFLAGS=${CMAKE_CXX_FLAGS}
    INSTALL_COMMAND ""
    INSTALL_DIR ${CMAKE_BINARY_DIR}/install
    CMAKE_ARGS -DCMAKE_INSTALL_PREFIX=${CMAKE_BINARY_DIR}/install
  )
  add_custom_target(yaml COMMAND make yaml-cpp)
  set(yaml_INCLUDE_DIRS "${PROJECT_SOURCE_DIR}/contrib/yaml-cpp-0.5.1/include")
  set(yaml_LIBRARIES "yaml-cpp")
  set(yaml_LDFLAGS "-L${PROJECT_SOURCE_DIR}/contrib/yaml-cpp-0.5.1/ -l${yaml_LIBRARIES}")
#endif()

include_directories(${yaml_INCLUDE_DIRS})

# SLHAPy8
ExternalProject_Add(slhapy8
  SOURCE_DIR ${PROJECT_SOURCE_DIR}/contrib/SLHAPy8
  BUILD_IN_SOURCE 1
  CONFIGURE_COMMAND ""
  BUILD_COMMAND make SLHAPy8_CC=${CMAKE_C_COMPILER} CFLAGS=${CMAKE_C_FLAGS}
  INSTALL_COMMAND ""
  INSTALL_DIR ${CMAKE_BINARY_DIR}/install
  CMAKE_ARGS -DCMAKE_INSTALL_PREFIX=${CMAKE_BINARY_DIR}/install
)
add_custom_target(slha COMMAND make slhapy8)
set(slha_INCLUDE_DIRS "${PROJECT_SOURCE_DIR}/contrib/SLHAPy8")
set(slha_LIBRARIES "slhapy8")
set(slha_LDFLAGS "-L${slha_INCLUDE_DIRS} -l${slha_LIBRARIES}")
