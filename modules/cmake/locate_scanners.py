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
#*********************************************
import re
import os
import update_cmakelists
import yaml
import shutil
import itertools
execfile("./Utils/scripts/harvesting_tools.py")

scan_config = "./config/scanner_locations.yaml"
test_config = "./config/test_function_locations.yaml"

# Actual updater program
def main(argv):

    exclude_plugins=set([])
    plugins = []
    linkcommands = ""
    flag = {"missing": "0", "found": "1", "excluded": "2"}

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
        elif opt in ('-x','--exclude-plugins','--exclude-plugin'):
            exclude_plugins.update(neatsplit(",",arg))

    # Find all source files in the ScannerBit scanner and test_function plugin directories
    for root,dirs,files in os.walk("./ScannerBit/src/scanners"): sources = [root + "/" + f for f in files if f.endswith((".c",".cc",".cpp"))]
    for root,dirs,files in os.walk("./ScannerBit/src/test_functions"): sources.extend([root + "/" + f for f in files if f.endswith((".c",".cc",".cpp"))])
 
    # Work through the source files to find all plugins that need external linkage
    for source in sources:
        with open(source) as f:
            if verbose: print "  Scanning source file {0} for ScannerBit plugin declarations.".format(source)
            for line in readlines_nocomments(f):
                splitline = neatsplit('\(|\)|,|\s',line)
                if len(splitline) != 0: 
                    if (splitline[0] == "scanner_plugin" or splitline[0] == "function_plugin") and splitline[-1] == "external_library_required": 
                        plugin_type = "scan" if splitline[0] == "scanner_plugin" else "like"
                        plugin_name = splitline[1]
                        mod_version = ["","","",""]
                        if splitline[2] == "version": mod_version[0:len(splitline[3:-1])] = splitline[3:-1]
                        token = "libs_present_"+plugin_name+"__t__"+plugin_type+"__v__"+"_".join([x for x in mod_version])
                        plugins+=[[plugin_name, plugin_type, mod_version, "missing", token, ""]] 

    for config_file, plugin_type in itertools.izip([scan_config, test_config], ["scan", "like"]):
        # Create the locations yaml files from the example if needed
        if not os.path.isfile(config_file): shutil.copyfile(config_file+".example",config_file)
        # Load the locations yaml file, and work out which libs are present
        f = yaml.load(open(config_file))
        for plugin in plugins:
            plugin_name = plugin[0]
            if plugin_name in f and plugin[1] == plugin_type:
                version_bits = plugin[2]
                version = ".".join([x for x in version_bits[0:3] if x != ""])
                if version_bits[3] != "": version = "-".join([version, version_bits[3]])
                if version in f[plugin_name]:
                    libs = neatsplit(',|\s', f[plugin_name][version])
                    for lib in libs:
                        if os.path.isfile(lib):                            
                            go_ahead = True
                            for x in exclude_plugins: 
                                if (plugin_name+"_"+"_".join([y for y in version_bits])).startswith(x): go_ahead = False                    
                            if go_ahead:
                                plugin[3] = "found"
                                lib = os.path.abspath(lib)
                                print "   Found library {0} needed for ScannerBit plugin {1} v{2}".format(lib,plugin_name,version)
                                [libdir, lib] = os.path.split(lib)
                                lib = re.sub("^lib|\..*$","",lib)
                                linkcommands += "-L" + libdir + " -l" + lib + " "
                                plugin[5] = libdir
                            else:
                                plugin[3] = "excluded"


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

    for plugin in plugins:
        towrite += "#define " + plugin[4] + " " + flag[plugin[3]] + "\n"
    towrite += "\n#endif // #defined__cmake_variables_hpp__"
    header = "./cmake/cmake_variables.hpp.in"
    with open(header+".candidate","w") as f: f.write(towrite)
    update_cmakelists.update_only_if_different(header, header+".candidate")

    if verbose: print "Finished writing cmake_variables.hpp.in"

    # Make a candidate cmake_variables.hpp.in file
    towrite = "\
# GAMBIT: Global and Modular BSM Inference Tool  \n\
#************************************************\n\
# \\file                                         \n\
#                                                \n\
#  Cmake linking and rpath commands for GAMBIT.  \n\
#                                                \n\
#  This file has been automatically generated by \n\
#  locate_scanners.py.  Please do not modify.    \n\
#                                                \n\
#************************************************\n\
#                                                \n\
#  Authors:                                      \n\
#                                                \n\
#  \\author The GAMBIT Collaboration             \n\
#  \\date "+datetime.datetime.now().strftime("%I:%M%p on %B %d, %Y")+"\n\
#                                               \n\
#***********************************************\n\
                                                \n\
foreach(program ${uses_scannerbit})             \n"

    if linkcommands: towrite += "target_link_libraries( ${program} "+linkcommands+")\n"
    unique_libdirs = set(p[5] for p in plugins if p[3] == "found")
    if unique_libdirs:
      towrite += "set_target_properties( ${program} PROPERTIES"
      for libdir in unique_libdirs: towrite += "\n"+" "*34+"INSTALL_RPATH "+libdir
      towrite += ")\n"
    towrite += "endforeach()"
    cmake = "./cmake/linkedout.cmake"
    with open(cmake+".candidate","w") as f: f.write(towrite)
    update_cmakelists.update_only_if_different(cmake, cmake+".candidate")

    if verbose: print "Finished writing linkedout.cmake"


# Handle command line arguments (verbosity)
if __name__ == "__main__":
   main(sys.argv[1:])

