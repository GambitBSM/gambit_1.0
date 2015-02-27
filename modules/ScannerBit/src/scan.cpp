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

namespace Gambit
{

        namespace Scanner
        {

                YAML::Node combineNodes(const std::map<std::string, YAML::Node> &nodesMap, const YAML::Node &node)
                {
                        std::stringstream ss;
                        
                        if (!node.IsNull())
                                ss << node << std::endl;
                        
                        for (auto it = nodesMap.begin(), end = nodesMap.end(); it != end; it++)
                        {
                                ss << it->first << ": ";
                                if (it->second.IsScalar())
                                {
                                        ss << it->second.Scalar() << std::endl;
                                }
                                else if (it->second.IsMap())
                                {
                                        std::stringstream ssNode;
                                        ssNode << it->second << std::endl;
                                        std::string temp;
                                        ss << std::endl;
                                        std::string::size_type pos;
                                        while (std::getline(ssNode, temp))
                                        {
                                                ss << "  " << temp << std::endl;
                                        }
                                }
                                else
                                {
                                        ss << std::endl;
                                }
                        }
                        
                        return YAML::Load(ss.str());
                }
                
                std::vector<std::string> get_infile_values(const YAML::Node &node)
                {
                        if (node.IsSequence())
                        {
                                return node.as< std::vector<std::string> >(); 
                        }
                        else if (node.IsScalar())
                        {
                                std::string plug = node.as<std::string>();
                                
                                std::string::size_type pos = 0;
                                while ((pos = plug.find(",", pos)) != std::string::npos)
                                {
                                        plug.replace(pos, 1, " ");
                                }
                                
                                pos = 0;
                                while ((pos = plug.find(";", pos)) != std::string::npos)
                                {
                                        plug.replace(pos, 1, " ");
                                }
                                
                                return std::vector<std::string> (1, plug);
                        }
                        else
                        {
                                scan_err << "\"" << node << "\" input value not usable in the inifile." << scan_end;
                                return std::vector <std::string> ();
                        }
                }
        
                Scan_Manager::Scan_Manager (const Factory_Base &factoryIn, const Options options_in, const Priors::CompositePrior &priorIn, 
                 printer_interface *printerInterface) 
                : options(options_in), printerInterface(printerInterface)
                {
                        if (!options.hasKey("plugins"))
                        {
                                scan_err << "There is no \"plugins\" subsection in the scanner inifile section." << scan_end;
                                return;
                        }
                        
                        Plugins::plugin_info.iniFile(options.getOptions("plugins"), *printerInterface);
                        
                        if (options.hasKey("use_objective_plugins"))
                        {
                                std::map< std::string, std::vector<std::string> > names;
                                std::map< std::string, YAML::Node > nodes;
                                std::vector <std::string> plugs = get_infile_values(options.getNode("use_objective_plugins"));
                                        
                                for (auto it = plugs.begin(), end = plugs.end(); it != end; it++)
                                {
                                        if (options.hasKey("plugins", *it, "purpose"))
                                        {
                                                std::vector <std::string> purposes = get_infile_values(options.getNode("plugins", *it, "purpose"));
                                                
                                                for (auto it2 = purposes.begin(), end = purposes.end(); it2 != end; it2++)
                                                        names[*it2].push_back(*it);
                                        }
                                        else
                                        {
                                                scan_err << "Must specify purpose under the plugin tag \"" << *it << "\"." << scan_end;
                                        }
                                        
                                        if (options.hasKey("plugins", *it, "parameters"))
                                        {
                                                if (options.hasKey("parameters") && options.hasKey("parameters", *it))
                                                {
                                                        scan_err << "Plugin \"" << *it << "\"'s parameters are defined in "
                                                                << "both the \"parameters\" section and the \"plugins\" "
                                                                << "section in the inifile." << scan_end;
                                                }
                                                nodes[*it] = options.getNode("plugins", *it, "parameters");
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
                                        factory = &factoryIn;
                                        prior = &priorIn;
                                }
                        }
                        else
                        {
                                factory = &factoryIn;
                                prior = &priorIn;
                        }

                }
                
                int Scan_Manager::Run()
                {
                        Plugins::Plugin_Details plugin;
                        std::string pluginName;
                        if (options.hasKey("use_scanner_plugin"))
                        {
                                pluginName = options.getValue<std::string>("use_scanner_plugin");
                        }
                        else
                        {
                                scan_err << "\"use_scanner_plugin:\" input value not usable in the inifile." << scan_end;
                        }

                        unsigned int dim = prior->size();
                        
                        Plugins::Plugin_Interface<int ()> plugin_interface("scan", pluginName, dim, *factory);
                        plugin_interface();
                        
                        return 0;
                }
                
                Scan_Manager::~Scan_Manager(){}
        }
}
