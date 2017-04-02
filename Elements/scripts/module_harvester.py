#!/bin/python
#
# GAMBIT: Global and Modular BSM Inference Tool
#*********************************************
# \file
#
#  Module and functor type harvesting script
#  Generates all_functor_types.hpp,
#  module_rollcall.hpp, and
#  module_types_rollcall.hpp
#
#  This script identifies then reads through
#  all the module rollcall and frontend headers,
#  and harvests the types of every functor that
#  GAMBIT will try to compile. These are needed
#  to generate the default (virtual)
#  'print' functions in the base printer class
#  (see Printers/include/gambit/Printers/
#  baseprinter.hpp).
#
#  It also finds all the module type headers
#  and includes them in module_types_rollcall.hpp.
#
#*********************************************
#
#  Authors (add name and date if you modify):
#
#  \author Ben Farmer
#          (ben.farmer@gmail.com)
#    \date 2013 Sep
#          2014 Jan
#          2015 Jul
#
#  \author Pat Scott
#          (patscott@physics.mcgill.ca)
#    \date 2013 Oct, Nov
#    \date 2014 Jan, Nov
#    \date 2015 Feb
#
#*********************************************

import pickle
execfile("./Utils/scripts/harvesting_tools.py")

def main(argv):

    # Lists of modules to exclude; anything starting with one of these strings is excluded.
    exclude_modules=set([])

    # Handle command line options
    verbose = False
    try:
        opts, args = getopt.getopt(argv,"vx:",["verbose","exclude-modules="])
    except getopt.GetoptError:
        print 'Usage: module_harvestor.py [flags]'
        print ' flags:'
        print '        -v                     : More verbose output'
        print '        -x module1,module2,... : Exclude module1, module2, etc.'
        sys.exit(2)
    for opt, arg in opts:
      if opt in ('-v','--verbose'):
        verbose = True
        print 'module_harvester.py: verbose=True'
      elif opt in ('-x','--exclude-modules'):
        exclude_modules.update(neatsplit(",",arg))
    exclude_header = exclude_modules
    module_rollcall_headers=set([])
    module_type_headers=set([])
    full_rollcall_headers=[]
    full_type_headers=[]
    modules=set([])

    # List of headers to search
    rollcall_headers = set(["gambit/Backends/backend_rollcall.hpp", "Models/include/gambit/Models/model_rollcall.hpp"])
    type_headers     = set(["gambit/Elements/types_rollcall.hpp"])

    # List of headers NOT to search (things we know are not module rollcall headers or module type headers,
    # but are included in module_rollcall.hpp or types_rollcall.hpp)
    exclude_header.update(["shared_types.hpp", "backend_macros.hpp", "backend_undefs.hpp", "identification.hpp",
                           "yaml.h", "module_macros_incore.hpp", "module_macros_inmodule.hpp", "module_macros_common.hpp",
                           "model_macros.hpp"])

    # List of types not to bother looking for the definitions of.
    intrinsic_types=set(["char", "bool", "short", "int", "long", "float", "double", "std::string"])

    # List of types NOT to return (things we know are not printable, but can appear in START_FUNCTION calls)
    exclude_types=set(["void"])
    # Check if Delphes is on the exclude list, and leave out Delphes types if it is.  FIXME this is only until Delphes is BOSSed.
    if any(x in exclude_modules for x in ["D","De","Del","Delp","Delph","Delphe","Delphes"]):
      exclude_types.add("Gambit::ColliderBit::DelphesVanilla")
      exclude_types.add("ColliderBit::DelphesVanilla")
      exclude_types.add("DelphesVanilla")

    # List of directory names to ignore when searching for headers
    exclude_dirs=set([".git","build","doc","cmake","extras","config","contrib","runs","Logs","Printers","scratch","installed","scripts"])

    # Load up the sets of equivalent types and namespaces
    equiv_ns = get_default_boss_namespaces()
    equiv_classes = get_type_equivalencies(equiv_ns)

    # Get list of rollcall header files to search
    module_rollcall_headers.update(retrieve_rollcall_headers(verbose,".",exclude_header))
    rollcall_headers.update(module_rollcall_headers)
    # Get list of module type header files to search
    module_type_headers.update(retrieve_module_type_headers(verbose,".",exclude_header))

    print "Module rollcall headers identified:"
    for h in module_rollcall_headers:
        print ' ',h
        h_parts = neatsplit('\/',h)
        modules.add(h_parts[1])
    print "Module type headers identified:"
    for h in module_type_headers:
        print ' ',h
    if verbose: print

    # Generate a c++ header containing all the module type headers we have just harvested.
    towrite = "\
//   GAMBIT: Global and Modular BSM Inference Tool\n\
//   *********************************************\n\
///  \\file                                       \n\
///                                               \n\
///  Compile-time registration of GAMBIT module   \n\
///  types.                                       \n\
///                                               \n\
///  This file was automatically generated by     \n\
///  module_harvester.py. Do not modify.          \n\
///                                               \n\
///  Do not add to this if you want to add new    \n\
///  types associated with a new (or old) module. \n\
///  Just add your model type header as           \n\
///  XBit/include/gambit/XBit/XBit_types.hpp and  \n\
///  rest assured that module_harvester.py will   \n\
///  make sure it ends up here.                   \n\
///                                               \n\
///  *********************************************\n\
///                                               \n\
///  Authors:                                     \n\
///                                               \n\
///  \\author The GAMBIT Collaboration            \n\
///  \date "+datetime.datetime.now().strftime("%I:%M%p on %B %d, %Y")+"\n\
///                                               \n\
///  *********************************************\n\
                                                  \n\
#ifndef __module_types_rollcall_hpp__             \n\
#define __module_types_rollcall_hpp__             \n\
                                                  \n\
// Automatically-generated list of module types.  \n"

    for h in module_type_headers:
        towrite+='#include \"{0}\"\n'.format(h)
    towrite+="\n#endif // defined __module_types_rollcall_hpp__\n"

    # Don't touch any existing file unless it is actually different from what we will create
    header = "./Elements/include/gambit/Elements/module_types_rollcall.hpp"
    candidate = "./scratch/module_types_rollcall.hpp.candidate"
    with open(candidate,"w") as f: f.write(towrite)
    update_only_if_different(header, candidate)

    print "Harvesting types from headers..."

    # Recurse through chosen rollcall headers, locating all the included headers therein, and find them all
    # in the gambit source tree so that we can parse them for types etc.
    if verbose: print "  Searching rollcall headers..."
    find_and_harvest_headers(rollcall_headers,full_rollcall_headers,exclude_header,exclude_dirs,verbose=verbose)
    if verbose: print "  Searching type headers..."
    find_and_harvest_headers(type_headers,full_type_headers,exclude_header,exclude_dirs,verbose=verbose)

    # Search through rollcall headers and look for macro calls that create module_functors or safe pointers to them
    types=set(["ModelParameters", "double", "float", "std::vector<double>", "std::vector<float>"]) #Manually add these, as they must always be included.
    non_module_types=set(["ModelParameters", "double", "float", "std::vector<double>", "std::vector<float>"])
    returned_types = { "all" : types, "non_module" : non_module_types }
    for header in full_rollcall_headers:
        with open(header) as f:
            if verbose: print "  Scanning header {0} for types used to instantiate module functor class templates".format(header)
            module = "__NotAModule__"
            continued_line = ""
            for line in readlines_nocomments(f):
                continued_line += line
                if line.strip().endswith(","): continue
                # If this line defines the module name, update it.
                module = update_module(continued_line,module)
                # Check for calls to module functor creation macros, and harvest the types used.
                addiffunctormacro(continued_line,module,modules,returned_types,full_type_headers,intrinsic_types,exclude_types,equiv_classes,equiv_ns,verbose=verbose)
                continued_line = ""

    print "Found types for module functions:"
    for t in types:
        print ' ',t

    # Search through rollcall and frontend headers and look for macro calls that create backend_functors or safe pointers to them
    be_types=set()
    type_packs=set()
    for header in full_rollcall_headers:
        with open(header) as f:
            if verbose: print "  Scanning header {0} for types used to instantiate backend functor class templates".format(header)
            continued_line = ""
            for line in readlines_nocomments(f):
                continued_line += line
                if line.strip().endswith(","): continue
                # Check for calls to backend functor creation macros, and harvest the types used.
                addifbefunctormacro(continued_line,be_types,type_packs,equiv_classes,equiv_ns,verbose=verbose)
                continued_line = ""

    print "Found types for backend functions and variables:"
    for t in be_types:
        if t != "": print ' ',t

    # Generate a c++ header containing the preprocessor sequence needed by Printers/include/gambit/Printers/printer_rollcall.hpp, containing all the types we have harvested.
    towrite = "\
//   GAMBIT: Global and Modular BSM Inference Tool\n\
//   *********************************************\n\
///  \\file                                       \n\
///                                               \n\
///  Automatically generated preprocessor sequence\n\
///  of functor types.                            \n\
///                                               \n\
///  This file was automatically generated by     \n\
///  module_harvester.py. Do not modify.          \n\
///                                               \n\
///  The content is harvested from:               \n\
///   - rollcall headers in module_rollcall.hpp   \n\
///   - frontend headers in backend_rollcall.hpp  \n\
///   - types registered in types_rollcall.hpp    \n\
///                                               \n\
///  *********************************************\n\
///                                               \n\
///  Authors:                                     \n\
///                                               \n\
///  \\author The GAMBIT Collaboration            \n\
///  \date "+datetime.datetime.now().strftime("%I:%M%p on %B %d, %Y")+"\n\
///                                               \n\
///  *********************************************\n\
                                                  \n\
#ifndef __all_functor_types_hpp__                 \n\
#define __all_functor_types_hpp__                 \n\
                                                  \n\
#include \"gambit/Elements/types_rollcall.hpp\"   \n\
                                                  \n\
// Automatically generated preprocessor sequence of module functor types \n\
#define MODULE_FUNCTOR_TYPES \\\n"
    for t in types:
        towrite+='({0})'.format(t)+"\\\n"

    towrite+="\n\
// Automatically generated preprocessor sequence of backend functor types \n\
#define BACKEND_FUNCTOR_TYPES \\\n"
    for tp in type_packs:
        towrite+='(({0}))'.format(tp)+"\\\n"

    towrite+="\n\n#endif // defined __all_functor_types_hpp__\n"

    # Don't touch any existing file unless it is actually different from what we will create
    header = "./Elements/include/gambit/Elements/all_functor_types.hpp"
    candidate = "./scratch/all_functor_types.hpp.candidate"
    with open(candidate,"w") as f: f.write(towrite)
    update_only_if_different(header, candidate)

    if verbose:
        print "\nGenerated module_rollcall.hpp."
        print "Generated module_types_rollcall.hpp."
        print "Generated all_functor_types.hpp."

    # Pickle the types for later usage by standalone_facilitator.py
    with open('./scratch/harvested_types.pickle', 'wb') as handle:
        pickle.dump(returned_types, handle, protocol=pickle.HIGHEST_PROTOCOL)

# Handle command line arguments (verbosity)
if __name__ == "__main__":
   main(sys.argv[1:])

