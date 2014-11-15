include(ExternalProject)

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
  set(yaml_LDFLAGS "-L${PROJECT_SOURCE_DIR}/contrib/yaml-cpp-0.5.1 -l${yaml_LIBRARIES}")

include_directories("${yaml_INCLUDE_DIRS}")

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

include_directories("${PROJECT_SOURCE_DIR}/contrib/SLHAPy8")

include_directories("${PROJECT_SOURCE_DIR}/contrib/slhaea")
include_directories("${PROJECT_SOURCE_DIR}/contrib/hep_simple_lib")
include_directories("${PROJECT_SOURCE_DIR}/contrib/mcutils/include")
include_directories("${PROJECT_SOURCE_DIR}/contrib/heputils/include")

set(clean_files ${clean_files} "${PROJECT_SOURCE_DIR}/contrib/yaml-cpp-0.5.1/libyaml-cpp.a" "${PROJECT_SOURCE_DIR}/contrib/SLHAPy8/libslhapy8.a")
