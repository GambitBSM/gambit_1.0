//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Header for library of ModelBit provisions to 
///  the core.
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


#ifndef __modelbit_hpp__
#define __modelbit_hpp__

#include <vector>
#include <string>
#include <boost/graph/adjacency_list.hpp>
#include <boost/graph/topological_sort.hpp>
#include <boost/graph/graphviz.hpp>

#include "graphs.hpp"
#include "gambit_core.hpp"
#include "util_types.hpp"
#include "standalone_error_handlers.hpp"

namespace Gambit
{

  namespace ModelBit
  {
     
    /// ModelBit object which performs initialisation and checking operations
    /// on the Core's primary_model_functor list.
    class ModelFunctorClaw
    {

      private:

        /// Add model functors (vertices) to model hierarchy graph
        void addFunctorsToGraph();
        
        /// Private pointer to the gambit_core object to which this claw is bound
        gambit_core *boundCore;

        /// The central boost graph object for the model hierarchy
        Graphs::MasterGraphType modelGraph;

        /// Function pointer type
        typedef bool (*LineageFunction)(std::string);

        /// Internal record of the active models
        std::vector<str> activemodels;         

        /// \name Private lineage/ancestry databases
        /// @{
        std::set<str> allmodelnames;
        std::map<str, std::vector<str> > myParentsDB;
        std::map<str, std::vector<str> > myLineageDB;
        std::map<str, std::vector<str> > myDescendantsDB;
        std::map<str, LineageFunction  > myIsDescendantOfDB;
        /// @}

      public:

        /// Constructor
        ///
        /// Hooks the claw into a core
        ModelFunctorClaw (gambit_core&);
        
        /// Model activation function
        ///
        /// Activates primary_model_functors according to the model(s) being 
        /// scanned
        void activatePrimaryModels (std::vector<str>);
        
        /// Active model functor "usefulness" checker
        ///
        /// Checks that all the active primary model functors are actually used 
        /// for something in the dependency tree. If not throws an error to warn
        /// the user.
        void checkPrimaryModelFunctorUsage();
        
        /// Add edges (relationships) to model hierarchy graph
        void makeGraph();

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

        /// Return vector of the active models;
        std::vector<str> get_activemodels();

        /// Retrieve the lineage for a given model
        std::vector<str> get_lineage (const str &);

        /// Retrieve the descendants for a given model
        std::vector<str> get_descendants (const str &);
        
        /// Retrieve the parents for a given model
        std::vector<str> get_parents (const str&);

        /// Check if model 1 is descended from model 2
        bool descended_from (const str &, const str &);

    };
 
  }

  /// Claw accessor function
  ModelBit::ModelFunctorClaw& modelClaw();

}

#endif



