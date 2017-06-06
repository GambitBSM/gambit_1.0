#!/usr/bin/env python
#
#   =========================================================
#   |                                                       |
#   |   CBGB - Common Block harvester for GAMBIT Backends   |
#   |                                                       |
#   =========================================================
#
#   Author: Anders Kvellestad (anders.kvellestad@nordita.org)
#

import sys
import os
from collections import OrderedDict, Counter
import importlib


print
print
print '  ~~~~  CBGB  -  Common Block harvester for GAMBIT Backends  ~~~~'
print
print


# Check that arguments list is not empty
if (len(sys.argv) < 2):

    print 'Missing input arguments.'
    print 'Usage:'
    print
    print '  python cbgb.py configs/<config_file>'
    print

    sys.exit()



#
# Get the config file name from command line and import it as the 'cfg' module.
#

# Get the config file name from command line input
input_cfg_path = sys.argv[1]

# Import the given config file as a module named 'cfg'.
input_cfg_dir, input_cfg_filename = os.path.split(input_cfg_path)
input_cfg_modulename, ext = os.path.splitext(input_cfg_filename)

import modules.active_cfg
modules.active_cfg.module_name = input_cfg_modulename

try:
    cfg = importlib.import_module("configs." + modules.active_cfg.module_name)
except ImportError as e:
    print "Failed to import config module '%s'. Are you sure the file %s exists?" % (input_cfg_modulename, os.path.join('configs', input_cfg_modulename + '.py'))
    print
    sys.exit()

import modules.gb as gb
import modules.utils as utils




#
# Check and output some info from the config file.
#

print '  Input Fortran files:'
print '  --------------------'
print
for i, src_file_name in enumerate(cfg.input_files,1):
    print '    ' + src_file_name
print
print

print '  Requested functions/subroutines:'
print '  --------------------------------'
print

f_listing = '    '
for i, f_name in enumerate(cfg.load_functions,1):
    f_listing += f_name + ', '

    if i%4==0:
        f_listing += '\n    '
print f_listing.rstrip().rstrip(',')
print

# Check for duplicates in cfg.load_functions
f_duplicates = [item for item,count in Counter(cfg.load_functions).items() if count > 1]
if len(f_duplicates) > 0:
    print "    ERROR: The following functions/subroutines appear multiple times in the list load_functions:"
    print
    for fn in f_duplicates:
        print "    - '%s'" % (fn)
    print
    print "    To list identically named functions from different modules, specify both the module name"
    print "    and the function name, separated by '::', e.g., 'some_module::some_function'."
    print

    sys.exit()
print


print '  Requested common blocks:'
print '  ------------------------'
print

cb_listing = '    '
for i, cb_name in enumerate(cfg.load_common_blocks,1):
    cb_listing += cb_name + ', '

    if i%4==0:
        cb_listing += '\n    '
print cb_listing.rstrip().rstrip(',')
print

# Check for duplicates in cfg.load_common_blocks
cb_duplicates = [item for item,count in Counter(cfg.load_common_blocks).items() if count > 1]
if len(cb_duplicates) > 0:
    print "    ERROR: The following common blocks appear multiple times in the list load_common_blocks:"
    print
    for cb in cb_duplicates:
        print "    - '%s'" % (cb)
    print

    sys.exit()
print




#
# Read input source files
#

src_content = ''
for fn in cfg.input_files:
    with open(fn,'r') as src_file:
        src_content += src_file.read()



#
# Do some reformatting of the source code:
#
# - Convert all code to lower-case. (Fortran is not case-sensitive.)
# - Replace tabs with spaces.
# - Split source code into a list of lines.
# - Remove all comments and blank lines.
# - Remove all statement labels.
# - Combine continued source lines into single lines.
# - Remove leading and trailing blanks,
#

# # Convert all source code to lower-case. (Fortran is not case-sensitive.)
# src_content = src_content.lower()

# Convert tabs to spaces.
src_content = src_content.replace('\t', ' '*cfg.tabs_to_n_spaces)

# Split source code into a list of code lines.
src_lines = src_content.splitlines()

# Remove comments.
src_lines = utils.removeComments(src_lines)

# Remove statement labels.
src_lines = utils.removeStatementLabels(src_lines)

# Remove blank lines.
src_lines = utils.removeBlankLines(src_lines)

# Join continued lines.
src_lines = utils.joinContinuedLines(src_lines)

# Remove leading and trailing blanks
src_lines = utils.removeLeadingTrailingBlanks(src_lines)

# Replace multiple spaces with single spaces.
src_lines = utils.allSingleSpace(src_lines)

# Remove keywords we don't care about.
src_lines = utils.removeKeywords(src_lines)



# Identify the various parts of the code: program, functions and subroutines.
# Return a dict with the following structure:
#  {
#   'some_subroutine_name' : { 'category'  : 'subroutine',
#                              'code_lines': [line1, line2, ...] },
#   'some_function_name'   : { ... },
#    ...
#  }
print '  Searching code...'
print '  -----------------'
print
code_parts_dict = utils.getCodeParts(src_lines, prepend_module_name=True)
print


#
# Start generation of code for GAMBIT headers
#

# Variables to store the generated code
be_types_file_content = ''
frontend_file_content = ''


# ---- Functions/subroutines ----

# Create a copy of functions list
functions_left = list(cfg.load_functions)

print '  Functions/subroutines:'
print '  ----------------------'
print

#
# Loop over code parts to extract info on functions/subroutines.
#
for code_part_name, code_dict in code_parts_dict.items():

    code_lines    = code_dict['code_lines']
    code_category = code_dict['category']
    module_name   = code_dict['module']

    # Check that this code part is a function or subroutine
    if not code_category in ['function','subroutine']:
        continue

    f_name = code_part_name
    f_name_short = f_name.split('::')[-1]


    # Check if functions with the name f_name_short exist in other modules
    other_f_list = []
    found_other_f = False
    for other_f_name in code_parts_dict.keys():

        if not code_category in ['function','subroutine']:
            continue

        # Skip identical item
        if other_f_name == f_name:
            continue

        other_f_name_short = other_f_name.split('::')[-1]

        if module_name == '':
            if other_f_name_short == f_name:
                found_other_f = True
                other_f_list.append(other_f_name)

        elif module_name != '':
            if other_f_name == f_name_short:
                found_other_f = True
                other_f_list.append(other_f_name)

            if other_f_name != other_f_name_short:
                if other_f_name_short == f_name_short:
                    found_other_f = True
                    other_f_list.append(other_f_name)


    # Should the current function be identified with one of the entries in cfg.load_functions?
    if module_name == '':

        if (f_name in cfg.load_functions) and (not found_other_f):
            is_requested = True
            use_f_name = f_name

        elif (f_name in cfg.load_functions) and (found_other_f):
            is_requested = True
            use_f_name = f_name
            # print "    INFO: Assuming the requested function '%s' does not refer to any of the following similarly named functions:" % (f_name_short)
            # for other_f in other_f_list:
            #     print "          - '%s' in module '%s'" % (f_name_short, other_f.split('::')[0])

        else:
            is_requested = False

    elif module_name != '':

        if (f_name in cfg.load_functions):
            is_requested = True
            use_f_name = f_name

        elif (f_name_short in cfg.load_functions) and (not found_other_f):
            is_requested = True
            use_f_name = f_name_short
            # print "    INFO: Assuming the requested function '%s' refers to the one found in module '%s'." % (f_name_short, module_name)

        elif (f_name_short in cfg.load_functions) and (found_other_f):
            if f_name_short in other_f_list:
                print "    INFO: Will skip %s '%s' in module '%s'. The requested '%s' is identified with a different %s." % (code_category, f_name_short, module_name, f_name_short, code_category)
                is_requested = False
            else:
                print
                print "    ERROR: The %s name '%s' listed in load_functions is ambiguous. The following candidates have been identified:" % (code_category, f_name_short)
                print
                print "    - '%s' in module '%s'" % (f_name_short, module_name)
                for other_f in other_f_list:
                    print "    - '%s' in module '%s'" % (f_name_short, other_f.split('::')[0])
                print
                print "    Please specify both the module name and the %s name, separated by '::', e.g., 'some_module::some_%s'." % (code_category, code_category)
                print
                sys.exit()
        else:
            is_requested = False


    if is_requested:

        if module_name != '':
            print "    Found %s: '%s' in module '%s'" % (code_category, f_name_short, module_name)
        else:
            print "    Found %s: '%s'" % (code_category, f_name_short)

        # If function, get info on return type
        if code_category == 'function':
            return_type_info = utils.getFunctionReturnType(code_lines)


        # Get dictionary with parameter definitions
        parameter_defs = utils.getParameterDefs(code_lines)

        # Get list of argument names
        arg_names = utils.getFunctionArgumentNames(code_lines[0])

        # Get dict of dicts with info on the arguments
        arg_info_dict = utils.getVariablesDict(code_lines[1:], arg_names)

        # Construct a dict with all the info required to generate code for the GAMBIT frontend header
        f_dict = OrderedDict()
        f_dict['name'] = f_name_short
        if code_category == 'function':
            f_dict['return_type_info'] = return_type_info
        f_dict['category'] = code_category
        f_dict['arg_info'] = OrderedDict(arg_info_dict)
        f_dict['module'] = module_name

        # Generate code for the frontend header
        frontend_file_content += utils.generateFrontendFunction(f_dict, parameter_defs)

        # Remove function from list of functions remaining.
        functions_left.remove(use_f_name)

print
print

# ---- Common blocks ----

# Create a copy of common block list
common_blocks_left = list(cfg.load_common_blocks)

#
# Loop over code parts to extract info on common blocks.
#

print '  Common blocks:'
print '  --------------'
print
for code_part_name, code_dict in code_parts_dict.items():

    code_lines    = code_dict['code_lines']
    code_category = code_dict['category']

    # Get list of dicts with info on all common blocks in this code part.
    cb_dicts = utils.getCommonBlockDicts(code_lines)

    # Get dictionary with parameter definitions
    parameter_defs = utils.getParameterDefs(code_lines)


    # Loop over the common blocks found.
    for cb_dict in cb_dicts:

        if cb_dict['name'] in common_blocks_left:

            print "    In code part '%s': Found common block: '%s'" % (code_part_name, cb_dict['name'])

            # Get dict of dicts with info on the member variables for this common block.
            var_info_dict = utils.getVariablesDict(code_lines, cb_dict['member_names'])

            # Generate code for the backend types header.
            be_types_file_content += utils.generateTypeDeclCommonBlock(cb_dict, var_info_dict, parameter_defs)

            # Generate code for the frontend header.
            frontend_file_content += utils.generateFrontendCommonBlock(cb_dict)

            # Remove common block from list of blocks remaining.
            common_blocks_left.remove(cb_dict['name'])

    #
    # END: loop over common blocks in this code part
    #

    # Break out if all reqested blocks are done.
    if len(common_blocks_left) == 0:
        break

#
# END: loop over code parts
#

# Encapsulate backend types code in a Gambit namespace
be_types_file_content = utils.addNamespace(be_types_file_content, 'Gambit', indent=4)

# Write output files
with open(gb.output_file_path_be_types, 'w') as out_file_be_types:
    out_file_be_types.write('\n')
    out_file_be_types.write(be_types_file_content)

with open(gb.output_file_path_frontend, 'w') as out_file_frontend:
    out_file_frontend.write('\n')
    out_file_frontend.write(frontend_file_content)

# Print summary
print
print
print '  Summary:'
print '  --------'

# Check that all requested functions were found.
if len(functions_left) > 0:
    print
    for f_name in functions_left:
        print "    WARNING: Reqested function/subroutine '%s' was not found." % f_name

# Check that all requested common blocks were found.
if len(common_blocks_left) > 0:
    print
    for cb_name in common_blocks_left:
        print "    WARNING: Reqested common block '%s' was not found." % cb_name

print
print '    Generated code for GAMBIT written to files:'
print
print '    - ' + gb.output_file_path_frontend
print '    - ' + gb.output_file_path_be_types
print

print
print '  ~~~~  Done!  ~~~~'
print
print

