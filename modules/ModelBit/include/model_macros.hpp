//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
//
//  Wrapper class and helper macros for model 
//  definitions. Mostly based on contents of
//  UtilsBit/include/observable.hpp (i.e.
//  functors which wrap module functions).
//
//  *********************************************
//
//  Authors
//  =======
//
//  (add name and date if you modify)
//
//  Ben Farmer
//  2013 May 01
//
//  *********************************************

#ifndef __ModelMacros_hpp__
#define __ModelMacros_hpp__

#include <boost/preprocessor/seq/for_each.hpp>
#include <boost_fallbacks.hpp>
#include <ModelParameters.hpp>
#include <util_macros.hpp>
//#include <util_functions.hpp>
#include <util_classes.hpp>
#include <module_macros.hpp>

typedef std::string str;

namespace GAMBIT{

  namespace models{
  
    // Function to help static initialisation of our const data member vectors.
    // Returns a copy of the vector with the string argument appended.
    std::vector<str> vecappend(const std::vector<str>& basevec,const str newentry)
      {
        std::vector<str> newvec(basevec);
        newvec.push_back(newentry);
        //std::cout<<"in vecappend:"<<newvec<<std::endl;
        return newvec;
      }
    
    // Similar to above; joins two vectors and returns the result
    std::vector<str> vecjoin(const std::vector<str>& bv1, 
                             const std::vector<str>& bv2) 
      {
        std::vector<str> newvec;
        newvec.reserve( bv1.size() + bv2.size() );
        newvec.insert( newvec.end(), bv1.begin(), bv1.end() );
        newvec.insert( newvec.end(), bv2.begin(), bv2.end() );
        //std::cout<<"in vecjoin:"<<newvec<<std::endl;
        return newvec;
      }
      
    // As above but joins three vectors and returns the result.
    std::vector<str> vecjoin3(const std::vector<str>& bv1, 
                              const std::vector<str>& bv2,
                              const std::vector<str>& bv3) 
      {
        std::vector<str> newvec;
        newvec.reserve( bv1.size() + bv2.size() + bv3.size() );
        newvec.insert( newvec.end(), bv1.begin(), bv1.end() );
        newvec.insert( newvec.end(), bv2.begin(), bv2.end() );
        newvec.insert( newvec.end(), bv3.begin(), bv3.end() );
        //std::cout<<"in vecjoin:"<<newvec<<std::endl;
        return newvec;
      }
    
    // Base "model" for building new models (root of model inheritance tree).
    // Has only the minimal properties required to properly act as the PARENT
    // of a model.
    
    namespace model_base
      {
          /* Model lineage */
          const std::vector<str> lineage (1, "model_base");
          
      }
  } //end namespace Models

} //end namespace GAMBIT


// MACRO DEFINITIONS. 

//  *******************************************************************************
/// "Rollcall" macros. These are lifted straight from module_macros.hpp
/// but are modified here and there to suit the role of models.

/// Note: Piggybacks off the CORE_START_MODULE_GUTS macro, since we need all the 
/// same basic machinery this creates.
#define START_MODEL                                                            \
  namespace GAMBIT {                                                           \
    namespace models {                                                         \
      namespace MODEL {                                                        \
                                                                               \
        /* Model name */                                                       \
        str name() { return STRINGIFY(MODEL); }                                \
                                                                               \
      }                                                                        \
    }                                                                          \
  }                                                                            \

#define START_PARAMETERISATION                                                 \
  namespace GAMBIT {                                                           \
    ADD_TAG_IN_CURRENT_NAMESPACE(parameters)                                   \
    ADD_TAG_IN_CURRENT_NAMESPACE(CAT_5(MODEL,_,PARAMETERISATION,_,parameters)) \
    namespace models {                                                         \
      namespace MODEL {                                                        \
        namespace PARAMETERISATION {                                           \
                                                                               \
          /* Parameterisation name 
          DON'T NEED THIS! Already created (as a function, name()) by 
          CORE_START_MODULE_GUTS. \
          const str name = STRINGIFY(PARAMETERISATION);                        \
          */                                                                   \
                                                                               \
          /* Basic machinery, same as for modules 
             (macro from module_macros.hpp) */                                 \
          CORE_START_MODULE_GUTS( CAT_3(MODEL,_,PARAMETERISATION) )            \
                                                                               \
          /* Model lineage                                                       
             Note: each parameterisation is automatically marked as a child of 
             the host model. They are treated internally as seperate models. 
             Child models can indeed inherit directly from these if desired. */\
          const std::vector<str> lineage = \
             vecappend(PARENT::lineage, \
                          STRINGIFY(CAT_3(MODEL,_,PARAMETERISATION)) );        \
                                                                               \
          /* Model parameter names */                                          \
          std::vector<str> parameterkeys;                                      \
                                                                               \
          /* Pointer to the parameter object
             (points to nothing until we initialise the parameter object) 
             Not sure if there is some nicer way to do this, some prototyping
             thing perhaps? Don't want to create these objects unless we 
             actually need them... */                                          \
                                                                               \
          ModelParameters* parametersptr;                                      \
          /* Ok going back to the raw pointer, so it can be passed by a functor
             */                                                                \
          /* std::shared_ptr<ModelParameters> params_sharedptr; */             \
                                                                               \
          template <>                                                          \
          bool provides<Tags::CAT_5(MODEL,_,PARAMETERISATION,_,parameters)>() {\
            return true;                                                       \
          }                                                                    \
                                                                               \
          /* Function to retrieve the ModelParameters object. This will be
             wrapped in a functor, for delivery of parameters to elsewhere in
             GAMBIT */                                                         \
          void parameters (ModelParameters &result) {                          \
            result = parametersptr;                                            \
          }                                                                    \
                                                                               \
          /* Wrap it up in a functor (macro from module_macros.hpp) */         \
          MAKE_FUNCTOR(parameters,ModelParameters*,\
            CAT_5(MODEL,_,PARAMETERISATION,_,parameters),\
            MODEL::PARAMETERISATION)                                           \
                                                                               \
          /* Initialise (create) the parameter object                                        
             Need to use smart pointer so that ownership of the parameters object
             can be transferred out of the scope of the function (i.e. so that
             the pointer is not left dangling due to the object being destroyed
             when we leave the function scope) */                              \
                                                                               \
          void init_paramobj()                                                 \
          {                                                                    \
            parametersptr = new ModelParameters(parameterkeys);                \
            /* In principle we now need to delete this object sometime. We will
               have to explicitly call "delete" to do this, or else wait till 
               the end of the program for the memory to be released. */        \
          }                                                                    \
                                                                               \
        }                                                                      \
      }                                                                        \
    }                                                                          \
  }                                                                            \
  
/// Tells the core that the current parameter corresponds to the specified
/// CAPABILITY, so that module functions can then draw upon them like any
/// other capabilities. Draws from CORE_START_CAPABILITY macro.
/// So far I am only allowing parameters of type double (currently the parameter
/// object cannot store anything else anyway). If we really want to allow 
/// integer or maybe complex parameters later we could extend some things in 
/// here.

#define MAP_TO_CAPABILITY(CAPABILITY)                                          \
  LINK_PARAMETER_TO_CAPABILITY(PARAMETER,CAPABILITY)                           \

#define LINK_PARAMETER_TO_CAPABILITY(PARAMETER,CAPABILITY)                     \
  namespace GAMBIT {                                                           \
                                                                               \
    /* lifted straight: need this or something similar?                        \
    /* Add FUNCTION to global set of tags of recognised module capabils/deps */\
    /* Ben: I am calling this function get##PARAMETER. Need to make more specific
       to avoid name collisions? Are module functions in the module namespace?
       This tag doesn't seem to be...                            */            \
    ADD_TAG_IN_CURRENT_NAMESPACE(PARAMETER)                                    \
    ADD_TAG_IN_CURRENT_NAMESPACE(CAPABILITY)                                   \
                                                                               \
    namespace models {                                                         \
      namespace MODEL {                                                        \
        namespace PARAMETERISATION {                                           \
                                                                               \
          /* Indicate that this model::parameterisation can provide quantity 
             CAPABILITY */                                                     \
          template <>                                                          \
          bool provides<Tags::CAPABILITY>() { return true; }                   \
                                                                               \
          /* Add this parameter to the parameterkeys list (used later to 
             create the parameter object) */                                    \
          /*parameterkeys.push_back(STRINGIFY(PARAMETER));                    */\
                                                                               \
          /* Compiler doesn't like calling push_back yet it seems, so do it at 
             initialisation time using this ini_code trick. Don't call this 
             function ever again!*/        \
          void CAT(add,PARAMETER)() {                                           \
            parameterkeys.push_back(STRINGIFY(PARAMETER));                  \
          }                                                                 \
                                                                              \
          namespace Ini                                                            \
          {                                                                        \
            ini_code CAT(iniadd,PARAMETER) (&CAT(add,PARAMETER));                        \
          }                                                                    \
                                                                               \
          /* The wrapper function which extracts the value of PARAMETER from
             the parameter object. This is the analogue of a module function, 
             and is what will be wrapped in a functor for processing by the 
             core */                                                           \
          void PARAMETER (double &result) {                               \
            result = parametersptr->getValue(STRINGIFY(PARAMETER));         \
          }                                                                    \
                                                                               \
          /* Wrap it up in a functor (macro from module_macros.hpp) */         \
          MAKE_FUNCTOR(PARAMETER,double,CAPABILITY,MODEL::PARAMETERISATION)    \
        }                                                                      \
      }                                                                        \
    }                                                                          \
  }                                                                            \

// Macro to easily define parameters who don't need special CAPABILITY 
// definitions. Iteratively calls MAP_TO_CAPABILITY, with CAPABILITYs defined
// with the same name as the parameters.
//#define DEFINEPARS(...)                                                        \
//do{                                                                            \
//    const char* _arr_[] = {__VA_ARGS__};                                       \
//    for(int i=0; i<sizeof(_arr_)/sizeof(const char*) ; i++){                   \
//      LINK_PARAMETER_TO_CAPABILITY(_arr_[i],_arr_[i]));                        \
//    }                                                                          \
//}while(0);   

// Ugghh, ok it is not great calling a macro in a loop like that, since it gets
// expanded first of course. I think this trick using the boost preprocessor
// does what we want though. Hope it is portable enough for our needs. Note that
// one needs a relatively up-to-date version of boost to get the variadic stuff.

#define DO_LINK(r,data,elem) \
  LINK_PARAMETER_TO_CAPABILITY(elem,CAT_5(MODEL,_,PARAMETERISATION,_,elem))
  
#define DEFINEPARS(...) \
  BOOST_PP_SEQ_FOR_EACH(DO_LINK, _, BOOST_PP_TUPLE_TO_SEQ((__VA_ARGS__)))

#endif /* defined(__ModelMacros_hpp__) */

