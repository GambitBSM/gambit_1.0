#!/bin/python
#
# GAMBIT: Global and Modular BSM Inference Tool
#*********************************************
# \file
#
#  Script to create the CMakeLists.txt files
#  for GAMBIT modules.
#
#*********************************************
#
#  Authors (add name and date if you modify):
#
#  \author Pat Scott 
#          (patscott@physics.mcgill.ca)
#    \date 2014 Nov
#
#*********************************************
import os
execfile("./Utils/scripts/harvesting_tools.py")

#Search the source tree to determine which modules are present 
def module_census(verbose,install_dir,excludes):
    modules=[]
    for root,dirs,files in os.walk(install_dir):
        for mod in dirs:
            exclude = False
            for x in excludes:
                if mod.startswith(x): exclude = True
            if not exclude and mod.lower().find("bit") != -1:
                if verbose: print "  Located module '{0}'.".format(mod)
                modules+=[mod]
        break
    return modules


def main(argv):

    # Lists of modules to exclude; anything starting with one of these strings is excluded.
    exclude_modules=set([])

    # Handle command line options
    verbose = False
    try:
        opts, args = getopt.getopt(argv,"vx:",["verbose","exclude-modules="])
    except getopt.GetoptError:
        print 'Usage: update_cmakelists.py [flags]'
        print ' flags:'
        print '        -v                     : More verbose output'  
        print '        -x module1,module2,... : Exclude module1, module2, etc.' 
        sys.exit(2)
    for opt, arg in opts:
      if opt in ('-v','--verbose'):
        verbose = True
        print 'update_cmakelists.py: verbose=True'
      elif opt in ('-x','--exclude-modules'):
        exclude_modules.update(neatsplit(",",arg))

    # Find all the modules.
    modules = module_census(verbose,".",exclude_modules)

    # Loop over the found modules.

      # Retrieve the list of module source files.

      # Retrieve the list of module header files.

      # Make a candidate CMakeLists.txt file for this module.

      # Compare the candidate file to any existing file, replacing only if they differ.


    if verbose: print "Updated module CMakeLists.txt files."

# Handle command line arguments (verbosity)
if __name__ == "__main__":
   main(sys.argv[1:])

