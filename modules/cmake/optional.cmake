# GAMBIT: Global and Modular BSM Inference Tool  
#************************************************
# \file                                          
#                                                
#  Cmake configuration script to look for optional
#  things for GAMBIT.  
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
#
#  \author Ben Farmer
#          (benjamin.farmer@fysik.su.se)
#  \date 2015 May
#                                               
#************************************************

# Check for MPI libraries
option(MPI "Compile with MPI enabled" ON)
# (Force no-MPI build with "cmake -DMPI=OFF ..")
if(MPI)
  find_package(MPI)
  if(MPI_FOUND)
    include_directories(${MPI_INCLUDE_PATH})
    add_definitions(-DWITH_MPI)
    foreach(dir ${MPI_INCLUDE_PATH})
    set(GAMBIT_MPI_F_INC "${GAMBIT_MPI_F_INC} -I${dir}")
    endforeach()
    set(CMAKE_Fortran_FLAGS "${CMAKE_Fortran_FLAGS} -DMPI ${GAMBIT_MPI_F_INC}")
    message("${BoldYellow}-- MPI libraries found. Executables will be MPI-enabled.${ColourReset}")
  else()
    message("${Red} X MPI libraries NOT found. Executables may only be run in serial.${ColourReset}")
  endif()
else()
  message("${BoldCyan} X MPI manually disabled! Executables may only be run in serial.${ColourReset}")
endif()

# Check for ROOT.
find_package(ROOT)
if (NOT ROOT_FOUND)
  #phew, no ROOT.  Gotta kill ColliderBit, but them's the breaks.
  message("${BoldRed}   No ROOT installation found. Excluding ColliderBit from GAMBIT configuration. ${ColourReset}")
  set (itch "${itch}" "ColliderBit")
else()
  include_directories(${ROOT_INCLUDE_DIR})
endif()

