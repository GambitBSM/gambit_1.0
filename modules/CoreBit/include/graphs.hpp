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
//  Christoph Weniger
//  Apr 02++ 2013
//
//  *********************************************

#ifndef __graphs_hpp__
#define __graphs_hpp__

#include <boost/assign/std/vector.hpp>
#include <boost/graph/adjacency_list.hpp>
#include <boost/graph/topological_sort.hpp>
#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <map>
#include <queue>
#include <fstream>
#include <boost/graph/graphviz.hpp>

using namespace boost::assign;
using namespace boost;
using namespace std;

// Define functorBase here to get dependencies right (will be moved into
// functor.hpp at some point)
namespace GAMBIT {
  class functorBase
  {
    public:
    functorBase()
    {
      std::cout << "FunctorBase initialization" << std::endl;
    };
    string functorBaseName;
    string out_name;
    string out_type;
    vector<string> in_names;
    vector<string> in_types;
  };
};

#define NEW_NODE(MODULE, FUNCTION) \
  current_vertex = add_vertex(masterGraph); \
  masterGraph[current_vertex].module = MODULE; \
  masterGraph[current_vertex].function = FUNCTION; \
  masterGraph[current_vertex].status = 1;
#define DISABLE_NODE() \
  masterGraph[current_vertex].status = 0;
#define ADD_INPUT(...) \
  masterGraph[current_vertex].in += __VA_ARGS__;
#define ADD_OUTPUT(...) \
  masterGraph[current_vertex].out += __VA_ARGS__;

namespace GAMBIT
{
  namespace Graphs
  {

    // Information associated with vertices and edges of boost graph:
    struct Vertex {
      vector<string> in; // list of input variables
      vector<string> out; // list of output variables
      string module; // module name
      string function; // function name
      int status; // function disabled: 0 , available: 1, active: 2
      // TODO: 
      // - Add pointer to associated function
      // - Add method to pass correct information to/from masterDict
    };
    struct Edge {
      string variable; // name of associated variable
    };

    typedef adjacency_list<vecS, vecS, directedS, functorBase, Edge> MasterGraphType;
    typedef graph_traits<MasterGraphType>::vertex_descriptor VertexID;
    typedef graph_traits<MasterGraphType>::edge_descriptor EdgeID;

#ifdef IN_CORE
    MasterGraphType masterGraph;
#endif
  }
}
#endif /* defined(__graphs_hpp__) */
