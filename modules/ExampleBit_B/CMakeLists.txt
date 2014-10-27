set(source_files src/ExampleBit_B.cpp
)

set(header_files include/ExampleBit_B_rollcall.hpp
)

add_gambit_library(ExampleBit_B OPTION OBJECT SOURCES ${source_files} HEADERS ${header_files})
