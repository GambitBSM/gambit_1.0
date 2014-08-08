set(source_files src/cauchy.cpp
                 src/composite.cpp
                 src/gaussian.cpp
                 src/inifile_interface.cpp
                 src/outputhandler.cpp
                 src/scan.cpp
                 src/scanlog.cpp
                 src/scanner_utils.cpp
                 src/test_factory.cpp
                 src/test_gaussian.cpp
)

set(header_files include/cholesky.hpp
                 include/class_loader.hpp
                 include/factory_registry.hpp
                 include/function_plugin.hpp
                 include/inifile_interface.hpp
                 include/outputhandler.hpp
                 include/plugin_defs.hpp
                 include/plugin_exception.hpp
                 include/plugin_factory.hpp
                 include/plugin_interface.hpp
                 include/plugin_macros.hpp
                 include/printer_interface.hpp
                 include/priors.hpp
                 include/priors_rollcall.hpp
                 include/scan.hpp
                 include/scan_file.hpp
                 include/scanlog.hpp
                 include/scanner_plugin.hpp
                 include/scanner_utils.hpp
                 include/scannerbit.hpp
                 include/test-recon.h
                 include/test.h
                 include/test_factory.hpp
                 include/test_function_rollcall.hpp
)

add_gambit_library(ScannerBit SOURCES ${source_files} HEADERS ${header_files})