set(source_files src/claw_singleton.cpp
                 src/modelparameters.cpp
                 src/models.cpp
)

set(header_files include/MSSM_types.hpp
                 include/claw_singleton.hpp
                 include/model_macros.hpp
                 include/model_parameters.hpp
                 include/model_rollcall.hpp
                 include/model_types.hpp
                 include/models.hpp
                 include/orphan.hpp
                 include/models/MSSM.hpp
                 include/models/SingletDM.hpp
                 include/models/demo.hpp
)

add_gambit_library(Models OPTION OBJECT SOURCES ${source_files} HEADERS ${header_files})
