set(source_files src/equivalency_singleton.cpp
                 src/exceptions.cpp
                 src/functors.cpp
                 src/standalone_error_handlers.cpp
                 src/stream_overloads.cpp
                 src/terminator.cpp
                 src/type_equivalency.cpp
                 src/util_functions.cpp
                 src/yaml_description_database.cpp
)

set(header_files include/SLHA_readers.hpp
                 include/base_functions.hpp
                 include/boost_fallbacks.hpp
                 include/cats.hpp
                 include/equivalency_singleton.hpp
                 include/exceptions.hpp
                 include/functors.hpp
                 include/gambit_module_headers.hpp
                 include/ini_code_struct.hpp
                 include/module_macros_common.hpp
                 include/module_macros_incore.hpp
                 include/module_macros_inmodule.hpp
                 include/register_standalone_error_handlers.hpp
                 include/safety_bucket.hpp
                 include/shared_types.hpp
                 include/standalone_module.hpp
                 include/standalone_error_handlers.hpp
                 include/static_members.hpp
                 include/stream_overloads.hpp
                 include/terminator.hpp
                 include/type_equivalency.hpp
                 include/type_index.hpp
                 include/type_macros.hpp
                 include/types_rollcall.hpp
                 include/util_functions.hpp
                 include/util_macros.hpp
                 include/util_types.hpp
                 include/variadic_functions.hpp
                 include/yaml_description_database.hpp
                 include/yaml_options.hpp
)

add_gambit_library(Utils OPTION OBJECT SOURCES ${source_files} HEADERS ${header_files})
