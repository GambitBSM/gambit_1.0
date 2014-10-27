set(source_files src/DecayBit.cpp
)

set(header_files include/DecayBit_rollcall.hpp
                 include/DecayBit_types.hpp
)

add_gambit_library(DecayBit OPTION OBJECT SOURCES ${source_files} HEADERS ${header_files})
