//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
///  \file
///
///  Scanner factory method implementations.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Christoph Weniger
///          (c.weniger@uva.nl)
///  \date 2013 May, June, July
//
///  \author Gregory Martinez
///          (gregory.david.martinez@gmail.com)
///  \date 2013 July, Aug
///  \date 2014 Feb
///
///  \author Pat Scott
///          (patscott@physics.mcgill.ca)
///  \date 2013 Aug
///  \date 2014 Mar, Dec
///
///  *********************************************

#include "gambit/ScannerBit/scan.hpp"
#include "gambit/ScannerBit/plugin_interface.hpp"
#include "gambit/ScannerBit/plugin_factory.hpp"
#include "gambit/Utils/mpiwrapper.hpp"

namespace Gambit
{

        namespace Scanner
        {

                inline YAML::Node combineNodes(const std::map<std::string, YAML::Node> &nodesMap, const YAML::Node &node)
                {       
                        YAML::Node outNode = node;
                        
                        for (auto it = nodesMap.begin(), end = nodesMap.end(); it != end; it++)
                        {
                                outNode[it->first] = it->second;
                        }
                        
                        return outNode;
                }
                
                inline std::vector<std::string> get_infile_values(const YAML::Node &node)
                {
                        if (node.IsSequence())
                        {
                                return node.as< std::vector<std::string> >(); 
                        }
                        else if (node.IsScalar())
                        {
                                std::string plug = node.as<std::string>();
                                
                                std::string::size_type pos = plug.find_first_of(",;:.");
                                while (pos != std::string::npos)
                                {
                                        plug[pos] = ' ';
                                        pos = plug.find_first_of(",;:.", pos + 1);
                                }
                                
                                std::stringstream ss;
                                ss << plug;
                                std::vector<std::string> ret;
                                std::string temp;
                                while (ss >> temp) ret.push_back(temp);
                                
                                return ret;
                        }
                        else
                        {
                                scan_err << "\"" << node << "\" input value not usable in the inifile." << scan_end;
                                return std::vector <std::string> ();
                        }
                }
        
                Scan_Manager::Scan_Manager (const Factory_Base *factoryIn, const Options options_in, const Priors::CompositePrior *priorIn, 
                 printer_interface *printerInterface) 
                : options(options_in), printerInterface(printerInterface)
                {
                        Plugins::plugin_info.iniFile(options, *printerInterface);
                        
                        if (options.hasKey("use_objectives"))
                        {
                                std::map< std::string, std::vector<std::string> > names;
                                std::map< std::string, YAML::Node > nodes;
                                std::vector <std::string> plugs = get_infile_values(options.getNode("use_objectives"));
                                        
                                for (auto it = plugs.begin(), end = plugs.end(); it != end; it++)
                                {
                                        if (options.hasKey("objectives") && options.hasKey("objectives", *it))
                                        {
                                                if (options.hasKey("objectives", *it, "purpose"))
                                                {
                                                        std::vector <std::string> purposes = get_infile_values(options.getNode("objectives", *it, "purpose"));
                                                        
                                                        for (auto it2 = purposes.begin(), end = purposes.end(); it2 != end; it2++)
                                                                names[*it2].push_back(*it);
                                                }
                                                else
                                                {
                                                        scan_err << "Must specify purpose under the plugin tag \"" << *it << "\"." << scan_end;
                                                }
                                                
                                                if (options.hasKey("objectives", *it, "parameters"))
                                                {
                                                        if (options.hasKey("parameters") && options.hasKey("parameters", *it))
                                                        {
                                                                scan_err << "Plugin \"" << *it << "\"'s parameters are defined in "
                                                                        << "both the \"parameters\" section and the \"plugins\" "
                                                                        << "section in the inifile." << scan_end;
                                                        }
                                                        nodes[*it] = options.getNode("objectives", *it, "parameters");
                                                }
                                        }
                                        else
                                        {
                                                scan_err << "Plugin \"" << *it << "\" of type \"" << "objective" << "\" is not defined under the \"Scanner\""
                                                << " subsection in the inifile" << scan_end;
                                        }
                                }
                                
                                if (names.size() > 0)
                                {
                                        YAML::Node paramNode;
                                        YAML::Node priorNode;
                                        
                                        if (options.hasKey("parameters"))
                                        {
                                                if (nodes.size() > 0)
                                                {
                                                        paramNode = combineNodes(nodes, options.getNode("parameters"));
                                                }
                                                else
                                                {
                                                        paramNode = options.getNode("parameters");
                                                }
                                        }
                                        else
                                        {
                                                if (nodes.size() > 0)
                                                {
                                                        paramNode = combineNodes(nodes, YAML::Node());
                                                }
                                        }
                                        
                                        if (options.hasKey("priors"))
                                        {
                                                priorNode = options.getNode("priors");
                                        }
                                        
                                        prior = new Gambit::Priors::CompositePrior(paramNode, priorNode);
                                        factory = new Plugin_Function_Factory(*prior, names);
                                }
                                else
                                {
                                        factory = factoryIn;
                                        prior = priorIn;
                                }
                        }
                        else
                        {
                                factory = factoryIn;
                                prior = priorIn;
                        }

                }
                
                int Scan_Manager::Run(int argc, char* argv[])
                {
                        std::vector<std::string> pluginNames;
                        if (options.hasKey("use_scanner") && options.getNode("use_scanner").IsScalar())
                        {
                                pluginNames = get_infile_values(options.getNode("use_scanner"));
                        }
                        else
                        {
                                scan_err << "\"use_scanner:\" input value not usable in the inifile." << scan_end;
                        }

                        unsigned int dim = prior->size();
                        
                        scan_for(pluginName, pluginNames)
                        {
                                Plugins::Plugin_Interface<int ()> plugin_interface("scanner", pluginName, dim, *factory);
                                
                                //if(plugin_interface["initialize_mpi"] && !plugin_interface["initialize_mpi"].as<bool>())
                                if (false)
                                {
                                        plugin_interface();
                                        printerInterface->finalise();
                                }
                                else
                                {
#ifdef WITH_MPI
                                        if(GMPI::Is_initialized())
                                        {
                                                //scan_err << "Error initialising MPI! It is already initialised!" << scan_end; 
                                        } 
                                        else
                                        {
                                                //MPI_Init(&argc,&argv); 
                                        }
                                        //GMPI::Init(argc,argv);
#endif
                                        plugin_interface();
                                        printerInterface->finalise();
#ifdef WITH_MPI
                                        MPI_Finalize(); 
#endif
                                }
                        }
 
                        /// From Ben: To Greg: This is a command I added to the 
                        /// printer base class which instructs the printers
                        /// to perform final output tasks (emptying buffers
                        /// to file and so on). It just needs to happen
                        /// when the scan is done; feel free to move it to
                        /// wherever you like.
                        

                        return 0;
                }
                
                Scan_Manager::~Scan_Manager(){}
        }
}
