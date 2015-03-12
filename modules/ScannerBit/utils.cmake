# GAMBIT: Global and Modular BSM Inference Tool
#************************************************
# \file
#
#  CMake CMakeLists.txt file for Utils
#
#************************************************
#
#  Authors (add name and date if you modify):
#
#  \author Antje Putze
#          (antje.putze@lapth.cnrs.fr)
#  \date 2014 Aug, Oct
#  \date 2015 Feb
#
#  \author Pat Scott
#          (p.scott@imperial.ac.uk)
#  \date 2014 Nov, Dec
#  \date 2015 Jan, Feb
#
#************************************************

set(utils_source_files 
                 ${PROJECT_SOURCE_DIR}/Utils/src/exceptions.cpp
                 ${PROJECT_SOURCE_DIR}/Utils/src/ini_file_parser_base.cpp
                 ${PROJECT_SOURCE_DIR}/Utils/src/standalone_error_handlers.cpp
                 ${PROJECT_SOURCE_DIR}/Utils/src/threadsafe_rng.cpp
                 ${PROJECT_SOURCE_DIR}/Utils/src/util_functions.cpp
                 ${PROJECT_SOURCE_DIR}/Utils/src/ASCIItableReader.cpp
                 ${PROJECT_SOURCE_DIR}/Models/src/model_parameters.cpp
                 #${PROJECT_SOURCE_DIR}/Utils/src/decay_table.cpp
                 #${PROJECT_SOURCE_DIR}/Utils/src/equivalency_singleton.cpp
                 #${PROJECT_SOURCE_DIR}/Utils/src/exceptions.cpp
                 #${PROJECT_SOURCE_DIR}/Utils/src/ini_functions.cpp
                 #${PROJECT_SOURCE_DIR}/Utils/src/stream_overloads.cpp
                 #${PROJECT_SOURCE_DIR}/Utils/src/terminator.cpp
                 #${PROJECT_SOURCE_DIR}/Utils/src/type_equivalency.cpp
)

set(utils_header_files 
                 ${PROJECT_SOURCE_DIR}/Utils/include/gambit/Utils/boost_fallbacks.hpp
                 ${PROJECT_SOURCE_DIR}/Utils/include/gambit/Utils/cats.hpp
                 ${PROJECT_SOURCE_DIR}/Utils/include/gambit/Utils/exceptions.hpp
                 ${PROJECT_SOURCE_DIR}/Utils/include/gambit/Utils/ini_code_struct.hpp
                 ${PROJECT_SOURCE_DIR}/Utils/include/gambit/Utils/ini_file_parser_base.hpp
                 ${PROJECT_SOURCE_DIR}/Utils/include/gambit/Utils/standalone_module.hpp
                 ${PROJECT_SOURCE_DIR}/Utils/include/gambit/Utils/standalone_error_handlers.hpp
                 ${PROJECT_SOURCE_DIR}/Utils/include/gambit/Utils/static_members.hpp
                 ${PROJECT_SOURCE_DIR}/Utils/include/gambit/Utils/threadsafe_rng.hpp
                 ${PROJECT_SOURCE_DIR}/Utils/include/gambit/Utils/type_index.hpp
                 ${PROJECT_SOURCE_DIR}/Utils/include/gambit/Utils/type_macros.hpp
                 ${PROJECT_SOURCE_DIR}/Utils/include/gambit/Utils/util_functions.hpp
                 ${PROJECT_SOURCE_DIR}/Utils/include/gambit/Utils/util_macros.hpp
                 ${PROJECT_SOURCE_DIR}/Utils/include/gambit/Utils/util_types.hpp
                 ${PROJECT_SOURCE_DIR}/Utils/include/gambit/Utils/variadic_functions.hpp
                 ${PROJECT_SOURCE_DIR}/Utils/include/gambit/Utils/ASCIItableReader.hpp
                 ${PROJECT_SOURCE_DIR}/Utils/include/gambit/Utils/yaml_options.hpp
)
