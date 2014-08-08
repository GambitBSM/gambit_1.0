set(source_files src/asciiprinter.cpp
                 src/ostreamprinter.cpp
                 src/printermanager.cpp
                 src/stream_printers.cpp
)

set(header_files include/baseprinter.hpp
                 include/printer_rollcall.hpp
                 include/printermanager.hpp
                 include/stream_printers.hpp
                 include/printers/asciiprinter.hpp
                 include/printers/ostreamprinter.hpp
)

add_gambit_library(Printers SOURCES ${source_files} HEADERS ${header_files})
