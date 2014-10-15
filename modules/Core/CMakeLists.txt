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
