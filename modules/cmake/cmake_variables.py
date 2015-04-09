#!/bin/python
#
# GAMBIT: Global and Modular BSM Inference Tool
#*********************************************
# \file
#
#  Script to find scanner (and test function)
#  libraries and write cmake_variables.hpp.in
#  file.
#
#*********************************************
#
#  Authors (add name and date if you modify):
#
#  \author Pat Scott 
#          (p.scott@imperial.ac.uk)
#  \date 2014 Dec
#  \date 2015 Jan
#
#
#*********************************************

import update_cmakelists
import datetime
import sys
import getopt
execfile("./Utils/scripts/harvesting_tools.py")

def main(argv):

    # Handle command line options
    try:
        build_dir = argv[0]
    except getopt.GetoptError:
        print 'Usage: cmake_variables.py build_dir'
        sys.exit(2)

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

    towrite += "\n#endif //// #defined__cmake_variables_hpp__"
    header = build_dir+"/cmake_variables.hpp.in"
    candidate = header+".candidate"
    with open(candidate,"w") as f: f.write(towrite)
    update_cmakelists.update_only_if_different(header, candidate)

if __name__ == "__main__":
   main(sys.argv[1:])
