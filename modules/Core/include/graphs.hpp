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
//  Apr 02++ 2013
//  May 03 2013
//  June 03 2013
//  Pat Scott
//  May 03 2013
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
#include <functors.hpp>
#include <yaml_parser.hpp>

using namespace boost;
//using namespace std;

namespace GAMBIT
{
  namespace Graphs
  {
    // The graph edges (vertices are pointers on the module function functors)
    struct Edge {
      sspair variable; // e.g. (capability, type), might be useful later
    };

    // Typedefs for central boost graph
    typedef adjacency_list<vecS, vecS, directedS, functor*, Edge> MasterGraphType;
    typedef graph_traits<MasterGraphType>::vertex_descriptor VertexID;
    typedef graph_traits<MasterGraphType>::edge_descriptor EdgeID;

    // Typedefs for communication channels with the master-likelihood
    typedef std::map<std::string, double *> inputMapType;
    typedef std::vector<functor *> outputListType;

    // The beast
    class DependencyResolver
    {
      public:
        DependencyResolver() {}

        // Adds list of functor pointers to boost graph
        void addFunctors(std::vector<functor *>);

        // Rudimentary backend resolution
        void resolveBackends(std::vector<functor *>);

        // Log module functor information;
        void logFunctors();

        // Constructs input/output vertices from parameters and requested
        // observables in ini-file
        void addLegs(const GAMBIT::IniParser::IniFile &);

        // The dependency resolution
        void resolveNow();

        // Returns functors in sorted order
        std::vector<functor*> getFunctors();

        // Map str --> double* for input parameter values
        inputMapType inputMap;

        // Log ordered active vertices
        void logOrder();

        // It is really ugly, but this has to be declared static to work well
        // with the functors member functions. A haircut for anyone who gets
        // around that:
        static outputListType outputList;

      private:
        // Helper functions/arrays
        static void outputResolver(functor * dep_functor);
        void fill_parQueue(std::queue<std::pair<sspair, Graphs::VertexID> > *parQueue,
            Graphs::VertexID vertex);
        std::multimap<sspair, Graphs::VertexID> initialize_capMap();
        void initialize_edges(std::queue<std::pair<sspair, Graphs::VertexID> > parQueue,
            std::multimap<sspair, Graphs::VertexID> capMap);
        std::list<int> run_topological_sort();
        std::vector<VertexID> reqObs;

        // The central boost graph object
        MasterGraphType masterGraph;
    };
  }
}
#endif /* defined(__graphs_hpp__) */
