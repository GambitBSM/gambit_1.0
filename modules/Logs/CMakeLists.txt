# GAMBIT: Global and Modular BSM Inference Tool
#************************************************
# \file
#
#  CMake CMakeLists.txt file for Logs
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
#  \date 2014 Dec
#  \date 2015 Feb
#
#************************************************

set(source_files src/log.cpp
                 src/logging.cpp
)

set(header_files include/gambit/Logs/log.hpp
                 include/gambit/Logs/log_tags.hpp
                 include/gambit/Logs/logging.hpp
)

add_gambit_library(Logs OPTION OBJECT SOURCES ${source_files} HEADERS ${header_files})
