//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Dependency resolution with boost graph library
///
///          unravels the un-unravelable
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Christoph Weniger
///          (c.weniger@uva.nl)
///  \date 2013 May, Jun, Jul, Sep
///  \date 2014 Feb, Mar, Apr
///
///  \author Pat Scott 
///          (patscott@physics.mcgill.ca)
///  \date 2013 May, Jul, Aug, Nov
///  \date 2014 Jan, Mar
///
///  \author Ben Farmer
///          (benjamin.farmer@monash.edu)
///  \date 2013 Sep
///
///  *********************************************

#include <sstream>

#include "depresolver.hpp"
#include "models.hpp"
#include "log.hpp"

#include <boost/format.hpp>
#include <boost/graph/graphviz.hpp>

// This vertex ID is reserved for nodes that correspond to
// likelihoods/observables/etc (observables of interest)
#define OBSLIKE_VERTEXID 23051985 

// Dependency types
#define NORMAL_DEPENDENCY 1
#define LOOP_MANAGER_DEPENDENCY 2

namespace Gambit
{

  namespace DRes
  {
    using namespace LogTags;
    ///////////////////////
    // Auxiliary functions
    ///////////////////////

    //
    // Functions that act on a resolved dependency graph
    //

    // Collect parent vertices recursively (including root vertex)
    std::set<VertexID> getParentVertices(const VertexID & vertex, const
        DRes::MasterGraphType & graph)
    {
      std::set<VertexID> myVertexList;
      myVertexList.insert(vertex);
      std::set<VertexID> parentVertexList;

      graph_traits<DRes::MasterGraphType>::in_edge_iterator ibegin, iend;
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
        DRes::MasterGraphType & graph, std::list<VertexID> topoOrder)
    {
      std::set<VertexID> set = getParentVertices(vertex, graph);
      return sortVertices(set, topoOrder);
    }

    //
    // Functions that compare ini-file entries and observables
    //

    // Check whether quantity matches observableType
    // Matches capability
    bool quantityMatchesIniEntry(const sspair & quantity, const IniParser::ObservableType & observable)
    {
      // Compares dependency specifications of auxiliary entries or observable
      // entries with capability (capabilities have to be unique for these
      // lists))
      if ( stringComp( observable.capability, quantity.first ) ) return true;
      else return false;
    }

    // Check whether functor matches observableType
    // Matches capability, type, function and module name
    bool funcMatchesIniEntry(functor *f, const IniParser::ObservableType &e)
    {
      if (     stringComp( e.capability, (*f).capability() )
           and stringComp( e.type, (*f).type() )
           and stringComp( e.function, (*f).name() )
           and stringComp( e.module, (*f).origin() ) )
           return true;
      else return false;
    }

    //
    // Graphviz output
    //

    // Graphviz output for edges/dependencies
    class edgeWriter
    {
      private:
        const DRes::MasterGraphType * myGraph;
      public:
        edgeWriter(const DRes::MasterGraphType * masterGraph) : myGraph(masterGraph) {};
        void operator()(std::ostream&, const EdgeID&) const
        {
          //out << "[style=\"dotted\"]";
        }
    };

    // Graphviz output for individual vertices/nodes/module functions
    class labelWriter
    {
      private:
        const DRes::MasterGraphType * myGraph;
      public:
        labelWriter(const DRes::MasterGraphType * masterGraph) : myGraph(masterGraph) {};
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
    // Misc
    //

    // Return runtime estimate for a set of nodes
    double getTimeEstimate(std::set<VertexID> vertexList, const DRes::MasterGraphType &graph)
    {
      double result = 0;
      for (std::set<VertexID>::iterator it = vertexList.begin(); it != vertexList.end(); ++it)
      {
        result += graph[*it]->getRuntimeAverage();
      }
      return result;
    }

    // Check whether s1 (wildcard + regex allowed) matches s2
    bool stringComp(str s1, str s2)
    {
      if ( s1 == s2 ) return true;
      if ( s1 == "" ) return true;
      if ( s1 == "*" ) return true;
      // if ( std::regex_match ( s2, *(new std::regex(s1)) ) ) return true; 
      // TODO: Implement wildcard and regex comparison
      return false;
    }


    ///////////////////////////////////////////////////
    // Public definitions of DependencyResolver class
    ///////////////////////////////////////////////////

    // Constructor
    DependencyResolver::DependencyResolver(const gambit_core &core, const
            IniParser::IniFile &iniFile, Printers::BasePrinter &printer)
     : boundCore(&core), boundIniFile(&iniFile), boundPrinter(&printer), index(get(vertex_index,masterGraph))
    {
      addFunctors();
    }

    //
    // Initialization stage
    //

    // Main dependency resolution
    void DependencyResolver::doResolution()
    {
      const IniParser::ObservablesType & observables = boundIniFile->getObservables();
      // (cap., typ) --> dep. vertex map
      std::queue<QueueEntry> parQueue;
      QueueEntry queueEntry;
    
      // Set up list of target ObsLikes
      logger() << LogTags::dependency_resolver << endl;
      logger() << "#######################################"   << endl;
      logger() << "#        List of Target ObsLikes      #"   << endl;
      logger() << "#                                     #"   << endl;
      logger() << "# format: Capability (Type) [Purpose] #"   << endl;
      logger() << "#######################################"   << endl << endl;
      for (auto it = observables.begin(); it != observables.end(); ++it)
      {
        // TODO: Format output
        logger() << LogTags::dependency_resolver << it->capability << " (" << it->type << ") [" << it->purpose << "]" << endl;
        queueEntry.first.first = it->capability;
        queueEntry.first.second = it->type;
        queueEntry.second = OBSLIKE_VERTEXID;
        queueEntry.printme = it->printme;
        parQueue.push(queueEntry);
      }
      logger() << EOM;

      // Select functors compatible with model we scan over (and deactivate the
      // rest)
      makeFunctorsModelCompatible();

      // Generate dependency tree (the core of the dependency resolution)
      generateTree(parQueue);

      // Find one execution order for activated vertices that is compatible
      // with dependency structure
      function_order = run_topological_sort();

      // Loop manager initialization: Notify them about their nested functions
      for (std::map<VertexID, std::set<VertexID>>::iterator it =
          loopManagerMap.begin(); it != loopManagerMap.end(); ++it)
      {
        // Generate topologically sorted list of vertex IDs that are nested
        // within loop manager (*it) ...
        std::vector<VertexID> vertexList = sortVertices(it->second, function_order);
        // ... map this on functor pointers...
        std::vector<functor*> functorList;
        for (std::vector<VertexID>::iterator jt = vertexList.begin(); jt != vertexList.end(); ++jt)
        {
          functorList.push_back(masterGraph[*jt]);
        }
        // ...and store it into loop manager functor
        masterGraph[it->first]->setNestedList(functorList);
      }

      // Initialise the printer object with a list of functors that are set to print
      initialisePrinter();

      // Generate graphviz plot
      std::ofstream outf("graph.gv");
      write_graphviz(outf, masterGraph, labelWriter(&masterGraph), edgeWriter(&masterGraph));

      // Done
    }

    // List of masterGraph content
    void DependencyResolver::printFunctorList() 
    {
      graph_traits<DRes::MasterGraphType>::vertex_iterator vi, vi_end;
      const str formatString = "%-20s %-32s %-32s %-32s %-15s %-7i %-5i %-5i\n";
      logger() << LogTags::dependency_resolver << endl << "Vertices registered in masterGraph" << endl;
      logger() << "----------------------------------" << endl;
      logger() << boost::format(formatString)%
       "MODULE (VERSION)"% "FUNCTION"% "CAPABILITY"% "TYPE"% "PURPOSE"% "STATUS"% "#DEPs"% "#BE_REQs";
      for (boost::tie(vi, vi_end) = vertices(masterGraph); vi != vi_end; ++vi)
      {
        logger() << boost::format(formatString)%
         ((*masterGraph[*vi]).origin() + " (" + (*masterGraph[*vi]).version() + ")") %
         (*masterGraph[*vi]).name()%
         (*masterGraph[*vi]).capability()%
         (*masterGraph[*vi]).type()%
         (*masterGraph[*vi]).purpose()%
         (*masterGraph[*vi]).status()%
         (*masterGraph[*vi]).dependencies().size()%
         (*masterGraph[*vi]).backendreqs().size();
      }
      logger() << endl << "Registered Backend vertices" << endl;
      logger() <<         "---------------------------" << endl;
      logger() << printGenericFunctorList(boundCore->getBackendFunctors());
      logger() << EOM;
    }

    // Pretty print function evaluation order
    void DependencyResolver::printFunctorEvalOrder()
    { 
      // Running this lets us check the order of execution. Also helps
      // to verify that we actually have pointers to all the required
      // functors.
      //
      // Get order of evaluation
      std::vector<VertexID> order = getObsLikeOrder();

      str formatString = "%-5s %-25s %-25s\n";
      int i = 0;
      logger() << LogTags::dependency_resolver;
      logger() << endl << "Initial functor evaluation order" << endl;
      logger() << "----------------------------------" << endl;
      logger() << boost::format(formatString)% "#"% "FUNCTION"% "ORIGIN";
      logger() << EOM;
       
      for (std::vector<VertexID>::const_iterator 
                  vi  = order.begin(); 
                  vi != order.end(); ++vi) 
      {
        logger() << LogTags::dependency_resolver;
        logger() << boost::format(formatString)%
         i%
         (*masterGraph[*vi]).name()%
         (*masterGraph[*vi]).origin();
        logger() << EOM;
        i++;
      }
    
    }

    //
    // Runtime
    //

    // Returns list of ObsLike vertices in order of runtime
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
        logger() << LogTags::dependency_resolver << "Estimated T [ns]: " << t2p_min*prop << endl << EOM;
        logger() << LogTags::dependency_resolver << "Estimated p: " << prop << endl << EOM;
        sorted.push_back(*it_min);
        unsorted.erase(it_min);
      }
      return sorted;
    }

    // Evaluates ObsLike vertex, and everything it depends on, and prints
    // results
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
        std::ostringstream ss;
        ss << "Calling " << masterGraph[*it]->name() << " from " << masterGraph[*it]->origin() << "...";
        logger() << LogTags::dependency_resolver << LogTags::info << ss.str() << endl << EOM;
        masterGraph[*it]->calculate();
        // TODO: Need to deal with different options for output
        // Print output (currently only to std::cout)
        // Ben: may want to do this call elsewhere; I added it here for testing.
        // Pat: note that this prints from thread index 0 only, i.e. results created by 
        //      threads other than the main one need to be accessed with 
        //        masterGraph[*it]->print(boundPrinter,index);
        //      where index is some integer s.t. 0 <= index <= number of hardware threads
        if (masterGraph[*it]->type() != "void") masterGraph[*it]->print(boundPrinter);
      }
    }

    // Returns value from ObsLike (only doubles)
    double DependencyResolver::getObsLike(VertexID vertex)
    {
      // Returns just doubles, and crashes for other types
      // TODO: Catch errors
      // Pat: Note that this always accesses the 0-index result (which is considered to be
      // the 'final result' when more than one thread has run the functor, and is the 
      // only result when the functor has not been run in parallel); accessing the results
      // from any other threads requires passing the desired thread index explicity instead of 0.
      std::cout<<"ben: bug here?"<<std::endl;
      return (*(dynamic_cast<module_functor<double>*>(masterGraph[vertex])))(0);
    }

    // Tell functor that it invalidated the current point in model space (due
    // to a large contribution to lnL)
    void DependencyResolver::notifyOfInvalidation(VertexID vertex)
    {
      masterGraph[vertex]->notifyOfInvalidation();
    }

    // Returns pointer to ini-file entry associated with ObsLike
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

    // Resets all functors and delets exisiting results
    void DependencyResolver::resetAll()
    {
      graph_traits<DRes::MasterGraphType>::vertex_iterator vi, vi_end;
      for (boost::tie(vi, vi_end) = vertices(masterGraph); vi != vi_end; ++vi) 
      {
        masterGraph[*vi]->reset();
      }
      // TODO: Ben - this is temporary; the command to tell the printer to start a new point should probably be in ScannerBit or something.
      boundPrinter->endline();
    }


    ////////////////////////////////////////////////////
    // Private definitions of DependencyResolver class
    ////////////////////////////////////////////////////

    // Generic printer of the contents of a functor list
    str DependencyResolver::printGenericFunctorList(const std::vector<functor*>& functorList)
    {
      const str formatString = "%-20s %-32s %-48s %-32s %-7i\n";
      std::ostringstream stream;
      stream << boost::format(formatString)%"ORIGIN (VERSION)"% "FUNCTION"% "CAPABILITY"% "TYPE"% "STATUS";
      for (std::vector<functor *>::const_iterator 
          it  = functorList.begin();
          it != functorList.end();
          ++it)
      {
        stream << boost::format(formatString)%
         ((*it)->origin() + " (" + (*it)->version() + ")") %
         (*it)->name()%
         (*it)->capability()%
         (*it)->type()%
         (*it)->status();
      }
      return stream.str();
    }

    // Add module functors in bound core to class-internal masterGraph object
    void DependencyResolver::addFunctors()
    {
      // - module functors go into masterGraph
      for (std::vector<functor *>::const_iterator 
          it  = boundCore->getModuleFunctors().begin();
          it != boundCore->getModuleFunctors().end();
          ++it)
      {
        // Ignore functors with status set to 0 in order to ignore primary_model_functors 
        // that are not to be used for the scan.
        if ( (*it)->status() != 0 ) 
        {
          boost::add_vertex(*it, this->masterGraph);
        }
      }
    }

    /// Deactivate functors that are not allowed to be used with any of the models being scanned. 
    /// Also activate the model-conditional dependencies and backend requirements of those
    /// functors that are allowed to be used with the model(s) being scanned.
    void DependencyResolver::makeFunctorsModelCompatible()
    {
      graph_traits<DRes::MasterGraphType>::vertex_iterator vi, vi_end;
      std::vector<str> modelList = modelClaw().get_activemodels();
      // First make sure to deactivate all the vertices
      for (boost::tie(vi, vi_end) = vertices(masterGraph); vi != vi_end; ++vi)
      {
        masterGraph[*vi]->setStatus(0);
      }
      // Then reactivate those that match one of the models being scanned.
      for (std::vector<str>::iterator it = modelList.begin(); it != modelList.end(); ++it)
      {
        for (boost::tie(vi, vi_end) = vertices(masterGraph); vi != vi_end; ++vi)
        {
          if (masterGraph[*vi]->modelAllowed(*it))
          {
            masterGraph[*vi]->notifyOfModel(*it);
            masterGraph[*vi]->setStatus(1);
          }
        }
      }
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

      for (boost::tie(vi, vi_end) = vertices(masterGraph); vi != vi_end; ++vi)
      {
        // Inform the active functors of the vertex ID that the masterGraph has assigned to them
        // (so that later on they can pass this to the printer object to identify themselves)  
        masterGraph[*vi]->setVertexID(index[*vi]);  

        // Check for non-void type and status==2 (after the dependency resolution) to print only active, printable functors.
        // TODO: this doesn't currently check for non-void type; that is done at the time of printing in calcObsLike.  Not sure if this is
        //       how it should be in the end.
        if( masterGraph[*vi]->requiresPrinting() and (masterGraph[*vi]->status()==2) )
        {
          functors_to_print.push_back(index[*vi]);
        }
      }
      // sent vector of ID's of functors to be printed to printer.
      // (if we want to only print functor output sometimes, and dynamically
      // switch this on and off, we'll have to rethink the strategy here a
      // little... for now if the print function of a functor does not get
      // called, it is up to the printer how it deals with the missing result.
      // Similarly for extra results, i.e. from any functors not in this
      // initial list, whose "requiresPrinting" flag later gets set to 'true'
      // somehow.)
      boundPrinter->initialise(functors_to_print);
    }

    /// Resolve dependency
    boost::tuple<const IniParser::ObservableType *, DRes::VertexID>
        DependencyResolver::resolveDependency( DRes::VertexID toVertex, sspair quantity)
    {
      graph_traits<DRes::MasterGraphType>::vertex_iterator vi, vi_end;
      const IniParser::ObservableType *auxEntry = NULL;  // Ptr. on ini-file entry of the dependent vertex (if existent)
      const IniParser::ObservableType *depEntry = NULL;  // Ptr. on ini-file entry that specifies how to resolve 'quantity'
      std::vector<DRes::VertexID> vertexCandidates;
      bool entryExists = false;  // Ini-file entry to resolve 'quantity' found?

      // First, we check whether the dependent vertex has a unique
      // correspondence in the inifile. Final (output) vertices have to be
      // treated different from all other vertices, since they do not appear
      // as dependencies in the auxiliaries section of the inifile. For them,
      // we just use the entry from the observable/likelihood section for the
      // resolution of ambiguities.  A pointer to the relevant inifile entry
      // is stored in depEntry.
      if ( toVertex == OBSLIKE_VERTEXID )
      {
        depEntry = findIniEntry(quantity, boundIniFile->getObservables(), "ObsLike");
        entryExists = true;
      }
      // for all other vertices use the auxiliaries entries
      else 
      {
        auxEntry = findIniEntry(toVertex, boundIniFile->getAuxiliaries(), "auxiliary");
        if ( auxEntry != NULL )
          depEntry = findIniEntry(quantity, (*auxEntry).dependencies, "dependency");
        if ( auxEntry != NULL and depEntry != NULL ) 
        {
          entryExists = true;
        }
      }

      // Loop over all available vertices in masterGraph, and make a list of
      // functors that fulfill the dependency requirement.
      for (tie(vi, vi_end) = vertices(masterGraph); vi != vi_end; ++vi) 
      {
        // Don't allow resolution by deactivated functors
        if (masterGraph[*vi]->status() != 0)
        {
          // Without inifile entry, just match capabilities and types (no type
          // comparison when no types are given; this should only happen for
          // output nodes)
          if ( ( masterGraph[*vi]->capability() == quantity.first and
                ( masterGraph[*vi]->type() == quantity.second  or quantity.second == "" ) )
          // with inifile entry, we check capability, type, function name and
          // module name.
            and ( entryExists ? funcMatchesIniEntry(masterGraph[*vi], *depEntry) : true ) )
          {
          // Add to vertex candidate list
            vertexCandidates.push_back(*vi);
          }
        }
      }

      // Special treatment of dependence on point-level initialization
      // functions, which can only be resolved from within a given module.
      if ( quantity.first == "PointInit" /* List can be extended, if needed */ )
      {
        std::vector<DRes::VertexID>::iterator it = vertexCandidates.begin();
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

      // Die if there is no way to fulfill this dependency.
      if ( vertexCandidates.size() == 0 ) 
      {
        if ( not entryExists )
        {
            str errmsg = "I could not find any module function that provides ";
            errmsg += quantity.first + " (" + quantity.second + ")"
                +  "\nCheck your inifile for typos, your modules for consistency, etc.";
            dependency_resolver_error().raise(LOCAL_INFO,errmsg);
        }
        else
        {
            str errmsg = "I could not find any module function that provides ";
            errmsg += quantity.first + " (" + quantity.second + ") ["
                + depEntry->function + ", " + depEntry->module + "]"
                +  "\nCheck your inifile for typos, your modules for consistency, etc.";
            dependency_resolver_error().raise(LOCAL_INFO,errmsg);
        }
      }

      // In case of doubt (and if not explicitely disabled in the ini-file), prefer functors 
      // that are more specifically tailored for the model being scanned.
      if ( vertexCandidates.size() > 1 and not ( boundIniFile->hasKey("dependency_resolution", "prefer_model_specific_functions") and not
           boundIniFile->getValue<bool>("dependency_resolution", "prefer_model_specific_functions") ) )
      {
        // Work up the model ancestry one step at a time, and stop as soon as one or more valid model-specific functors is 
        // found at a given level in the hierarchy.
        std::vector<DRes::VertexID> newVertexCandidates;
        std::vector<str> parentModelList = modelClaw().get_activemodels();
        while (newVertexCandidates.size() == 0 and not parentModelList.empty())
        {
          for (std::vector<str>::iterator mit = parentModelList.begin(); mit != parentModelList.end(); ++mit)
          {            
            // Test each vertex candidate to see if it has been explicitly set up to work with the model *mit
            for (std::vector<DRes::VertexID>::iterator it = vertexCandidates.begin(); it != vertexCandidates.end(); ++it)
            {
              if ( masterGraph[*it]->modelExplicitlyAllowed(*mit) ) newVertexCandidates.push_back(*it);
            }
            // Step up a level in the model hierarchy for this model.
            std::vector<str> pvec = parents(*mit);
            if (pvec.size() > 1)
            {
              str errmsg = "Multi-parent models cannot be used in cases where model specific functor rules need";
              errmsg += "to be invoked. Please specify your required dependencies more fully in your inifile.";
              dependency_resolver_error().raise(LOCAL_INFO,errmsg); // TODO: streamline error message
            }
            else if (pvec.size() == 0) 
            {
             *mit = "none";
            }
            else 
            {
             *mit = pvec[0];
            }
          }
          parentModelList.erase(std::remove(parentModelList.begin(), parentModelList.end(), "none"), parentModelList.end());
        }
        if (newVertexCandidates.size() != 0) vertexCandidates = newVertexCandidates;
      }

      if ( vertexCandidates.size() > 1 ) 
      {
        str errmsg = "";
        if ( not entryExists )
        {
            errmsg += "I found too many module functions that provide ";
            errmsg += quantity.first + " (" + quantity.second + ")"
                +  "\nCheck your inifile for typos, your modules for consistency, etc.";
        }
        else
        {
            errmsg += "I found too many module functions that provide ";
            errmsg += quantity.first + " (" + quantity.second + ") ["
                + depEntry->function + ", " + depEntry->module + "]"
                +  "\nCheck your inifile for typos, your modules for consistency, etc.";
        }
        if ( boundIniFile->hasKey("dependency_resolution", "prefer_model_specific_functions") and not
        boundIniFile->getValue<bool>("dependency_resolution", "prefer_model_specific_functions") )
        errmsg += "\nAlso consider turning on prefer_model_specific_functions in your inifile.";
        errmsg += "\nCandidate module functions are:";
        for (std::vector<DRes::VertexID>::iterator it = vertexCandidates.begin(); it != vertexCandidates.end(); ++it)
        {
            errmsg += "\n   [" + masterGraph[*it]->name() + "," + masterGraph[*it]->origin() + "]";
        }
        dependency_resolver_error().raise(LOCAL_INFO,errmsg); // TODO: streamline error message
      }

      return boost::tie(depEntry, vertexCandidates[0]);
    }

    /// Set up dependency tree
    void DependencyResolver::generateTree( std::queue<QueueEntry> parQueue)
    {
      OutputVertexInfo outInfo;
      DRes::VertexID fromVertex, toVertex;
      DRes::EdgeID edge;
      // Inifile entry of ObsLike (if relevant)
      const IniParser::ObservableType * iniEntry; 
      bool ok;
      sspair quantity;
      int dependency_type;
      bool printme;

      logger() << LogTags::dependency_resolver << endl;
      logger() << "################################################" << endl;
      logger() << "#         Starting dependency resolution       #" << endl;
      logger() << "#                                              #" << endl;
      logger() << "# format: Capability (Type) [Function, Module] #" << endl;
      logger() << "################################################" << endl;
      logger() << EOM;

      //
      // Main loop: repeat until dependency queue is empty
      //

      while (not parQueue.empty()) {

        // Retrieve capability, type and vertex ID of dependency of interest
        quantity = parQueue.front().first;  // (capability, type) pair
        toVertex = parQueue.front().second;  // dependent vertex
        dependency_type = parQueue.front().third;  // Normal or loop-manager
        printme = parQueue.front().printme;  // bool

        // Print information about required quantity and dependent vertex
        logger() << LogTags::dependency_resolver;
        logger() << endl << "Resolving " << quantity.first << " (" << quantity.second << ")";
        if ( toVertex != OBSLIKE_VERTEXID )
        {
          logger() << ", required by ";
          logger() << (*masterGraph[toVertex]).capability() << " (";
          logger() << (*masterGraph[toVertex]).type() << ") [";
          logger() << (*masterGraph[toVertex]).name() << ", ";
          logger() << (*masterGraph[toVertex]).origin() << "]" << endl;;
        }
        else
        {
          logger() << ", required by Core" << endl;
        }
        //logger() << EOM;

        // Figure out how to resolve dependency
        boost::tie(iniEntry, fromVertex) = resolveDependency(toVertex, quantity);

        // Print user info.
        logger() << LogTags::dependency_resolver;
        logger() << "Resolved by: [";
        logger() << (*masterGraph[fromVertex]).name() << ", ";
        logger() << (*masterGraph[fromVertex]).origin() << "]" << endl;
        //logger() << EOM;

        // If toVertex is the Core, then fromVertex is one of our target functors, which are
        // the things we want to output to the printer system.  Turn printing on for these.
        if ( printme and (toVertex==OBSLIKE_VERTEXID) )
        {
           masterGraph[fromVertex]->setPrintRequirement(true);
        }

        // Apply resolved dependency to masterGraph and functors
        if ( toVertex != OBSLIKE_VERTEXID )
        {
          // Resolve dependency on functor level...
          //
          // In case the fromVertex is a loop manager, store nested function
          // temporarily in loopManagerMap (they have to be sorted later)
          if (dependency_type == LOOP_MANAGER_DEPENDENCY)
          {
            // Check whether fromVertex is allowed to manage loops
            if (not masterGraph[fromVertex]->canBeLoopManager())
            {
              str errmsg = "Trying to resolve dependency on loop manager with";
              errmsg += "\nmodule function that is not declared as loop manager.";
              dependency_resolver_error().raise(LOCAL_INFO,errmsg); // TODO: streamline error message
            }
            std::set<DRes::VertexID> v;
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
          boost::tie(edge, ok) = add_edge(fromVertex, toVertex, masterGraph);
        }
        else // if output vertex
        {
          outInfo.vertex = fromVertex;
          outInfo.iniEntry = iniEntry;
          outputVertexInfos.push_back(outInfo);
        }

        // If fromVertex is new, activate it
        if ( (*masterGraph[fromVertex]).status() != 2 )
        {
          logger() << LogTags::dependency_resolver << "Activate new module function" << endl;
          masterGraph[fromVertex]->setStatus(2); // activate node
          resolveVertexBackend(fromVertex);
          // Generate options object from ini-file entry that corresponds to
          // fromVertex (overwrite iniEntry) and pass it to the fromVertex for later use
          iniEntry = findIniEntry(fromVertex, boundIniFile->getAuxiliaries(), "auxiliary");
          if ( iniEntry != NULL )
          {
            Options myOptions(iniEntry->options);
            masterGraph[fromVertex]->notifyOfIniOptions(myOptions);
          }
          // Fill parameter queue with dependencies of fromVertex
          fillParQueue(&parQueue, fromVertex);
        }

        // Done.
        logger() << EOM;
        parQueue.pop();
      }
    }

    /// Push module function dependencies on parameter queue
    void DependencyResolver::fillParQueue( std::queue<QueueEntry> *parQueue,
            DRes::VertexID vertex) 
    {
      bool printme_default = false; // for parQueue constructor
      std::vector<sspair> vec = (*masterGraph[vertex]).dependencies();
      logger() << LogTags::dependency_resolver;
      if (vec.size() > 0)
        logger() << "Add dependencies of new module function to queue" << endl;
      //else
      //  logger() << "No further module function dependencies" << endl;
      for (std::vector<sspair>::iterator it = vec.begin(); it != vec.end(); ++it) 
      {
        logger() << (*it).first << " (" << (*it).second << ")" << endl;
        (*parQueue).push(*(new QueueEntry (*it, vertex, NORMAL_DEPENDENCY, printme_default)));
      }
      // Digest capability of loop manager (if defined)
      str loopManagerCapability = (*masterGraph[vertex]).loopManagerCapability();
      if (loopManagerCapability != "none")
      {
        logger() << "Adding module function loop manager to resolution queue:" << endl;
        logger() << loopManagerCapability << " ()" << endl;
        (*parQueue).push(*(new QueueEntry (*(new sspair
                  (loopManagerCapability, "")), vertex, LOOP_MANAGER_DEPENDENCY, printme_default)));
      }
      //logger() << EOM;
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
            DRes::VertexID toVertex, const IniParser::ObservablesType &entries, const str & errtag)
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
      else if ( auxEntryCandidates.size() != 1 )
      {
        str errmsg = "Found multiple " + errtag + " entries for ";
        errmsg += masterGraph[toVertex]->capability() +" (" +
            masterGraph[toVertex]->type() + ") [" +
            masterGraph[toVertex]->name() + ", " +
            masterGraph[toVertex]->origin() + "]";
        dependency_resolver_error().raise(LOCAL_INFO, errmsg);
      }
      return auxEntryCandidates[0]; // auxEntryCandidates.size() == 1
    }

    /// Find observable entry that matches capability/type
    const IniParser::ObservableType* DependencyResolver::findIniEntry(
            sspair quantity, const IniParser::ObservablesType & entries, const str & errtag)
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
      else if ( obsEntryCandidates.size() != 1 )
      {
        str errmsg = "Found multiple " + errtag + " entries for ";
        errmsg += quantity.first + " (" + quantity.second + ")";
        dependency_resolver_error().raise(LOCAL_INFO,errmsg);
      }
      return obsEntryCandidates[0]; // obsEntryCandidates.size() == 1
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
      if (reqs.size() == 0) return; // nothing to do --> return
      logger() << LogTags::dependency_resolver << "Backend function resolution" << endl;

      // Check whether vertex is mentioned in inifile
      auxEntry = findIniEntry(vertex, boundIniFile->getAuxiliaries(), "auxiliary");

      // A loop over all requirements
      for (std::vector<sspair>::iterator it = reqs.begin();
          it != reqs.end(); ++it)
      {
        logger() << LogTags::dependency_resolver << it->first << " (" << it->second << ")";
        depEntry = NULL;
        entryExists = false;
        vertexCandidates.clear();
        // Find relevant iniFile entry from auxiliaries section
        if ( auxEntry != NULL )
          depEntry = findIniEntry(*it, (*auxEntry).backends, "backend");
        if ( auxEntry != NULL and depEntry != NULL ) 
          entryExists = true;

        // Loop over all existing backend vertices, and make a list of
        // functors that are available and fulfill the backend dependency requirement
        for (std::vector<functor *>::const_iterator
            itf  = boundCore->getBackendFunctors().begin(); 
            itf != boundCore->getBackendFunctors().end();
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
          str errmsg = "Found no candidates for backend requirement ";
          errmsg += it->first + " (" + it->second + ")";
          if (disabledVertexCandidates.size() != 0)
          {
            errmsg += "\nNote that viable candidates exist but have been disabled:"
                   +     printGenericFunctorList(disabledVertexCandidates)
                   +  "\nPlease check that all shared objects exist for the"
                   +  "\nnecessary backends, and that they contain all the"
                   +  "\nnecessary functions required for this scan. In "
                   +  "\nparticular, make sure that your mangled function"
                   +  "\nnames match the symbol names in your shared lib.";
          }
          dependency_resolver_error().raise(LOCAL_INFO,errmsg); // TODO: streamline error message
        }

        // One candidate...
        if (vertexCandidates.size() > 1)
        {
          str errmsg = "Found too many candidates for backend requirement ";
          errmsg += it->first + " (" + it->second + ")";
          errmsg += "\nCandidate backend functions are :";
          for (auto it = vertexCandidates.begin(); it != vertexCandidates.end(); ++it)
          {
            errmsg += "\n   [" + (*it)->name() + ", " + (*it)->origin() + "]";
            // TODO: Show also version numbers
          }
          dependency_resolver_error().raise(LOCAL_INFO, errmsg);
        }
        // Resolve it
        (*masterGraph[vertex]).resolveBackendReq(vertexCandidates[0]);
        logger() << LogTags::dependency_resolver;
        logger() << ", resolved by [" << (*vertexCandidates[0]).name();
        logger() << ", " << (*vertexCandidates[0]).origin() << " (";
        logger() << (*vertexCandidates[0]).version() << ")]" << endl;
        //logger() << EOM;
      }
    }
  }
}
