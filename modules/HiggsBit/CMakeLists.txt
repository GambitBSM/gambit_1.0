set(source_files src/HiggsBit.cpp
)

set(header_files include/HiggsBit_rollcall.hpp
)

add_gambit_library(HiggsBit OPTION OBJECT SOURCES ${source_files} HEADERS ${header_files})
