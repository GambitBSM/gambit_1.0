set(source_files src/DarkBit.cpp
)

set(header_files include/DarkBit_rollcall.hpp
                 include/DarkBit_types.hpp
)

add_gambit_library(DarkBit OPTION OBJECT SOURCES ${source_files} HEADERS ${header_files})
