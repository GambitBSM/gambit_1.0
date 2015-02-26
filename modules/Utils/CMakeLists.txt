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

set(source_files src/decay_table.cpp
                 src/equivalency_singleton.cpp
                 src/exceptions.cpp
                 src/functors.cpp
                 src/ini_functions.cpp
                 src/standalone_error_handlers.cpp
                 src/stream_overloads.cpp
                 src/terminator.cpp
                 src/threadsafe_rng.cpp
                 src/type_equivalency.cpp
                 src/util_functions.cpp
                 src/ASCIItableReader.cpp
)

set(header_files include/gambit/Utils/base_functions.hpp
                 include/gambit/Utils/Spectrum.hpp
                 include/gambit/Utils/boost_fallbacks.hpp
                 include/gambit/Utils/cats.hpp
                 include/gambit/Utils/decay_table.hpp
                 include/gambit/Utils/equivalency_singleton.hpp
                 include/gambit/Utils/exceptions.hpp
                 include/gambit/Utils/functors.hpp
                 include/gambit/Utils/gambit_module_headers.hpp
                 include/gambit/Utils/ini_code_struct.hpp
                 include/gambit/Utils/ini_functions.hpp
                 include/gambit/Utils/module_macros_common.hpp
                 include/gambit/Utils/module_macros_incore.hpp
                 include/gambit/Utils/module_macros_inmodule.hpp
                 include/gambit/Utils/safety_bucket.hpp
                 include/gambit/Utils/shared_types.hpp
                 include/gambit/Utils/standalone_module.hpp
                 include/gambit/Utils/standalone_error_handlers.hpp
                 include/gambit/Utils/static_members.hpp
                 include/gambit/Utils/stream_overloads.hpp
                 include/gambit/Utils/terminator.hpp
                 include/gambit/Utils/threadsafe_rng.hpp
                 include/gambit/Utils/type_equivalency.hpp
                 include/gambit/Utils/type_index.hpp
                 include/gambit/Utils/type_macros.hpp
                 include/gambit/Utils/types_rollcall.hpp
                 include/gambit/Utils/util_functions.hpp
                 include/gambit/Utils/util_macros.hpp
                 include/gambit/Utils/util_types.hpp
                 include/gambit/Utils/variadic_functions.hpp
                 include/gambit/Utils/ASCIItableReader.hpp
                 include/gambit/Utils/yaml_options.hpp
)

add_gambit_library(Utils OPTION OBJECT SOURCES ${source_files} HEADERS ${header_files})
