set(source_files src/container_factory.cpp
                 src/depresolver.cpp
                 src/error_handlers.cpp
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
                 include/yaml_parser.hpp
)

add_gambit_library(Core SOURCES ${source_files} HEADERS ${header_files})

add_gambit_executable(gambit_example_minimal SOURCES examples/gambit_example_minimal.cpp HEADERS DONT_LINK_GAMBIT)
