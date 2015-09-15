# GAMBIT: Global and Modular BSM Inference Tool
#************************************************
# \file
#
#  CMake CMakeLists.txt file for Models
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

set(source_files src/claw_singleton.cpp
                 src/partmap.cpp
                 src/models.cpp
                 src/models/MSSM78atMGUT.cpp
                 src/models/MSSM30atMGUT.cpp
                 src/models/MSSM30atQ.cpp
                 src/models/MSSM25atQ.cpp
                 src/models/CMSSM.cpp
                 src/models/extraCMSSM.cpp
                 src/models/nuclear_params.cpp
                 src/particle_database.cpp
                 src/models/StandardModel_Higgs.cpp
                 src/models/SingletDM.cpp
)

set(header_files include/gambit/Models/claw_singleton.hpp
                 include/gambit/Models/model_macros.hpp
                 include/gambit/Models/model_helpers.hpp
                 include/gambit/Models/models.hpp
                 include/gambit/Models/orphan.hpp
                 include/gambit/Models/models/MSSM78atMGUT.hpp
                 include/gambit/Models/models/MSSM78atQ.hpp
                 include/gambit/Models/models/MSSM30atMGUT.hpp
                 include/gambit/Models/models/MSSM30atQ.hpp
                 include/gambit/Models/models/MSSM25atQ.hpp
                 include/gambit/Models/models/CMSSM.hpp
                 include/gambit/Models/models/extraCMSSM.hpp
                 include/gambit/Models/models/nuclear_params.hpp
                 include/gambit/Models/partmap.hpp
                 include/gambit/Models/models/SingletDM.hpp
                 include/gambit/Models/models/demo.hpp
)

add_gambit_library(Models OPTION OBJECT SOURCES ${source_files} HEADERS ${header_files})
