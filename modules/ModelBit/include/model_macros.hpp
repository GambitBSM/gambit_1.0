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
typedef std::map<std::string,double> parameters_map; //Cannot have commas in macro argument!

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
// Removed for now
//#define START_MODEL                                                            \
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
    /* Begin setting up dependency of primary ModelParameters object on
       alpha_parameters (capability supplied by ScannerBit) */                 \
    /*BEGIN_ALPHAPARAMS_DEPENDENCY*/                                               \
    namespace models {                                                         \
      namespace CAT_3(MODEL,_,PARAMETERISATION) {                              \
                                                                               \
        /* Parameterisation name 
        DON'T NEED THIS! Already created (as a function, name()) by 
        CORE_START_MODULE_GUTS.
        const str name = STRINGIFY(PARAMETERISATION);                        
        */                                                                     \
                                                                               \
        /* Basic machinery, same as for modules 
           (macro from module_macros.hpp) */                                   \
        CORE_START_MODULE_GUTS( CAT_3(MODEL,_,PARAMETERISATION) )              \
                                                                               \
        /* Model lineage                                                       
           Note: each parameterisation is automatically marked as a child of 
           the host model. They are treated internally as seperate models. 
           Child models can indeed inherit directly from these if desired. */  \
        const std::vector<str> lineage = \
           vecappend(PARENT::lineage, \
                        STRINGIFY(CAT_3(MODEL,_,PARAMETERISATION)) );          \
                                                                               \
        /* Congruency function (checks if this model is a descendent of the
           specified model (or is itself the specified model) ) 
           Returns 'true' if the supplied string is an element of 'lineage',
           else returns 'false'. */                                            \
        bool isdescendantof(str testmodel)                                     \
        {                                                                      \
          for (std::vector<str>::const_iterator it = lineage.begin();          \
               it!=lineage.end(); ++it)                                        \
          {                                                                    \
            if (testmodel==*it) {return true;};                                \
          }                                                                    \
          return false;                                                        \
        }                                                                      \
                                                                               \
        /* Model parameter names */                                            \
        std::vector<str> parameterkeys;                                        \
                                                                               \
        /* Pointer to the parameter object
           (points to nothing until we initialise the parameter object) 
           Not sure if there is some nicer way to do this, some prototyping
           thing perhaps? Don't want to create these objects unless we 
           actually need them...
           UPDATE: This is now obsolete. ModelParameters live in their functors,
           and we only do things with them via the "calculate" function of the
           functor. */                                                         \
        /*ModelParameters* parametersptr;         */                           \
                                                                               \
        /* Add appropriate 'provides' check to confirm the parameters object 
           as a CAPABILITY of this model. */                                   \
        template <>                                                            \
        bool provides<Tags::CAT_5(MODEL,_,PARAMETERISATION,_,parameters)>() {  \
          return true;                                                         \
        }                                                                      \
                                                                               \
        /* Track whether ModelParameters object has been initialised with the
           correct keys yet */                                                 \
        bool isinitialised(false);                                             \
                                                                               \
        /* Functor "calculate" function. Grabs parameters from the
           alpha_parameters provided by ScannerBit and puts them into the
           ModelParameters object */                                           \
        /* Register (prototype) the function */                                \
        void parameters (ModelParameters &);                                   \
                                                                               \
        /* Wrap it up in a functor (macro from module_macros.hpp) */           \
        MAKE_FUNCTOR(parameters,ModelParameters,\
          CAT_5(MODEL,_,PARAMETERISATION,_,parameters),\
          CAT_3(MODEL,_,PARAMETERISATION))                                     \
                                                                               \
      }                                                                        \
    }                                                                          \
  }                                                                            \
  /* Create dependency of 'parameters' functor on
     alpha_parameters (capability supplied by ScannerBit) */                   \
  MODEL_DEPENDENCY(alpha_parameters,parameters_map,                            \
                    CAT_3(MODEL,_,PARAMETERISATION),                           \
                    parameters                                                 \
                  )                                                            \
  /* Define the actual parameter setting function, now that we have the
     functor and its dependency */                                             \
  namespace GAMBIT {                                                           \
    namespace models {                                                         \
      namespace CAT_3(MODEL,_,PARAMETERISATION) {                              \
        /* Functor "calculate" function. Grabs parameters from the
           alpha_parameters provided by ScannerBit and puts them into the
           'parameters' functor */                                             \
        void parameters (ModelParameters &functorobject)                       \
        {                                                                      \
          if (not isinitialised)                                               \
          {                                                                    \
            /* Need to populate the functor parameters object with model
               parameters. */                                                  \
            cout<<"Initialising " STRINGIFY(CAT_3(MODEL,_,PARAMETERISATION))\
            " parameter object"<<endl;                                         \
                                                                               \
            functorobject._definePars(parameterkeys);                          \
            /*parametersptr = &functorobject;  now obsolete*/                  \
            isinitialised = true;                                              \
          }                                                                    \
          /* Grab the alpha_parameters from the dependency pool, and stick
             them into the functorobject */                                    \
          using namespace SafePointers::parameters;                            \
          functorobject.setValues(*Dep::alpha_parameters);                     \
        }                                                                      \
                                                                               \
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

// Note: also calls DEFINEPAR for this parameter.
#define MAP_TO_CAPABILITY(CAPABILITY)                                          \
  LINK_PARAMETER_TO_CAPABILITY(PARAMETER,CAPABILITY)                           \

#define LINK_PARAMETER_TO_CAPABILITY(PARAMETER,CAPABILITY)                     \
  DEFINEPAR(PARAMETER)                                                         \
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
      namespace CAT_3(MODEL,_,PARAMETERISATION) {                              \
                                                                               \
        /* Indicate that this model::parameterisation can provide quantity 
           CAPABILITY */                                                       \
        template <>                                                            \
        bool provides<Tags::CAPABILITY>() { return true; }                     \
                                                                               \
        /* The wrapper function which extracts the value of PARAMETER from
           the parameter object. This is the analogue of a module function, 
           and is what will be wrapped in a functor for processing by the 
           core */                                                             \
        /* Just the prototype here: defined a bit later on */                  \
        void PARAMETER (double &);                                             \
                                                                               \
        /* Wrap it up in a functor (macro from module_macros.hpp) */           \
        MAKE_FUNCTOR(PARAMETER,double,CAPABILITY,\
                      CAT_3(MODEL,_,PARAMETERISATION))                         \
                                                                               \
      }                                                                        \
    }                                                                          \
  }                                                                            \
  /* Create dependency of PARAMETER functor on
     host model parameters object */                                           \
  MODEL_DEPENDENCY(CAT_5(MODEL,_,PARAMETERISATION,_,parameters),               \
                   ModelParameters,                                            \
                   CAT_3(MODEL,_,PARAMETERISATION),                            \
                   PARAMETER                                                   \
                  )                                                            \
  /* Define the actual parameter setting function, now that we have the
     functor and its dependency */                                             \
  namespace GAMBIT {                                                           \
    namespace models {                                                         \
      namespace CAT_3(MODEL,_,PARAMETERISATION) {                              \
        /* The wrapper function which extracts the value of PARAMETER from
           the parameter object. This is the analogue of a module function, 
           and is what will be wrapped in a functor for processing by the 
           core */                                                             \
        void PARAMETER (double &result) {                                      \
          using namespace SafePointers::PARAMETER;                             \
          result = Dep::CAT_5(MODEL,_,PARAMETERISATION,_,parameters)\
                          ->getValue(STRINGIFY(PARAMETER));                    \
        }                                                                      \
                                                                               \
      }                                                                        \
    }                                                                          \
  }    
  
  
// Macro to define parameter WITHOUT creating a corresponding CAPABILITY.
// Decided it just causes zillions of unused functors to be created. Really only
// need them if a specific capability is wanted, which MAP_TO_CAPABILITY
// still provides.
#define DEFINEPAR(PARAMETER)                                                   \
  namespace GAMBIT {                                                           \
    namespace models {                                                         \
      namespace CAT_3(MODEL,_,PARAMETERISATION) {                              \
        /* Add this parameter to the parameterkeys list (used later to 
           create the parameter object) */                                     \
        /*parameterkeys.push_back(STRINGIFY(PARAMETER));                    */ \
                                                                               \
        /* Compiler doesn't like calling push_back yet it seems, so do it at 
           initialisation time using this ini_code trick. Don't call this 
           function ever again!*/                                              \
        void CAT(add,PARAMETER)() {                                            \
          parameterkeys.push_back(STRINGIFY(PARAMETER));                       \
        }                                                                      \
                                                                               \
        namespace Ini                                                          \
        {                                                                      \
          ini_code CAT(iniadd,PARAMETER) (&CAT(add,PARAMETER));                \
        }                                                                      \
                                                                               \
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

// No longer want every parameter in its own functor: just the ones with
// custom CAPABILITIES
//#define DO_LINK(r,data,elem) \
//  LINK_PARAMETER_TO_CAPABILITY(elem,CAT_5(MODEL,_,PARAMETERISATION,_,elem))

#define DO_LINK(r,data,elem) DEFINEPAR(elem)

#define DEFINEPARS(...) \
  BOOST_PP_SEQ_FOR_EACH(DO_LINK, _, BOOST_PP_TUPLE_TO_SEQ((__VA_ARGS__)))


// Generic constructor macro for INTERPRET_AS_X function wrapper.
// Need to run INTERPRET_AS_X__DEFINE(MODEL_X,CODE) afterwards to actually
// define the function.
#define INTERPRET_AS_X__BEGIN(MODEL_X)                                         \
                                                                               \
  namespace GAMBIT {                                                           \
                                                                               \
    /* Add tags which specify MODEL_X's parameter object as a CAPABILITY of
       the current model */                                                    \
    ADD_TAG_IN_CURRENT_NAMESPACE(CAT_3(MODEL_X,_,parameters))                  \
                                                                               \
    namespace models {                                                         \
      namespace CAT_3(MODEL,_,PARAMETERISATION) {                              \
                                                                               \
        /* Indicate that this model::parameterisation can provide quantity 
           MODEL_X_parameters */                                               \
        template <>                                                            \
        bool provides<Tags::CAT_3(MODEL_X,_,parameters)>() { return true; }    \
                                                                               \
        /* The function which computes the MODEL_X_parameters object. This
           is the analogue of a module function, and is what will be wrapped 
           in a functor for processing by the core 
           Note: CODE must be enclosed in braces. */                           \
        /* Register (prototype) the function */                                \
        void CAT_3(MODEL_X,_,parameters) (ModelParameters &);                  \
                                                                               \
        /* Wrap it up in a functor (macro from module_macros.hpp) */           \
        MAKE_FUNCTOR(CAT_3(MODEL_X,_,parameters),ModelParameters,\
          CAT_3(MODEL_X,_,parameters),CAT_3(MODEL,_,PARAMETERISATION))         \
                                                                               \
      }                                                                        \
    }                                                                          \
  }                                                                            \
  /* Automatically add a dependency on the host model's parameters */         \
  INTERPRET_AS_X__DEPENDENCY(MODEL_X,                                          \
                              CAT_5(MODEL,_,PARAMETERISATION,_,parameters),    \
                              ModelParameters                                  \
                            )                                                  \

// Actually define the interpret_as_X function. Alternatively this could be
// moved into a seperate source file, as occurs for module functions, rather
// than making the user write it in the model header. This would let the
// compiler help the user debug their code more easily, since stuck into a 
// macro like this the compiler can't see what line the user's error occurs on.
#define INTERPRET_AS_X__DEFINE(MODEL_X,CODE)                                   \
                                                                               \
  namespace GAMBIT {                                                           \
    namespace models {                                                         \
      namespace CAT_3(MODEL,_,PARAMETERISATION) {                              \
                                                                               \
        /* Track whether MODEL_X_parameters functor has been initialised yet */\
        bool CAT_3(MODEL_X,_,parameters_isinitialised)(false);                 \
                                                                               \
        /* Container function for the user-defined portion of the 
           interpret_as_X function */                                          \
        void CAT_3(MODEL_X,_,usercode) (ModelParameters &target_parameters)    \
          {                                                                    \
            CODE                                                               \
          }                                                                    \
                                                                               \
        /* The actual definition of the interpret_as_X function */             \
        void CAT_3(MODEL_X,_,parameters) (ModelParameters &target_parameters)  \
        {                                                                      \
          if (not CAT_3(MODEL_X,_,parameters_isinitialised) )                  \
          {                                                                    \
            /* Need to populate the functor parameters object with MODEL_X's   \
               parameters. We could rewrite this to get the parameterkeys via
               the dependency system if we like. Currently this won't compile
               if MODEL_X has not been defined prior to the current model. */  \
            cout<<"Initialising " STRINGIFY(MODEL_X) " parameter object "\
            "at behest of model " STRINGIFY(CAT_3(MODEL,_,PARAMETERISATION)) \
            <<endl;                                                            \
                                                                               \
            target_parameters._definePars(models::MODEL_X::parameterkeys);     \
            CAT_3(MODEL_X,_,parameters_isinitialised) = true;                  \
          }                                                                    \
          /* Run user-supplied code */                                         \
          CAT_3(MODEL_X,_,usercode) (target_parameters);                       \
                                                                               \
        }                                                                      \
      }                                                                        \
    }                                                                          \
  }                                                                            \

#define INTERPRET_AS_X__DEPENDENCY(MODEL_X, DEP, TYPE)                         \
  MODEL_DEPENDENCY(DEP, TYPE,\
      CAT_3(MODEL,_,PARAMETERISATION),\
      CAT_3(MODEL_X,_,parameters)                                              \
      )                                                                        \
// Wrappers to convert INTERPRET_AS_X macros to INTERPRET_AS_PARENT macros.

#define INTERPRET_AS_PARENT__BEGIN                                             \
  INTERPRET_AS_X__BEGIN(PARENT)                                                \

#define INTERPRET_AS_PARENT__DEPENDENCY(DEP, TYPE)                             \
  INTERPRET_AS_X__DEPENDENCY(PARENT, DEP, TYPE)                                \

#define INTERPRET_AS_PARENT__DEFINE(CODE)                                      \
  INTERPRET_AS_X__DEFINE(PARENT,CODE)                                          \

/// Dependency related macros. Note macro format:
///   CORE_DEPENDENCY_GUTS(DEP, TYPE, MODULE, FUNCTION)
/// where FUNCTION is really whatever label the functor with this dependency
/// has.


/// ModelBit counterpart of CORE_DEPENDENCY(DEP, TYPE). Minor alterations made 
/// to the namespace structure (added "models"), but otherwise identical to 
/// CORE_DEPENDENCY. Also had to pull it into two pieces to accommodate the
/// ability to write code straight in the model definition header file.

/// Need this piece BEFORE the user code (so that the Dependencies and
/// Safepointers namespaces exist for use in their code)
/// Make sure to put it inside the GAMBIT::models::MODULE namespace, and don't
/// forget to first ADD_TAG_IN_CURRENT_NAMESPACE(DEP) inside the GAMBIT
/// namespace
#define MODEL_DEPENDENCY(DEP, TYPE, MODULE, FUNCTION)                          \
                                                                               \
  namespace GAMBIT {                                                           \
                                                                               \
    /* Add DEP to global set of tags of recognised module capabilities/deps */ \
    ADD_TAG_IN_CURRENT_NAMESPACE(DEP)                                          \
                                                                               \
    namespace models                                                           \
    {                                                                          \
     namespace MODULE                                                          \
     {                                                                         \
      DEPENDENCY_COMMON_1_GUTS(DEP, TYPE, MODULE, FUNCTION)                    \
                                                                               \
      /* Indicate that FUNCTION requires DEP to have been computed previously*/\
      template <>                                                              \
      bool requires<Tags::DEP, Tags::FUNCTION>()                               \
      {                                                                        \
        return true;                                                           \
      }                                                                        \
                                                                               \
      /* Set up the commands to be called at runtime to register dependency*/  \
      template <>                                                              \
      void rt_register_dependency<Tags::DEP, Tags::FUNCTION> ()                \
      {                                                                        \
        map_bools[STRINGIFY(CAT(DEP,FUNCTION))] =                              \
         &requires<Tags::DEP, Tags::FUNCTION>;                                 \
        iMayNeed[STRINGIFY(DEP)] = STRINGIFY(TYPE);                            \
        Functown::FUNCTION.setDependency(STRINGIFY(DEP),STRINGIFY(TYPE),       \
         &resolve_dependency<Tags::DEP, Tags::FUNCTION>);                      \
      }                                                                        \
                                                                               \
      /* Create the dependency initialisation object */                        \
      namespace Ini                                                            \
      {                                                                        \
        ini_code CAT_3(DEP,_for_,FUNCTION)                                     \
         (&rt_register_dependency<Tags::DEP, Tags::FUNCTION>);                 \
      }                                                                        \
     }                                                                         \
    }                                                                          \
  }                                                                            \

#endif /* defined(__ModelMacros_hpp__) */

