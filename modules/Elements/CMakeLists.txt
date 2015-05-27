# GAMBIT: Global and Modular BSM Inference Tool
#************************************************
# \file
#
#  CMake CMakeLists.txt file for Elements
#
#************************************************
#
#  Authors (add name and date if you modify):
#
#  \author Pat Scott
#          (p.scott@imperial.ac.uk)
#  \date 2015 Apr
#
#************************************************

set(source_files src/functors.cpp
                 src/decay_table.cpp
                 src/ini_functions.cpp
                 src/SMInputs.cpp
                 src/Spectrum.cpp
                 src/terminator.cpp
                 src/virtual_higgs.cpp
)

set(header_files include/gambit/Elements/decay_table.hpp
                 include/gambit/Elements/functors.hpp
                 include/gambit/Elements/funktions.hpp
                 include/gambit/Elements/gambit_module_headers.hpp
                 include/gambit/Elements/ini_code_struct.hpp
                 include/gambit/Elements/ini_functions.hpp
                 include/gambit/Elements/module_macros_common.hpp
                 include/gambit/Elements/module_macros_incore.hpp
                 include/gambit/Elements/module_macros_inmodule.hpp
                 include/gambit/Elements/numerical_constants.hpp
                 include/gambit/Elements/safety_bucket.hpp
                 include/gambit/Elements/shared_types.hpp
                 include/gambit/Elements/SMInputs.hpp
                 include/gambit/Elements/Spectrum.hpp
                 include/gambit/Elements/SubSpectrum.hpp
                 include/gambit/Elements/terminator.hpp
                 include/gambit/Elements/types_rollcall.hpp
                 include/gambit/Elements/virtual_higgs.hpp
)

add_gambit_library(Elements OPTION OBJECT SOURCES ${source_files} HEADERS ${header_files})
