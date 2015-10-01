######################################
#                                    #
#  File handling functions for BOSS  #
#                                    #
######################################

import xml.etree.ElementTree as ET
from collections import OrderedDict
import os
import warnings
import subprocess
import shutil
import glob
import pickle

import modules.cfg as cfg
import modules.gb as gb
import modules.utils as utils
import modules.funcutils as funcutils
import modules.infomsg as infomsg


# ====== createOutputDirectories ========

# Creates the directory structure for the files generate by BOSS.
# Base directory is cfg.extra_output_dir.

def createOutputDirectories(selected_dirs=['all']):

    if ('extra_output_dir' in selected_dirs) or ('all' in selected_dirs):
        try:
            os.mkdir(cfg.extra_output_dir)
        except OSError, e:
            if e.errno == 17:
                pass
            else:
                raise

    if ('temp' in selected_dirs) or ('all' in selected_dirs):
        if gb.boss_temp_dir != '':
            try:
                os.mkdir(gb.boss_temp_dir)
            except OSError, e:
                if e.errno == 17:
                    pass
                else:
                    raise

    if ('backend_types_basedir' in selected_dirs) or ('all' in selected_dirs):
        if gb.gambit_backend_types_basedir != '':
            try:
                os.mkdir( os.path.join(cfg.extra_output_dir, gb.gambit_backend_types_basedir) )
            except OSError, e:
                if e.errno == 17:
                    pass
                else:
                    raise
    if ('gambit_backend_dir_complete' in selected_dirs) or ('all' in selected_dirs):
        try:
            os.mkdir( gb.gambit_backend_dir_complete )
        except OSError, e:
            if e.errno == 17:
                pass
            else:
                raise

    if ('gambit_frontend_dir_complete' in selected_dirs) or ('all' in selected_dirs):
        try:
            os.mkdir( gb.gambit_frontend_dir_complete )
        except OSError, e:
            if e.errno == 17:
                pass
            else:
                raise

# ====== END: createOutputDirectories ========



# ====== moveFilesAround ========

# Move files to their correct subdirectories within cfg.extra_output_dir.

def moveFilesAround():

    # - To gb.gambit_backend_dir_complete
    move_files_list  = []

    # -- abstract class headers    
    move_files_list += glob.glob( os.path.join(cfg.extra_output_dir, cfg.abstr_header_prefix + '*') )

    # -- wrapper class headers
    move_files_list += glob.glob( os.path.join(cfg.extra_output_dir, cfg.wrapper_header_prefix + '*') )

    # -- header with forward declarations for all abstract classes
    move_files_list += [ os.path.join(cfg.extra_output_dir, gb.frwd_decls_abs_fname + cfg.header_extension) ]

    # -- header with forward declarations for all wrapper classes
    move_files_list += [ os.path.join(cfg.extra_output_dir, gb.frwd_decls_wrp_fname + cfg.header_extension) ]

    # # -- header with copies of all enum type declarations
    # move_files_list += [ os.path.join(cfg.extra_output_dir, gb.enum_decls_wrp_fname + cfg.header_extension) ]

    # -- identification.hpp
    move_files_list += [ os.path.join(cfg.extra_output_dir, 'identification.hpp') ]    

    for mv_file in move_files_list:
        shutil.move(mv_file, gb.gambit_backend_dir_complete)

# ====== END: moveFilesAround ========



# ====== createCommonHeaders ========

# Copy header files from common_headers/ to cfg.extra_output_dir
# and replace any code template tags with proper code

def createCommonHeaders():

    # - abstractbase.hpp
    if len(gb.classes_done) > 0:
        source_file_name = 'common_headers/abstractbase.hpp'
        target_file_name = os.path.join(cfg.extra_output_dir, 'abstractbase.hpp')
        shutil.copyfile(source_file_name, target_file_name)


    # - wrapperbase.hpp

    if len(gb.classes_done) > 0:
        source_file_name = 'common_headers/wrapperbase.hpp'
        target_file_name = os.path.join(cfg.extra_output_dir, 'wrapperbase.hpp')

        new_content = utils.replaceCodeTags(source_file_name, file_input=True)

        f_target = open(target_file_name, 'w')
        f_target.write(new_content)
        f_target.close()


    # - identification.hpp

    source_file_name = 'common_headers/identification.hpp'
    target_file_name = os.path.join(cfg.extra_output_dir, 'identification.hpp')

    new_content = utils.replaceCodeTags(source_file_name, file_input=True)

    f_target = open(target_file_name, 'w')
    f_target.write(new_content)
    f_target.close()


    # - cats.hpp

    source_file_name = 'common_headers/cats.hpp'
    target_file_name = os.path.join(cfg.extra_output_dir, 'cats.hpp')    
    shutil.copyfile(source_file_name, target_file_name)    
    

    # - backend_undefs.hpp

    source_file_name = 'common_headers/backend_undefs.hpp'
    target_file_name = os.path.join(cfg.extra_output_dir, 'backend_undefs.hpp')    
    shutil.copyfile(source_file_name, target_file_name)    


    # - function_return_utils.hpp
    if len(gb.functions_done) > 0:
        source_file_name = 'common_headers/function_return_utils.hpp'
        target_file_name = os.path.join(cfg.extra_output_dir, 'function_return_utils.hpp')    
        shutil.copyfile(source_file_name, target_file_name)    


# ====== END: createCommonHeaders ========



# ====== createCommonSourceFiles ========

# Copy source files from common_source_files/ to cfg.extra_output_dir
# and replace any code template tags with proper code

def createCommonSourceFiles():

    # - function_return_utils.cpp
    if len(gb.functions_done) > 0:
        source_file_name = 'common_source_files/function_return_utils.cpp'
        target_file_name = os.path.join(cfg.extra_output_dir, gb.func_return_utils_fname + cfg.source_extension)    
        shutil.copyfile(source_file_name, target_file_name)    


# ====== END: createCommonSourceFiles ========



# ====== replaceNamespaceTags ========

# Run through a list of files and use code tags open_tag and close_tag
# to construct the namespace constr_namespace.

def replaceNamespaceTags(files_list, constr_namespace, open_tag, close_tag):

    for file_path in files_list:

        if not os.path.isfile(file_path):
            continue

        f = open(file_path, 'r')
        content = f.read()
        f.close()

        new_content = utils.constrNamespaceFromTags(content, constr_namespace, open_tag, close_tag)

        f = open(file_path, 'w')
        f.write(new_content)
        f.close()

# ====== END: replaceNamespaceTags ========



# ====== removeCodeTagsFromFiles ========

# Run through a list of files and remove code tags.

def removeCodeTagsFromFiles(files_list, remove_tags_list):

    for file_path in files_list:

        if not os.path.isfile(file_path):
            continue

        # Read file.
        f = open(file_path, 'r')
        content = f.read()
        f.close()

        # Generate new file content by removing code tags.
        new_content = utils.removeCodeTags(content, remove_tags_list)

        # Write new content to file.
        f = open(file_path,'w')
        f.write(new_content)
        f.close()

# ====== END: removeCodeTagsFromFiles ========



# ====== copyFilesToSourceTree ========

# Copy generated files to original source tree.

def copyFilesToSourceTree(verbose=False):

    # Construct a list of (source,target) tuples for all copy operations.
    source_target_tuples = []

    # Lists of file paths. One list for original files that BOSS edit, 
    # and one for new files created by BOSS.
    manipulated_files = []
    new_files = []

    # - Add all manipulated original files
    for original_file_short_name, original_file_full_path in gb.original_file_paths.items():

        cp_source = os.path.join(cfg.extra_output_dir,original_file_short_name)
        cp_target = original_file_full_path
        source_target_tuples.append( (cp_source, cp_target) )
        manipulated_files.append(cp_target)

    # - Add factory source files
    for class_name in gb.classes_done:

        factory_source_fname_short = cfg.factory_file_prefix + class_name['short'] + cfg.source_extension

        cp_source = os.path.join(cfg.extra_output_dir, factory_source_fname_short)
        cp_target = os.path.join(cfg.source_path, factory_source_fname_short)
        source_target_tuples.append( (cp_source, cp_target) )
        new_files.append(cp_target)

    # - Add source files for wrapper versions of global functions
    for func_name in gb.functions_done:

        source_file_path = gb.function_file_dict[func_name['long_templ_args']]
        source_file_name = os.path.basename(source_file_path)

        # function_source_fname_short = cfg.function_files_prefix + func_name['short'] + gb.code_suffix + cfg.source_extension

        # cp_source = os.path.join(cfg.extra_output_dir, function_source_fname_short)
        cp_source = os.path.join(source_file_path)
        # cp_target = os.path.join(cfg.source_path, function_source_fname_short)
        cp_target = os.path.join(cfg.source_path, source_file_name)
        source_target_tuples.append( (cp_source, cp_target) )
        new_files.append(cp_target)

    # - Add 'extras' source files (containing implementations for the helper functions that BOSS adds to the original classes)
    for class_name in gb.classes_done:

        extra_source_fname_short = class_name['short'] + '_extras' + gb.code_suffix + cfg.source_extension

        cp_source = os.path.join(cfg.extra_output_dir, extra_source_fname_short)
        cp_target = os.path.join(cfg.source_path, extra_source_fname_short)
        source_target_tuples.append( (cp_source, cp_target) )
        new_files.append(cp_target)

    # - Add standard BOSS files that are to be copied to the original source tree

    # -- abstractbase.hpp
    cp_source = os.path.join(cfg.extra_output_dir, 'abstractbase.hpp')
    cp_target = os.path.join(cfg.include_paths[0], gb.gambit_backend_incl_dir, 'abstractbase.hpp')
    source_target_tuples.append( (cp_source, cp_target) )
    new_files.append(cp_target)
    
    # -- abstracttypedefs.hpp
    cp_source = os.path.join(cfg.extra_output_dir, gb.abstract_typedefs_fname + cfg.header_extension)
    cp_target = os.path.join(cfg.include_paths[0], gb.gambit_backend_incl_dir, gb.abstract_typedefs_fname + cfg.header_extension)
    source_target_tuples.append( (cp_source, cp_target) )
    new_files.append(cp_target)

    # -- backend_undefs.hpp
    cp_source = os.path.join(cfg.extra_output_dir, 'backend_undefs.hpp')
    cp_target = os.path.join(cfg.include_paths[0], gb.gambit_backend_incl_dir, 'backend_undefs.hpp')
    source_target_tuples.append( (cp_source, cp_target) )
    new_files.append(cp_target)

    # -- cats.hpp
    cp_source = os.path.join(cfg.extra_output_dir, 'cats.hpp')
    cp_target = os.path.join(cfg.include_paths[0], gb.gambit_utils_incl_dir, 'cats.hpp')
    source_target_tuples.append( (cp_source, cp_target) )
    new_files.append(cp_target)

    # -- wrapperbase.hpp
    if len(gb.classes_done) > 0:
        cp_source = os.path.join(cfg.extra_output_dir, 'wrapperbase.hpp')
        cp_target = os.path.join(cfg.include_paths[0], gb.gambit_backend_incl_dir, 'wrapperbase.hpp')
        source_target_tuples.append( (cp_source, cp_target) )
        new_files.append(cp_target)

    # -- wrapperdeleter.hpp
    if len(gb.classes_done) > 0:
        cp_source = os.path.join(cfg.extra_output_dir, gb.wrapper_deleter_fname + cfg.header_extension)
        cp_target = os.path.join(cfg.include_paths[0], gb.gambit_backend_incl_dir, gb.wrapper_deleter_fname + cfg.header_extension)
        source_target_tuples.append( (cp_source, cp_target) )
        new_files.append(cp_target)

    # -- function_return_utils.hpp
    if len(gb.functions_done) > 0:
        cp_source = os.path.join(cfg.extra_output_dir, 'function_return_utils.hpp')
        cp_target = os.path.join(cfg.include_paths[0], gb.gambit_backend_incl_dir, 'function_return_utils.hpp')
        source_target_tuples.append( (cp_source, cp_target) )
        new_files.append(cp_target)

    # -- wrappertypedefs.hpp
    if len(gb.classes_done) > 0:
        cp_source = os.path.join(cfg.extra_output_dir, gb.wrapper_typedefs_fname + cfg.header_extension)
        cp_target = os.path.join(cfg.include_paths[0], gb.gambit_backend_incl_dir, gb.wrapper_typedefs_fname + cfg.header_extension)
        source_target_tuples.append( (cp_source, cp_target) )
        new_files.append(cp_target)

    # -- wrapperdeleter.cpp
    if len(gb.classes_done) > 0:
        cp_source = os.path.join(cfg.extra_output_dir, gb.wrapper_deleter_fname + cfg.source_extension)
        cp_target = os.path.join(cfg.source_path, gb.wrapper_deleter_fname + cfg.source_extension)
        source_target_tuples.append( (cp_source, cp_target) )
        new_files.append(cp_target)

    # -- function_return_utils.cpp
    if len(gb.functions_done) > 0:
        cp_source = os.path.join(cfg.extra_output_dir, gb.func_return_utils_fname + cfg.source_extension)
        cp_target = os.path.join(cfg.source_path, gb.func_return_utils_fname + cfg.source_extension)
        source_target_tuples.append( (cp_source, cp_target) )
        new_files.append(cp_target)

    # - Add all files in the backend_types/ directory. 
    #   Will create a similar directory in the include path of the original source tree
    if len(gb.classes_done) > 0:    
        source_dir = os.path.join(cfg.extra_output_dir, gb.gambit_backend_types_basedir, gb.gambit_backend_name_full)
        target_dir = os.path.join(cfg.include_paths[0], gb.gambit_backend_types_basedir, gb.gambit_backend_name_full)
        source_files = [ os.path.join(source_dir,f) for f in os.listdir(source_dir) if os.path.isfile( os.path.join(source_dir,f) ) ]
        for file_path in source_files:
            target_file_name = os.path.basename(file_path)
            cp_source = file_path
            cp_target = os.path.join(cfg.include_paths[0], gb.gambit_backend_types_basedir, gb.gambit_backend_name_full, target_file_name)
            source_target_tuples.append( (cp_source, cp_target) )
            new_files.append(cp_target)

    # Perform copy operations
    for cp_source, cp_target in source_target_tuples:

        is_dir = False
        if os.path.isfile(cp_source):
            target_dir_name = os.path.dirname(cp_target)
            if not os.path.exists(target_dir_name): 
                os.makedirs(target_dir_name)
            shutil.copyfile(cp_source, cp_target)

        elif os.path.isdir(cp_source):
            shutil.copytree(cp_source, cp_target)
            is_dir = True

        else:
            continue

        if verbose: 
            n_spaces = 2
            sep = 50
            while n_spaces == 2:
                n_spaces = max(sep-len(cp_source), 2)
                sep += 20
            print '  ' + cp_source + ' '*n_spaces  + '--->   ' + cp_target + '  (directory)'*is_dir


    # Construct list of new directories
    new_dirs = [ 
                  os.path.join(cfg.include_paths[0], gb.gambit_backend_incl_dir),
                  os.path.join(cfg.include_paths[0], gb.gambit_utils_incl_dir),
                  os.path.join(cfg.include_paths[0], gb.gambit_backend_types_basedir, gb.gambit_backend_name_full),
               ]    

    # Return the list of manipulated file, new files and new directories
    return manipulated_files, new_files, new_dirs

# ====== END: copyFilesToSourceTree ========



# ====== parseFactoryFunctionFiles ========

# Parse the factory function source files using gccxml.
# The harvested information will later be used to 
# generate the file loaded_types.hpp

def parseFactoryFunctionFiles():

    factory_xml_files = OrderedDict()

    for class_name in gb.classes_done:

        # Check that this class has a factory file and get the path
        if class_name['long_templ'] not in gb.class_factory_file_dict.keys():
            continue
        factory_source_dir, factory_source_fname = os.path.split( gb.class_factory_file_dict[class_name['long_templ']] )
        factory_source_path = os.path.join(cfg.source_path, factory_source_fname)

        # Construct file name for xml file produced by gccxml
        xml_output_path = os.path.join(gb.boss_temp_dir, factory_source_path.replace('/','_').replace('.','_') + '.xml' )

        # List all include paths
        # include_paths_list = [cfg.include_path] + cfg.additional_include_paths

        # Timeout limit and process poll interval [seconds]
        timeout = 20.
        poll = 0.2

        # Run gccxml
        try:
            utils.gccxmlRunner(factory_source_path, cfg.include_paths, xml_output_path, timeout_limit=timeout, poll_interval=poll)
        except:
            raise

        # Add factory xml file to dict
        factory_xml_files[class_name['long']] = xml_output_path

    return factory_xml_files
    
# ====== END: parseFactoryFunctionFiles ========



# ====== createLoadedTypesHeader ========

# Generate the header file loaded_types.hpp. This header will 
# contain the symbol names and function signatures for all 
# the generated factory functions.

def createLoadedTypesHeader(factory_xml_files_dict):

    # First update the 'symbol' entry in the dictionaries containing the factory function info
    for class_name in gb.classes_done:

        # If there are no factory functions for this class, move on
        if class_name['long'] not in gb.factory_info.keys():
            continue

        # Set useful variables
        xml_file = factory_xml_files_dict[class_name['long']]
        info_dicts_list = gb.factory_info[class_name['long']]

        # Get all function elements in the xml file
        factory_func_elements = OrderedDict()
        tree = ET.parse(xml_file)
        root = tree.getroot()
        for func_el in root.findall('Function'):
            func_name = func_el.get('name')
            factory_func_elements[func_name] = func_el

        for info_dict in info_dicts_list:

            factory_el = factory_func_elements[ info_dict['name'] ]
            info_dict['symbol'] = factory_el.get('mangled')
    
    # Generate the code for loaded_types.hpp
    loaded_types_header_content = utils.constrLoadedTypesHeaderContent()

    # Write to file
    loaded_types_output_path = os.path.join(gb.gambit_backend_dir_complete, 'loaded_types.hpp')
    f = open(loaded_types_output_path, 'w')
    f.write(loaded_types_header_content)
    f.close()

# ====== END: createLoadedTypesHeader ========



# ====== parseFunctionSourceFiles ========

# Parse the global function source files using gccxml.
# The harvested information will later be used to 
# generate the GAMBIT frontend header file.

def parseFunctionSourceFiles():

    function_xml_files = OrderedDict()

    for func_name in gb.functions_done:

        # Check that this function has a source file and get the path
        if func_name['long_templ_args'] not in gb.function_file_dict.keys():
            continue
        function_source_dir, function_source_fname = os.path.split( gb.function_file_dict[func_name['long_templ_args']] )
        function_source_path = os.path.join(cfg.source_path, function_source_fname)


        # Construct file name for xml file produced by gccxml
        xml_output_path = os.path.join(gb.boss_temp_dir, function_source_path.replace('/','_').replace('.','_') + '.xml' )

        # List all include paths
        # include_paths_list = [cfg.include_path] + cfg.additional_include_paths

        # Timeout limit and process poll interval [seconds]
        timeout = 20.
        poll = 0.2

        # Run gccxml
        try:
            utils.gccxmlRunner(function_source_path, cfg.include_paths, xml_output_path, timeout_limit=timeout, poll_interval=poll)
        except:
            raise

        # Add factory xml file to dict
        function_xml_files[func_name['long_templ_args']] = xml_output_path

    return function_xml_files
    
# ====== END: parseFunctionSourceFiles ========



# ====== createFrontendHeader ========

# Generate the header file loaded_types.hpp. This header will 
# contain the symbol names and function signatures for all 
# the generated factory functions.

def createFrontendHeader(function_xml_files_dict):

    # Read all xml files
    utils.xmlFilesToDicts(function_xml_files_dict.values())


    #
    # Generate code for all the BE_FUNCTION macros
    #

    be_function_macro_code = ''

    for func_name in gb.functions_done:

        # Set useful variables
        xml_file = function_xml_files_dict[func_name['long_templ_args']]

        # If new xml file, initialise global dicts
        if xml_file != gb.xml_file_name:
            gb.xml_file_name = xml_file
            utils.initGlobalXMLdicts(xml_file, id_and_name_only=True)
    
       
        # Get wrapper function element
        tree = ET.parse(xml_file)
        root = tree.getroot()
        wr_func_el = None

        for el in root.findall('Function'):

            if el.get('name') == func_name['wr_name']:
                wr_func_el = el

        if wr_func_el is None:
            continue

        # Get information about the return type.
        return_type_dict = utils.findType(wr_func_el)
        return_el     = return_type_dict['el']
        pointerness   = return_type_dict['pointerness']
        is_ref        = return_type_dict['is_reference']
        return_kw     = return_type_dict['cv_qualifiers']
        
        return_kw_str = ' '.join(return_kw) + ' '*bool(len(return_kw))

        return_type   = return_type_dict['name'] + '*'*pointerness + '&'*is_ref

        # Construct argument bracket
        args = funcutils.getArgs(wr_func_el)
        args_bracket = funcutils.constrArgsBracket(args, include_arg_name=False, include_arg_type=True, include_namespace=True)

        # Get mangled symbol
        symbol = wr_func_el.get('mangled')

        be_function_macro_code += 'BE_FUNCTION(' 
        be_function_macro_code += func_name['short'] + ', ' 
        be_function_macro_code += return_type + ', '
        be_function_macro_code += args_bracket + ', '
        be_function_macro_code += '"' + symbol + '"' + ', '
        be_function_macro_code += '"' + func_name['short'] + '"' + ')\n'


    #
    # Generate code for the frontend header
    #

    frontend_content = ''

    # - Comment at beginning
    backend_name_and_version = cfg.gambit_backend_name + ' ' + cfg.gambit_backend_version
    frontend_content += '//\n'
    frontend_content += '// Frontend header generated by BOSS for GAMBIT backend %s.\n' % (backend_name_and_version)
    frontend_content += '//\n'

    # - Include statement for the identification header
    frontend_content += '\n'
    frontend_content += '#include "' + os.path.join(gb.gambit_backend_incl_dir, gb.gambit_backend_types_basedir, gb.gambit_backend_name_full, 'identification.hpp') + '"\n'
   
    # - LOAD_LIBRARY macro
    frontend_content += '\n'
    frontend_content += 'LOAD_LIBRARY\n'

    # - BE_FUNCTION macros
    frontend_content += '\n'
    frontend_content += '// Functions\n'
    frontend_content += be_function_macro_code

    # - Descriptions of different things that can go into a frontend header
    frontend_content += '// Variables\n'
    frontend_content += '\n'
    frontend_content += '// Initialisation function (dependencies)\n'
    frontend_content += '\n'
    frontend_content += '// Convenience functions (registration)\n'
    frontend_content += '\n'
    frontend_content += '// Initialisation function (definition)\n'
    frontend_content += 'BE_INI_FUNCTION{} END_BE_INI_FUNCTION\n'
    frontend_content += '\n'
    frontend_content += '// Convenience functions (definitions)\n'
    
    # - Include statement for backend_undefs.hpp
    frontend_content += '\n'
    frontend_content += '// End\n'
    frontend_content += '#include "' + os.path.join(gb.gambit_backend_incl_dir, 'backend_undefs.hpp') + '"\n'


    # Write to file
    f = open(gb.frontend_path, 'w')
    f.write(frontend_content)
    f.close()

# ====== END: createFrontendHeader ========



# ====== resetSourceCode ========

# Undo changes to a BOSSed source tree.
# Files for which a .backup.boss version exists will be reset,
# while all new files created by BOSS will be deleted.

def resetSourceCode(reset_info_file_name):

    # Load reset info file
    with open(reset_info_file_name) as f:
        manipulated_files, new_files, new_dirs = pickle.load(f)


    # Restore the files that were changed in the source tree
    # by replacing them with the backup files
    for target_path in manipulated_files:

        # Check if target file exists
        try:
            f = open(target_path, 'r')
        except IOError, e:
            if e.errno == 2:
                print "  WARNING: Could not find '%s'. No reset action permformed." % (target_path)
                continue
            else:
                raise e

        # Check for backup file
        backup_file_path = target_path + '.backup.boss'
        try:
            f = open(backup_file_path, 'r')
        except IOError, e:
            if e.errno == 2:
                print "  WARNING: Could not find backup file '%s'. No reset action permformed." % (backup_file_path)
                continue
            else:
                raise e

        # If backup exists, use it to replace target file
        shutil.move(backup_file_path, target_path)            
        print "  Restored '%s' from '%s'" % (target_path, backup_file_path)


    # Delete new files that BOSS added to the source tree.
    for target_path in new_files:

        # Check if target file exists
        try:
            f = open(target_path, 'r')
        except IOError, e:
            if e.errno == 2:
                print "  WARNING: Could not find '%s'. No reset action permformed." % (target_path)
                continue
            else:
                raise e

        os.remove(target_path)
        print "  Deleted '%s'" % (target_path)


    # Remove new directories created by BOSS.
    for dir_path in new_dirs:

        try:
            os.removedirs(dir_path)
            print "  Removed directory '%s'" % (dir_path)
        except OSError, e:
            if e.errno == 2:
                print "  WARNING: Could not find directory '%s'. No reset action permformed." % (dir_path)
                continue
            else:
                raise e

    print

# ====== END: resetSourceCode ========




