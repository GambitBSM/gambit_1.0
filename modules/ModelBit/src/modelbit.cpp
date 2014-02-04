//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Library of ModelBit provisions to the core.
///  
///  Duties:
///  * Activate primary_model_functors according to
///    the model(s) being scanned
///  * Check whether all active primary_model_functors
///    are actually used in the the dependency graph
///  * Create and track a graph of the model hierarchy,
///    for both visualisation and for relationship 
///    checks (needed in order to activate conditional
///    dependencies on models)
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
///  \date 2013 Aug, Sep
///
///  *********************************************

#include "modelbit.hpp"
#include "graphs.hpp"
#include "gambit_core.hpp"
#include "util_types.hpp"

namespace Gambit
{
  typedef std::map<std::string, primary_model_functor *> activemodel_map;
  typedef std::map<std::string, primary_model_functor *>::const_iterator activemodel_it;

  namespace ModelBit
  {
    /// Helper class for drawing the model hierarchy graph
    class labelWriter
    {
      private:
        const Graphs::MasterGraphType * myGraph;
      public:
        labelWriter(const Graphs::MasterGraphType * modelGraph) : myGraph(modelGraph) {};
        void operator()(std::ostream& out, const Graphs::VertexID& v) const
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
    /// on the Core's primary_model_functor list.
    /// Also creates a graph of the model hierarchy for visualisation purposes.

    // Public functions and data members
    
    /// Constructor
    ///
    /// Hooks the claw into a core
    ModelFunctorClaw::ModelFunctorClaw (gambit_core &core)
      : boundCore(&core) {}
    
    /// Model activation function
    ///
    /// Activates primary_model_functors according to the model(s) being scanned
    void ModelFunctorClaw::activatePrimaryModels (std::vector<str> selectedmodels)
    {
      // Iterator to elements of 'selectedmodels'
      std::vector<str>::iterator el;      

      // Loop through functor list and activate functor if it matches a member of 'selectedmodels'.
      for (std::vector<primary_model_functor*>::const_iterator 
          it  = boundCore->getPrimaryModelFunctors()->begin();
          it != boundCore->getPrimaryModelFunctors()->end();
          ++it)
      {
        // Check if this functor originates from one of the selected models
        el = std::find(selectedmodels.begin(), selectedmodels.end(), (*it)->origin());
        if(el != selectedmodels.end())
        {
          // If yes, activate this functor
          (*it)->setStatus(1);               // 1 means "available". Possibly switch this to 2 ("active").
          (*it)->setPrintRequirement(true);  // Tell printer to output this functor
          // Initialise ModelParameters object it contains
          (*it)->calculate();
          // Add it to the map of active primary model functors in the core
          boundCore->registerActiveModelFunctor(**it);
          // Add it to the internal list of active models
          activemodels.push_back(*el);
          // Remove it from the input 'selectedmodels' list
          selectedmodels.erase(el);
        } 
        else
        {
            // If no, deactivate this functor
            (*it)->setStatus(0);
        }
      }

      // Check that all requested models have been activated
      if( selectedmodels.size() != 0 )
      {
        // Report error
        /// TODO: Change to proper gambit error
        std::cout<<"Error! Some of the requested models could not be activated for ";
        std::cout<<"scanning! Probably they have not been defined, or you spelled ";
        std::cout<<"their name wrong in the ini file."<<std::endl;
        std::cout<<"Un-activatable models:"<<std::endl;
        for (std::vector<str>::iterator 
             m = selectedmodels.begin(); m != selectedmodels.end(); ++m)
        {
          std::cout<<"  "<<(*m)<<std::endl;
        }
        exit (EXIT_FAILURE);
      }
    }
   
    /// Retrieve the internally stored vector of activated models
    std::vector<str> ModelFunctorClaw::get_activemodels()   
    {
      return activemodels;
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
      for(activemodel_it it  = boundCore->getActiveModelFunctors()->begin(); 
                         it != boundCore->getActiveModelFunctors()->end(); it++) 
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
        std::cout<<"ERROR! Some models selected for scanning are not ";
        std::cout<<"required by any of the requested observables/likelihoods! Please switch these ";
        std::cout<<"off in the inifile or add a target which actually uses them."<<std::endl;
        std::cout<<"List of unused models:"<<std::endl;
        for (std::vector<std::string>::iterator it = unusedmodels.begin();
          it != unusedmodels.end(); ++it)
        {
          std::cout<<(*it)<<std::endl;
        }
        exit (EXIT_FAILURE);
      }
      
    } //end checkPrimaryModelFunctorUsage

    
    /// Figure out relationships between primary model functors    
    void ModelFunctorClaw::makeGraph()
    {
      boost::graph_traits<Graphs::MasterGraphType>::vertex_iterator vi, vi_end;
      std::map<std::string, Graphs::VertexID> vertexIDmap;
      std::string model;
      
      std::cout<<std::endl<<"Determining model hierarchy graph..."<<std::endl;

      // Add all primary model functors to the model hierarchy graph
      addFunctorsToGraph();

      // Loop over all vertices (models) in modelGraph and create a map from
      // model names to vertex IDs.
      for (boost::tie(vi, vi_end) = boost::vertices(modelGraph); 
              vi != vi_end; ++vi) 
      {
        model = (*modelGraph[*vi]).origin();
        vertexIDmap[model] = *vi;
        std::cout<<"    Vertex added: "<<model<<std::endl;
      }
      
      // Loop over all vertices (models) in vertexIDmap, look up the 'parents' 
      // of each one in myParentsDB, and add an edge from parent to child in the
      // model graph.
      //
      typedef std::map<std::string, Graphs::VertexID>::iterator vertexIDmap_it;
      for (vertexIDmap_it vimap = vertexIDmap.begin(); 
              vimap != vertexIDmap.end(); vimap++) 
      {
        model = vimap->first;
        
        std::cout<<model<<"; parents: "<<myParentsDB[model]<<std::endl;;
        
        // Loop through vector of parents of 'model'
        for(std::vector<std::string>::const_iterator 
                    parent = myParentsDB[model].begin(); 
                    parent!= myParentsDB[model].end(); parent++) 
        {
          // Add edge between parent and child
          boost::add_edge(vertexIDmap[*parent], vertexIDmap[model], modelGraph);
          std::cout<<"    Edge added: "<<model<<" ---> "<<*parent<<std::endl;
        }
      }
      std::cout<<std::endl;
      
      // Generate graphviz plot
      std::ofstream outf("modelgraph.gv");
      write_graphviz(outf, modelGraph, labelWriter(&modelGraph)); 
      
    }


    /// Add model functors to the modelGraph
    void ModelFunctorClaw::addFunctorsToGraph()
    {
      // - model functors go into modelGraph
      for (std::vector<primary_model_functor *>::const_iterator
          it  = boundCore->getPrimaryModelFunctors()->begin();
          it != boundCore->getPrimaryModelFunctors()->end(); ++it)
      {
        //if ( (*it)->status() != 0 ) 
        boost::add_vertex(*it, modelGraph);     
      }
    }


    /// Add a model to those recongnised by GAMBIT
    void ModelFunctorClaw::add_model (const str &model)
    {
      allmodelnames.insert(model);
    }  

    /// Add parents to the parents database
    void ModelFunctorClaw::add_parents (const str &model, const str &parent)
    {
      if (parent != "PARENT") myParentsDB[model].push_back(parent); 
    }          

    /// Add lineage vector to the lineage database
    void ModelFunctorClaw::add_lineage (const str &model, const std::vector<str> &lineage)
    {
      myLineageDB[model] = lineage;
    }

    /// Add model to the descendants and is-descendant-of databases
    void ModelFunctorClaw::add_descendant (const str &model, const LineageFunction is_descendant_func)
    {
      myIsDescendantOfDB[model] = is_descendant_func;
      for (std::set<str>::iterator parent = allmodelnames.begin(); parent != allmodelnames.end(); ++parent)               
      {
        // If this model descends from parent, add it to the parent's descendents vector                               
        if (descended_from(model,*parent)) myDescendantsDB[*parent].push_back(model);
      }                                                                    
    }                                                                      

    /// Indicate whether a model is recognised by GAMBIT or not
    bool ModelFunctorClaw::model_exists (const str &model) 
    {
      return allmodelnames.find(model) != allmodelnames.end();
    }

    /// List all the models recognised by GAMBIT
    void ModelFunctorClaw::list_models()
    {
      for (std::set<str>::iterator it = allmodelnames.begin(); it != allmodelnames.end(); ++it)
      {
        cout << *it << endl;
      } 
    }

    /// Retrieve the lineage for a given model
    std::vector<str> ModelFunctorClaw::get_lineage (const str &model)
    {
      return myLineageDB[model];
    }


    /// Retrieve the descendants for a given model
    std::vector<str> ModelFunctorClaw::get_descendants (const str &model)
    {
      return myDescendantsDB[model];
    }

    /// Check if model 1 is descended from model 2
    bool ModelFunctorClaw::descended_from (const str &model1, const str &model2) 
    {
      return myIsDescendantOfDB[model1](model2);
    }
    
  }

}
