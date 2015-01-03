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
#************************************************

# Check for ROOT.
find_package(ROOT)
if (NOT ROOT_FOUND)
  #phew, no ROOT.  Gotta kill ColliderBit, but them's the breaks.
  message("   Woot! Woot! No ROOT!")
  message("   Good for you, kid.  Sadly, that means no ColliderBit either for now.  Too bad, so sad.")
  set (itch "${itch}" "ColliderBit")
else()
  include_directories(${ROOT_INCLUDE_DIR})
endif()

