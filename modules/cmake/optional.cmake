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

# Check for MPI libraries; disable manually with "cmake -DMPI=OFF .."
option(MPI "Compile with MPI enabled" ON)
if(MPI)
  find_package(MPI)
  # Do things for GAMBIT itself
  if(MPI_C_FOUND)
    message("${BoldYellow}-- MPI C libraries found. GAMBIT will be MPI-enabled.${ColourReset}")
    include_directories(${MPI_C_INCLUDE_PATH})
    add_definitions(${MPI_C_COMPILE_FLAGS})
    add_definitions(-DWITH_MPI)
  else()
    message("${BoldRed}   Missing C MPI installation.  GAMBIT will not be MPI-enabled.${ColourReset}")
  endif()
  # Do things for Fortran backends and scanners
  if(MPI_Fortran_FOUND)
    if(MPI_C_FOUND)
      message("${BoldYellow}-- MPI Fortran libraries found. Fortran scanners will be MPI-enabled.${ColourReset}") 
      foreach(dir ${MPI_Fortran_INCLUDE_PATH})
        set(GAMBIT_MPI_F_INC "${GAMBIT_MPI_F_INC} -I${dir}")
      endforeach()
      foreach(lib ${MPI_Fortran_LIBRARIES})
        set(GAMBIT_MPI_F_LIB "${GAMBIT_MPI_F_LIB} ${lib}")
      endforeach()
      set(CMAKE_Fortran_MPI_FLAGS "${CMAKE_Fortran_FLAGS} ${MPI_Fortran_COMPILE_FLAGS} ${GAMBIT_MPI_F_INC} -DMPI")
      set(CMAKE_Fortran_MPI_SO_LINK_FLAGS "${MPI_Fortran_LINK_FLAGS} ${GAMBIT_MPI_F_LIB}")
    endif()
  else()
    message("${BoldRed}   Missing Fortran MPI installation.  Fortran scanners will not be MPI-enabled.${ColourReset}")
  endif()
else()
  message("${BoldCyan} X MPI manually disabled. Executables will not be parallelised via MPI.${ColourReset}")
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

