# GAMBIT: Global and Modular BSM Inference Tool  
#************************************************
# \file                                          
#                                                
#  Cmake configuration script for things needed
#  for the main GAMBIT executable.
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
#************************************************

# set include directores for GAMBIT common library
set(GAMBIT_INCDIRS ${GAMBIT_INCDIRS} "${PROJECT_SOURCE_DIR}/Backends/include")
set(GAMBIT_INCDIRS ${GAMBIT_INCDIRS} "${PROJECT_SOURCE_DIR}/Logs/include")
set(GAMBIT_INCDIRS ${GAMBIT_INCDIRS} "${PROJECT_SOURCE_DIR}/Utils/include")
set(GAMBIT_INCDIRS ${GAMBIT_INCDIRS} "${PROJECT_SOURCE_DIR}/Models/include")

# set include directores for GAMBIT core library
set(GAMBIT_INCDIRS ${GAMBIT_INCDIRS} "${PROJECT_SOURCE_DIR}/Printers/include")
set(GAMBIT_INCDIRS ${GAMBIT_INCDIRS} "${PROJECT_SOURCE_DIR}/Core/include")

#set include directores for GAMBIT modules
retrieve_bits(GAMBIT_BITS ${PROJECT_SOURCE_DIR} "${itch}" "Quiet")
foreach(bit ${GAMBIT_BITS})
  set(GAMBIT_INCDIRS ${GAMBIT_INCDIRS} "${PROJECT_SOURCE_DIR}/${bit}/include")
endforeach()

