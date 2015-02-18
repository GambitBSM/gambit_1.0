set(source_files src/log.cpp
                 src/logging.cpp
)

set(header_files include/gambit/Logs/log.hpp
                 include/gambit/Logs/log_tags.hpp
                 include/gambit/Logs/logging.hpp
)

add_gambit_library(Logs OPTION OBJECT SOURCES ${source_files} HEADERS ${header_files})
