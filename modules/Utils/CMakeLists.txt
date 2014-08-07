set(source_files src/exceptions.cpp
                 src/functors.cpp
                 src/standalone_error_handlers.cpp
                 src/terminator.cpp
                 src/util_functions.cpp
)

set(header_files include/backend_macros.hpp
                 include/backend_type_macros.hpp
                 include/base_functions.hpp
                 include/boost_fallbacks.hpp
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
                 include/standalone.hpp
                 include/standalone_error_handlers.hpp
                 include/static_members.hpp
                 include/terminator.hpp
                 include/types_rollcall.hpp
                 include/util_functions.hpp
                 include/util_macros.hpp
                 include/util_types.hpp
                 include/variadic_functions.hpp
                 include/yaml_options.hpp
)

add_gambit_library(Utils SOURCES ${source_files} HEADERS ${header_files})