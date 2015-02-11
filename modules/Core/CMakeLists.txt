set(source_files src/container_factory.cpp
                 src/core_singleton.cpp
                 src/depresolver.cpp
                 src/error_handlers.cpp
                 src/gambit_core.cpp
                 src/likelihood_container.cpp
                 src/modelgraph.cpp
                 src/yaml_description_database.cpp
                 src/yaml_parser.cpp
)

set(header_files include/gambit/Core/container_factory.hpp
                 include/gambit/Core/core_singleton.hpp
                 include/gambit/Core/depresolver.hpp
                 include/gambit/Core/error_handlers.hpp
                 include/gambit/Core/gambit_core.hpp
                 include/gambit/Core/gambit_main.hpp
                 include/gambit/Core/likelihood_container.hpp
                 include/gambit/Core/modelgraph.hpp
                 include/gambit/Core/version.hpp
                 include/gambit/Core/yaml_description_database.hpp
                 include/gambit/Core/yaml_parser.hpp
)

add_gambit_library(Core OPTION OBJECT SOURCES ${source_files} HEADERS ${header_files})
add_dependencies(Core module_harvest)

