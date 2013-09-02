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
//  Apr, May, June, July 2013
//  Pat Scott
//  May 03 2013, Aug 1
//
//  *********************************************

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
#include "functors.hpp"
#include "yaml_parser.hpp"

using namespace boost;

namespace GAMBIT
{
  namespace Graphs
  {
    // Typedefs for central boost graph
    typedef adjacency_list<vecS, vecS, bidirectionalS, functor*, vecS> MasterGraphType;
    typedef graph_traits<MasterGraphType>::vertex_descriptor VertexID;
    typedef graph_traits<MasterGraphType>::edge_descriptor EdgeID;

    // Typedefs for communication channels with the master-likelihood
    typedef std::map<std::string, double *> inputMapType;
    typedef std::map<std::string, std::vector<functor*> > outputMapType;

    // Minimal info about outputVertices
    struct OutputVertexInfo
    {
      VertexID vertex;
      const IniParser::ObservableType * iniEntry;
    };

    // Main dependency resolver
    class DependencyResolver
    {
      public:
        // Constructor, provide module and backend functor lists
        DependencyResolver(const gambit_core&, const IniParser::IniFile&);

        // The dependency resolution
        void resolveNow();

        // Pretty print module functor information
        void printFunctorList();

        // Pretty print backend functor information
        void printBackendFunctorList();

        // Pretty print function evaluation order
        void printFunctorEvalOrder();

        // New IO routines
        std::vector<VertexID> getObsLikeOrder();

        void calcObsLike(VertexID);

        double getObsLike(VertexID);

        const IniParser::ObservableType * getIniEntry(VertexID);

        void notifyOfInvalidation(VertexID);

        void resetAll();

      private:
        // Construct adhoc nodes from "adhoc" model specifications in inifile
        void addAdhocNodes();

        // Adds list of functor pointers to master graph
        void addFunctors();

        // Resolution of individual module function dependencies
        std::tuple<const IniParser::ObservableType *, const IniParser::ObservableType *, Graphs::VertexID>
          resolveDependency(Graphs::VertexID toVertex, sspair quantity);

        // Generate full dependency tree
        void generateTree(std::queue<std::pair<sspair, Graphs::VertexID> > parQueue);

        // Helper functions/arrays
        void fillParQueue(std::queue<std::pair<sspair, Graphs::VertexID> > *parQueue,
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

        // WILL BECOME OBSOLETE WITH MODEL PARAMETERS
        inputMapType inputMap; // DEPRECATED
        // DEPRECATED

        // Core to which this dependency resolver is bound
        const gambit_core *boundCore;

        // ini file to which this dependency resolver is bound
        const IniParser::IniFile *boundIniFile;

        // *** Output Vertex Infos
        std::vector<OutputVertexInfo> outputVertexInfos;

        // *** The central boost graph object
        MasterGraphType masterGraph;

        // *** Saved calling order for functions
        std::list<VertexID> function_order;

    };
  }
}
#endif /* defined(__graphs_hpp__) */
