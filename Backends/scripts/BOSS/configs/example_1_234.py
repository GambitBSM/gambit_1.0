###################################
#                                 #
#  Configuration module for BOSS  #
#                                 #
###################################


# ~~~~~ CASTXML options ~~~~~

# See CastXML documentation for details on these options: 
#
#   https://github.com/CastXML/CastXML/blob/master/doc/manual/castxml.1.rst 
#

castxml_cc_id  = 'gnu'      # Reference compiler: 'gnu', 'gnu-c', 'msvc', 'msvc-c'
castxml_cc     = 'g++'      # Name a specific compiler: 'g++', 'cl', ...
castxml_cc_opt = ''         # Additional option string passed to the compiler in castxml_cc (e.g. '-m32')


# ~~~~~ GAMBIT-specific options ~~~~~

gambit_backend_name    = 'Example'
gambit_backend_version = '1.234'
gambit_base_namespace  = ''


# ~~~~~ Information about the external code ~~~~~

# Use either absolute paths or paths relative to the main BOSS directory.
input_files   = ['example_path/include/classes.hpp']
include_paths = ['example_path/include']
base_paths    = ['example_path']

header_files_to = 'example_path/include'
src_files_to    = 'example_path/src'



load_classes = [
    'ClassOne',
    'SomeNamespace::ClassTwo',
]

load_functions = [
    'SomeNamespace::foo(int, SomeNamespace::ClassTwo)'
]

ditch = []


load_parent_classes    = False
wrap_inherited_members = False


header_extension = '.hpp'
source_extension = '.cpp'

indent = 4

extra_output_dir       = 'BOSS_output'
abstr_header_prefix    = 'abstract_'
wrapper_header_prefix  = 'wrapper_'
factory_file_prefix    = 'factory_'
function_files_prefix  = 'function_'


# ~~~~~ Information about other known types ~~~~~

# Dictionary key: type name
# Dictionary value: header file with containing type declaration.
#
# Example:
#   known_classes = {"SomeNamespace::KnownClassOne" : "path_to_header/KnownClassOne.hpp", 
#                    "AnotherNamespace::KnownClassTwo" : "path_to_header/KnownClassTwo.hpp" }

known_classes = {}
