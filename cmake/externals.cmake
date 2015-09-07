# GAMBIT: Global and Modular BSM Inference Tool  
#************************************************
# \file                                          
#                                                
#  Cmake configuration scripts for obtaining,
#  configuring, compiling and installing 
#  'extra' non-GAMBIT packages.
#  
#  Note that this is not necessarily the canonical
#  way to manage the compilation of all backends,
#  and GAMBIT support for backend compilation is
#  minimal, even with this method -- so please
#  contact the authors of the respective codes
#  if they won't compile!  
#    
#************************************************
#                                                
#  Authors (add name and date if you modify):
#
#  \author Antje Putze
#          (antje.putze@lapth.cnrs.fr)              
#  \date 2014 Sep, Oct, Nov
#
#  \author Pat Scott
#          (p.scott@imperial.ac.uk)              
#  \date 2014 Nov, Dec
#  \date 2015 May  
#
#************************************************


include(ExternalProject)

# Specify the location of unreleased codes in the gambit_internal repository. 
set(GAMBIT_INTERNAL "${PROJECT_SOURCE_DIR}/../gambit_internal/extras")

# Specify the warning to give when trying to compile unreleased codes.
set(private_code_warning "       Retrieving unreleased code from GAMBIT Collaboration private repository. This will fail if you don't have the repository.")
set(private_code_warning1 "       Retrieving unreleased code from GAMBIT Collaboration private repository.")
if(NOT EXISTS ${GAMBIT_INTERNAL})
  set(private_code_warning2 "       The repository was not found by cmake, so this will probably fail!")
endif()

# Specify where all backend and scanner tarballs are to be stored
set(backend_download "${PROJECT_SOURCE_DIR}/Backends/downloaded")
set(scanner_download "${PROJECT_SOURCE_DIR}/ScannerBit/downloaded")

# Define the newline strings to use for OSX-safe substitution.
set(nl "___totally_unlikely_to_occur_naturally___")
set(true_nl \"\\n\")

# Define the module location switch differently depending on compiler
if("${CMAKE_Fortran_COMPILER_ID}" STREQUAL "Intel") 
  set(FMODULE "module")         
elseif("${CMAKE_Fortran_COMPILER_ID}" STREQUAL "GNU") 
  set(FMODULE "J")          
endif()                                                 

include(cmake/scanners.cmake)
include(cmake/backends.cmake)
