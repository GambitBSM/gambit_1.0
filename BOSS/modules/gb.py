###############################
#                             #
#  Global variables for BOSS  #
#                             #
###############################


from collections import OrderedDict
import os
import modules.cfg as cfg


# ~~~~~ BOSS global variables and containers ~~~~~

boss_temp_dir = 'temp'

new_code                = OrderedDict()
xml_file_name           = ''

id_dict                 = OrderedDict()
all_id_dict             = OrderedDict()
name_dict               = OrderedDict()
all_name_dict           = OrderedDict()

parents_of_loaded_classes = []
contains_pure_virtual_members = []

file_dict               = OrderedDict()
# all_classes_dict        = OrderedDict()
std_types_dict          = OrderedDict()
typedef_dict            = OrderedDict()
# class_dict              = OrderedDict()
loaded_classes_in_xml   = OrderedDict()
func_dict               = OrderedDict()
new_header_files        = OrderedDict()
accepted_types          = [] 
std_headers_used        = []
original_file_paths     = OrderedDict()

functions_done          = []
classes_done            = []

factory_info            = OrderedDict()
class_factory_file_dict = OrderedDict()

function_file_dict      = OrderedDict()
wr_func_names           = OrderedDict()


gambit_backend_namespace    = 'CAT_3(BACKENDNAME,_,SAFE_VERSION)'
gambit_backend_safeversion  = cfg.gambit_backend_version.replace('.','_')
gambit_backend_name_full    = cfg.gambit_backend_name + '_' + gambit_backend_safeversion

gambit_backend_types_basedir = 'backend_types'
gambit_backend_dir_complete  = os.path.join(cfg.extra_output_dir, gambit_backend_types_basedir, gambit_backend_name_full) 

gambit_frontend_base_dir = 'frontends'
gambit_frontend_dir_complete = os.path.join(cfg.extra_output_dir, gambit_frontend_base_dir) 

gambit_backend_incl_dir = 'gambit/Backends/'
gambit_utils_incl_dir   = 'gambit/Utils/'

code_suffix         = '__BOSS'
abstr_class_prefix  = 'Abstract_'


func_return_utils_fname = 'function_return_utils'
wrapper_deleter_fname   = 'wrapperdeleter'
frwd_decls_abs_fname    = 'forward_decls_abstract_classes'
frwd_decls_wrp_fname    = 'forward_decls_wrapper_classes'
wrapper_typedefs_fname  = 'wrappertypedefs'
abstract_typedefs_fname = 'abstracttypedefs'
enum_decls_wrp_fname    = 'enum_decl_copies'

frontend_fname          = gambit_backend_name_full + '.hpp'
frontend_path           = os.path.join(gambit_frontend_dir_complete, frontend_fname)

# Dictionary of what names to use for various operator symbols
operator_names = {
          "="   : "equal",
          "+"   : "plus",
          "-"   : "minus",
          "*"   : "asterix",
          "/"   : "slash",
          "%"   : "percent",
          "&"   : "ampersand",
          "++"  : "plus_plus", 
          "--"  : "minus_minus",
          "+="  : "plus_equal",
          "-="  : "minus_equal",
          "*="  : "asterix_equal",
          "/="  : "slash_equal",
          "%="  : "percent_equal",
          "&="  : "ampersand_equal",
          "|="  : "bar_equal",
          "^="  : "caret_equal",
         "<<="  : "double_angle_bracket_left_equal",
         ">>="  : "double_angle_bracket_right_equal",
          "[]"  : "square_bracket_pair",
          "()"  : "round_bracket_pair",
          "=="  : "double_equal",
          "!="  : "exclamation_equal",
          ">"   : "angle_bracket_right",
          "<"   : "angle_bracket_left",
          ">="  : "angle_bracket_right_equal",
          "<="  : "angle_bracket_left_equal",
          "!"   : "exclamation",
          "&&"  : "double_ampersand",
          "|"   : "bar",
          "^"   : "caret",
          "<<"  : "double_angle_bracket_left",
          ">>"  : "double_angle_bracket_right",
          "->"  : "arrow",
         "->*"  : "arrow_asterix",
          ","   : "comma",
         "new"  : "new",
       "new[]"  : "new_square_bracket_pair",
      "delete"  : "delete",
    "delete[]"  : "delete_square_bracket_pair",
}
