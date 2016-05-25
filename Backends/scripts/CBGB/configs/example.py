#
#   ================================
#   |                              |
#   |   CBGB configuration module  |
#   |                              |
#   ================================
#


# List paths to input Fortran files:
input_files = ['example/example.f90']

# List the functions/subroutines to be loaded:
load_functions = ['one', 'two', 'text', 'MA::text', 'non_existing_function']

# List the common blocks to be loaded:
load_common_blocks = ['dummy_block', 'non_existing_block'] 



# Choose name mangling scheme: 'gfortran', 'ifort' or 'g77'
name_mangling = 'gfortran'

# Choose 'fixed' or 'free' format:
format = 'free'  

# Convert tabs to how many spaces?
tabs_to_n_spaces = 6

# Settings for constructing a GAMBIT capability corresponding to each function/subroutine:
f_capability_prefix = ''
f_capability_suffix = ''

# Include module name in capability?
module_name_in_capability = True

# Settings for constructing a GAMBIT capability corresponding to each common block:
cb_capability_prefix = 'cb_'
cb_capability_suffix = ''


