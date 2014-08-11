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
#include "models.hpp"


namespace Gambit
{

  /// Model hierarchy tree class
  class ModelHierarchy
  {

    /// Shorthand for vector of pointers to primary model functors
    typedef std::vector<primary_model_functor*> primodel_vec;

    private:
     
      /// Helper class for drawing the model hierarchy graph
      class labelWriter
      {

        private:

          const DRes::MasterGraphType * myGraph;

        public:

          /// Constructor
          labelWriter(const DRes::MasterGraphType*);

          void operator()(std::ostream&, const DRes::VertexID&) const;

      };

      /// Turn on verbose operation
      bool verbose;

      /// Output filename
      str filename;
   
      /// The model claw that provides all the model info
      const Models::ModelFunctorClaw* boundClaw;

      /// The central boost graph object for the model hierarchy
      DRes::MasterGraphType modelGraph;

      /// Add model functors (vertices) to model hierarchy graph
      void addFunctorsToGraph(const primodel_vec&);
        
      /// Add edges (relationships) to model hierarchy graph
      void makeGraph (const primodel_vec&);

    public:

      /// Constructor
      ModelHierarchy(const Models::ModelFunctorClaw&, const primodel_vec&, str, bool);
 
  };

}

#endif



