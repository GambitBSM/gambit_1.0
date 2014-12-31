#!/bin/python
#
# GAMBIT: Global and Modular BSM Inference Tool
#*********************************************
# \file
#
#  Script to find scanner libraries and write
#  cmake_variables.hpp.in file.
#
#*********************************************
#
#  Authors (add name and date if you modify):
#
#  \author Pat Scott 
#          (patscott@physics.mcgill.ca)
#    \date 2014 Dec
#
#*********************************************
import os
import update_cmakelists
execfile("./Utils/scripts/harvesting_tools.py")

# Actual updater program
def main(argv):

    # Lists of scanners to exclude; anything starting with one of these strings is excluded.
    exclude_scanners=set([])

    # Handle command line options
    verbose = False
    try:
        opts, args = getopt.getopt(argv,"vx:",["verbose","exclude-scanners="])
    except getopt.GetoptError:
        print 'Usage: locate_scanners.py [flags]'
        print ' flags:'
        print '        -v                       : More verbose output'  
        print '        -x scanner1,scanner2,... : Exclude scanner1, scanner2, etc.' 
        sys.exit(2)
    for opt, arg in opts:
        if opt in ('-v','--verbose'):
            verbose = True
            print 'locate_scanners.py: verbose=True'
        elif opt in ('-x','--exclude-scanners','--exclude-scanner'):
            exclude_scanners.update(neatsplit(",",arg))


        # Make a candidate cmake_variables.hpp.in file
    towrite = "\
// GAMBIT: Global and Modular BSM Inference Tool  \n\
//************************************************\n\
/// \\file                                        \n\
///                                               \n\
///  Configured options and settings for GAMBIT   \n\
///                                               \n\
///***********************************************\n\
///                                               \n\
///  Authors:                                     \n\
///                                               \n\
///  \\author The GAMBIT Collaboration            \n\
///  \\date "+datetime.datetime.now().strftime("%I:%M%p on %B %d, %Y")+"\n\
///                                               \n\
///***********************************************\n\
                                                  \n\
#ifndef __cmake_variables_hpp__                   \n\
#define __cmake_variables_hpp__                   \n\
                                                  \n\
/// Gambit source directory                       \n\
#define GAMBIT_DIR \"@PROJECT_SOURCE_DIR@\"       \n"  

    towrite += "\n#endif // #defined__cmake_variables_hpp__"
    header = "./cmake/cmake_variables.hpp.in"
    with open(header+".candidate","w") as f: f.write(towrite)
    update_cmakelists.update_only_if_different(header, header+".candidate")

    if verbose: print "Finished updating cmake_variables.hpp files."

# Handle command line arguments (verbosity)
if __name__ == "__main__":
   main(sys.argv[1:])

