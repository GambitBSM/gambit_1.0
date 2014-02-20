//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Dependency resolution with boost graph library
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Christoph Weniger
///          (c.weniger@uva.nl)
///  \date 2013 May, Jun, Jul, Sep
///
///  \author Pat Scott 
///          (patscott@physics.mcgill.ca)
///  \date 2013 May, Jul, Aug, Nov
///  \date 2014 Jan
///
///  \author Ben Farmer
///          (benjamin.farmer@monash.edu)
///  \date 2013 Sep
///
///  *********************************************

#include <boost/format.hpp>
#include <boost/graph/graphviz.hpp>
#include <extern_claw.hpp>
// #include <regex>

#include "graphs.hpp"
#include "printers.hpp"

// This vertex ID is reserved for nodes that correspond to
// likelihoods/observables/etc
#define OMEGA_VERTEXID 52314768 
#define NORMAL_DEPENDENCY 1
#define LOOP_MANAGER_DEPENDENCY 2

namespace Gambit
{
  namespace Graphs
  {
    //
    // Helper functions
    //

    // Collect parent vertices recursively (including root vertex)
    std::set<VertexID> getParentVertices(const VertexID & vertex, const
        Graphs::MasterGraphType & graph)
    {
      std::set<VertexID> myVertexList;
      myVertexList.insert(vertex);
      std::set<VertexID> parentVertexList;

      graph_traits<Graphs::MasterGraphType>::in_edge_iterator ibegin, iend;
      for (boost::tie(ibegin, iend) = in_edges(vertex, graph);
          ibegin != iend; ++ibegin)
      {
        parentVertexList = getParentVertices(source(*ibegin, graph), graph);
        myVertexList.insert(parentVertexList.begin(), parentVertexList.end());
      }
      return myVertexList;
    }

    // Sort given list of vertices (according to topological sort result)
    std::vector<VertexID> sortVertices(const std::set<VertexID> & set,
        std::list<VertexID> topoOrder)
    {
      std::vector<VertexID> result;
      for(std::list<VertexID>::iterator it = topoOrder.begin(); it != topoOrder.end(); it++)
      {
        if (set.find(*it) != set.end())
          result.push_back(*it);
      }
      return result;
    }

    // Get sorted list of parent vertices
    std::vector<VertexID> getSortedParentVertices(const VertexID & vertex, const
        Graphs::MasterGraphType & graph, std::list<VertexID> topoOrder)
    {
      std::set<VertexID> set = getParentVertices(vertex, graph);
      return sortVertices(set, topoOrder);
    }

    // Return time estimate for set of nodes
    double getTimeEstimate(std::set<VertexID> vertexList, const Graphs::MasterGraphType &graph)
    {
      double result = 0;
      for (std::set<VertexID>::iterator it = vertexList.begin(); it != vertexList.end(); ++it)
      {
        result += graph[*it]->getRuntimeAverage();
      }
      return result;
    }

    // Compare two strings
    bool stringComp(str s1, str s2)
    {
      if ( s1 == s2 ) return true;
      if ( s1 == "" ) return true;
      if ( s1 == "*" ) return true;
      // if ( std::regex_match ( s2, *(new std::regex(s1)) ) ) return true; 
      return false;
    }

    bool quantityMatchesIniEntry(const sspair & quantity, const IniParser::ObservableType & observable)
    {
      // Compares dependency specifications of auxiliary entries or observable
      // entries with capability (capabilities have to be unique for these
      // lists))
      if ( stringComp( observable.capability, quantity.first ) ) return true;
      else return false;
    }

    bool funcMatchesIniEntry(functor *f, const IniParser::ObservableType &e)
    {
      if (     stringComp( e.capability, (*f).capability() )
           and stringComp( e.type, (*f).type() )
           and stringComp( e.function, (*f).name() )
           and stringComp( e.module, (*f).origin() ) )
           return true;
      else return false;
    }

    /// Compare backend function with backend entry in inifile
    bool compareBE(IniParser::ObservableType observable, functor* func)
    {
      for (std::vector<IniParser::ObservableType>::iterator be =
          observable.backends.begin(); be != observable.backends.end(); be++)
      {
        // If capability matches...
        if ( (*be).capability == (*func).capability() )
        {
          // ...check function names
          if ( (*be).function != "" and (*be).function != (*func).name()
              ) return false;
          // ...check module name
          if ( (*be).module != "" and (*be).module != (*func).origin()
              ) return false;
          // ...check module version
          if ( (*be).version != "" and (*be).version != (*func).version()
              ) return false;
        }
      }
      return true; // everything consistent
    }

    /// Return a list of backend functors which match in capability and type
    std::vector<functor *> findBackendCandidates(sspair key, std::vector<functor *> functorList)
    {
      std::vector<functor *> candidateList;
      for (unsigned int i=0; i<functorList.size(); ++i)
      {
        if ( functorList[i]->quantity() == key )
        {
          candidateList.push_back(functorList[i]);
        }
      }
      return candidateList;
    }

    class edgeWriter
    {
      private:
        const Graphs::MasterGraphType * myGraph;
      public:
        edgeWriter(const Graphs::MasterGraphType * masterGraph) : myGraph(masterGraph) {};
        void operator()(std::ostream&, const EdgeID&) const
        {
          //out << "[style=\"dotted\"]";
        }
    };

    class labelWriter
    {
      private:
        const Graphs::MasterGraphType * myGraph;
      public:
        labelWriter(const Graphs::MasterGraphType * masterGraph) : myGraph(masterGraph) {};
        void operator()(std::ostream& out, const VertexID& v) const
        {
          out << "[fillcolor=\"#F0F0D0\", style=\"rounded,filled\", shape=box,";
          out << "label=< ";
          out << "<font point-size=\"20\" color=\"red\">" << (*myGraph)[v]->capability() << "</font><br/>";
          out <<  "Type: " << (*myGraph)[v]->type() << "<br/>";
          out <<  "Function: " << (*myGraph)[v]->name() << "<br/>";
          out <<  "Module: " << (*myGraph)[v]->origin();
          out << ">]";
        }
    };

    //
    // Public functions of DependencyResolver
    //

    /// Constructor. 
    /// Add module functors to class internal list.
    DependencyResolver::DependencyResolver(const gambit_core &core, 
                                           const IniParser::IniFile &iniFile, 
                                           Printers::BasePrinter &printer)
     : boundCore(&core), boundIniFile(&iniFile), boundPrinter(&printer), index(get(vertex_index,masterGraph))
    {
      addFunctors();
      verbose = true;
    }

    /// Main dependency resolution
    void DependencyResolver::resolveNow()
    {
      const IniParser::ObservablesType & observables = boundIniFile->getObservables();
      // (cap., typ) --> dep. vertex map
      std::queue<QueueEntry> parQueue;
      QueueEntry queueEntry;

      cout << endl << "Target likelihoods/observables" << endl;
      cout <<         "------------------------------" << endl;
      cout <<         "CAPABILITY (TYPE)"   << endl;
      for (IniParser::ObservablesType::const_iterator it =
          observables.begin(); it != observables.end(); ++it)
      {
        cout << (*it).capability << " (" << (*it).type << ")" << endl;
        queueEntry.first.first = (*it).capability;
        queueEntry.first.second = (*it).type;
        queueEntry.second = OMEGA_VERTEXID;
        parQueue.push(queueEntry);
      }
      generateTree(parQueue);
      function_order = run_topological_sort();

      // Set nested functions in activated loop managers
      for (std::map<VertexID, std::set<VertexID>>::iterator it =
          loopManagerMap.begin(); it != loopManagerMap.end(); ++it)
      {
        // Topologically sorted list of vertex IDs of functions nested within
        // given loop manager
        std::vector<VertexID> vertexList = sortVertices(it->second, function_order);
        // Map this on topologically sorted list of functor pointers...
        std::vector<functor*> functorList;
        for (std::vector<VertexID>::iterator jt = vertexList.begin(); jt != vertexList.end(); ++jt)
        {
          functorList.push_back(masterGraph[*jt]);
        }
        // ...and store into loop manager functor
        masterGraph[it->first]->setNestedList(functorList);
      }

      // Initialise the printer object with a list of functors that are set to print
      initialisePrinter();

      // Generate graphviz plot
      std::ofstream outf("graph.gv");
      write_graphviz(outf, masterGraph, labelWriter(&masterGraph), edgeWriter(&masterGraph));
    }

    /// Set up printer object
    // (i.e. give it the list of functors that need printing)
    void DependencyResolver::initialisePrinter()
    {
      std::vector<int> functors_to_print;
      graph_traits<MasterGraphType>::vertex_iterator vi, vi_end;
      //IndexMap index = get(vertex_index, masterGraph); // Now done in the constructor
      //Err does that make sense? There is nothing in masterGraph at that point surely... maybe put this back.
      //Ok well it does seem to work in the constructor, not sure why though...

      for (tie(vi, vi_end) = vertices(masterGraph); vi != vi_end; ++vi)
      {
        // Inform the active functors of the vertex ID that the masterGraph has assigned to them
        // (so that later on they can pass this to the printer object to identify themselves)  
        masterGraph[*vi]->setVertexID(index[*vi]);  

        // Check for non-void type and status==2 (after the dependency resolution) to print only active, printable functors.
        if( masterGraph[*vi]->requiresPrinting() and (masterGraph[*vi]->status()==2) )
        {
          functors_to_print.push_back(index[*vi]);
        }
      }
      // sent vector of ID's of functors to be printed to printer.
      // (if we want to only print functor output sometimes, and dynamically switch this on and off, we'll have to rethink the strategy here a little... for now if the print function of a functor does not get called, it is up to the printer how it deals with the missing result. Similarly for extra results, i.e. from any functors not in this initial list, whose "requiresPrinting" flag later gets set to 'true' somehow.)
      boundPrinter->initialise(functors_to_print);
    }

    /// List of masterGraph content
    void DependencyResolver::printFunctorList() 
    {
      graph_traits<Graphs::MasterGraphType>::vertex_iterator vi, vi_end;
      const str formatString = "%-20s %-32s %-32s %-32s %-15s %-7i %-5i %-5i\n";
      cout << endl << "Vertices registered in masterGraph" << endl;
      cout << "----------------------------------" << endl;
      cout << boost::format(formatString)%
       "MODULE (VERSION)"% "FUNCTION"% "CAPABILITY"% "TYPE"% "PURPOSE"% "STATUS"% "#DEPs"% "#BE_REQs";
      for (tie(vi, vi_end) = vertices(masterGraph); vi != vi_end; ++vi)
      {
        cout << boost::format(formatString)%
         ((*masterGraph[*vi]).origin() + " (" + (*masterGraph[*vi]).version() + ")") %
         (*masterGraph[*vi]).name()%
         (*masterGraph[*vi]).capability()%
         (*masterGraph[*vi]).type()%
         (*masterGraph[*vi]).purpose()%
         (*masterGraph[*vi]).status()%
         (*masterGraph[*vi]).dependencies().size()%
         (*masterGraph[*vi]).backendreqs().size();
      }
      cout << endl << "Registered Backend vertices" << endl;
      cout <<         "---------------------------" << endl;
      printGenericFunctorList(boundCore->getBackendFunctors());
    }

    /// Generic printer of the contents of a functor list
    void DependencyResolver::printGenericFunctorList(const std::vector<functor*>* functorList) 
    {
      const str formatString = "%-20s %-32s %-48s %-32s %-7i\n";
      cout << boost::format(formatString)%
       "ORIGIN (VERSION)"% "FUNCTION"% "CAPABILITY"% "TYPE"% "STATUS";
      for (std::vector<functor *>::const_iterator 
          it  = functorList->begin();
          it != functorList->end();
          ++it)
      {
        cout << boost::format(formatString)%
         ((*it)->origin() + " (" + (*it)->version() + ")") %
         (*it)->name()%
         (*it)->capability()%
         (*it)->type()%
         (*it)->status();
      }
    }

    /// Pretty print function evaluation order
    //
    // Running this lets us check the order of execution. Also helps
    // to verify that we actually have pointers to all the required
    // functors.
    void DependencyResolver::printFunctorEvalOrder()
    { 
      // Get order of evaluation
      std::vector<VertexID> order = getObsLikeOrder();

      str formatString = "%-5s %-25s %-25s\n";
      int i = 0;
      cout << endl << "Initial functor evaluation order" << endl;
      cout << "----------------------------------" << endl;
      cout << boost::format(formatString)% "#"% "FUNCTION"% "ORIGIN";
       
      for (std::vector<VertexID>::const_iterator 
                  vi  = order.begin(); 
                  vi != order.end(); ++vi) 
      {
        cout << boost::format(formatString)%
         i%
         (*masterGraph[*vi]).name()%
         (*masterGraph[*vi]).origin();
        i++;
      }
    
    }

    /// New IO routines
    std::vector<VertexID> DependencyResolver::getObsLikeOrder()
    {
      std::vector<VertexID> unsorted;
      std::vector<VertexID> sorted;
      std::set<VertexID> parents, friends;
      // Copy unsorted vertexIDs --> unsorted
      for (std::vector<OutputVertexInfo>::iterator it = outputVertexInfos.begin();
          it != outputVertexInfos.end(); it++)
      {
        unsorted.push_back(it->vertex);
      }
      // Sort iteratively (unsorted --> sorted)
      while (unsorted.size() > 0)
      {
        double t2p_now;
        double t2p_min = -1;
        std::vector<VertexID>::iterator it_min;
        for (std::vector<VertexID>::iterator it = unsorted.begin(); it !=
            unsorted.end(); ++it)
        {
          parents = getParentVertices(*it, masterGraph);
          parents.insert(friends.begin(), friends.end()); // parents and friends
          t2p_now = (double) getTimeEstimate(parents, masterGraph);
          t2p_now /= masterGraph[*it]->getInvalidationRate();
          if (t2p_min < 0 or t2p_now < t2p_min)
          {
            t2p_min = t2p_now;
            it_min = it;
          }
        }
        double prop = masterGraph[*it_min]->getInvalidationRate();
        cout << "Estimated T [ns]: " << t2p_min*prop << endl;
        cout << "Estimated p: " << prop << endl;
        sorted.push_back(*it_min);
        unsorted.erase(it_min);
      }
      return sorted;
    }

    void DependencyResolver::calcObsLike(VertexID vertex)
    {
      std::vector<VertexID> order;
      //typedef property_map<MasterGraphType, vertex_index_t>::type IndexMap;
      //IndexMap index = get(vertex_index, masterGraph);
      // TODO: Do I need to do this here? Should be a member variable of dependency resolver.

      // TODO: Should happen only once
      order = getSortedParentVertices(vertex, masterGraph, function_order);
      for (std::vector<VertexID>::iterator it = order.begin(); it != order.end(); ++it)
      {
        if (verbose)
        {
          cout << "Calling " << masterGraph[*it]->name() << " from " << masterGraph[*it]->origin() << "..." << endl;
        }
        masterGraph[*it]->calculate();
        // TODO: Need to deal with different options for output
        // Print output (currently only to std::cout)
        // Ben: may want to do this call elsewhere; I added it here for testing.
        // Pat: note that this prints from thread index 0 only, i.e. results created by 
        //      threads other than the main one need to be accessed with 
        //        masterGraph[*it]->print(boundPrinter,index);
        //      where index is some integer s.t. 0 <= index <= number of hardware threads
        masterGraph[*it]->print(boundPrinter);
      }
    }

    double DependencyResolver::getObsLike(VertexID vertex)
    {
      // Returns just doubles, and crashes for other types
      // TODO: Catch errors
      // Pat: Note that this always accesses the 0-index result (which is considered to be
      // the 'final result' when more than one thread has run the functor, and is the 
      // only result when the functor has not been run in parallel); accessing the results
      // from any other threads requires passing the desired thread index explicity instead of 0.
      return (*(dynamic_cast<module_functor<double>*>(masterGraph[vertex])))(0);
    }

    void DependencyResolver::notifyOfInvalidation(VertexID vertex)
    {
      masterGraph[vertex]->notifyOfInvalidation();
    }

    const IniParser::ObservableType * DependencyResolver::getIniEntry(VertexID v)
    {
      for (std::vector<OutputVertexInfo>::iterator it = outputVertexInfos.begin();
          it != outputVertexInfos.end(); it++)
      {
        if (it->vertex == v)
          return it->iniEntry;
      }
      return NULL;
    }

    void DependencyResolver::resetAll()
    {
      graph_traits<Graphs::MasterGraphType>::vertex_iterator vi, vi_end;
      for (tie(vi, vi_end) = vertices(masterGraph); vi != vi_end; ++vi) 
      {
        masterGraph[*vi]->reset();
      }
      // TODO: Ben - this is temporary; the command to tell the printer to start a new point should probably be in ScannerBit or something.
      boundPrinter->endline();
    }

    //
    // Private functions of DependencyResolver
    //

    /// Add module and backend functors to class internal lists.
    void DependencyResolver::addFunctors()
    {
      // - module functors go into masterGraph
      for (std::vector<functor *>::const_iterator 
          it  = boundCore->getModuleFunctors()->begin();
          it != boundCore->getModuleFunctors()->end();
          ++it)
      {
        // Ben: Added check to ignore functors with status set to 0 (i.e. never
        // add them to the graph). If you don't want the value 0 to mean this,
        // we can use -1 or something instead. I am doing this so that we can
        // ignore primary_model_functors which are not to be used for the scan.
        if ( (*it)->status() != 0 ) 
        {
          boost::add_vertex(*it, this->masterGraph);
        }
      }
    }

    /// Resolve dependency
    std::tuple<const IniParser::ObservableType *, const IniParser::ObservableType *, const IniParser::ObservableType *, Graphs::VertexID>
      DependencyResolver::resolveDependency(
        Graphs::VertexID toVertex, sspair quantity)
    {
      graph_traits<Graphs::MasterGraphType>::vertex_iterator vi, vi_end;
      const IniParser::ObservableType *auxEntry = NULL;
      const IniParser::ObservableType *depEntry = NULL;
      const IniParser::ObservableType *optEntry = NULL;
      std::vector<Graphs::VertexID> vertexCandidates;
      bool entryExists = false;

      // First, we check whether the dependent vertex has a unique
      // correspondence in the inifile. Final (output) vertices have to be
      // treated different from all other vertices, since they do not appear
      // as dependencies in the auxiliaries section of the inifile. For them,
      // we just use the entry from the observable/likelihood section for the
      // resolution of ambiguities.  A pointer to the relevant inifile entry
      // is stored in depEntry.
      if ( toVertex == OMEGA_VERTEXID)
      {
        depEntry = findIniEntry(quantity, boundIniFile->getObservables());
        optEntry = depEntry;
        entryExists = true;
      }
      // for all other vertices use the auxiliaries entries
      else 
      {
        auxEntry = findIniEntry(toVertex, boundIniFile->getAuxiliaries());
        if ( auxEntry != NULL )
          depEntry = findIniEntry(quantity, (*auxEntry).dependencies);
        if ( auxEntry != NULL and depEntry != NULL ) 
        {
          entryExists = true;
          optEntry = auxEntry;
        }
      }

      // Loop over all available vertices in masterGraph, and make a list of
      // functors that fulfill the dependency requirement.
      for (tie(vi, vi_end) = vertices(masterGraph); vi != vi_end; ++vi) 
      {
        // Without inifile entry, just match capabilities and types (no type
        // comparison when no types are given; this should only happen for
        // output nodes)
        if ( ( (*masterGraph[*vi]).capability() == quantity.first and
              ( (*masterGraph[*vi]).type() == quantity.second  or quantity.second == "" ) )
        // with inifile entry, we check capability, type, function name and
        // module name.
          and ( entryExists ?  funcMatchesIniEntry(masterGraph[*vi], *depEntry) : true ) )
        {
        // Add to vertex candidate list
          vertexCandidates.push_back(*vi);
        }
      }
      // Special treatment of dependence on point-level initialization
      // functions, which can only be resolved within a given module.
      if ( quantity.first == "PointInit" /* List can be extended, if needed */ )
      {
        std::vector<Graphs::VertexID>::iterator it = vertexCandidates.begin();
        while (it != vertexCandidates.end())
        {
          if ( masterGraph[toVertex]->origin() != masterGraph[*it]->origin() )
          {
            // Delete all vertex candidates that do not belong to the correct
            // module
            it = vertexCandidates.erase(it);
          }
          else
          {
            ++it;
          }
        }
      }
      if ( vertexCandidates.size() == 0 ) 
      {
        cout << "ERROR: I could not find any module function that provides the requested" << endl;
        cout << "capability with the requested type. Check your inifile for typos, your modules" << endl;
        cout << "for consistency, etc." << endl;
        exit(0); // Throw error here
      }
      // In case of doubt (and if not explicitely disabled in the ini-file),
      // try to remove all functors that are not model-specific.
      if ( vertexCandidates.size() > 1 and not ( boundIniFile->hasKey("dependency_resolution", "prefer_model_specific_functors") and not
           boundIniFile->getValue<bool>("dependency_resolution", "prefer_model_specific_functors") ) )
      {
        std::vector<Graphs::VertexID>::iterator it = vertexCandidates.begin();
        cout << "Removing functors that are not model-specific from candidate list." << endl;
        while (it != vertexCandidates.end())
        {
          if ( masterGraph[*it]->allModelsAllowed() )
          {
            it = vertexCandidates.erase(it);
          }
          else
          {
            ++it;
          }
        }
      }
      if ( vertexCandidates.size() > 1 ) 
      {
        cout << "ERROR: I found too many module functions that provide the requested" << endl;
        cout << "capability with the requested type. Check your inifile for typos, your modules" << endl;
        cout << "for consistency, etc." << endl;
        exit(0); // Throw error here
      }
      return std::tie(depEntry, auxEntry, optEntry, vertexCandidates[0]);
    }

    /// Set up dependency tree
    void DependencyResolver::generateTree(
        std::queue<QueueEntry> parQueue)
    {
      OutputVertexInfo outInfo;
      Graphs::VertexID fromVertex, toVertex;
      Graphs::EdgeID edge;
      // relevant observable entry (could be dependency of another observable)
      IniParser::ObservableType observable;
      // Inifile entry relevant for dependency resolution (either something
      // from the observable/likelihood section, or a dependency from the
      // auxiliary section).
      const IniParser::ObservableType * iniEntry; 
      // Inifile entry to relevant auxiliary entry (required for backend
      // resolution)
      const IniParser::ObservableType * auxEntry; 
      // Inifile option entry to relevant auxiliary or observable entry (passed
      // to module function
      const IniParser::ObservableType * optEntry;
      bool ok;
      sspair quantity;
      int dependency_type;

      cout << endl << "Dependency resolution" << endl;
      cout <<         "---------------------" << endl;
      cout <<         "CAPABILITY (TYPE) [FUNCTION, MODULE]" << endl << endl;
      // Repeat until dependency queue is empty
      while (not parQueue.empty()) {
        // Retrieve capability, type and vertex ID of dependency of interest
        quantity = parQueue.front().first;
        toVertex = parQueue.front().second;
        dependency_type = parQueue.front().third;

        // Print information
        if ( toVertex != OMEGA_VERTEXID )
        {
          cout << quantity.first << " (" << quantity.second << ")" << endl;
          cout << "Required by: ";
          cout << (*masterGraph[toVertex]).capability() << " (";
          cout << (*masterGraph[toVertex]).type() << ") [";
          cout << (*masterGraph[toVertex]).name() << ", ";
          cout << (*masterGraph[toVertex]).origin() << "]" << endl;;
        }
        else
        {
          cout << quantity.first << " (" << quantity.second << ")" << endl;
          cout << "Required by: Core" << endl;
        }

        // Resolve dependency
        std::tie(iniEntry, auxEntry, optEntry, fromVertex) = resolveDependency(toVertex, quantity);

        // Print user info.
        cout << "Resolved by: [";
        cout << (*masterGraph[fromVertex]).name() << ", ";
        cout << (*masterGraph[fromVertex]).origin() << "]" << endl;

        // If toVertex is the Core, then fromVertex is one of our target functors, which are
        // the things we want to output to the printer system.  Turn printing on for these.
        // Ben: I had to change this back because otherwise you turn off printing for the model
        // parameters functors, which modelbit previously turned on. 
        if ( toVertex == OMEGA_VERTEXID )
        {
           masterGraph[fromVertex]->setPrintRequirement(true);
           cout << "  --->SETTING PRINT FLAG OF THIS FUNCTOR TO TRUE" << endl;
        }

        if ( toVertex != OMEGA_VERTEXID)
        {
          // Resolve dependency on functor level...
          //
          // In case the fromVertex is a loop manager, store nested function
          // temporarily in loopManagerMap
          if (dependency_type == LOOP_MANAGER_DEPENDENCY)
          {
            // Check whether fromVertex is allowed to manage loops
            if (not masterGraph[fromVertex]->canBeLoopManager())
            {
              cout << "ERROR: Trying to resolve dependency on loop manager" << endl;
              cout << "with module function that is not declared as loop manager." << endl;
              exit(1); //FIXME: Throw real error here
            }
            std::set<Graphs::VertexID> v;
            if (loopManagerMap.count(fromVertex) == 1)
            {
              v = loopManagerMap[fromVertex];
            }
            v.insert(toVertex);
            loopManagerMap[fromVertex] = v;
          }
          // Default is to resovle dependency on functor level of toVertex
          else
          {
            (*masterGraph[toVertex]).resolveDependency(masterGraph[fromVertex]);
          }
          // 
          // ...and on masterGraph level.
          tie(edge, ok) = add_edge(fromVertex, toVertex, masterGraph);
        }
        else
        {
          outInfo.vertex = fromVertex;
          outInfo.iniEntry = iniEntry;
          outputVertexInfos.push_back(outInfo);
        }

        // Is fromVertex already activated?
        if ( (*masterGraph[fromVertex]).status() != 2 ) {
          std::vector<str> modelList = modelClaw.get_activemodels();
          cout << "Adding new module function to dependency tree..." << endl;
          for (std::vector<str>::iterator it = modelList.begin(); it != modelList.end(); ++it)
          {
            masterGraph[fromVertex]->notifyOfModel(*it);
            cout << "Activating for model: " << *it << endl;
          }
          resolveVertexBackend(fromVertex);
          // Generate options object from ini-file entry that corresponds to
          // fromVertex (optEntry) and pass it to the fromVertex for later use
          if ( optEntry != NULL )
          {
            IniParser::Options myOptions(optEntry->options);
            masterGraph[fromVertex]->notifyOfIniOptions(myOptions);
          }
          // Fill parameter queue with dependencies of fromVertex
          fillParQueue(&parQueue, fromVertex);
        }

        // Done.
        cout << endl;
        parQueue.pop();
      }
    }

    /// Push module function dependencies on parameter queue
    void DependencyResolver::fillParQueue(
        std::queue<QueueEntry> *parQueue,
        Graphs::VertexID vertex) 
    {
      (*masterGraph[vertex]).setStatus(2); // activate node, TODO: move somewhere else
      std::vector<sspair> vec = (*masterGraph[vertex]).dependencies();
      if (vec.size() > 0)
        cout << "Adding module function dependencies to resolution queue:" << endl;
      else
        cout << "No further module function dependencies." << endl;
      for (std::vector<sspair>::iterator it = vec.begin(); it != vec.end(); ++it) 
      {
        cout << (*it).first << " (" << (*it).second << ")" << endl;
        (*parQueue).push(*(new QueueEntry (*it, vertex, NORMAL_DEPENDENCY)));
      }
      // Digest capability of loop manager (if defined)
      str loopManagerCapability = (*masterGraph[vertex]).loopManagerCapability();
      if (loopManagerCapability != "none")
      {
        cout << "Adding module function loop manager to resolution queue:" << endl;
        cout << loopManagerCapability << " ()" << endl;
        (*parQueue).push(*(new QueueEntry (*(new sspair
                  (loopManagerCapability, "")), vertex, LOOP_MANAGER_DEPENDENCY)));
      }
    }

    /// Boost lib topological sort
    std::list<VertexID> DependencyResolver::run_topological_sort()
    {
      std::list<VertexID> topo_order;
      topological_sort(masterGraph, front_inserter(topo_order));
      return topo_order;
    }

    /// Find auxiliary entry that matches vertex
    const IniParser::ObservableType * DependencyResolver::findIniEntry(
        Graphs::VertexID toVertex,
        const IniParser::ObservablesType &entries)
    {
      std::vector<const IniParser::ObservableType*> auxEntryCandidates;
      for (IniParser::ObservablesType::const_iterator it =
          entries.begin(); it != entries.end(); ++it)
      {
        if ( funcMatchesIniEntry(masterGraph[toVertex], *it ) )
        {
          auxEntryCandidates.push_back(&(*it));
        }
      }
      if ( auxEntryCandidates.size() == 0 ) return NULL;
      if ( auxEntryCandidates.size() == 1 ) return auxEntryCandidates[0];
      else
      {
        cout << "ERROR: Found multiple matching auxiliary entries for the same vertex." << endl;
        exit(0);
      }
    }

    /// Find observable entry that matches capability/type
    const IniParser::ObservableType *DependencyResolver::findIniEntry(
        sspair quantity, const IniParser::ObservablesType & entries)
    {
      std::vector<const IniParser::ObservableType*> obsEntryCandidates;
      for (IniParser::ObservablesType::const_iterator it =
          entries.begin(); it != entries.end(); ++it)
      {
        if ( quantityMatchesIniEntry(quantity, *it) ) // use same criteria than for normal dependencies
        {
          obsEntryCandidates.push_back(&(*it));
        }
      }
      if ( obsEntryCandidates.size() == 0 ) return NULL;
      if ( obsEntryCandidates.size() == 1 ) return obsEntryCandidates[0];
      else
      {
        cout << "ERROR: Multiple matches for identical capability in inifile." << endl;
        cout << "Capability: " << quantity.first << " (" << quantity.second << ")" << endl;
        exit(0);
      }
    }

    /// Node-by-node backend resolution
    void DependencyResolver::resolveVertexBackend(VertexID vertex)
    {
      // Find relevant ini file entry
      const IniParser::ObservableType * auxEntry = NULL;
      const IniParser::ObservableType * depEntry = NULL;
      bool entryExists = false;
      std::vector<functor *> vertexCandidates;
      std::vector<functor *> disabledVertexCandidates;

      // Collect list of backend requirements of vertex
      std::vector<sspair> reqs = (*masterGraph[vertex]).backendreqs();
      if (reqs.size() == 0) // nothing to do --> return
        return;
      cout << "Backend function resolution: " << endl;

      // Check whether vertex is mentioned in inifile
      auxEntry = findIniEntry(vertex, boundIniFile->getAuxiliaries());

      // A loop over all requirements
      for (std::vector<sspair>::iterator it = reqs.begin();
          it != reqs.end(); ++it)
      {
        cout << it->first << " (" << it->second << ")" << endl;
        depEntry = NULL;
        entryExists = false;
        vertexCandidates.clear();
        // Find relevant iniFile entry from auxiliaries section
        if ( auxEntry != NULL )
          depEntry = findIniEntry(*it, (*auxEntry).backends);
        if ( auxEntry != NULL and depEntry != NULL ) 
          entryExists = true;

        // Loop over all existing backend vertices, and make a list of
        // functors that are available and fulfill the backend dependency requirement
        for (std::vector<functor *>::const_iterator
            itf  = boundCore->getBackendFunctors()->begin(); 
            itf != boundCore->getBackendFunctors()->end();
            ++itf) 
        {
          // Without inifile entry, just match capabilities and types exactly
           if( (*itf)->capability() == it->first and (*itf)->type() == it->second
          // with inifile entry, we check capability, type, function name and
          // module name.
           and ( entryExists ? funcMatchesIniEntry(*itf, *depEntry) : true ) )
          {
            // If the vertex has not been disabled by the backend system
            if ( (*itf)->status() != 0 )
            {
              // add it to vertex candidate list
              vertexCandidates.push_back(*itf);
            }
            else
            {
              // otherwise, add it to disabled vertex candidate list
              disabledVertexCandidates.push_back(*itf);
            }            
          }
        }

        if (vertexCandidates.size() == 0)
        {
          cout << "ERROR: Found no candidates for backend requirement." << endl;
          if (disabledVertexCandidates.size() != 0)
          {
            cout << "Note that viable candidates exist but have been disabled:" << endl;
            printGenericFunctorList(&disabledVertexCandidates);
            cout << "Please check that all shared objects exist for the" << endl;
            cout << "necessary backends, and that they contain all the " << endl;
            cout << "necessary functions required for this scan. " << endl;
          }
          exit(0);
          //FIXME throw a real error here
        }

        // One candidate...
        if (vertexCandidates.size() > 1)
        {
          cout << "ERROR: Found too many candidates for backend requirement." << endl;
          exit(0);
        }
        // Resolve it
        (*masterGraph[vertex]).resolveBackendReq(vertexCandidates[0]);
        cout << "Resolved by: [" << (*vertexCandidates[0]).name();
        cout << ", " << (*vertexCandidates[0]).origin() << " (";
        cout << (*vertexCandidates[0]).version() << ")]" << endl;
      }
    }
  }
}
