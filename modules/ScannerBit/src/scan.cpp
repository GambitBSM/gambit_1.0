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

#include "scan.hpp"
#include "plugin_interface.hpp"
#include "plugin_factory.hpp"

namespace Gambit
{

        namespace Scanner
        {

                inline YAML::Node combineNodes(const std::map<std::string, YAML::Node> &nodesMap, const YAML::Node &node)
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
        
                Scan_Manager::Scan_Manager (const Factory_Base &factoryIn, const Options &options_in, const Priors::CompositePrior &priorIn, 
                 printer_interface *printerInterface) 
                : options(&options_in), printerInterface(printerInterface)
                {
                        if (!options->hasKey("plugins"))
                        {
                                scan_err << "There is no \"plugins\" subsection in the scanner inifile section." << scan_end;
                                return;
                        }
                        
                        Plugins::plugin_info.iniFile(options->getOptions("plugins"));
                        
                        
                        
                        if (options->hasKey("use_objective_plugins"))
                        {
                                std::map< std::string, std::vector<std::string> > names;
                                std::map< std::string, YAML::Node > nodes;
                                
                                if (options->getNode("use_objective_plugins").IsSequence())
                                {
                                        auto plugs = options->getValue< std::vector<std::string> >("use_objective_plugins");
                                        
                                        for (auto it = plugs.begin(), end = plugs.end(); it != end; it++)
                                        {
                                                if (options->hasKey("plugins", *it, "purpose"))
                                                {
                                                        names[options->getValue<std::string>("plugins", *it, "purpose")].push_back(*it);
                                                }
                                                else
                                                {
                                                        scan_err << "Must specify purpose under the plugin tag \"" << *it << "\"." << scan_end;
                                                }
                                                
                                                if (options->hasKey("plugins", *it, "parameters"))
                                                {
                                                        if (options->hasKey("parameters") && options->hasKey("parameters", *it))
                                                        {
                                                                scan_err << "Plugin \"" << *it << "\"'s parameters are defined in "
                                                                        << "both the \"parameters\" section and the \"plugins\" "
                                                                        << "section in the inifile." << scan_end;
                                                        }
                                                        nodes[*it] = options->getNode("plugins", *it, "parameters");
                                                }
                                        }
                                }
                                else if (options->getNode("use_objective_plugins").IsScalar())
                                {
                                        std::string plug = options->getValue<std::string>("use_objective_plugins");
                                        
                                        if (options->hasKey("plugins", plug, "purpose"))
                                        {
                                                names[options->getValue<std::string>("plugins", plug, "purpose")].push_back(plug);
                                        }
                                        else
                                        {
                                                scan_err << "Must specify purpose under the plugin tag \"" << plug << "\"." << scan_end;
                                        }
                                        
                                        if (options->hasKey("plugins", plug, "parameters"))
                                        {
                                                if (options->hasKey("parameters") && options->hasKey("parameters", plug))
                                                {
                                                        scan_err << "Plugin tagged by \"" << plug << "\" has parameters that are defined in "
                                                                << "both the \"parameters\" section and the \"plugins\" "
                                                                << "section in the inifile." << scan_end;
                                                }
                                                nodes[plug] = options->getNode("plugins", plug, "parameters");
                                        }
                                }
                                else
                                {
                                        scan_err << "\"use_likelihood_plugins:\" input value not usable in the inifile." << scan_end;
                                }
                                
                                if (names.size() > 0)
                                {
                                        YAML::Node paramNode;
                                        YAML::Node priorNode;
                                        
                                        if (options->hasKey("parameters"))
                                        {
                                                if (nodes.size() > 0)
                                                {
                                                        paramNode = combineNodes(nodes, options->getNode("parameters"));
                                                }
                                                else
                                                {
                                                        paramNode = options->getNode("parameters");
                                                }
                                        }
                                        else
                                        {
                                                if (nodes.size() > 0)
                                                {
                                                        paramNode = combineNodes(nodes, YAML::Node());
                                                }
                                        }
                                        
                                        if (options->hasKey("priors"))
                                        {
                                                priorNode = options->getNode("priors");
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
                        if (options->hasKey("use_scanner_plugin"))
                        {
                                pluginName = options->getValue<std::string>("use_scanner_plugin");
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
