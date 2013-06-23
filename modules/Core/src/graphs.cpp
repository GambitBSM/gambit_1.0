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
//  May, June 2013
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
#include "boost/format.hpp"

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
      (*masterGraph[vertex]).setStatus(2); // activate node
      vector<sspair> vec = (*masterGraph[vertex]).dependencies();
      // if (vec.size() != 0)
      //   cout << "- add dependencies:" << endl;
      for (vector<sspair>::iterator it = vec.begin(); it != vec.end(); ++it) {
        cout << "  " << (*it).first << " (" << (*it).second << ")  " << endl;
        (*parQueue).push(*(new pair<sspair, Graphs::VertexID> (*it, vertex)));
      }
    }

    // initializes (capability, type) --> vertex multimap
    multimap<sspair, Graphs::VertexID> DependencyResolver::initialize_capMap() {
      // cout << endl << "Filling capability map with" << endl;
      multimap<sspair, Graphs::VertexID> capMap;
      graph_traits<Graphs::MasterGraphType>::vertex_iterator vi, vi_end;
      pair<sspair, Graphs::VertexID> ins;
      for (tie(vi, vi_end) = vertices(masterGraph); vi != vi_end; ++vi) {
        ins.first.first = (*masterGraph[*vi]).capability();
        ins.first.second = (*masterGraph[*vi]).type();
        ins.second = *vi;
        // cout << "  " << ins.first.first << " (" << ins.first.second << ")" << endl;
        capMap.insert(ins);
      };
      return capMap;
    }

    bool compare(IniParser::ObservableType observable, functor* func)
    {
      cout << "Comparing inifile entry " ;
      cout << observable.capability << " with ";
      cout << (*func).name() << " from ";
      cout << (*func).origin() << endl;

      // Check function names
      if ( observable.function != "" and observable.function != (*func).name()
          ) return false;
      // Check module name
      if ( observable.module != "" and observable.module != (*func).origin()
          ) return false;
      // Check module version
      if ( observable.version != "" and observable.version != (*func).version()
          ) return false;
      cout << "match!" << endl;
      return true; // everything consistent
    }

    void DependencyResolver::initialize_edges(
        queue<pair<sspair,
        Graphs::VertexID> > parQueue,
        multimap<sspair, Graphs::VertexID> capMap,
        GAMBIT::IniParser::IniFile &iniFile)
    {
      // two vertices that we will connect and the edge
      Graphs::VertexID fromVertex, toVertex;
      Graphs::EdgeID current_edge;
      // relevant observable entry (could be dependency of another observable)
      IniParser::ObservableType observable;
      int key_multiplicity, i;
      bool ok, obsFlag = false;
      sspair var;

      // Master loop
      cout << "Resolving dependency graph" << endl;
      cout << "--------------------------" << endl;
      while (not parQueue.empty()) {

        // Capability/type pair to resolve...
        var = parQueue.front().first;
        // ...and the unresolved vertex
        toVertex = parQueue.front().second;
        cout << var.first << " (" << var.second << ")" << " [";
        cout << (*masterGraph[toVertex]).name() << "]: ";

        // Find relevant inifile entry
        // Does inifile entry for capability exist?
        obsFlag = false;
        if (iniFile.hasObservable(var.first))
        {
          // store it in observable
          observable = iniFile.getObservable(var.first);
          // and set flag
          obsFlag = true;
        }
        // Does inifile entry for capability of parent node exist?
        // (dependencies of parent nodes have priority)
        if (iniFile.hasObservable((*masterGraph[toVertex]).capability()))
        {
          IniParser::ObservableType parent_observable =
            iniFile.getObservable((*masterGraph[toVertex]).capability());
          // Does parent node entry have dependency with right capability?
          if (iniFile.hasDependency(parent_observable, var.first))
          {
            observable = iniFile.getDependency(parent_observable, var.first);
            obsFlag = true;
          }
        }

        // Get number of matching capability/type pairs.
        key_multiplicity = capMap.count(var);

        // Nothing matches.
        if ( key_multiplicity == 0 ) {
          cout << "No matching capability/type pair found." << endl;
          exit(0);
        }

        // Unique solution,...
        if ( key_multiplicity == 1 )
        {
          fromVertex = (*capMap.find(var)).second;
          // ...but compatible with inifile entries...
          if (obsFlag) // ...if they exist?
          {
            if(not compare(observable, masterGraph[fromVertex]))
            {
              cout << "Only solution incompatible with inifile entry." << endl;
              exit (0);
            }
          }
        }

        // Too many solutions. Requires resolution via inifile.
        if ( key_multiplicity > 1 ) {
          cout << "Non-unique dependency resolution." << endl;

          // Find inifile entry that matches capability of interest
          if (not obsFlag)
          {
            cout << "Ambiguous capability not mentioned in inifile" << endl;
            exit(0);
          }
          // Compare all matches with the inifile entry
          i = 0;
          for(multimap<sspair, Graphs::VertexID>::iterator it =
              capMap.lower_bound(var); it !=capMap.upper_bound(var); it++)
          {
            if (compare(observable, masterGraph[(*it).second]))
            {
              fromVertex = (*it).second;
              i++;
            }
          }
          // Stop in case of...
          if (i==0) // ...too few matches...
          {
            cout << "Nothing fits" << endl;
            exit (0);
          }
          if (i>1) // ...or too many matches.
          {
            cout << "Still ambiguous" << endl;
            exit (0);
          }
        }

        // Resolve dependency with new "fromVertex"
        (*masterGraph[toVertex]).resolveDependency(masterGraph[fromVertex]);
        // and add edge to mastergraph
        tie(current_edge, ok) = add_edge(fromVertex, toVertex, masterGraph);

        // done!
        cout << "resolved by ";
        cout << (*masterGraph[fromVertex]).name() << endl;

        // Is new vertex already activated?
        if ( (*masterGraph[fromVertex]).status() != 2 ) {
          // if not, fill its dependencies into queue
          fill_parQueue(&parQueue, fromVertex);
        }

        // set edge label (for the joy of graphviz)
        masterGraph[current_edge].variable = var;

        // and the next one
        parQueue.pop();
      }
    }

    // The boost lib topolical sort
    list<int> DependencyResolver::run_topological_sort() {
      list<int> topo_order;
      topological_sort(masterGraph, front_inserter(topo_order));
      return topo_order;
    }

    // Lists all vertices in correct order
    void DependencyResolver::logOrder() {
      cout << "Ordered, active functions" << endl;
      cout << "-------------------------" << endl;
      for(list<int>::const_iterator i = function_order.begin();
          i != function_order.end();
          ++i)
      {
        if ( (*masterGraph[*i]).status() == 2 )
          cout << (*masterGraph[*i]).name() << endl;
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
    void DependencyResolver::logFunctors() 
    {
      graph_traits<Graphs::MasterGraphType>::vertex_iterator vi, vi_end;
      str formatString = "%-25s %-25s %-25s %-25s %-25s %-7i %-5i %-5i\n";
      int i = 0;
      cout << "Vertices registered in masterGraph" << endl;
      cout << "----------------------------------" << endl;
      cout << boost::format(formatString)%
        "MODULE (VERSION)"% "FUNCTION"% "CAPABILITY"% "TYPE"% "OBSTYPE"% "STATUS"% "#DEPs"% "#BE_REQs";
      for (tie(vi, vi_end) = vertices(masterGraph); vi != vi_end; ++vi) {
        cout << boost::format(formatString)%
          ((*masterGraph[*vi]).origin() + " (" + (*masterGraph[*vi]).version() + ")") %
          (*masterGraph[*vi]).name()%
          (*masterGraph[*vi]).capability()%
          (*masterGraph[*vi]).type()%
          (*masterGraph[*vi]).obsType()%
          (*masterGraph[*vi]).status()%
          (*masterGraph[*vi]).dependencies().size()%
          (*masterGraph[*vi]).backendreqs().size();
        i++;
      };
      // cout << "TOTAL: " << i << endl;
    };

    // Main dependency resolution
    void DependencyResolver::resolveNow(GAMBIT::IniParser::IniFile &iniFile)
    {
      std::vector<unsigned int> pars = reqObs;
      queue<pair<sspair, Graphs::VertexID> > parQueue; // (cap., typ) --> dep. functor/vertex map
      multimap<sspair, Graphs::VertexID> capMap = initialize_capMap();

      cout << "The goal" << endl;
      cout << "--------" << endl;
      for (std::vector<long unsigned int>::iterator it = pars.begin() ; it != pars.end(); ++it)
      {
        fill_parQueue(&parQueue, vertex(*it, masterGraph));
      }
      initialize_edges(parQueue, capMap, iniFile);
      function_order = run_topological_sort();
    }

    outputListType DependencyResolver::outputList;

    // Push all output functors in some final list
    void DependencyResolver::outputResolver(functor * dep_functor)
    {
      DependencyResolver::outputList.push_back(dep_functor);
    }

    // Add legs, return pointers
    void DependencyResolver::addLegs(GAMBIT::IniParser::IniFile &iniFile)
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

    std::vector<functor *> findBackendCandidates(sspair key, std::vector<functor *> functorList)
    {
      std::vector<functor *> candidateList;
      for (unsigned int i=0; i<functorList.size(); ++i)
      {
        // cout << " BE offer: " << functorList[i]->capability() << " (" <<
        //   functorList[i]->type() << ")" << endl;
        if ( functorList[i]->quantity() == key )
        {
          candidateList.push_back(functorList[i]);
        }
      }
      return candidateList;
    }

    // Rudimentary backend resolution
    void DependencyResolver::resolveBackends(std::vector<functor *> functorList)
    {
      cout << "Backend resolution" << endl;
      cout << "------------------" << endl;
      std::vector<sspair> reqs;
      graph_traits<Graphs::MasterGraphType>::vertex_iterator vi, vi_end;
      std::vector<functor *> candidateList;
      functor * candidate;
      for (tie(vi, vi_end) = vertices(masterGraph); vi != vi_end; ++vi) 
      {
        if ( (*masterGraph[*vi]).status() == 2 )
        {
          reqs = (*masterGraph[*vi]).backendreqs();
          if (reqs.size() != 0)
          {
            cout << (*masterGraph[*vi]).name() << endl;
            for (vector<sspair>::iterator it = reqs.begin();
                it != reqs.end(); ++it)
            {
              cout << "  " << it->first << " (" << it->second << "): ";
              candidateList = findBackendCandidates(*it, functorList);
              if (candidateList.size() == 0)
              {
                cout << "Backend resolution failed" << endl;
                exit(0);
              }
              // Take just first best right now
              candidate = candidateList[0];
              (*masterGraph[*vi]).resolveBackendReq(candidateList[0]);
              cout << "resolved by " << (*candidate).name();
              cout << " from " << (*candidate).origin() << " (";
              cout << (*candidate).version() << ")" << endl;
            }
          }
        }
      }
    }
  }
}
