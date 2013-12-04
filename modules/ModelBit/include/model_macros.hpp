//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
///  \file
///
///  Helper macros for model definitions. Mostly 
///  based on contents of Utils/include/observable.hpp
///  (i.e. functors that wrap module functions).
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Ben Farmer
///          (benjamin.farmer@monash.edu.au)
///  \date 2013 May, June, July
///
///  \author Pat Scott
///          (patscott@physics.mcgill.ca)
///  \date 2013 July, Aug
///
///  *********************************************

#ifndef __model_macros_hpp__
#define __model_macros_hpp__

#include <boost/preprocessor/seq/for_each.hpp>
#include <boost_fallbacks.hpp>

#include "util_macros.hpp"
#include "util_types.hpp"
#include "types_rollcall.hpp"
#include "module_macros_incore.hpp"
#include "create_claw.hpp"
#include "model_functions.hpp"


// MACRO DEFINITIONS. 

//  ****************************************************************************
/// "Rollcall" macros. These are lifted straight from module_macros_incore.hpp
/// but are modified here and there to suit the role of models.

/// Note: Piggybacks off the CORE_START_MODULE_COMMON macro, since we need all the
/// same basic machinery this creates.
// Removed for now
//#define START_MODEL                                                          \
  namespace Gambit {                                                           \
    namespace Models {                                                         \
      namespace MODEL {                                                        \
                                                                               \
        /* Model name */                                                       \
        str name() { return STRINGIFY(MODEL); }                                \
                                                                               \
      }                                                                        \
    }                                                                          \
  }                                                                            \


#define START_MODEL                                                            \
                                                                               \
  namespace Gambit                                                             \
  {                                                                            \
                                                                               \
    ADD_TAG_IN_CURRENT_NAMESPACE(primary_parameters)                           \
    ADD_TAG_IN_CURRENT_NAMESPACE(CAT_3(MODEL,_,parameters))                    \
    /*FIXME PS: there is some duplication here -- we only really need to use the one tag as follows: */ \
    ADD_MODEL_TAG_IN_CURRENT_NAMESPACE(MODEL)                                  \
                                                                               \
    namespace Models                                                           \
    {                                                                          \
                                                                               \
      namespace MODEL                                                          \
      {                                                                        \
                                                                               \
        /* Basic machinery, same as for modules 
           (macro from module_macros_incore.hpp) */                            \
        CORE_START_MODULE_COMMON(MODEL)                                        \
                                                                               \
        /* Model lineage                                                       
           Each model is automatically marked as a child of the parent model.*/\
        const std::vector<str> lineage = vecappend( PARENT::lineage,           \
                                                    STRINGIFY(MODEL) );        \
                                                                               \
        /* Congruency function (checks if this model is a descendent of the
           specified model (or is itself the specified model) ) 
           Returns 'true' if the supplied string is an element of 'lineage',
           else returns 'false'. */                                            \
        bool is_descendant_of(str testmodel)                                   \
        {                                                                      \
          verify_model(testmodel);                                             \
          for (std::vector<str>::const_iterator it = lineage.begin();          \
               it!=lineage.end(); ++it)                                        \
          {                                                                    \
            if (testmodel==*it) {return true;};                                \
          }                                                                    \
          return false;                                                        \
        }                                                                      \
                                                                               \
        /* Runtime addition of model to GAMBIT (modelClaw) database */         \
        void rt_add_model()                                                    \
        {                                                                      \
          modelClaw.add_model(STRINGIFY(MODEL));                               \
        }                                                                      \
                                                                               \
        /* Runtime addition of model's parents to ModelClaw database */        \
        /* ///TODO: need to change this to allow multiple parents */           \
        void rt_add_parents()                                                  \
        {                                                                      \
          modelClaw.add_parents(STRINGIFY(MODEL), STRINGIFY(PARENT));          \
        }                                                                      \
                                                                               \
        /* Runtime addition of model's lineage to ModelClaw database */        \
        void rt_add_lineage()                                                  \
        {                                                                      \
          modelClaw.add_lineage(STRINGIFY(MODEL), lineage);                    \
        }                                                                      \
                                                                               \
        /* Runtime addition of model-as-a-descendant to ModelClaw databases */ \
        void rt_add_descendant()                                               \
        {                                                                      \
          modelClaw.add_descendant(STRINGIFY(MODEL), &is_descendant_of);       \
        }                                                                      \
                                                                               \
        namespace Ini                                                          \
        {                                                                      \
          ini_code AddModel (&rt_add_model);                                   \
          ini_code AddParents (&rt_add_parents);                               \
          ini_code AddLineage (&rt_add_lineage);                               \
          ini_code AddDescendant (&rt_add_descendant);                         \
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
        bool provides<Tags::CAT_3(MODEL,_,parameters)>()                       \
        {                                                                      \
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
        void primary_parameters (ModelParameters &);                           \
                                                                               \
        /* Wrap it up in a primary_model_functor */                            \
        MAKE_PRIMARY_MODEL_FUNCTOR                                             \
                                                                               \
        /* Functor "calculate" function. Initialises the ModelParameters object,
           causing it to define its parameters correctly */                    \
        void primary_parameters (ModelParameters &functorobject)               \
        {                                                                      \
          if (not isinitialised)                                               \
          {                                                                    \
            /* Need to populate the functor parameters object with model
               parameters. */                                                  \
            cout<<"Initialising " STRINGIFY(MODEL) " parameter object"<<endl;  \
                                                                               \
            functorobject._definePars(parameterkeys);                          \
            /*parametersptr = &functorobject;  now obsolete*/                  \
            isinitialised = true;                                              \
          }                                                                    \
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
                                                                               \
  DEFINEPAR(PARAMETER)                                                         \
                                                                               \
  namespace Gambit                                                             \
  {                                                                            \
                                                                               \
    /* lifted straight: need this or something similar?                        \
    /* Add FUNCTION to global set of tags of recognised module capabils/deps */\
    /* Ben: I am calling this function get##PARAMETER. Need to make more specific
       to avoid name collisions? Are module functions in the module namespace?
       This tag doesn't seem to be...                            */            \
    ADD_TAG_IN_CURRENT_NAMESPACE(PARAMETER)                                    \
    ADD_TAG_IN_CURRENT_NAMESPACE(CAPABILITY)                                   \
                                                                               \
    namespace Models                                                           \
    {                                                                          \
                                                                               \
      namespace MODEL                                                          \
      {                                                                        \
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
        /* Wrap it up in a functor (macro from module_macros_incore.hpp) */    \
        MAKE_FUNCTOR(PARAMETER,double,CAPABILITY,MODEL,0)                      \
                                                                               \
      }                                                                        \
                                                                               \
    }                                                                          \
                                                                               \
  }                                                                            \
                                                                               \
  /* Create dependency of PARAMETER functor on
     host model parameters object */                                           \
  MODEL_DEPENDENCY(CAT_3(MODEL,_,parameters),ModelParameters,MODEL,PARAMETER)  \
                                                                               \
  /* Define the actual parameter setting function, now that we have the
     functor and its dependency */                                             \
  namespace Gambit                                                             \
  {                                                                            \
                                                                               \
    namespace Models                                                           \
    {                                                                          \
                                                                               \
      namespace MODEL                                                          \
      {                                                                        \
                                                                               \
        /* The wrapper function which extracts the value of PARAMETER from
           the parameter object. This is the analogue of a module function, 
           and is what will be wrapped in a functor for processing by the 
           core */                                                             \
        void PARAMETER (double &result) {                                      \
          using namespace SafePointers::PARAMETER;                             \
          result = Dep::CAT_3(MODEL,_,parameters)->getValue(STRINGIFY(PARAMETER)); \
        }                                                                      \
                                                                               \
      }                                                                        \
                                                                               \
    }                                                                          \
                                                                               \
  }    
  
  
// Macro to define parameter WITHOUT creating a corresponding CAPABILITY.
// Decided it just causes zillions of unused functors to be created. Really only
// need them if a specific capability is wanted, which MAP_TO_CAPABILITY
// still provides.
#define DEFINEPAR(PARAMETER)                                                   \
  namespace Gambit                                                             \
  {                                                                            \
                                                                               \
    namespace Models                                                           \
    {                                                                          \
                                                                               \
      namespace MODEL                                                          \
      {                                                                        \
                                                                               \
        /* Add this parameter to the parameterkeys list (used later to         \
           create the parameter object) */                                     \
        /*parameterkeys.push_back(STRINGIFY(PARAMETER));                    */ \
                                                                               \
        /* Compiler doesn't like calling push_back yet it seems, so do it at   \
           initialisation time using this ini_code trick. Don't call this      \
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
                                                                               \
    }                                                                          \
                                                                               \
  }                                                                            \


// Macro to easily define parameters who don't need special CAPABILITY 
// definitions. Iteratively calls MAP_TO_CAPABILITY, with CAPABILITYs defined
// with the same name as the parameters.
//#define DEFINEPARS(...)                                                      \
//do{                                                                          \
//    const char* _arr_[] = {__VA_ARGS__};                                     \
//    for(int i=0; i<sizeof(_arr_)/sizeof(const char*) ; i++){                 \
//      LINK_PARAMETER_TO_CAPABILITY(_arr_[i],_arr_[i]));                      \
//    }                                                                        \
//}while(0);   

// Ugghh, ok it is not great calling a macro in a loop like that, since it gets
// expanded first of course. I think this trick using the boost preprocessor
// does what we want though. Hope it is portable enough for our needs. Note that
// one needs a relatively up-to-date version of boost to get the variadic stuff.

// No longer want every parameter in its own functor: just the ones with
// custom CAPABILITIES
//#define DO_LINK(r,data,elem) \
//  LINK_PARAMETER_TO_CAPABILITY(elem,CAT_5(MODEL,_,PARAMETERISATION,_,elem))
// Changed our minds again: We do want these "miniguys".
//#define DO_LINK(r,data,elem) DEFINEPAR(elem)

// Want simple names though: can resolve name clashes with dependency resolver,
// in principle.
#define DO_LINK(r,data,elem) \
  LINK_PARAMETER_TO_CAPABILITY(elem,elem)

#define DEFINEPARS(...) \
  BOOST_PP_SEQ_FOR_EACH(DO_LINK, _, BOOST_PP_TUPLE_TO_SEQ((__VA_ARGS__)))


// Generic constructor macro for INTERPRET_AS_X function wrapper.
// Need to run INTERPRET_AS_X__DEFINE(MODEL_X,CODE) afterwards to actually
// define the function.
#define INTERPRET_AS_X__BEGIN(MODEL_X)                                         \
                                                                               \
  namespace Gambit                                                             \
  {                                                                            \
                                                                               \
    /* Add tags which specify MODEL_X's parameter object as a CAPABILITY of
       the current model */                                                    \
    ADD_TAG_IN_CURRENT_NAMESPACE(CAT_3(MODEL_X,_,parameters))                  \
                                                                               \
    namespace Models                                                           \
    {                                                                          \
                                                                               \
      namespace MODEL                                                          \
      {                                                                        \
                                                                               \
        /* Indicate that this model::parameterisation can provide quantity     \
           MODEL_X_parameters */                                               \
        template <>                                                            \
        bool provides<Tags::CAT_3(MODEL_X,_,parameters)>() { return true; }    \
                                                                               \
        /* The function which computes the MODEL_X_parameters object. This     \
           is the analogue of a module function, and is what will be wrapped   \
           in a functor for processing by the core                             \
           Note: CODE must be enclosed in braces. */                           \
        /* Register (prototype) the function */                                \
        void CAT_3(MODEL_X,_,parameters) (ModelParameters &);                  \
                                                                               \
        /* Wrap it up in a functor (macro from module_macros_incore.hpp) */    \
        MAKE_FUNCTOR(CAT_3(MODEL_X,_,parameters),ModelParameters,              \
          CAT_3(MODEL_X,_,parameters),MODEL,0)                                 \
                                                                               \
      }                                                                        \
                                                                               \
    }                                                                          \
                                                                               \
  }                                                                            \
                                                                               \
  /* Automatically add a dependency on the host model's parameters */          \
  INTERPRET_AS_X__DEPENDENCY(MODEL_X,CAT_3(MODEL,_,parameters),ModelParameters) \
  
  
// Actually define the interpret_as_X function. Alternatively this could be
// moved into a seperate source file, as occurs for module functions, rather
// than making the user write it in the model header. This would let the
// compiler help the user debug their code more easily, since stuck into a 
// macro like this the compiler can't see what line the user's error occurs on.
#define INTERPRET_AS_X__DEFINE(MODEL_X,FUNC)                                   \
                                                                               \
  namespace Gambit                                                             \
  {                                                                            \
                                                                               \
    namespace Models                                                           \
    {                                                                          \
                                                                               \
      namespace MODEL                                                          \
      {                                                                        \
                                                                               \
        /* Track whether MODEL_X_parameters functor has been initialised yet */\
        bool CAT_3(MODEL_X,_,parameters_isinitialised)(false);                 \
                                                                               \
        /* Prototype the user-defined function */                              \
        void FUNC (ModelParameters &);                                         \
                                                                               \
        /* The actual definition of the interpret_as_X function */             \
        void CAT_3(MODEL_X,_,parameters) (ModelParameters &target_parameters)  \
        {                                                                      \
          if (not CAT_3(MODEL_X,_,parameters_isinitialised) )                  \
          {                                                                    \
            /* Need to populate the functor parameters object with MODEL_X's
               parameters. We could rewrite this to get the parameterkeys via
               the dependency system if we like. Currently this won't compile
               if MODEL_X has not been defined prior to the current model. */  \
            cout<<"Initialising " STRINGIFY(MODEL_X) " parameter object "      \
            "at behest of model " STRINGIFY(MODEL)                             \
            <<endl;                                                            \
                                                                               \
            target_parameters._definePars(Models::MODEL_X::parameterkeys);     \
            CAT_3(MODEL_X,_,parameters_isinitialised) = true;                  \
          }                                                                    \
          /* Run user-supplied code (which must take target_parameters as an
             argument, and set the parameters it contains as desired) */       \
          FUNC (target_parameters);                                            \
                                                                               \
        }                                                                      \
                                                                               \
      }                                                                        \
                                                                               \
    }                                                                          \
                                                                               \
  }                                                                            \

#define INTERPRET_AS_X__DEPENDENCY(MODEL_X, DEP, TYPE)                         \
  MODEL_DEPENDENCY(DEP, TYPE, MODEL, CAT_3(MODEL_X,_,parameters) )             \

// Wrappers to convert INTERPRET_AS_X macros to INTERPRET_AS_PARENT macros.
#define INTERPRET_AS_PARENT__BEGIN                                             \
  INTERPRET_AS_X__BEGIN(PARENT)                                                \

#define INTERPRET_AS_PARENT__DEPENDENCY(DEP, TYPE)                             \
  INTERPRET_AS_X__DEPENDENCY(PARENT, DEP, TYPE)                                \

#define INTERPRET_AS_PARENT__DEFINE(FUNC)                                      \
  INTERPRET_AS_X__DEFINE(PARENT,FUNC)                                          \

/// Dependency related macros. Note macro format:
///   CORE_DEPENDENCY_GUTS(DEP, TYPE, MODULE, FUNCTION)
/// where FUNCTION is really whatever label the functor with this dependency
/// has.

// Anders: I put this macro here to separate it from the macros in module_macros_incore.hpp.
//         As I made changes to those macros, this whole model system failed, 
//         so I figured it was better to make them separate for now. 
//         Perhaps someone in the Model group can take a look and decide whether these macros
//         should be combined again.   
#define MODEL_DEPENDENCY_COMMON_1(DEP, TYPE, MODULE, FUNCTION)                 \
                                                                               \
      /* Register the required TYPE of the required observable or likelihood   \
      function DEP */                                                          \
      template<>                                                               \
      struct dep_traits<Tags::DEP, Tags::FUNCTION>                             \
      {                                                                        \
        typedef TYPE type;                                                     \
      };                                                                       \
                                                                               \
      /* Create a pointer to the dependency functor. To be filled by the       \
      dependency resolver during runtime. */                                   \
      namespace Dependencies                                                   \
      {                                                                        \
        namespace FUNCTION                                                     \
        {                                                                      \
          module_functor<TYPE>* DEP = NULL;                                    \
        }                                                                      \
      }                                                                        \
                                                                               \
      /* Create a safe pointer to the dependency result. To be filled          \
      automatically at runtime when the dependency is resolved. */             \
      namespace SafePointers                                                   \
      {                                                                        \
        namespace FUNCTION                                                     \
        {                                                                      \
          BOOST_PP_IIF(IS_TYPE(void,TYPE),,namespace Dep {safe_ptr<TYPE> DEP;})\
        }                                                                      \
      }                                                                        \
                                                                               \
      /* Resolve dependency DEP in FUNCTION */                                 \
      template <>                                                              \
      void resolve_dependency<Tags::DEP, Tags::FUNCTION>(functor* dep_functor) \
      {                                                                        \
        /* First try casting the pointer passed in to a module_functor */      \
        Dependencies::FUNCTION::DEP =                                          \
         dynamic_cast<module_functor<TYPE>*>(dep_functor);                     \
                                                                               \
        /* Now test if that cast worked */                                     \
        if (Dependencies::FUNCTION::DEP == 0)  /* It didn't; throw an error. */\
        {                                                                      \
          cout<<"Error: Null returned from dynamic cast in "<< endl;           \
          cout<<"MODULE::resolve_dependency, for dependency"<< endl;           \
          cout<<"DEP of function FUNCTION.  Attempt was to "<< endl;           \
          cout<<"resolve to "<<dep_functor->name()<<" in   "<< endl;           \
          cout<<dep_functor->origin()<<"."<<endl;                              \
          /** FIXME \todo throw real error here */                             \
        }                                                                      \
        else /* It did!  Now set the pointer to the dependency result. */      \
        {                                                                      \
         BOOST_PP_IIF(IS_TYPE(void,TYPE),,                                     \
          SafePointers::FUNCTION::Dep::DEP =                                   \
           Dependencies::FUNCTION::DEP->valuePtr(); )                          \
        }                                                                      \
                                                                               \
      }                                                                        \


/// ModelBit counterpart of CORE_DEPENDENCY(DEP, TYPE). Minor alterations made 
/// to the namespace structure (added "models"), but otherwise identical to 
/// CORE_DEPENDENCY. Also had to pull it into two pieces to accommodate the
/// ability to write code straight in the model definition header file.

/// Need this piece BEFORE the user code (so that the Dependencies and
/// Safepointers namespaces exist for use in their code)
/// Make sure to put it inside the Gambit::Models::MODULE namespace, and don't
/// forget to first ADD_TAG_IN_CURRENT_NAMESPACE(DEP) inside the GAMBIT
/// namespace
#define MODEL_DEPENDENCY(DEP, TYPE, MODULE, FUNCTION)                          \
                                                                               \
  namespace Gambit {                                                           \
                                                                               \
    /* Add DEP to global set of tags of recognised module capabilities/deps */ \
    ADD_TAG_IN_CURRENT_NAMESPACE(DEP)                                          \
                                                                               \
    namespace Models                                                           \
    {                                                                          \
     namespace MODULE                                                          \
     {                                                                         \
      MODEL_DEPENDENCY_COMMON_1(DEP, TYPE, MODULE, FUNCTION)                   \
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

/// Macro to create and register primary model functors. 
///
/// Need this extra wrapper in order to register these special functors in the
/// Core's primary model functor list (no other functors are allowed here)         
#define MAKE_PRIMARY_MODEL_FUNCTOR                                             \
  MAKE_PRIMARY_MODEL_FUNCTOR_GUTS(primary_parameters,ModelParameters,          \
    CAT_3(MODEL,_,parameters),MODEL)                                           \
  
/// Version of MAKE_FUNCTOR modified to build primary_parameters functors.
#define MAKE_PRIMARY_MODEL_FUNCTOR_GUTS(FUNCTION,TYPE,CAPABILITY,ORIGIN)       \
                                                                               \
  /* Set up an auxilary method to report stuff to the core about the       
  function.  Not actually sure what this would                             
  be used for at this stage. */                                                \
  template <>                                                                  \
  void report<Tags::FUNCTION>()                                                \
  {                                                                            \
    cout<<"Dear Core, I provide the function with tag: "<<                     \
    STRINGIFY(FUNCTION)<<endl;                                                 \
  }                                                                            \
                                                                               \
  /* Register the FUNCTION's result TYPE */                                    \
  template<>                                                                   \
  struct function_traits<Tags::FUNCTION>                                       \
  {                                                                            \
    typedef TYPE type;                                                         \
  };                                                                           \
                                                                               \
  /* Create the function wrapper object (functor) */                           \
  /* Note: primary_model_functors can only contain results of type 
     ModelParameters, so the TYPE argument is not very useful in this macro.
     It exists mainly for copy/paste reasons. */                               \
  namespace Functown                                                           \
  {                                                                            \
    primary_model_functor FUNCTION                                             \
     (&ORIGIN::FUNCTION, STRINGIFY(FUNCTION), STRINGIFY(CAPABILITY),           \
     STRINGIFY(TYPE), STRINGIFY(ORIGIN));                                      \
  }                                                                            \
                                                                               \
  /* Set up an alias function to call the function */                          \
  template <>                                                                  \
  function_traits<Tags::FUNCTION>::type result<Tags::FUNCTION>()               \
  {                                                                            \
     Functown::FUNCTION.calculate();                                           \
     return Functown::FUNCTION(0);                                             \
  }                                                                            \
                                                                               \
  /* Set up the commands to be called at runtime to register the function,     \ 
     including registering the functor with the primaryModelFunctorList in     \
     the Core. */                                                              \
  template <>                                                                  \
  void rt_register_function<Tags::FUNCTION> ()                                 \
  {                                                                            \
    Core.registerPrimaryModelFunctor(Functown::FUNCTION);                      \
    map_bools[STRINGIFY(CAPABILITY)] = &provides<Tags::CAPABILITY>;            \
    map_voids[STRINGIFY(FUNCTION)] = &report<Tags::FUNCTION>;                  \
    iCanDo[STRINGIFY(FUNCTION)] = STRINGIFY(TYPE);                             \
    moduleDict.set<TYPE(*)()>(STRINGIFY(FUNCTION),&result<Tags::FUNCTION>);    \
  }                                                                            \
                                                                               \
  /* Create the function initialisation object */                              \
  namespace Ini                                                                \
  {                                                                            \
    ini_code FUNCTION (&rt_register_function<Tags::FUNCTION>);                 \
  }                                                                            \


#endif /* defined(__model_macros_hpp__) */

