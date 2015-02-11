set(source_files src/asciiprinter.cpp
                 src/ostreamprinter.cpp
                 src/printermanager.cpp
)

set(header_files include/gambit/Printers/baseprinter.hpp
                 include/gambit/Printers/printer_rollcall.hpp
                 include/gambit/Printers/printermanager.hpp
                 include/gambit/Printers/printers/asciiprinter.hpp
                 include/gambit/Printers/printers/ostreamprinter.hpp
)

add_gambit_library(Printers OPTION OBJECT SOURCES ${source_files} HEADERS ${header_files})
