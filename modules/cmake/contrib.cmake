include(ExternalProject)

#contrib/slhaea
include_directories("${PROJECT_SOURCE_DIR}/contrib/slhaea")

#contrib/mcutils
include_directories("${PROJECT_SOURCE_DIR}/contrib/mcutils/include")

#contrib/heputils
include_directories("${PROJECT_SOURCE_DIR}/contrib/heputils/include")

#contrib/yaml-cpp-0.5.1
ExternalProject_Add(yaml-cpp
  SOURCE_DIR ${PROJECT_SOURCE_DIR}/contrib/yaml-cpp-0.5.1
  BUILD_IN_SOURCE 1
  CONFIGURE_COMMAND ""
  BUILD_COMMAND make YAML_CC=${CMAKE_CXX_COMPILER} CFLAGS=${CMAKE_CXX_FLAGS} BOOST=${Boost_INCLUDE_DIR}
  INSTALL_COMMAND ""
  INSTALL_DIR ${CMAKE_BINARY_DIR}/install
  CMAKE_ARGS -DCMAKE_INSTALL_PREFIX=${CMAKE_BINARY_DIR}/install
)
add_custom_target(yaml COMMAND make yaml-cpp)
set(yaml_INCLUDE_DIRS "${PROJECT_SOURCE_DIR}/contrib/yaml-cpp-0.5.1/include")
set(yaml_LIBRARIES "yaml-cpp")
set(yaml_LDFLAGS "-L${PROJECT_SOURCE_DIR}/contrib/yaml-cpp-0.5.1 -l${yaml_LIBRARIES}")
include_directories("${yaml_INCLUDE_DIRS}")
set(clean_files ${clean_files} "${PROJECT_SOURCE_DIR}/contrib/yaml-cpp-0.5.1/libyaml-cpp.a")

#contrib/Delphes-3.1.2
if (NOT EXCLUDE_DELPHES)
  ExternalProject_Add(delphes
    SOURCE_DIR ${PROJECT_SOURCE_DIR}/contrib/Delphes-3.1.2
    BUILD_IN_SOURCE 1
    CONFIGURE_COMMAND "./configure; mv Makefile Makefile.orig; sed 's,\ ..EXECUTABLE.,,' Makefile.orig > Makefile;"
    BUILD_COMMAND make all
    INSTALL_COMMAND ""
    INSTALL_DIR ${CMAKE_BINARY_DIR}/install
    CMAKE_ARGS -DCMAKE_INSTALL_PREFIX=${CMAKE_BINARY_DIR}/install
  )
  execute_process(COMMAND root-config --libs OUTPUT_VARIABLE ROOT_LDFLAGS OUTPUT_STRIP_TRAILING_WHITESPACE)
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -I${ROOT_INCLUDE_DIR}")
  set(delphes_INCLUDE_DIRS "${PROJECT_SOURCE_DIR}/contrib/Delphes-3.1.2" "${PROJECT_SOURCE_DIR}/contrib/Delphes-3.1.2/external")
  set(delphes_LIBRARIES "Delphes")
  set(delphes_LDFLAGS "${ROOT_LDFLAGS} -lEG -L${PROJECT_SOURCE_DIR}/contrib/Delphes-3.1.2 -l${delphes_LIBRARIES}")
  include_directories("${delphes_INCLUDE_DIRS}")
  set(CMAKE_INSTALL_RPATH "${PROJECT_SOURCE_DIR}/contrib/Delphes-3.1.2")
  set(clean_files ${clean_files} "${PROJECT_SOURCE_DIR}/contrib/Delphes-3.1.2/libDelphes*" "${PROJECT_SOURCE_DIR}/contrib/Delphes-3.1.2/Makefile*")
endif()
