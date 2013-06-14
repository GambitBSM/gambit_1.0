//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
//
//  Dependecy resolution with boost graph library
//
//  *********************************************
//
//  Authors
//  =======
//
//  (add name and date if you modify)
//
//  Christoph Weniger (c.weniger@uva.nl)
//  May 03 2013
//  June 03 2013
//  Pat Scott 
//  May 03 2013
//
//  *********************************************
//
//  NOTE: 
//    - "vertex" = module function
//    - "edge" = dependency

#include <vector>
#include <functors.hpp>
#include <graphs.hpp>
#include <yaml_parser.hpp>

namespace GAMBIT
{
  namespace Graphs
  {
    void DependencyResolver::addFunctors(std::vector<functor *> functorList)
    {
      for (std::vector<functor *>::iterator it = functorList.begin();
          it != functorList.end(); ++it)
      {
        boost::add_vertex(*it, masterGraph);
      }
    }

    // Saved calling order for functions
    list<int> function_order;

    // pushes dependencies of vertex into parameter queue
    void DependencyResolver::fill_parQueue(queue<pair<sspair, Graphs::VertexID> > *parQueue,
        Graphs::VertexID vertex) {
      (*masterGraph[vertex]).setStatus(2);
      cout << "Adding " << (*masterGraph[vertex]).name() 
        << " to parameter queue, with dependencies" << endl;
      vector<sspair> vec = (*masterGraph[vertex]).dependencies();
      for (vector<sspair>::iterator it = vec.begin(); it != vec.end(); ++it) {
        cout << "  " << (*it).first << " (" << (*it).second << ")" << endl;
        (*parQueue).push(*(new pair<sspair, Graphs::VertexID> (*it, vertex)));
      }
    }

    // initializes (capability, type) --> vertex multimap
    multimap<sspair, Graphs::VertexID> DependencyResolver::initialize_capMap() {
      cout << endl << "Filling capability map with" << endl;
      multimap<sspair, Graphs::VertexID> capMap;
      graph_traits<Graphs::MasterGraphType>::vertex_iterator vi, vi_end;
      pair<sspair, Graphs::VertexID> ins;
      for (tie(vi, vi_end) = vertices(masterGraph); vi != vi_end; ++vi) {
        ins.first.first = (*masterGraph[*vi]).capability();
        ins.first.second = (*masterGraph[*vi]).type();
        ins.second = *vi;
        cout << "  " << ins.first.first << " (" << ins.first.second << ")" << endl;
        capMap.insert(ins);
      };
      return capMap;
    }

    void DependencyResolver::initialize_edges(queue<pair<sspair, Graphs::VertexID> > parQueue, multimap<sspair, Graphs::VertexID> capMap) {
      cout << endl << "Setting up edges/dependencies:" << endl;
      int key_multiplicity;
      bool ok;
      Graphs::VertexID fromVertex, toVertex;
      sspair var;
      Graphs::EdgeID current_edge;
      while (not parQueue.empty()) {
        var = parQueue.front().first;
        toVertex = parQueue.front().second;
        cout << var.first << " (" << var.second << ")" << ": ";
        key_multiplicity = capMap.count(var);
        if ( key_multiplicity == 0 ) {
          cout << "No matching capability/type pair found." << endl;
          exit(0);
        }
        if ( key_multiplicity > 1 ) {
          cout << "Non-unique dependency resolution." << endl;
          // TODO: Add complicated part here
          exit(0);
        }
        fromVertex = (*capMap.find(var)).second;
        cout << "resolved." << endl;
        if ( (*masterGraph[fromVertex]).status() != 2 ) {
          fill_parQueue(&parQueue, fromVertex);
        }
        cout << "Adding edge: ";
        cout << (*masterGraph[fromVertex]).name() << " --> ";
        cout << (*masterGraph[toVertex]).name() << endl;
        tie(current_edge, ok) = add_edge(fromVertex, toVertex, masterGraph);
        (*masterGraph[toVertex]).resolveDependency(masterGraph[fromVertex]);
        masterGraph[current_edge].variable = var;
        parQueue.pop();
      }
      cout << endl;
    }

    // The boost lib topolical sort
    list<int> DependencyResolver::run_topological_sort() {
      list<int> topo_order;
      topological_sort(masterGraph, front_inserter(topo_order));
      return topo_order;
    }

    // Lists all vertices in correct order
    void DependencyResolver::list_functions(list<int> topo_order) {
      cout << "Dependency resolver says:  I will run the module functions in this order (and only the active ones):" << endl;
      for(list<int>::const_iterator i = topo_order.begin();
          i != topo_order.end();
          ++i)
      {
        cout << "  " << (*masterGraph[*i]).name() ;
        if ( (*masterGraph[*i]).status() == 0 ) cout << " (disabled)" << endl;
        if ( (*masterGraph[*i]).status() == 1 ) cout << " (available)" << endl;
        if ( (*masterGraph[*i]).status() == 2 ) cout << " (ACTIVE)" << endl;
      }
    }

    // Return active vertices in correct order
    std::vector<functor*> DependencyResolver::getFunctors() {
      std::vector<functor*> functor_list;
      for(list<int>::const_iterator i = function_order.begin();
          i != function_order.end();
          ++i)
      {
        if ( (*masterGraph[*i]).status() == 2 )
        {
          functor_list.push_back(masterGraph[*i]);
        }
      }
      return functor_list;
    }

    // Convenience function
    void DependencyResolver::list_graphs_content() 
    {
      graph_traits<Graphs::MasterGraphType>::vertex_iterator vi, vi_end;
      cout << "List of registered vertices" << endl;
      for (tie(vi, vi_end) = vertices(masterGraph); vi != vi_end; ++vi) {
        cout << "  " << (*masterGraph[*vi]).name() << endl;
        cout << "    Capability: " << (*masterGraph[*vi]).capability();
        cout << " (" << (*masterGraph[*vi]).type() << ")" << endl;
        cout << "    Module: " << (*masterGraph[*vi]).origin();
        cout << " (" << (*masterGraph[*vi]).version() << ")" << endl;
      };
    };

    // Main dependency resolution
    void DependencyResolver::resolveNow()
    {
      std::vector<unsigned int> pars = reqObs;
      list_graphs_content();
      queue<pair<sspair, Graphs::VertexID> > parQueue;
      multimap<sspair, Graphs::VertexID> capMap = initialize_capMap();

      for (std::vector<unsigned int>::iterator it = pars.begin() ; it != pars.end(); ++it)
      {
        fill_parQueue(&parQueue, vertex(*it, masterGraph));
      }

      initialize_edges(parQueue, capMap);
      function_order = run_topological_sort();
      list_functions(function_order);
    }

    outputListType DependencyResolver::outputList;

    // Push all output functors in some final list
    void DependencyResolver::outputResolver(functor * dep_functor)
    {
      DependencyResolver::outputList.push_back(dep_functor);
    }

    // Add legs, return pointers
    void DependencyResolver::addLegs(const GAMBIT::IniParser::IniFile &iniFile)
    {
      // Define alpha/omega vertices
      module_functor<double> * p_modfunc;

      // Input legs
      for (IniParser::ParametersType::const_iterator it =
          iniFile.parameters.begin(); it != iniFile.parameters.end(); ++it)
      {
        inputMap[(*it).name] = new double;
      }
      for (inputMapType::iterator it = inputMap.begin(); it != inputMap.end();
          ++it)
      {
        p_modfunc = new module_functor<double> (it->second, it->first +
            "_CoreIn", it->first, "double", "Core");
        boost::add_vertex(p_modfunc, masterGraph);
      }

      // Output legs
      double * dummy_double = new double;
      for (IniParser::ObservablesType::const_iterator it =
          iniFile.observables.begin(); it != iniFile.observables.end(); ++it)
      {
        p_modfunc = new module_functor<double> (dummy_double, (*it).capability +
            "_CoreOut", "NULL", "void", "Core");
        (*p_modfunc).setDependency((*it).capability, "double", &outputResolver, (*it).obsType);
        reqObs.push_back(boost::add_vertex(p_modfunc, masterGraph));
      }
    }
  }
}
