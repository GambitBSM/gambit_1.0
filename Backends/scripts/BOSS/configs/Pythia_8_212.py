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

gambit_backend_name    = 'Pythia'
gambit_backend_version = '8.212'
gambit_base_namespace  = ''


# ~~~~~ Information about the external code ~~~~~

# Use either absolute paths or paths relative to the main BOSS directory.
input_files   = ['../../../Backends/installed/Pythia/8.212/include/Pythia8/Pythia.h']
include_paths = ['../../../Backends/installed/Pythia/8.212/include', '../../../contrib/slhaea/include']
base_paths    = ['../../../Backends/installed/Pythia/8.212/']

header_files_to = '../../../Backends/installed/Pythia/8.212/include'
src_files_to    = '../../../Backends/installed/Pythia/8.212/src'


load_classes = [
    'Pythia8::AlphaEM',
    'Pythia8::AlphaStrong',
    'Pythia8::BeamParticle',
    'Pythia8::Couplings',
    'Pythia8::CoupSM',
    'Pythia8::CoupSUSY',
    'Pythia8::DecayChannel',
    'Pythia8::Event',
    'Pythia8::Hist',
    'Pythia8::Info',
    'Pythia8::LHdecayChannel',
    'Pythia8::LHdecayTable',
    'Pythia8::Parm',
    'Pythia8::ParticleDataEntry',
    'Pythia8::ParticleData',
    'Pythia8::ParticleDecays',
    'Pythia8::Particle',
    'Pythia8::PartonLevel',
    'Pythia8::Pythia',
    'Pythia8::ResonanceDecays',
    'Pythia8::ResonanceGmZ',
    'Pythia8::ResonanceWidths',
    'Pythia8::Rndm',
    'Pythia8::Settings',
    'Pythia8::SigmaProcess',
    'Pythia8::SigmaTotal',
    'Pythia8::SLHAinterface',
    'Pythia8::SlowJet',
    'Pythia8::SusyLesHouches',
    'Pythia8::UserHooks',
    'Pythia8::Vec4',
]

load_functions = [
    # 'Pythia8::m2(Pythia8::Wave4, Pythia8::Wave4)',
    # 'Pythia8::m2(const Pythia8::Particle&, const Pythia8::Particle&)',
]

ditch = ['Pythia8::Pythia::initSLHA']


auto_detect_stdlib_paths = False


load_parent_classes    = False
wrap_inherited_members = False


header_extension = '.h'
source_extension = '.cc'

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

known_classes = {"SLHAea::Coll" : "SLHAea/slhaea.h"}
