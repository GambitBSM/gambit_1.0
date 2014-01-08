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
#  (see Utils/include/printers.hpp)  
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
#
#*********************************************
import os
import re
import datetime
import sys

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
    splitline = neatsplit('\s|\(|\)|\*|\&',input_snippet)
    if len(splitline)>1:
        # If the local namespace matches the module name, and the candidate type is declared here, qualify it
        if local_namespace==module:
            if splitline[0] in ["class", "struct"] and candidate_type==splitline[1]:
                return local_namespace+"::"+candidate_type
            if len(splitline)>2:
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
def addifheader(line,headerset):
    splitline = line.split()
    if len(splitline)>1 and splitline[0]=="#include":
        #dig the file name out of the enclosing <> or "" 
        split2 = neatsplit('"|<|>',splitline[1])
        headerset.add(split2[0])

# Harvest type from a START_FUNCTION macro call
def update_module(line,module):
    splitline = neatsplit('\(|\)|,|\s',line)
    if len(splitline)>2:
        if splitline[0]=="#define" and splitline[1]=="MODULE":
            #This line defines a module, return its name instead of bothering to look for a START_FUNCTION
            return splitline[2]
    return module

# Harvest type from a START_FUNCTION macro call
def addiffunctormacro(line,module,typeset,typeheaders):
    splitline = neatsplit('\(|\)|,|\s',line)
    if len(splitline)>0 and splitline[0]=="START_FUNCTION":
        #This line defines a function, so the first argument defines a candidate type
        candidate_type = splitline[1]
        #Now check if the type is declared in any of the module type headers (not very efficient, but simple)
        # FIXME: what if that type is -not- declared?? The harvester is finding dummy types which are commented out
        #        in HEColliderBit_rollcall.hpp and -not- defined in any header. It causes the compilation to crash.
        #        Please fix. I would, but I'm not sure I wouldn't break the harvester...  --Abram
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
        typeset.add(candidate_type)                    


# List of headers NOT to search (things we know are not module rollcall headers or module type headers, 
# but are included in module_rollcall.hpp or types_rollcall.hpp)
#if len(sys.argv) > 1 and sys.argv[1] == 'smashCrashBashBangBoom':
exclude_header=set(["module_macros_incore.hpp", "shared_types.hpp"])
#else:
#  exclude_header=set(["module_macros_incore.hpp", "shared_types.hpp", "HEColliderBit_rollcall.hpp", "HEColliderBit_types.hpp"])

# List of types NOT to return (things we know are not printable, but can appear in START_FUNCTION calls)
exclude_type=set(["void"])

# Harvest the list of rollcall headers to be searched, and the list of type headers to be searched.
# FIXME this should be made recursive, in case someone
# has so many rollcall or type definitions they put them in
# multiple files
headers=set()
type_headers=set()
with open("Core/include/module_rollcall.hpp") as f:
    for line in readlines_nocomments(f):
        addifheader(line,headers)        
with open("Core/include/types_rollcall.hpp") as f:
    for line in readlines_nocomments(f):
        addifheader(line,type_headers)        

# Remove excluded headers from the set
headers.difference_update(exclude_header)
type_headers.difference_update(exclude_header)

# Determine the paths of the harvested headers    
fullheaders=[]
fulltypeheaders=[]
for header in headers:
    # Locate the header in the GAMBIT directory structure...
    # (we should technically search all the include paths in the make file; could pass these in to this script)
    for root,dirs,files in os.walk("."):
        for name in files:
            if name==header:
                fullheaders+=[os.path.join(root,name)]
for header in type_headers:
    # Locate the header in the GAMBIT directory structure...
    # (we should technically search all the include paths in the make file; could pass these in to this script)
    for root,dirs,files in os.walk("."):
        for name in files:
            if name==header:
                fulltypeheaders+=[os.path.join(root,name)]
    
# Search through rollcall headers and look for macro calls which create 'module_functor's     
types=set(["ModelParameters"]) #Manually add this one to avoid scanning through modelbit
for header in fullheaders:
    with open(header) as f:
        print "Scanning header {0}".format(header)
        module = ""
        for line in readlines_nocomments(f):
            # If this line defines the module name, update it.
            module = update_module(line,module)
            # Check for calls to functor creation macros, and harvest the types used.
            addiffunctormacro(line,module,types,fulltypeheaders)

# Remove excluded types from the set
types.difference_update(exclude_type)

print "\nTypes harvested from headers:"
for t in types:
    print '   ',t

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
///  functor_type_harvester.py. Do not modify.    \n\
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

# Done!


