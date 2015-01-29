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
test_config = "./config/objective_locations.yaml"

# Actual updater program
def main(argv):

    exclude_plugins=set([])
    plugins = []
    static_links = ""
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

    # info for the different plugin types
    src_paths = sorted(["./ScannerBit/src/scanners", "./ScannerBit/src/objectives"])
    inc_paths = sorted(["./ScannerBit/include/scanners", "./ScannerBit/include/objectives"])
    plug_type = sorted(["scanner", "objective"])
    
    # these map the linking flags and library paths to the appropriate plugin library
    scanbit_libs = dict()
    scanbit_links = dict()
    
    ## begin adding scannerbit files to CMakeLists.txt ##
    scanbit_srcs = [ name for name in os.listdir("./ScannerBit/src") if os.path.isfile('./ScannerBit/src/' + name) if name.endswith(".cpp") or name.endswith(".c") or name.endswith(".cc") or name.endswith(".cxx") ]
    scanbit_hdrs = [ name for name in os.listdir("./ScannerBit/include") if os.path.isfile('./ScannerBit/include/' + name) if name.endswith(".hpp") or name.endswith(".h") ]
    prior_srcs = []
    prior_hdrs = []
    if os.path.exists("./ScannerBit/src/priors"):
                 prior_srcs = [ root + "/" + f for root,dirs,files in os.walk("./ScannerBit/src/priors") for f in files if f.endswith(".cpp") or f.endswith(".c") or f.endswith(".cc") or f.endswith(".cxx") ]
    if os.path.exists("./ScannerBit/include/priors"):
                 prior_hdrs = [ root + "/" + f for root,dirs,files in os.walk("./ScannerBit/include/priors") for f in files if f.endswith(".hpp") or f.endswith(".h") ]
    
    cmakelist_txt_out = "set( scannerbit_sources\n"
            
    for source in sorted(scanbit_srcs):
        cmakelist_txt_out += " "*16 + "src/" + source + "\n"
        
    for source in sorted(prior_srcs):
        cmkaelist_txt_out += " "*16 + source.split('/ScannerBit/')[1] + "\n"
        
    cmakelist_txt_out += ")\n\n"
    
    cmakelist_txt_out += "set( scannerbit_headers\n"
            
    for header in sorted(scanbit_hdrs):
        cmakelist_txt_out += " "*16 + "include/" + header + "\n"
        
    for header in sorted(prior_hdrs):
        cmakelist_txt_out += " "*16 + header.split('/ScannerBit/')[1] + "\n"
        
    cmakelist_txt_out += ")\n\n"
    ## end adding scannerbit files to CMakeLists.txt ##
    
    # loop through the different plugin types
    for i in xrange(len(plug_type)):
        scanbit_libs[plug_type[i]] = {"": [""]}
        scanbit_links[plug_type[i]] = {"": ""}
        directories = [ name for name in os.listdir(src_paths[i]) if os.path.isdir(src_paths[i] + "/" + name) ]
        
        for directory in sorted(directories):
            # Find all source files in the ScannerBit scanner and test_function plugin directories
            sources = [ root + "/" + f for root,dirs,files in os.walk(src_paths[i] + "/" + directory) for f in files if f.endswith(".cpp") or f.endswith(".c") or f.endswith(".cc") or f.endswith(".cxx") ]
            headers = []
            if os.path.exists(inc_paths[i] + "/" + directory):
                 headers = [ root + "/" + f for root,dirs,files in os.walk(inc_paths[i] + "/" + directory) for f in files if f.endswith(".hpp") or f.endswith(".h") ]
            
            cmakelist_txt_out = cmakelist_txt_out+"set( " + plug_type[i] + "_plugin_sources_" + directory + "\n"

            # Work through the source files to find all plugins that need external linkage
            for source in sorted(sources):
                with open(source) as f:
                    if verbose: print "  Scanning source file {0} for ScannerBit plugin declarations.".format(source)
                    for line in readlines_nocomments(f):
                        splitline = neatsplit('\(|\)|,|\s',line)
                        if len(splitline) != 0: 
                            if (splitline[0] == "scanner_plugin" or splitline[0] == "objective_plugin") and splitline[-1] == "external_library_required": 
                                plugin_type = "scan" if splitline[0] == "scanner_plugin" else "like"
                                plugin_name = splitline[1]
                                mod_version = ["","","",""]
                                if splitline[2] == "version": mod_version[0:len(splitline[3:-1])] = splitline[3:-1]
                                token = "libs_present_"+plugin_name+"__t__"+plugin_type+"__v__"+"_".join([x for x in mod_version])
                                plugins+=[[plugin_name, plugin_type, mod_version, "missing", token, "", directory, plug_type[i]]] 
            
            ## begin adding plugin files to CMakeLists.txt ##
                cmakelist_txt_out += " "*16 + source.split('/ScannerBit/')[1] + "\n"
                
            cmakelist_txt_out += ")\n\n"
            
            cmakelist_txt_out += "set( " + plug_type[i] + "_plugin_headers_" + directory + "\n"
            
            for header in sorted(headers):
                cmakelist_txt_out += " "*16 + header.split('/ScannerBit/')[1] + "\n"
                
            cmakelist_txt_out += ")\n\n"
            ## end adding plugin files to CMakeLists.txt ## 
                

    for config_file, plugin_type in itertools.izip([scan_config, test_config], ["scan", "like"]):
        # Create the locations yaml files from the example if needed
        if not os.path.isfile(config_file): shutil.copyfile(config_file+".example",config_file)
        # Load the locations yaml file, and work out which libs are present
        f = yaml.load(open(config_file))
        for plugin in plugins:
            plugin_name = plugin[0]
            linkcommands = ""
            linkdirs = []
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
                                if lib.endswith(".a"):
                                    static_links += lib + " "
                                else:
                                    [libdir, lib] = os.path.split(lib)
                                    lib = re.sub("^lib|\..*$","",lib)
                                    linkcommands += "-L" + libdir + " -l" + lib + " "
                                    plugin[5] = libdir
                                    linkdirs += [libdir]
                            else:
                                plugin[3] = "excluded"
                                
                # add links commands to map (keys: {plug_type, directory}) to be linked to later
                if linkcommands != "":
                    if scanbit_links.has_key(plugin[6]):
                        scanbit_links[plugin[7]][plugin[6]] += linkcommands
                    else:
                        scanbit_links[plugin[7]][plugin[6]] = linkcommands
                if linkdirs != []:
                    if scanbit_libs.has_key(plugin[6]):
                        scanbit_libs[plugin[7]][plugin[6]].append(linkdirs)
                    else:
                        scanbit_libs[plugin[7]][plugin[6]] = linkdirs
                        
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

    # Make a candidate linkedout.cmake file
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
#                                                \n\
#************************************************\n\
                                                 \n\
set(PLUGIN_INCLUDE_DIRECTORIES                   \n\
                ${PROJECT_SOURCE_DIR}            \n\
                ${GAMBIT_INCDIRS}                \n\
                ${yaml_INCLUDE_DIRS}             \n\
)                                                \n\n"

    towrite += cmakelist_txt_out

    towrite +="\
set(scanner_scanlibs_sources                    \n\
                src/scanlibs/scanlibs.cpp       \n\
)                                               \n\
                                                \n\
add_gambit_library(ScannerBit OPTION OBJECT SOURCES ${scannerbit_sources} HEADERS ${scannerbit_headers})\n\n\
add_gambit_executable(scanlibs SOURCES ${scanner_scanlibs_sources})\n\
set_target_properties( scanlibs                 \n\
                       PROPERTIES               \n\
                       RUNTIME_OUTPUT_DIRECTORY \"${CMAKE_CURRENT_SOURCE_DIR}/bin\")\n\n"
    
    # now link the shared library to their respective plugin libraries
    for i in xrange(len(plug_type)):
        directories = [ name for name in os.listdir(src_paths[i]) if os.path.isdir(src_paths[i] + "/" + name) ]
        for directory in sorted(directories):
            towrite += "add_gambit_library ( " + plug_type[i] + "_" + directory + " OPTION SHARED SOURCES ${" 
            towrite += plug_type[i] + "_plugin_sources_" + directory + "} HEADERS ${"
            towrite += plug_type[i] + "_plugin_headers_" + directory + "} )\n"
            towrite += "set_target_properties( " + plug_type[i] + "_" + directory + "\n" + " "*23 + "PROPERTIES\n"
            if scanbit_libs.has_key(plug_type[i]):
                if scanbit_libs[plug_type[i]].has_key(directory):
                    towrite += " "*23 + "LINK_FLAGS \"" + scanbit_links[plug_type[i]][directory] + "\"\n"
                    unique_libdirs = set(p for p in scanbit_libs[plug_type[i]][directory])
                    if unique_libdirs:
                        towrite += " "*23 + "INSTALL_RPATH \"" + ";".join([libdir for libdir in unique_libdirs]) +"\"\n"
            towrite += " "*23 + "INCLUDE_DIRECTORIES \"${PLUGIN_INCLUDE_DIRECTORIES};"
            towrite += "${CMAKE_CURRENT_SOURCE_DIR}/include/" + plug_type[i] + "s/" + directory + "\"\n"
            towrite += " "*23 + "ARCHIVE_OUTPUT_DIRECTORY \"${CMAKE_CURRENT_SOURCE_DIR}/lib\"\n"
            towrite += " "*23 + "LIBRARY_OUTPUT_DIRECTORY \"${CMAKE_CURRENT_SOURCE_DIR}/lib\")\n\n"

    cmake = "./ScannerBit/CMakeLists.txt"
    with open(cmake+".candidate","w") as f: f.write(towrite)
    update_cmakelists.update_only_if_different(cmake, cmake+".candidate")

    if verbose: print "Finished writing ScannerBit/CMakeLists.txt"

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
#                                                \n\
#************************************************\n\
                                                 \n\
if (${CMAKE_SYSTEM_NAME} MATCHES \"Darwin\")     \n"
                                                
    if static_links != "":
        towrite += " "*4 + "foreach(program ${uses_scannerbit})\n"
        towrite += " "*8 + "target_link_libraries( ${program} -Wl,-force_load " + static_links + ")\n"
        towrite += " "*4 + "endforeach()\n"
    towrite += "else()\n"
    if static_links != "":
        towrite += " "*4 + "foreach(program ${uses_scannerbit})\n"
        towrite += " "*8 + "target_link_libraries( ${program} -Wl,--whole-archive " + static_links + " -Wl,--no-whole-archive )\n"
        towrite += " "*4 + "endforeach()\n"
    towrite += "endif()\n"

    cmake = "./cmake/linkedout.cmake"
    with open(cmake+".candidate","w") as f: f.write(towrite)
    update_cmakelists.update_only_if_different(cmake, cmake+".candidate")

    if verbose: print "Finished writing linkedout.cmake"

# Handle command line arguments (verbosity)
if __name__ == "__main__":
   main(sys.argv[1:])

