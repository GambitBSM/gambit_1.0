set(source_files src/log.cpp
                 src/logging.cpp
)

set(header_files include/log.hpp
                 include/log_tags.hpp
                 include/logging.hpp
)

add_gambit_library(Logs SOURCES ${source_files} HEADERS ${header_files})