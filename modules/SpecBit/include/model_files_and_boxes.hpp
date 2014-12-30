//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Flexiblesusy model header includes for 
///  SpecBit.
///
///  As new models are used in SpecBit, the new
///  required headers should be added here.
///
///  The definitions of the MODELbox structs are
///  also here.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///
///  \author Ben Farmer
///          (ben.farmer@gmail.com)
///    \date 2014 Dec
///  
///  *********************************************

#ifndef MODELFILES_HPP
#define MODELFILES_HPP

#define INCLUDE_FILE(TAIL) STRINGIFY( CAT_3(MODELNAME,_,TAIL) )

#define MAKE_MODEL_BOX                                                                 \
  namespace Gambit {                                                                   \
    namespace SpecBit {                                                                \
      using namespace flexiblesusy;                                                    \
                                                                                       \
      template <class algorithm_type>                                                  \
      struct CAT(MODELNAME,box)                                                        \
      {                                                                                \
         typedef CAT_3(MODELNAME,_,input_parameters)                   InputParameters;   \
         typedef CAT_3(MODELNAME,_,spectrum_generator<algorithm_type>) SpectrumGenerator; \
         typedef CAT_3(MODELNAME,_,slha<algorithm_type>)               Model;             \
         typedef CAT_3(MODELNAME,_,physical)                           Physical;          \
         typedef CAT_3(MODELNAME,_,slha_io)                            SlhaIo;            \
         static const unsigned number_of_particles = CAT_3(MODELNAME,_,info)::NUMBER_OF_PARTICLES; \
      };                                                                               \
    }                                                                                  \
  }                                                                        

/// CMSSM includes and Modelbox definition
#define MODELNAME CMSSM
#include INCLUDE_FILE(input_parameters.hpp)     //includes the file "CMSSM_input_parameters.hpp"
#include INCLUDE_FILE(slha_io.hpp)
#include INCLUDE_FILE(spectrum_generator.hpp)
#include INCLUDE_FILE(two_scale_model.hpp)
#include INCLUDE_FILE(two_scale_model_slha.hpp)
#include INCLUDE_FILE(physical.hpp)
#include INCLUDE_FILE(info.hpp)
MAKE_MODEL_BOX  // Creates CMSSMbox struct.
#undef MODELNAME

#define MODELNAME MSSMatMGUT
#include INCLUDE_FILE(input_parameters.hpp)
#include INCLUDE_FILE(slha_io.hpp)
#include INCLUDE_FILE(spectrum_generator.hpp)
#include INCLUDE_FILE(two_scale_model.hpp)
#include INCLUDE_FILE(two_scale_model_slha.hpp)
#include INCLUDE_FILE(physical.hpp)
#include INCLUDE_FILE(info.hpp)
MAKE_MODEL_BOX
#undef MODELNAME


#endif
