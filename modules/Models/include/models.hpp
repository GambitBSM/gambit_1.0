//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Model helper declarations.
///  
///  Duties:
///    Activate primary_model_functors according 
///    to the model(s) being scanned.
///
///  *********************************************
///
///  Authors
///  =======
///
///  (add name and date if you modify)
///
///  \author Ben Farmer
///          (benjamin.farmer@monash.edu.au)
///  \date 2013 July 17
///
///  \author Pat Scott
///          (patscott@physics.mcgill.ca)
///  \date 2013 Aug
///  \date 2014 Mar
///
///  *********************************************


#ifndef __models_hpp__
#define __models_hpp__

#include <vector>
#include <string>

#include "util_types.hpp"
#include "functors.hpp"
#include "standalone_error_handlers.hpp"

namespace Gambit
{

  namespace Models
  {
     
    typedef std::vector<primary_model_functor*> primodel_vec;
    typedef std::map<std::string, primary_model_functor *> activemodel_map;

    /// Models object that performs initialisation and checking operations
    /// on a primary_model_functor list.
    class ModelFunctorClaw
    {

      private:

        /// Function pointer type
        typedef bool (*LineageFunction)(std::string);

        /// Internal record of the active models
        std::vector<str> activemodels;         

        /// \name Private lineage/ancestry databases
        /// @{
        std::set<str> allmodelnames;
        std::map<str, str> myParentsDB;
        std::map<str, std::vector<str> > myLineageDB;
        std::map<str, std::vector<str> > myDescendantsDB;
        std::map<str, LineageFunction  > myIsDescendantOfDB;
        /// @}

      public:

        /// Constructor
        ModelFunctorClaw(){}
        /// Destructor
        ~ModelFunctorClaw(){}
        
        /// Model activation function
        ///
        /// Returns a vector of primary_model_functors to be activated, according to the model(s) being scanned
        primodel_vec getPrimaryModelFunctorsToActivate (std::vector<str>, const primodel_vec&);
        
        /// Active model functor "usefulness" checker
        ///
        /// Checks that all the active primary model functors are actually used 
        /// for something in the dependency tree. If not throws an error to warn
        /// the user.
        void checkPrimaryModelFunctorUsage(const activemodel_map&);
        
        /// Add a model to those recongnised by GAMBIT
        void add_model (const str &);

        /// Add parents to the parents database
        void add_parents (const str &, const str &);

        /// Add lineage vector to the lineage database
        void add_lineage (const str &, const std::vector<str> &);

        /// Add model as a descendent to the descendants and is-descendant-of databases
        void add_descendant (const str &, const LineageFunction);

        /// Indicate whether a model is recognised by GAMBIT or not
        bool model_exists (const str &); 

        /// List all the models recognised by GAMBIT
        str list_models();

        /// Return set of all models recognised by GAMBIT
        std::set<str>& get_allmodels();

        /// Return vector of the active models;
        std::vector<str> get_activemodels();

        /// Retrieve the lineage for a given model
        std::vector<str> get_lineage (const str &);

        /// Retrieve the descendants for a given model
        std::vector<str> get_descendants (const str &);
        
        /// Retrieve the parent model for a given model
        str get_parent (const str&);

        /// Check if model 1 is descended from model 2
        bool descended_from (const str &, const str &);

    };
 
  }

  /// Claw accessor function
  Models::ModelFunctorClaw& modelClaw();

}

#endif



