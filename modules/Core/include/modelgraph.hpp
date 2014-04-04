//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Model graph declarations.
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


#ifndef __modelgraph_hpp__
#define __modelgraph_hpp__

#include "depresolver.hpp"


namespace Gambit
{

  /// Model hierarchy tree class
  class ModelHierarchy
  {

     typedef std::vector<primary_model_functor*> primodel_vec;

     private:

      /// Add model functors (vertices) to model hierarchy graph
      void addFunctorsToGraph(const primodel_vec&);
        
      /// The central boost graph object for the model hierarchy
      DRes::MasterGraphType modelGraph;

    public:

      /// Add edges (relationships) to model hierarchy graph
      void makeGraph (const primodel_vec&);
 
  };

  /// ModelGraph accessor function
  ModelHierarchy& ModelGraph();

}

#endif



