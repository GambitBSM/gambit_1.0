set(source_files src/FlavBit.cpp
)

set(header_files include/FlavBit_rollcall.hpp
)

add_gambit_library(FlavBit OPTION OBJECT SOURCES ${source_files} HEADERS ${header_files})
