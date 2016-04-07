#
#   ================================
#   |                              |
#   |   CBGB configuration module  |
#   |                              |
#   ================================
#


# List paths to input Fortran files:
input_files = ['examples/sdecay.f']


# Choose 'fixed' or 'free' format:
format = 'fixed'  

# List the functions/subroutines to be loaded:
load_functions = ['sd_read_mass']


# List the common blocks to be loaded:
load_common_blocks = ['WIDTHA_HDEC', 'WIDTHHL_HDEC', 'WIDTHHH_HDEC', 
                      'WIDTHHC_HDEC', 'WISUSY_HDEC', 'WISFER_HDEC', 
                      'HD_golddec', 
                      'SD_char2body', 'SD_char2bodygrav', 'SD_char3body', 
                      'SD_charwidth', 'SD_neut2body', 'SD_neut2bodygrav', 
                      'SD_neut3body', 'SD_neutloop', 'SD_neutwidth', 
                      'SD_glui2body', 'SD_glui3body', 'SD_gluiloop', 
                      'SD_gluiwidth', 'SD_sup2body', 'SD_supwidth', 
                      'SD_sdown2body', 'SD_sdownwidth', 'SD_stop2body', 
                      'SD_stop3body', 'SD_stoploop', 'SD_stop4body', 
                      'SD_stopwidth', 'SD_sbot2body', 'SD_sbot3body', 
                      'SD_sbotwidth', 'SD_sel2body', 'SD_selwidth', 
                      'SD_snel2body', 'SD_snelwidth', 'SD_stau2body', 
                      'SD_stau2bodygrav', 'SD_stauwidth', 'SD_sntau2body', 
                      'SD_sntauwidth', 'SD_top2body', 'SD_topwidth', 
                      'SUSYHITIN', 'SD_leshouches1', 'SD_leshouches2',
                      'SD_mbmb', 'flavviolation', 'checkfavvio', 'SD_selectron',
                      'SLHA_leshouches1_HDEC', 'SLHA_leshouches2_HDEC']


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
