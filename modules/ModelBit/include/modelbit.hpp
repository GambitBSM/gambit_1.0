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
///
///  *********************************************


#ifndef __modelbit_hpp__
#define __modelbit_hpp__

#include <boost/graph/adjacency_list.hpp>
#include <boost/graph/topological_sort.hpp>
#include <vector>
#include <string>

#include "gambit_core.hpp"
#include "functors.hpp"
#include "util_classes.hpp"

namespace GAMBIT
{

  namespace ModelBit
  {
  
    using namespace boost;
    
    // Typedefs for central boost (model) graph
    typedef adjacency_list<vecS, vecS, bidirectionalS, functor*, vecS> MasterGraphType;
    typedef graph_traits<MasterGraphType>::vertex_descriptor VertexID;
    typedef graph_traits<MasterGraphType>::edge_descriptor EdgeID;
    
    typedef std::map < str, std::vector<str> > map_of_vectors;
    
    /// ModelBit object which performs initialisation and checking operations
    /// on the Core's primary_model_functor list.
    class ModelFunctorClaw
    {

      public:

        /// Constructor
        ///
        /// Hooks the claw into a core
        ModelFunctorClaw (gambit_core&);
        
        /// Model activation function
        ///
        /// Activates primary_model_functors according to the model(s) being 
        /// scanned
        void activatePrimaryModels(const std::vector<str> &);
        
        /// Active model functor "usefulness" checker
        ///
        /// Checks that all the active primary model functors are actually used 
        /// for something in the dependency tree. If not throws an error to warn
        /// the user.
        void checkPrimaryModelFunctorUsage();
        
        /// Add model functors (vertices) to model hierarchy graph
        void addFunctorsToGraph();
        
        /// Add edges (relationships) to model hierarchy graph
        void learnModelHierarchy (map_of_vectors &);

                
      private:

        /// Private pointer to the gambit_core object to which this claw is bound
        gambit_core *boundCore;

        /// The central boost graph object for the model hierarchy
        MasterGraphType modelGraph;

    };
 
  }

}

#endif



