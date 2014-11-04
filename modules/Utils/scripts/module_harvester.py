#!/bin/python
#
# GAMBIT: Global and Modular BSM Inference Tool
#*********************************************
# \file
#
#  Functor type harvesting script
#  Generates all_functor_types.hpp
#  
#  This script reads through all the headers
#  listed in Core/include/module_rollcall.hpp
#  and harvests the types of every functor
#  that GAMBIT will try to compile. These
#  are needed to generate the default (virtual) 
#  'print' functions in the base printer class
#  (see Printers/include/baseprinter.hpp)  
#
#*********************************************
#
#  Authors (add name and date if you modify):
#   
#  \author Ben Farmer 
#          (ben.farmer@gmail.com)
#    \date 2013 Sep, 2014 Jan 
#
#  \author Pat Scott 
#          (patscott@physics.mcgill.ca)
#    \date 2013 Oct, Nov
#    \date 2014 Jan, Nov
#
#*********************************************
import os
import re
import datetime
import sys
import getopt

# Remove C/C++ comments from 'text' (From http://stackoverflow.com/questions/241327/python-snippet-to-remove-c-and-c-comments)
def comment_remover(text):
    def replacer(match):
        s = match.group(0)
        if s.startswith('/'):
            return ""
        else:
            return s
    pattern = re.compile(
        r'//.*?$|/\*.*?\*/|\'(?:\\.|[^\\\'])*\'|"(?:\\.|[^\\"])*"',
        re.DOTALL | re.MULTILINE
    )
    return re.sub(pattern, replacer, text[:])

# Replacement for f.readlines(), which removes all C/C++ comments from the text before returning a list of all the lines (as f.readlines() does)
def readlines_nocomments(f):
    processed_text = comment_remover(f.read())
    return processed_text.splitlines()

# No empties from re.split
def neatsplit(regex,string):
    return [x for x in re.split(regex,string) if x != '']

# Parse a string to see if it has a class, struct or typedef declaration
def check_for_declaration(input_snippet,module,local_namespace,candidate_type):
    splitline = neatsplit('\s|\(|\)|\*|\&|\;',input_snippet)
    if len(splitline)>1:
        # If the local namespace matches the module name, and the candidate type is declared here, qualify it
        # Note that if candidate_type is a pointer then candidate_type==splitline[1] fails to match due to the extra *.
        # This case is working, but there might be more cases like this that crop up, which we will need to handle here. --Ben.
        if local_namespace==module:
            if splitline[0] in ["class", "struct"] \
             and ( candidate_type==splitline[1] or candidate_type==splitline[1]+"*" ):
                return local_namespace+"::"+candidate_type
            if len(splitline)>2:
                #if splitline[0]=="typedef": print splitline
                if splitline[0]=="typedef" and candidate_type==splitline[2]:
                    return local_namespace+"::"+candidate_type
    return candidate_type

# Parse a string to see if it has a namespace declaration
def check_for_namespace(input_snippet,local_namespace):
    splitline = neatsplit('\s',input_snippet)
    if len(splitline)>1:
        # If the line starts by declaring a namespace, return it
        if splitline[0]=="namespace":
            return splitline[1]
    return local_namespace

# Harvest header filename from an include statement
def addifheader(line,headerset,verbose=False):
    splitline = line.split()
    if len(splitline)>1 and splitline[0]=="#include":
        #dig the file name out of the enclosing <> or "" 
        split2 = neatsplit('"|<|>',splitline[1])
        headerset.add(split2[0])
        if verbose: print "  Added header '{0}' to set".format(split2[0])

# Harvest module names from rollcall headers
def update_module(line,module):
    splitline = neatsplit('\(|\)|,|\s',line)
    if len(splitline)>2:
        if splitline[0]=="#define" and splitline[1]=="MODULE":
            #This line defines a module, return its name instead of bothering to look for a START_FUNCTION
            return splitline[2]
    return module

# Harvest type from a START_FUNCTION or QUICK_FUNCTION macro call
def addiffunctormacro(line,module,typeset,typeheaders,verbose=False):
    splitline = neatsplit('\(|\)|,|\s',line)
    if len(splitline)>1 and (splitline[0]=="START_FUNCTION" or splitline[0]=="QUICK_FUNCTION"):
        #This line defines a function and the first or fifth argument defines a candidate type
        if splitline[0]=="START_FUNCTION": candidate_type = splitline[1]
        if splitline[0]=="QUICK_FUNCTION": candidate_type = splitline[5]
        if verbose: print "    {0} located, searching for declaration of {1}...".format(line.strip(),candidate_type)
        #Now check if the type is declared in any of the module type headers (not very efficient, but simple)
        for header in typeheaders:
            local_namespace = ""
            with open(header) as f:
                for line in readlines_nocomments(f):
                    splitline = neatsplit('\{|\}|:|;',line)
                    # Determine the local namespace and look for a class or struct matching the candidate type 
                    for i in range(5):
                        if len(splitline)>i:
                            local_namespace = check_for_namespace(splitline[i],local_namespace)
                            candidate_type = check_for_declaration(splitline[i],module,local_namespace,candidate_type)
                    # Ben: The loop above misses some of the typedefs, so need to re-parse the whole line for these
                    candidate_type = check_for_declaration(line,module,local_namespace,candidate_type)
        typeset.add(candidate_type)                    

# Harvest the list of rollcall headers to be searched, and the list of type headers to be searched.
def get_headers(path,header_set,verbose=False):
    """Parse the file at 'path' and add any headers that are "include"ed therin to the set 'header_set'"""
    with open(path) as f:
        #print "  Parsing header '{0}' for further includes...".format(path)
        for line in readlines_nocomments(f):
            addifheader(line,header_set,verbose=verbose)        

def find_and_harvest_headers(header_set,fullheadlist,exclude_set,verbose=False):
    """Locate 'init_headers' in gambit source tree, then read through them and add any headers that are "include"ed in them to headlist
    Args:
    header_set - set of file names of headers to parse
    fullheadlist - list to which full paths of both init_headers, and any subsequently found headers, should be added.
    exclude_set - set of names of headers to ignore if we find them.
    """
    full_header_paths=[]
    for header in header_set:
        # Locate the header in the GAMBIT directory structure...
        # (we should technically search all the include paths in the make file; could pass these in to this script)
        # Ignores any headers that cannot be found (assumed to be external libraries, etc.)
        for root,dirs,files in os.walk("."):
            for name in files:
                if name==header:
                    if verbose: print "  Located header '{0}' at path '{1}'".format(name,os.path.join(root,name))
                    full_header_paths+=[os.path.join(root,name)]

    # Add newly found paths to output list
    fullheadlist+=full_header_paths

    new_headers=set() 
    for path in full_header_paths:
        get_headers(path,new_headers,verbose=verbose)

    # Add headers that we started with to the 'exclude_set' so that we don't search them again.
    new_exclude_set=set()
    new_exclude_set.update(exclude_set)
    new_exclude_set.update(header_set)

    # Delete elements of 'new_exclude_set' from 'new_headers'
    new_headers.difference_update(new_exclude_set)

    # Do this again for all the headers we just found, if we found any
    if len(new_headers) > 0:
        if verbose: print "  Harvested the following new headers:"
        for header in new_headers:
            if verbose: print "    "+header
        find_and_harvest_headers(new_headers,fullheadlist,new_exclude_set,verbose=verbose)

#Search the source tree to determine which modules are present, and write a module_rollcall header if the GAMBIT Core exists. 
def retrieve_rollcall_headers(verbose,install_dir,exclude_headers):
    rollcall_headers=[]
    core_exists = False
    for root,dirs,files in os.walk(install_dir):
        if (not core_exists and root == install_dir+"/Core/include"): core_exists = True 
        for name in files:
            if (name.lower().endswith("_rollcall.hpp") and name.lower().find("bit") != -1):
                if not name in exclude_headers: 
                    if verbose: print "  Located module rollcall header '{0}' at path '{1}'".format(name,os.path.join(root,name))
                    rollcall_headers+=[name]
    if core_exists: make_module_rollcall(rollcall_headers,verbose)
    return rollcall_headers


#Create the module_rollcall header in the Core directory
def make_module_rollcall(rollcall_headers,verbose):
    towrite = "\
//   GAMBIT: Global and Modular BSM Inference Tool\n\
//   *********************************************\n\
///  \\file                                       \n\
///                                               \n\
///  Compile-time registration of GAMBIT modules. \n\
///                                               \n\
///  This file was automatically generated by     \n\
///  module_harvester.py. Do not modify.          \n\
///  The content is harvested from your local     \n\
///  installation.  If you want to add a new      \n\
///  module, just create it and make sure it      \n\
///  contains a rollcall header, and the          \n\
///  module_harvester.py script will make         \n\
///  sure it turns up here.                       \n\
///                                               \n\
///  By 'rollcall header', we mean a file         \n\
///  myBit/include/myBit_rollcall.hpp,            \n\
///  where myBit is the name of your module.      \n\
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
#ifndef __module_rollcall_hpp__                   \n\
#define __module_rollcall_hpp__                   \n\
                                                  \n\
#include \"module_macros_incore.hpp\"           \n\n"

    for h in rollcall_headers:
        towrite+='#include \"{0}\"\n'.format(h)
    towrite+="\n#endif // defined __module_rollcall_hpp__\n"
    
    with open("./Core/include/module_rollcall.hpp","w") as f:
        f.write(towrite)

    if verbose: print "  Found GAMBIT Core.  Generated module_rollcall.hpp." 


def main(argv):
    # Handle command line options
    verbose = False
    collide = False
    try:
        opts, args = getopt.getopt(argv,"vc",["verbose","collide"])
    except getopt.GetoptError:
        print 'Usage: module_harvestor.py [flags]'
        print ' flags:'
        print '        -v : More verbose output'  
        print '        -c : Turn on HECollider'  
        sys.exit(2)
    for opt, arg in opts:
      if opt in ('-v','--verbose'):
        verbose = True
        print 'module_harvester.py: verbose=True'
      elif opt in ('-c','--collide'):
        collide = True


    # List of headers NOT to search (things we know are not module rollcall headers or module type headers, 
    # but are included in module_rollcall.hpp or types_rollcall.hpp)
    if collide:
      exclude_header=set(["shared_types.hpp"])
    else:
      print "  Excluding ColliderBit rollcall headers from type harvesting."
      exclude_header=set(["shared_types.hpp", "ColliderBit_rollcall.hpp", "ColliderBit_types.hpp"])

    # List of types NOT to return (things we know are not printable, but can appear in START_FUNCTION calls)
    exclude_type=set(["void"])

    # Get list of header files to search
    fullheaders=[]
    fulltypeheaders=[]
    headers      = retrieve_rollcall_headers(verbose,".",exclude_header)
    type_headers = set(["types_rollcall.hpp"])   

    # Recurse through chosen headers, locating all the included headers therein, and find them all in the gambit source tree so that we can parse
    # them for types etc.   
    find_and_harvest_headers(headers,fullheaders,exclude_header,verbose=verbose)
    find_and_harvest_headers(type_headers,fulltypeheaders,exclude_header,verbose=verbose)
     
    # Search through rollcall headers and look for macro calls that create module_functors     
    types=set(["ModelParameters"]) #Manually add this one to avoid scanning through Models directory
    for header in fullheaders:
        with open(header) as f:
            if verbose: print "  Scanning header {0} for types used to instantiate functor class templates".format(header)
            module = ""
            for line in readlines_nocomments(f):
                # If this line defines the module name, update it.
                module = update_module(line,module)
                # Check for calls to functor creation macros, and harvest the types used.
                addiffunctormacro(line,module,types,fulltypeheaders,verbose=verbose)
    
    # Remove excluded types from the set
    types.difference_update(exclude_type)
    
    print "\nTypes harvested from headers:"
    for t in types:
        print ' ',t
    print 
    
    # Generate a c++ header containing the preprocessor sequence needed by Utils/include/printers.hpp, containing all the types we have harvested.
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
///  The content is harvested from the rollcall   \n\
///  headers registered in module_rollcall.hpp    \n\
///  and the types registered in                  \n\
///  types_rollcall.hpp.                          \n\
///                                               \n\
///  *********************************************\n\
///                                               \n\
///  Authors (add name and date if you modify):   \n\
///                                               \n\
///  \\author The GAMBIT Collaboration            \n\
///  \date "+datetime.datetime.now().strftime("%I:%M%p on %B %d, %Y")+"\n\
///                                               \n\
///  *********************************************\n\
                                                  \n\
#ifndef __all_functor_types_hpp__                 \n\
#define __all_functor_types_hpp__                 \n\
                                                  \n\
#include \"types_rollcall.hpp\"                   \n\
                                                  \n\
// Automatically generated preprocessor sequence of types \n\
#define PRINTABLE_TYPES "
    for t in types:
        towrite+='({0})'.format(t)
    towrite+="\n\n#endif // defined __all_functor_types_hpp__\n"
    
    with open("./Utils/include/all_functor_types.hpp","w") as f:
        f.write(towrite)
    
    # Done!!!!

# Handle command line arguments (verbosity)
if __name__ == "__main__":
   main(sys.argv[1:])

