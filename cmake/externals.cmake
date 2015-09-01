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

# Define the sed command to use differently for OSX and linux
if (${CMAKE_SYSTEM_NAME} MATCHES "Darwin")
  set(dashi "-i ''")
else()
  set(dashi "-i")
endif()

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
