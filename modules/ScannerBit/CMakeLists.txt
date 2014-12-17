set(source_files src/cauchy.cpp
                 src/composite.cpp
                 src/gaussian.cpp
                 src/inifile_interface.cpp
                 src/outputhandler.cpp
                 src/scan.cpp
                 src/scanner_utils.cpp
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
                 include/scanner_plugin.hpp
                 include/scanner_utils.hpp
                 include/scannerbit.hpp
                 include/test-recon.h
                 include/test.h
                 include/priors/cauchy.hpp
                 include/priors/composite.hpp
                 include/priors/dummy.hpp
                 include/priors/fixed_same_as.hpp
                 include/priors/flat_log.hpp
                 include/priors/gaussian.hpp
)

add_gambit_library(ScannerBit OPTION OBJECT SOURCES ${source_files} HEADERS ${header_files})

add_gambit_library(sample OPTION SHARED SOURCES plugins/crapsample.cpp plugins/twalk.cpp HEADERS plugins/twalk.hpp)
target_link_libraries(sample ${yaml_LDFLAGS})

add_gambit_library(scantest OPTION SHARED SOURCES plugins/test.cpp)

set_target_properties( sample scantest
PROPERTIES
ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/lib"
LIBRARY_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/lib"
RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/bin"
)
