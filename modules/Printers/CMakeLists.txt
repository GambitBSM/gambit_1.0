# GAMBIT: Global and Modular BSM Inference Tool
#************************************************
# \file
#
#  CMake CMakeLists.txt file for Printers
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
#  \date 2015 Feb
#
#************************************************

set(source_files src/asciiprinter.cpp
                 src/ostreamprinter.cpp
                 src/printermanager.cpp
)

set(header_files include/gambit/Printers/baseprinter.hpp
                 include/gambit/Printers/printer_rollcall.hpp
                 include/gambit/Printers/printermanager.hpp
                 include/gambit/Printers/printers/asciiprinter.hpp
                 include/gambit/Printers/printers/ostreamprinter.hpp
)

add_gambit_library(Printers OPTION OBJECT SOURCES ${source_files} HEADERS ${header_files})
