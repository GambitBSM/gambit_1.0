set(source_files src/model_functions.cpp
                 src/models.cpp
)

set(header_files include/MSSM_types.hpp
                 include/model_functions.hpp
                 include/model_macros.hpp
                 include/model_parameters.hpp
                 include/model_rollcall.hpp
                 include/model_types.hpp
                 include/models.hpp
                 include/models/MSSM.hpp
                 include/models/SingletDM.hpp
                 include/models/demo.hpp
)

add_gambit_library(Models SOURCES ${source_files} HEADERS ${header_files})
