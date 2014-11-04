set(source_files src/DarkBit.cpp
                 src/decay_chain.cpp
)

set(header_files include/DarkBit_rollcall.hpp
                 include/DarkBit_types.hpp
                 include/decay_chain.hpp
)

add_gambit_library(DarkBit OPTION OBJECT SOURCES ${source_files} HEADERS ${header_files})
