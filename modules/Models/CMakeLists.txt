set(source_files src/claw_singleton.cpp
                 src/partmap.cpp
                 src/model_parameters.cpp
                 src/models.cpp
                 src/particle_database.cpp
                 src/models/MSSM.cpp
                 src/models/MSSM25.cpp
)

set(header_files include/claw_singleton.hpp
                 include/model_macros.hpp
                 include/model_parameters.hpp
                 include/model_helpers.hpp
                 include/models.hpp
                 include/orphan.hpp
                 include/partmap.hpp
                 include/models/MSSM.hpp
                 include/models/MSSM78.hpp
                 include/models/MSSM25.hpp
                 include/models/SingletDM.hpp
                 include/models/demo.hpp
)

add_gambit_library(Models OPTION OBJECT SOURCES ${source_files} HEADERS ${header_files})
