include(CheckIncludeFiles)
if(COMPILER_SUPPORTS_CXX11 OR COMPILER_SUPPORTS_CXX0X)
  check_include_files(regex.h HAVE_REGEX_H)
endif()

configure_file(${CMAKE_CURRENT_SOURCE_DIR}/gambit_config.h.in ${CMAKE_CURRENT_BINARY_DIR}/gambit_config.h)
include_directories(${PROJECT_BINARY_DIR})