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
source_path   = 'example_path/src'

accepted_paths = ['example_path']


loaded_classes = [
                    'ClassOne',
                    'SomeNamespace::ClassTwo',
                 ]

loaded_functions = []

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

std_include_paths  = ['/usr/include/']

known_classes = [
                ]

known_class_headers = {
    "std::array"             : "<array>", 
    "std::vector"            : "<vector>", 
    "std::deque"             : "<deque>", 
    "std::complex"           : "<complex>", 
    "std::list"              : "<list>", 
    "std::forward_list"      : "<forward_list>", 
    "std::set"               : "<set>",  
    "std::multiset"          : "<set>", 
    "std::map"               : "<map>", 
    "std::multimap"          : "<map>", 
    "std::unordered_set"     : "<unordered_set>", 
    "std::unordered_multiset": "<unordered_set>", 
    "std::unordered_map"     : "<unordered_map>", 
    "std::unordered_multimap": "<unordered_map>", 
    "std::stack"             : "<stack>", 
    "std::queue"             : "<queue>",
    "std::priority_queue"    : "<queue>",
    "std::string"            : "<string>",
    "std::istream"           : "<istream>",
    "std::ostream"           : "<ostream>",
    "std::iostream"          : "<iostream>"
}

