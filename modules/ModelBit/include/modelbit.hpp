//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
//
///  Header for library of ModelBit provisions to 
///  the core.
//
//  *********************************************
//
//  Authors
//  =======
//
//  (add name and date if you modify)
//
//  Ben Farmer
//  2013 July 17
//
//  *********************************************

// Duties:
// * Activate primary_model_functors according to the model(s) being scanned

#ifndef __modelbit_hpp__
#define __modelbit_hpp__

#include <boost/graph/adjacency_list.hpp>
#include <boost/graph/topological_sort.hpp>
#include <vector>
#include <string>
#include <functors.hpp>

namespace GAMBIT
{

  namespace ModelBit
  {
  
    using namespace boost;
    
    // Typedefs for central boost (model) graph
    typedef adjacency_list<vecS, vecS, bidirectionalS, functor*, vecS> MasterGraphType;
    typedef graph_traits<MasterGraphType>::vertex_descriptor VertexID;
    typedef graph_traits<MasterGraphType>::edge_descriptor EdgeID;
    
    typedef std::map<std::string, std::vector<std::string>> map_of_vectors;
    
    /// Modelbit object which performs initialisation and checking operations
    /// on the global primary_model_functor list.
    class ModelFunctorClaw
    {
      public:
        /// Constructor
        ///
        /// Hooks the "claw" into the global primary model functor list
        ModelFunctorClaw (std::vector<primary_model_functor *> &);
        
        /// Model activation function
        ///
        /// Activates primary_model_functors according to the model(s) being 
        /// scanned
        void activatePrimaryModels( const std::vector<std::string> &);
        
        /// Active model functor "usefulness" checker
        ///
        /// Checks that all the active primary model functors are actually used 
        /// for something in the dependency tree. If not throws an error to warn
        /// the user.
        void checkPrimaryModelFunctorUsage();
        
        /// Add model functors (vertices) to model hierarchy graph
        void addFunctorsToGraph (std::vector<primary_model_functor *> &);
        
        /// Add edges (relationships) to model hierarchy graph
        void learnModelHierarchy (map_of_vectors &);
        
        
        /// Member variable which stores the map of user-activated models
        std::map<std::string, primary_model_functor *> activeModelFunctors;

      private:
        /// Private reference to the global functor list
        std::vector<primary_model_functor *> &_globalPrimaryModelFunctors;

        // *** The central boost graph object
        MasterGraphType modelGraph;
    };
 
  }
}

#endif



