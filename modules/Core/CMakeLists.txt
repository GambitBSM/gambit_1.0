set(source_files src/container_factory.cpp
                 src/depresolver.cpp
                 src/error_handlers.cpp
                 src/gambit.cpp
                 src/gambit_core.cpp
                 src/likelihood_container.cpp
                 src/modelgraph.cpp
                 src/yaml_parser.cpp
)

set(header_files include/container_factory.hpp
                 include/depresolver.hpp
                 include/error_handlers.hpp
                 include/gambit_core.hpp
                 include/likelihood_container.hpp
                 include/modelgraph.hpp
                 include/module_rollcall.hpp
                 include/register_error_handlers.hpp
                 include/version.hpp
                 include/yaml_parser.hpp
)

add_gambit_library(gambitcore SOURCES ${source_files} HEADERS ${header_files})

if(${CMAKE_SYSTEM_NAME} MATCHES "Darwin")
  set(_ld_prefix "-Wl,-all_load")
  set(_ld_suffix "")
endif()

if(${CMAKE_SYSTEM_NAME} MATCHES "Linux")
  set(_ld_prefix "-Wl,--whole-archive")
  set(_ld_suffix "-Wl,--no-whole-archive")
endif()

# list static libs to link
set(GAMBIT_LIBRARIES Logs
                     Utils
                     Models
                     Printers
)

set(LIBRARIES ${yaml_LIBRARIES} 
              ${_ld_prefix}
              ${GAMBIT_LIBRARIES}
              ${_ld_suffix}
)

if(MPI_FOUND)
  set(LIBRARIES ${MPI_CXX_LIBRARIES} ${LIBRARIES})
endif()

message(STATUS ${LIBRARIES})

target_link_libraries(gambitcore ${LIBRARIES})
set_target_properties(gambitcore PROPERTIES VERSION "${GAMBIT_MAJOR_VERSION}.${GAMBIT_MINOR_VERSION}")
#set link_interface_libraries to an empty string, otherwise cmake will link all binaries with the static libs
#set_target_properties(gambitcore PROPERTIES LINK_INTERFACE_LIBRARIES "")
#set_target_properties(gambitcore PROPERTIES INTERFACE_LINK_LIBRARIES "")
