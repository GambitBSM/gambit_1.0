//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  This file is part of a trick to perform
///  tedious includes of FlexibleSUSY headers
///  required to use particular models.
///
///  It doesn't have include guards on purpose,
///  because in order to use it one has to include
///  it several times, with model name macros 
///  defined differently.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///
///  \author Ben Farmer
///          (ben.farmer@gmail.com)
///    \date 2015 Jan
///  
///  *********************************************

#define INCLUDE_FILE(TAIL) STRINGIFY( CAT_3(MODELNAME,_,TAIL) )

#include INCLUDE_FILE(input_parameters.hpp)
#include INCLUDE_FILE(slha_io.hpp)
#include INCLUDE_FILE(spectrum_generator.hpp)
#include INCLUDE_FILE(two_scale_model.hpp)
#include INCLUDE_FILE(two_scale_model_slha.hpp)
#include INCLUDE_FILE(physical.hpp)
#include INCLUDE_FILE(info.hpp)

#undef INCLUDE_FILE
