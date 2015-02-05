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
///  \date 2014 Aug        
///
///  *********************************************

#ifndef __depresolver_hpp__
#define __depresolver_hpp__

#include <string>
#include <list>
#include <vector>
#include <map>
#include <queue>

#include "gambit/Core/gambit_core.hpp"
#include "gambit/Core/error_handlers.hpp"
#include "gambit/Core/yaml_parser.hpp"
#include "gambit/Printers/baseprinter.hpp"
#include "gambit/Utils/functors.hpp"

#include <boost/graph/adjacency_list.hpp>
#include <boost/graph/topological_sort.hpp>

namespace Gambit
{

  namespace DRes
  {

    using namespace boost;

    /// Typedefs for central boost graph
    /// @{
    typedef adjacency_list<vecS, vecS, bidirectionalS, functor*, vecS> MasterGraphType;
    typedef graph_traits<MasterGraphType>::vertex_descriptor VertexID;
    typedef graph_traits<MasterGraphType>::edge_descriptor EdgeID;
    typedef property_map<MasterGraphType,vertex_index_t>::type IndexMap;
    /// @}

    /// Typedefs for communication channels with the master-likelihood
    /// @{
    typedef std::map<std::string, double *> inputMapType;
    typedef std::map<std::string, std::vector<functor*> > outputMapType;
    /// @}

    /// Minimal info about outputVertices
    struct OutputVertexInfo
    {
      VertexID vertex;
      const IniParser::ObservableType * iniEntry;
    };

    /// A simple rule for dependency resolution (aka constraints on module and
    /// function name).
    struct Rule
    {
      Rule(IniParser::ObservableType t)
      {
        module = t.module;
        function = t.function;
      };
      std::string module;
      std::string function;
    };

    /// Information in parameter queue
    struct QueueEntry
    {
      QueueEntry() {}
      QueueEntry(sspair a, DRes::VertexID b, int c, bool d)
      {
        first = a;
        second = b;
        third = c;
        printme = d;
      }
      sspair first;
      DRes::VertexID second;
      int third;
      bool printme;
    };

    /// Check whether s1 (wildcard + regex allowed) matches s2
    bool stringComp(const str &s1, const str &s2);

    /// Type comparison taking into account equivalence classes
    bool typeComp(const str & s1, const str & s2, const Utils::type_equivalency & eq);

    /// Main dependency resolver
    class DependencyResolver
    {
      public:
        /// Constructor, provide module and backend functor lists
        DependencyResolver(const gambit_core&, const Models::ModelFunctorClaw&, const IniParser::IniFile&, const Utils::type_equivalency&, Printers::BasePrinter&);

        /// The dependency resolution
        void doResolution();

        /// Helper function that returns a new graph with all inactive vertices removed.
        static MasterGraphType cullInactiveFunctors(MasterGraphType&);

        /// Pretty print module functor information
        void printFunctorList();

        /// Pretty print function evaluation order
        void printFunctorEvalOrder(bool toterminal=false);

        /// New IO routines
        std::vector<VertexID> getObsLikeOrder();

        void calcObsLike(VertexID, const int);

        double getObsLike(VertexID);

        const IniParser::ObservableType * getIniEntry(VertexID);

        void invalidatePointAt(VertexID);

        void resetAll();

      private:
        /// Adds list of functor pointers to master graph
        void addFunctors();

        /// Pretty print backend functor information
        str printGenericFunctorList(const std::vector<functor*>&);

        /// Initialise the printer object with a list of functors for it to expect to be printed.
        void initialisePrinter();

        /// Deactivate functors that are not allowed to be used with the model(s) being scanned. 
        void makeFunctorsModelCompatible();

        /// Resolution of individual module function dependencies
        boost::tuple<const IniParser::ObservableType *, DRes::VertexID>
          resolveDependency(DRes::VertexID toVertex, sspair quantity);

        /// Resolution of individual module function dependencies
        DRes::VertexID resolveDependencyFromRules(const DRes::VertexID & toVertex, const sspair & quantity);

        /// Derive options from ini-entries
        Options collectIniOptions(const DRes::VertexID & vertex);

        /// Generate full dependency tree
        void generateTree(std::queue<QueueEntry> parQueue);

        /// Helper functions/arrays
        void fillParQueue(std::queue<QueueEntry> *parQueue,
            DRes::VertexID vertex);

        /// Topological sort
        std::list<VertexID> run_topological_sort();

        /// Find entries (comparison of inifile entry with quantity or functor)
        /// @{
        const IniParser::ObservableType * findIniEntry(
            sspair quantity, const IniParser::ObservablesType &, const str &);
        const IniParser::ObservableType * findIniEntry(
            DRes::VertexID toVertex, const IniParser::ObservablesType &, const str &);
        /// @}

        /// Main function for resolution of backend requirements
        void resolveVertexBackend(VertexID);

        /// Find backend function matching any one of a number of capability-type pairs. 
        functor* solveRequirement(std::set<sspair>, const IniParser::ObservableType*, VertexID, std::vector<functor*>, bool, str group="none");

        /// Resolve a specific backend requirement.
        void resolveRequirement(functor*, VertexID);

        /// Find candidate functions that are tailor made for models that are
        /// scanned over.
        std::vector<DRes::VertexID> closestCandidateForModel(std::vector<DRes::VertexID> candidates);

        //
        // Private data members
        //

        /// Core to which this dependency resolver is bound
        const gambit_core *boundCore;

        /// Model claw to which this dependency resolver is bound
        const Models::ModelFunctorClaw *boundClaw;

        /// ini file to which this dependency resolver is bound
        const IniParser::IniFile *boundIniFile;

        /// Type equivalency object to which this dependency resolver is bound
        const Utils::type_equivalency *boundTEs;

        /// Printer object to which this dependency resolver is bound
        Printers::BasePrinter *boundPrinter;

        /// Output Vertex Infos
        std::vector<OutputVertexInfo> outputVertexInfos;

        /// The central boost graph object
        MasterGraphType masterGraph;

        /// Saved calling order for functions
        std::list<VertexID> function_order;

        /// Temporary map for loop manager -> list of nested functions
        std::map<VertexID, std::set<VertexID>> loopManagerMap;

        /// Indices associated with graph vertices (used by printers to identify functors)
        IndexMap index;

        /// Output filename for graph of active functors.
        const str activeFunctorGraphFile;
    };
  }
}
#endif /* defined(__depresolver_hpp__) */
