#
#   ================================
#   |                              |
#   |   CBGB configuration module  |
#   |                              |
#   ================================
#


# List paths to input Fortran files:
input_files = ['examples/dsmssm.h']


# Choose 'fixed' or 'free' format:
format = 'fixed'  


# List the functions/subroutines to be loaded:
load_functions = []


# List the common blocks to be loaded:
load_common_blocks = ['mspctm','pacodes','widths','intdof','vrtxs',
                      'smruseful','smcuseful','couplingconstants','sckm',
                      'mixing','mssmtype','mssmpar','mssmswitch',
                      'sfermionmass','mssmwidths','mssmmixing']


# Convert tabs to how many spaces?
tabs_to_n_spaces = 6

# Choose name mangling scheme: 'gfortran', 'ifort' or 'g77'
name_mangling = 'gfortran'

# Settings for constructing a GAMBIT capability corresponding to each function/subroutine:
f_capability_prefix = ''
f_capability_suffix = ''

# Include module name in capability?
module_name_in_capability = False

# Settings for constructing a GAMBIT capability corresponding to each common block:
cb_capability_prefix = 'cb_'
cb_capability_suffix = ''


