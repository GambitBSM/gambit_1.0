set(source_files src/claw_singleton.cpp
                 src/model_parameters.cpp
                 src/models.cpp
                 models/MSSM.cpp
)

set(header_files include/claw_singleton.hpp
                 include/model_macros.hpp
                 include/model_parameters.hpp
                 include/model_helpers.hpp
                 include/models.hpp
                 include/orphan.hpp
                 models/MSSM.hpp
                 models/SingletDM.hpp
                 models/demo.hpp
)

add_gambit_library(Models OPTION OBJECT SOURCES ${source_files} HEADERS ${header_files})
