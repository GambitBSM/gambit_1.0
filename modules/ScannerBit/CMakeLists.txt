set(scannerbit_sources
                 src/cauchy.cpp
                 src/composite.cpp
                 src/gaussian.cpp
                 src/inifile_interface.cpp
                 src/outputhandler.cpp
                 src/plugin_comparators.cpp
                 src/plugin_loader.cpp
                 src/scan.cpp
                 src/scanner_utils.cpp
)

set(scannerbit_headers 
                 include/cholesky.hpp
                 include/factory_registry.hpp
                 include/function_plugin.hpp
                 include/inifile_interface.hpp
                 include/outputhandler.hpp
                 include/plugin_comparators.hpp
                 include/plugin_defs.hpp
                 include/plugin_details.hpp
                 include/plugin_factory.hpp
                 include/plugin_interface.hpp
                 include/plugin_loader.hpp
                 include/plugin_macros.hpp
                 include/plugin_utilities.hpp
                 include/printer_interface.hpp
                 include/priors.hpp
                 include/priors_rollcall.hpp
                 include/scan.hpp
                 include/scan_file.hpp
                 include/scanner_plugin.hpp
                 include/scanner_utils.hpp
                 include/scannerbit.hpp
                 include/priors/cauchy.hpp
                 include/priors/composite.hpp
                 include/priors/dummy.hpp
                 include/priors/fixed_same_as.hpp
                 include/priors/flat_log.hpp
                 include/priors/gaussian.hpp
)

set(scanner_plugin_sources
                 src/scanners/crapsample.cpp
                 src/scanners/twalk.cpp
)

set(scanner_plugin_headers
                 include/scanners/random.h
                 include/scanners/twalk.hpp
)

set(scanner_test_sources
                 src/test_functions/examples.cpp
)

add_gambit_library(ScannerBit OPTION OBJECT SOURCES ${scannerbit_sources} HEADERS ${scannerbit_headers})
add_gambit_library(sample OPTION SHARED SOURCES ${scanner_plugin_sources} HEADERS ${scanner_plugin_sources})
add_gambit_library(scantest OPTION SHARED SOURCES ${scanner_test_sources})
set_target_properties( sample scantest 
                       PROPERTIES
                       ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/lib"
                       LIBRARY_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/lib"
                       RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/bin")
