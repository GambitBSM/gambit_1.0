set(source_files src/claw_singleton.cpp
                 src/model_parameters.cpp
                 src/models.cpp
)

set(header_files include/claw_singleton.hpp
                 include/model_macros.hpp
                 include/model_parameters.hpp
                 include/models.hpp
                 include/orphan.hpp
                 include/models/MSSM.hpp
                 include/models/SingletDM.hpp
                 include/models/demo.hpp
                 include/model_types/MSSM.hpp
)

add_gambit_library(Models OPTION OBJECT SOURCES ${source_files} HEADERS ${header_files})
