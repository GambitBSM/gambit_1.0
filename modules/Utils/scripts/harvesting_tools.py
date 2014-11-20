#!/bin/python
#
# GAMBIT: Global and Modular BSM Inference Tool
#*********************************************
# \file
#
#  Tools for harvester scripts.
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
def addifheader(line,headerset,exclude_set,verbose=False):
    splitline = line.split()
    if len(splitline)>1 and splitline[0]=="#include":
        #dig the file name out of the enclosing <> or "" 
        split2 = neatsplit('"|<|>',splitline[1])
        split3 = neatsplit('/',split2[0])
        if split2[0] not in exclude_set and split3[-1] not in exclude_set:
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
def addiffunctormacro(line,module,typeset,typeheaders,intrinsic_types,exclude_types,verbose=False):

    command_index = {"START_FUNCTION":1,
                     "QUICK_FUNCTION":5, 
                     "DEPENDENCY":2, 
                     "START_CONDITIONAL_DEPENDENCY":1,
                     "BE_INI_DEPENDENCY":2,
                     "BE_INI_CONDITIONAL_DEPENDENCY":2}
    splitline = neatsplit('\(|\)|,|\s',line)

    if len(splitline)>1 and splitline[0] in command_index.keys():
        #This line defines a function and one or more of the arguments defines a candidate type
        candidate_types = set([splitline[command_index[splitline[0]]]])
        if splitline[0]=="QUICK_FUNCTION" and len(splitline)>6:
            #Get the dep types out of a QUICK_FUNCTION command
            splitline = re.findall("\(.*?\)",re.sub("QUICK_FUNCTION\(", "", re.sub("\)\)\s*$",")",line) ) )
            for dep in splitline[1:]: 
              splitdep = neatsplit('\(|\)|,',dep)
              candidate_types.add(splitdep[1].strip())
        # Remove excluded types from the set
        candidate_types.difference_update(exclude_types)

        #Iterate over all the candidate types and check if they are defined.
        for candidate_type in candidate_types:
            #Skip out now if the type is already found.
            if (candidate_type in typeset or
                module+"::"+candidate_type in typeset or
                "Gambit::"+module+"::"+candidate_type in typeset): continue            
            #If the type is not an intrinsic, check if it is declared in any of the module type headers
            if (candidate_type not in intrinsic_types):
                if verbose: print "    {0} located, searching for declaration of {1}...".format(line.strip(),candidate_type)
                for header in typeheaders:
                    local_namespace = ""
                    with open(header) as f:
                        for newline in readlines_nocomments(f):
                            splitline = neatsplit('\{|\}|:|;',newline)
                            # Determine the local namespace and look for a class or struct matching the candidate type 
                            for i in range(5):
                                if len(splitline)>i:
                                    local_namespace = check_for_namespace(splitline[i],local_namespace)
                                    candidate_type = check_for_declaration(splitline[i],module,local_namespace,candidate_type)
                            # Ben: The loop above misses some of the typedefs, so need to re-parse the whole line for these
                            candidate_type = check_for_declaration(newline,module,local_namespace,candidate_type)
            typeset.add(candidate_type)                 

# Harvest the list of rollcall headers to be searched, and the list of type headers to be searched.
def get_headers(path,header_set,exclude_set,verbose=False):
    """Parse the file at 'path' and add any headers that are "include"ed therin to the set 'header_set'"""
    with open(path) as f:
        #print "  Parsing header '{0}' for further includes...".format(path)
        for line in readlines_nocomments(f):
            addifheader(line,header_set,exclude_set,verbose=verbose)        

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
                if os.path.join(root,name).endswith(header):
                    if verbose: print "  Located header '{0}' at path '{1}'".format(name,os.path.join(root,name))
                    full_header_paths+=[os.path.join(root,name)]

    # Add newly found paths to output list
    fullheadlist+=full_header_paths

    new_headers=set() 
    for path in full_header_paths:
        get_headers(path,new_headers,exclude_set,verbose=verbose)

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
def retrieve_rollcall_headers(verbose,install_dir,excludes):
    rollcall_headers=[]
    core_exists = False
    for root,dirs,files in os.walk(install_dir):
        if (not core_exists and root == install_dir+"/Core/include"): core_exists = True 
        for name in files:
            if ( (name.lower().endswith("_rollcall.hpp") or
                  name.lower().endswith("_rollcall.h")   or
                  name.lower().endswith("_rollcall.hh")     ) and name.lower().find("bit") != -1):
                exclude = False
                bare_name = re.sub(".*_rollcall\\.[h|hpp|hh]$","",name)
                for x in excludes:
                    if bare_name.startswith(x): exclude = True
                if (not exclude): 
                    if verbose: print "  Located module rollcall header '{0}' at path '{1}'".format(name,os.path.join(root,name))
                    rollcall_headers+=[name]
    if core_exists: make_module_rollcall(rollcall_headers,verbose)
    return rollcall_headers

#Search the source tree to determine which modules type headers are present. 
def retrieve_module_type_headers(verbose,install_dir,excludes):
    type_headers=[]
    for root,dirs,files in os.walk(install_dir):
        for name in files:
            if ( (name.lower().endswith("_types.hpp") or
                  name.lower().endswith("_types.h")   or
                  name.lower().endswith("_types.hh")     ) and name.lower().find("bit") != -1):
                exclude = False
                bare_name = re.sub(".*_types\\.[h|hpp|hh]$","",name)
                for x in excludes:
                    if bare_name.startswith(x): exclude = True
                if (not exclude): 
                    if verbose: print "  Located module type header '{0}' at path '{1}'".format(name,os.path.join(root,name))
                    type_headers+=[name]
    return type_headers

#Search a directory for BOSSed headers that are not excluded.
def retrieve_bossed_type_headers(verbose,starting_dir,excludes):
    headers=[]
    for root,dirs,files in os.walk(starting_dir):
        for name in files:
            exclude = False
            be = re.sub(".*\\/","",root)
            for x in excludes:
                if be.startswith(x): exclude = True
            if not exclude and (name=="loaded_types.hpp" or name=="loaded_types.h" or name=="loaded_types.hh"): 
                if verbose: print "  Located BOSSed type header at path '{1}'".format(name,os.path.join(root,name))
                headers+=["backend_types/"+be+"/"+name]
    return headers

#Search a directory for headers that are not excluded.
def retrieve_generic_headers(verbose,starting_dir,kind,excludes):
    headers=[]
    for root,dirs,files in os.walk(starting_dir):
        for name in files:
            exclude = False
            for x in excludes:
                if name.startswith(x): exclude = True
            if not exclude and (name.endswith(".hpp") or name.endswith(".h") or name.endswith(".hh")): 
                if verbose: print "  Located "+kind+" header '{0}' at path '{1}'".format(name,os.path.join(root,name))
                headers+=[name]
        break
    return headers

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

    if verbose: print "Found GAMBIT Core.  Generated module_rollcall.hpp.\n" 


