set(source_files src/ExampleBit_A.cpp
)

set(header_files include/ExampleBit_A_rollcall.hpp
                 include/ExampleBit_A_types.hpp
)

add_gambit_library(ExampleBit_A OPTION OBJECT SOURCES ${source_files} HEADERS ${header_files})
