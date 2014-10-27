set(source_files src/SUSYspecBit.cpp
)

set(header_files include/SUSYspecBit_rollcall.hpp
)

add_gambit_library(SUSYspecBit OPTION OBJECT SOURCES ${source_files} HEADERS ${header_files})
