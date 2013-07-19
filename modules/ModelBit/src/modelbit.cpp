//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
//
///  Library of ModelBit provisions to the core
///  
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
// * Check whether all active primary_model_functors are actually used in the
//   the dependency graph
// * Create and track a graph of the model hierarchy, for both visualisation
//   and for relationship checks (needed in order to activate conditional
//   dependencies on models)

#include <modelbit.hpp>
#include <boost/graph/graphviz.hpp>


namespace GAMBIT
{
  typedef std::map<std::string, primary_model_functor *> activemodel_map;
  typedef std::map<std::string, primary_model_functor *>::const_iterator activemodel_it;

  namespace ModelBit
  {
    /// Helper class for drawing the model hierarchy graph
    class labelWriter
    {
      private:
        const MasterGraphType * myGraph;
      public:
        labelWriter(const MasterGraphType * modelGraph) : myGraph(modelGraph) {};
        void operator()(std::ostream& out, const VertexID& v) const
        {
          if ( (*myGraph)[v]->status() == 2 )
          {
	          out << "[fillcolor=\"red\", style=\"rounded,filled\", shape=box,";
            out << "label=< ";
            out << "<font point-size=\"20\" color=\"black\">" << (*myGraph)[v]->origin() << "</font><br/>";
          } else {
            out << "[fillcolor=\"#F0F0D0\", style=\"rounded,filled\", shape=box,";
            out << "label=< ";
            out << "<font point-size=\"20\" color=\"red\">" << (*myGraph)[v]->origin() << "</font><br/>";
          } 
          /*out <<  "Type: " << (*myGraph)[v]->type() << "<br/>";
          out <<  "Function: " << (*myGraph)[v]->name() << "<br/>";
          out <<  "Module: " << (*myGraph)[v]->origin();*/
          out << ">]";
        }
    };
    
    //
    /// ModelFunctorClaw function definitions
    /// 
    /// Modelbit object which performs initialisation and checking operations
    /// on the global primary_model_functor list.
    /// Also creates a graph of the model hierarchy for visualisation purposes.

    // Public functions and data members
    
    /// Constructor
    ///
    /// Hooks the "claw" into the global primary model functor list
    ModelFunctorClaw::ModelFunctorClaw (std::vector<primary_model_functor *> 
                                                  &globalPrimaryModelFunctors)
      : _globalPrimaryModelFunctors(globalPrimaryModelFunctors) 
    {
      // Add all primary model functors to the model hierarchy graph
      this->addFunctorsToGraph(_globalPrimaryModelFunctors);
    }
    
    /// Model activation function
    ///
    /// Activates primary_model_functors according to the model(s) being scanned
    void ModelFunctorClaw::activatePrimaryModels ( 
                                const std::vector<std::string> &selectedmodels )
    { 
      // Loop through functor list and activate functor if it matches a member
      // of 'selectedmodels'.
      for (std::vector<primary_model_functor *>::iterator it = 
              _globalPrimaryModelFunctors.begin();
          it != _globalPrimaryModelFunctors.end(); ++it)
      {
        // Check if this functor originates from one of the selected models
        if(std::find(selectedmodels.begin(), selectedmodels.end(), (*it)->origin()) 
              != selectedmodels.end()) {
            // If yes, activate this functor
            (*it)->setStatus(1); // 1 means "available". Possibly switch this to 2 ("active").
            // Initialise ModelParameters object it contains
            (*it)->calculate();
            // Add it to the activeModelFunctors map
            activeModelFunctors[(*it)->origin()] = *it;
        } else {
            // If no, deactivate this functor
            (*it)->setStatus(0);
        }
      }

    }
    
    /// Active model functor "usefulness" checker
    ///
    /// Checks that all the active primary model functors are actually used for
    /// something in the dependency tree. If not throws an error to warn the
    /// user.
    void ModelFunctorClaw::checkPrimaryModelFunctorUsage()
    {
      std::vector<std::string> unusedmodels;
      std::string modelname;
      primary_model_functor* functorPtr;
      // Loop through functor list and check that their statuses have all been
      // set to 2 ("active"). If not, it means that some of them were not
      // activated by the dependency resolver and thus are not used for 
      // computing anything.
      for(activemodel_it it = activeModelFunctors.begin(); 
                                      it != activeModelFunctors.end(); it++) 
      {
        modelname  = it->first;
        functorPtr = it->second;
        
        if ( functorPtr->status()!=2 )
        {
          unusedmodels.push_back( modelname );
        } 
      }     
    
      // If we found unused models throw an error
      ///TODO: Make this into a proper GAMBIT error!
      if ( unusedmodels.size() > 0 )
      {
        std::cout<<"ERROR! Some models selected for scanning are not \
required by any of the requested observables/likelihoods! Please switch these \
off in the inifile or add a target which actually uses them."<<std::endl;
        std::cout<<"List of unused models:"<<std::endl;
        for (std::vector<std::string>::iterator it = unusedmodels.begin();
          it != unusedmodels.end(); ++it)
        {
          std::cout<<(*it)<<std::endl;
        }
        exit (EXIT_FAILURE);
      }
      
    } //end checkPrimaryModelFunctorUsage

    /// Add model functors to the modelGraph
    void ModelFunctorClaw::addFunctorsToGraph(
                    std::vector<primary_model_functor *> &functorList
                    )
    {
      // - model functors go into masterGraph
      for (std::vector<primary_model_functor *>::const_iterator
          it  = functorList.begin();
          it != functorList.end(); ++it)
      {
        //if ( (*it)->status() != 0 ) 
        boost::add_vertex(*it, this->modelGraph);
      
      }
    
    }
    
    typedef std::map<std::string, VertexID>::iterator vertexIDmap_it;

    /// Figure out relationships between primary model functors    
    void ModelFunctorClaw::learnModelHierarchy (map_of_vectors &parentsDB)
    {
      boost::graph_traits<MasterGraphType>::vertex_iterator vi, vi_end;
      std::map<std::string, VertexID> vertexIDmap;
      std::string model;
      
      // Loop over all vertices (models) in modelGraph and create a map from
      // model names to vertex IDs.
      for (boost::tie(vi, vi_end) = boost::vertices(modelGraph); 
              vi != vi_end; ++vi) 
      {
        vertexIDmap[(*modelGraph[*vi]).origin()] = *vi;
      }
      
      // Loop over all vertices (models) in vertexIDmap, look up the 'parents' 
      // of each one in parentsDB, and add an edge from parent to child in the
      // model graph.
      //
      for (vertexIDmap_it vimap = vertexIDmap.begin(); 
              vimap != vertexIDmap.end(); vimap++) 
      {
        model = vimap->first;
        
        std::cout<<"parents:"<<std::endl;
        std::cout<<model<<"; parents: "<<parentsDB[model]<<std::endl;;
        
        // Loop through vector of parents of 'model'
        for(std::vector<std::string>::const_iterator 
                    parent = parentsDB[model].begin(); 
                    parent!= parentsDB[model].end(); parent++) 
        {
          if (*parent != "model_base") // This is not a real model!
          {
            // Add edge between parent and child
            std::cout<<model<<"; parent: "<<*parent<<std::endl;
            boost::add_edge(vertexIDmap[*parent], vertexIDmap[model], modelGraph);
          }
        }
      }
      
      // Generate graphviz plot
      std::ofstream outf("modelgraph.gv");
      write_graphviz(outf, modelGraph, labelWriter(&modelGraph)); 
      
    } //end learnHierarchy
    
  }
}
