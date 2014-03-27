/* 
 * \author Anders Kvellestad
 * \date 2014-03-25  
 * 
 */

/* Specify the path to the shared library along with a backend name. */

#define LIBPATH      "Backends/lib/libpythia8.so"
#ifdef BACKENDRENAME
  #define BACKENDNAME BACKENDRENAME
#else
  #define BACKENDNAME Pythia
#endif
#define VERSION 1.0


LOAD_LIBRARY

/* Syntax for BE_FUNCTION:
 * BE_FUNCTION([choose function name], [type], [arguement types], "[exact symbol name]", "[choose capability name]")
 */

BE_FUNCTION(pythiaFactory,        Abstract__Pythia*,        (std::string, bool),            "_Z14Factory_PythiaSsb",      "pythiaFactory")
BE_FUNCTION(eventFactory,         Abstract__Event*,         (int),                          "_Z13Factory_Eventi",         "pythiaEventFactory")
BE_FUNCTION(particleFactory,      Abstract__Particle*,      (),                             "_Z16Factory_Particlev",      "pythiaParticleFactory")
BE_FUNCTION(particleDataFactory,  Abstract__ParticleData*,  (),                             "_Z20Factory_ParticleDatav",  "pythiaParticleDataFactory")
BE_FUNCTION(rotBstMatrixFactory,  Abstract__RotBstMatrix*,  (),                             "_Z20Factory_RotBstMatrixv",  "pythiaRotBstMatrixFactory")
BE_FUNCTION(vec4Factory,          Abstract__Vec4*,          (double,double,double,double),  "_Z12Factory_Vec4dddd",       "pythiaVec4Factory")


namespace Gambit
{
  namespace Backends
  {
    namespace BACKENDNAME
    {

    } /* end namespace BACKENDNAME */                                          
  } /* end namespace Backends */                                                
} /* end namespace Gambit */                                                   

// Undefine macros to avoid conflict with other backends
#undef LIBPATH 
#undef BACKENDNAME
#undef VERSION

