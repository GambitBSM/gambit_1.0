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
//  May 03 2013
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
#include <functors.hpp>

using namespace boost::assign;
using namespace boost;
using namespace std;

namespace GAMBIT
{
  namespace Graphs
  {

    struct Edge {
      sspair variable; // (capability, type) pair
    };

    typedef adjacency_list<vecS, vecS, directedS, functor*, Edge> MasterGraphType;
    typedef graph_traits<MasterGraphType>::vertex_descriptor VertexID;
    typedef graph_traits<MasterGraphType>::edge_descriptor EdgeID;

    void dependency_resolution();

#ifndef IN_CORE
    extern
#endif
    MasterGraphType masterGraph;
  }
}
#endif /* defined(__graphs_hpp__) */
