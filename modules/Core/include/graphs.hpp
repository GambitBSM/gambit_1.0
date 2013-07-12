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
//  Apr, May, June 2013
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

    // Information passed to MasterLikelihood
    struct OutputVertexInfo
    {
      functor* myfunc;
      VertexID vertex;
      std::string capability;
      std::string type;
      std::string obsType;
      std::vector<functor *> parentFunctors;
    };

    // Main dependency resolver
    class DependencyResolver
    {
      public:
        // Constructor, provide module and backend functor lists
        DependencyResolver(std::vector<functor *>,
            std::vector<functor *>, IniParser::IniFile);

        // Constructs input/output vertices from parameters and requested
        // observables in inifile
        void addLegs();

        // The dependency resolution
        void resolveNow();

        // Getter for input Map
        inputMapType getInputMap();

        // Returns functors in sorted order
        std::vector<functor*> getFunctors();

        // Outputmap getter
        outputMapType getOutputMap();

        // Print module functor information;
        void printFunctorList();

        // Print ordered active vertices
        void printSortedOrder();

      private:
        // Adds list of functor pointers to master graph
        void addFunctors(std::vector<functor *>, std::vector<functor *>);

        // Resolution of individual module function dependencies
        std::pair<std::string, Graphs::VertexID> resolveDependency(
            Graphs::VertexID toVertex, sspair
            quantity);

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
        void resolveVertexBackend(bool dirObsFlag,
            IniParser::ObservableType observable, VertexID vertex);

        // Requests for output to likelihood
        std::vector<sspair> requestedQuantities;

        // Map str --> double* for input parameter values
        inputMapType inputMap;

        // Output Vertex Infos
        std::vector<OutputVertexInfo> outputVertexInfos;

        // The central boost graph object
        MasterGraphType masterGraph;

        // List of backend functors
        std::vector<functor *> myBackendFunctorList;

        // Saved calling order for functions
        std::list<VertexID> function_order;

        // Private copy of iniFile Object
        IniParser::IniFile myIniFile;
    };
  }
}
#endif /* defined(__graphs_hpp__) */
