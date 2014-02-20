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
///  \date 2013 Apr, May, Jun, Jul
///
///  \author Pat Scott 
///          (patscott@physics.mcgill.ca)
///  \date 2013 May, Aug, Nov
///
///  *********************************************

#ifndef __graphs_hpp__
#define __graphs_hpp__

#include <boost/graph/adjacency_list.hpp>
#include <boost/graph/topological_sort.hpp>
#include <string>
#include <list>
#include <vector>
#include <map>
#include <queue>

#include "gambit_core.hpp"
#include "printers.hpp"
#include "functors.hpp"
#include "yaml_parser.hpp"

using namespace boost;

namespace Gambit
{
  namespace Graphs
  {
    // Typedefs for central boost graph
    typedef adjacency_list<vecS, vecS, bidirectionalS, functor*, vecS> MasterGraphType;
    typedef graph_traits<MasterGraphType>::vertex_descriptor VertexID;
    typedef graph_traits<MasterGraphType>::edge_descriptor EdgeID;
    typedef property_map<MasterGraphType,vertex_index_t>::type IndexMap;

    // Typedefs for communication channels with the master-likelihood
    typedef std::map<std::string, double *> inputMapType;
    typedef std::map<std::string, std::vector<functor*> > outputMapType;

    // Minimal info about outputVertices
    struct OutputVertexInfo
    {
      VertexID vertex;
      const IniParser::ObservableType * iniEntry;
    };

    // Information in parameter queue
    struct QueueEntry
    {
      QueueEntry() {}
      QueueEntry(sspair a, Graphs::VertexID b, int c)
      {
        first = a;
        second = b;
        third = c;
      }
      sspair first;
      Graphs::VertexID second;
      int third;
    };

    // Main dependency resolver
    class DependencyResolver
    {
      public:
        // Constructor, provide module and backend functor lists
        DependencyResolver(const gambit_core&, const IniParser::IniFile&, Printers::BasePrinter&);

        // The dependency resolution
        void resolveNow();

        // Pretty print module functor information
        void printFunctorList();

        // Pretty print backend functor information
        void printGenericFunctorList(const std::vector<functor*>*);

        // Pretty print function evaluation order
        void printFunctorEvalOrder();

        // Initialise the printer object with a list of functors for it to expect to be printed.
        void initialisePrinter();

        // New IO routines
        std::vector<VertexID> getObsLikeOrder();

        void calcObsLike(VertexID);

        double getObsLike(VertexID);

        const IniParser::ObservableType * getIniEntry(VertexID);

        void notifyOfInvalidation(VertexID);

        void resetAll();

      private:
        // Adds list of functor pointers to master graph
        void addFunctors();

        // Resolution of individual module function dependencies
        std::tuple<const IniParser::ObservableType *, const IniParser::ObservableType *, const IniParser::ObservableType *, Graphs::VertexID>
          resolveDependency(Graphs::VertexID toVertex, sspair quantity);

        // Generate full dependency tree
        void generateTree(std::queue<QueueEntry> parQueue);

        // Helper functions/arrays
        void fillParQueue(std::queue<QueueEntry> *parQueue,
            Graphs::VertexID vertex);

        // Topological sort
        std::list<VertexID> run_topological_sort();

        // Find entries (comparison of inifile entry with quantity or functor)
        const IniParser::ObservableType * findIniEntry(
            sspair quantity, const IniParser::ObservablesType &);
        const IniParser::ObservableType * findIniEntry(
            Graphs::VertexID toVertex, const IniParser::ObservablesType &);

        // Resolution of backend dependencies
        void resolveVertexBackend(VertexID);

        //
        // Private data members
        //

        // Core to which this dependency resolver is bound
        const gambit_core *boundCore;

        // ini file to which this dependency resolver is bound
        const IniParser::IniFile *boundIniFile;

        // Printer object to which this dependency resolver is bound
        Printers::BasePrinter *boundPrinter;

        // *** Output Vertex Infos
        std::vector<OutputVertexInfo> outputVertexInfos;

        // *** The central boost graph object
        MasterGraphType masterGraph;

        // *** Saved calling order for functions
        std::list<VertexID> function_order;

        // Temporary map for loop manager -> list of nested functions
        std::map<VertexID, std::set<VertexID>> loopManagerMap;

        // Debug flag
        bool verbose;

        // Indices associated with graph vertices (used by printers to identify functors)
        IndexMap index;

    };
  }
}
#endif /* defined(__graphs_hpp__) */
