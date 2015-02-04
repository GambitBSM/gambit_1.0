set(source_files src/claw_singleton.cpp
                 src/partmap.cpp
                 src/model_parameters.cpp
                 src/models.cpp
                 src/models/MSSM25atQ.cpp
                 src/models/CMSSM.cpp
                 src/models/extraCMSSM.cpp
                 src/particle_database.cpp
)

set(header_files include/claw_singleton.hpp
                 include/model_macros.hpp
                 include/model_parameters.hpp
                 include/model_helpers.hpp
                 include/models.hpp
                 include/orphan.hpp
                 include/models/MSSM78atQ.hpp
                 include/models/MSSM25atQ.hpp
                 include/models/MSSM78atMGUT.hpp
                 include/models/CMSSM.hpp
                 include/models/extraCMSSM.hpp
                 include/partmap.hpp
                 include/models/SingletDM.hpp
                 include/models/demo.hpp
)

add_gambit_library(Models OPTION OBJECT SOURCES ${source_files} HEADERS ${header_files})
