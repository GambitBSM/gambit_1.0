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
///    \date 2014 Dec, 2015 Jan
///  
///  *********************************************

#ifndef MODELFILES_HPP
#define MODELFILES_HPP

#include "SLHAea/slhaea.h"
#include "flexiblesusy/src/lowe.h" // From softsusy; used by flexiblesusy

// Abstraction of algorithm name
#define ALGORITHM1 Two_scale


// Make flexiblesusy interface struct for MSSMSpec template class
// We need this so that we can match spectrum objects with different 
// routines for translating them into SLHAea objects, while still
// creating the appropriate overloads for the Spectrum class 
// 'getSLHAea' virtual function. 
//
// The interface class here is specific to flexiblesusy, but in order to work, it just
// need to typedef a Model object with all the right MSSMSpec getter names (like before)
// as well as contain a function called "getSLHAea" which takes said model object and
// creates an SLHAea object from it. If extra objects are needed to do this (as in the
// flexiblesusy case), they will need to be carried around by an instance of this interface 
// struct, which should be used to construct the MSSMSpec.

#define MAKE_INTERFACE                                                                 \
  namespace Gambit {                                                                   \
    namespace SpecBit {                                                                \
      using namespace flexiblesusy;                                                    \
                                                                                       \
      template <class algorithm_type>                                                  \
      class CAT_3(MODELNAME,_,interface)                                               \
      {                                                                                \
        public:                                                                        \
          /* Typedefs for accessing FlexibleSUSY classes in a generic way */           \
          typedef CAT_3(MODELNAME,_,input_parameters)                   InputParameters;   \
          typedef CAT_3(MODELNAME,_,spectrum_generator<algorithm_type>) SpectrumGenerator; \
          typedef CAT_3(MODELNAME,_,slha<algorithm_type>)               Model;             \
          typedef CAT_3(MODELNAME,_,physical)                           Physical;          \
          typedef CAT_3(MODELNAME,_,slha_io)                            SlhaIo;            \
          typedef CAT_3(MODELNAME,_,scales)                             Scales;            \
          static const unsigned number_of_particles = CAT_3(MODELNAME,_,info)::NUMBER_OF_PARTICLES; \
          typedef flexiblesusy::Problems<number_of_particles>           Problems;      \
                                                                                       \
          /* Of the above, only the Model typedef is required by the MSSMSpec
             template. The rest are for internal details, and for use in SpecBit */    \
          /* Generic name for internal model class */                                  \
                                                                                       \
          /* Internal data members for keeping track of objects needed/created by FlexibleSUSY */ \
          Model model;     /* FlexibleSUSY model */                                    \
          QedQcd oneset;   /* SoftSUSY format Standard Model parameters */             \
          InputParameters input;    /* Parameters needed to compute points of Model */ \
          SlhaIo slha_io;   /* FlexibleSUSY SLHA input/output manager */               \
          Problems problems; /* FlexibleSUSY problems report manager */                \
          Scales scales;   /*scales at shich coundary conditions are applied*/         \
          /* Function to create SLHAea object from 'model' */                          \
          /* THIS IS REQUIRED BY MSSMSpec */                                           \
          SLHAea::Coll getSLHAea() const                                               \
          {                                                                            \
             SlhaIo slhaio;                                                           \
             fill_slhaio(slhaio);                                                     \
             return slhaio.fill_slhaea(model,oneset);                                 \
          }                                                                            \
                                                                                       \
          /* Function to write SLHA file from 'model' */                               \
          /* THIS IS REQUIRED BY MSSMSpec */                                           \
          void dump2slha(const std::string& slha_output_file) const                    \
          {                                                                            \
             SlhaIo slhaio;                                                           \
             /* Clone of output method used in run_CMSSM.cpp  */                       \
             fill_slhaio(slhaio);                                                     \
             if (slha_output_file.empty()) {                                           \
               slhaio.write_to_stream(std::cout); /*may not want this*/               \
             } else {                                                                  \
               slhaio.write_to_file(slha_output_file);                                \
             }                                                                         \
          }                                                                            \
                                                                                       \
          /* The rest is also internal data only. For now anyway, might need some of it     
             accessible at some point, like the input parameters, could add more       
             virtual functions for that */                                             \
                                                                                       \
          /* Constructor */                                                            \
          CAT_3(MODELNAME,_,interface) (const SpectrumGenerator& spectrum_generator, const QedQcd& onesetIN, const InputParameters& inputIN) \
          : model(spectrum_generator.get_model())                                      \
          , oneset(onesetIN)                                                           \
          , input(inputIN)                                                             \
          , problems(CAT_3(MODELNAME,_,info)::particle_names)                          \
          , scales()                                                                   \
          {                                                                            \
            scales.HighScale = spectrum_generator.get_high_scale();                    \
            scales.SUSYScale = spectrum_generator.get_susy_scale();                    \
            scales.LowScale  = spectrum_generator.get_low_scale();                     \
          }                                                                            \
                                                                                       \
          /* Constructor 2 (mostly for testing; leave input with default values) */    \
          CAT_3(MODELNAME,_,interface) (const Model& modelIN)                          \
          : model(modelIN)                                                             \
          , oneset()                                                                   \
          , input()                                                                    \
          , problems(CAT_3(MODELNAME,_,info)::particle_names)                          \
          , scales()                                                                   \
          {}                                                                           \
                                                                                       \
          /* Make sure the slhaio object is up to date in preparation for writing 
             output */                                                                 \
          void fill_slhaio(SlhaIo& slhaio) const                                      \
          {                                                                            \
             slhaio.set_spinfo(problems);                                             \
             slhaio.set_sminputs(oneset);                                             \
             slhaio.set_minpar(input);                                                \
             slhaio.set_extpar(input);                                                \
             if (!problems.have_problem()) {                                           \
                slhaio.set_spectrum(model);                                           \
                slhaio.set_extra(model,scales);                                       \
             }                                                                         \
          }                                                                            \
                                                                                       \
      };                                                                               \
      /* I think that there is a need to ensure that these templates actually get 
         instantiated; was getting weird segfaults accessing the (virtual) getters 
         via a Spectrum*. 

         Should add instantiations for each algorithm we want to use 
         (just one for now) */                                                         \
      /* Actually maybe we don't need these (and they cause duplicate symbol errors in clang */ \
      /*template class CAT_3(MODELNAME,_,interface)<ALGORITHM1>; */                        \
    }                                                                                  \
  }


/// All the includes and Model_interface definitions

#define MODELNAME CMSSM
#include "gambit/SpecBit/flexiblesusy_include_automater.hpp" // Automatically includes necessary CMSSM model headers
MAKE_INTERFACE  // Creates CMSSM_interface class
#undef MODELNAME

#define MODELNAME MSSMatMGUT
#include "gambit/SpecBit/flexiblesusy_include_automater.hpp" // Automatically includes necessary MSSMatMGUT model headers etc.
MAKE_INTERFACE
#undef MODELNAME

#define MODELNAME MSSM
#include "gambit/SpecBit/flexiblesusy_include_automater.hpp" // Automatically includes necessary MSSMatMGUT model headers etc.
MAKE_INTERFACE
#undef MODELNAME


#endif
