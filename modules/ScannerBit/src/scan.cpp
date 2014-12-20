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
///  \date 2014 Mar
///
///  *********************************************

#include "scan.hpp"
#include "plugin_interface.hpp"
#include "inifile_interface.hpp"
#include "plugin_factory.hpp"

namespace Gambit
{
        namespace Scanner
        {
                inline YAML::Node combineNodes(const std::map<std::string, YAML::Node> &nodesMap, const YAML::Node &node)
                {
                        std::stringstream ss;
                        
                        //if (!node.IsNull())
                        //        ss << node << std::endl;
                        
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
        
                Gambit_Scanner::Gambit_Scanner (const Factory_Base &factoryIn, const Options &options, const Priors::CompositePrior &priorIn, printer_interface *printerInterface) 
                                : printerInterface(printerInterface), options(options)
                {
                        if (!options.hasKey("plugins"))
                        {
                                std::stringstream ss;
                                ss << "There is no \"plugins\" subsection in the scanner inifile section." << std::endl;
                                scan_error().raise(LOCAL_INFO, ss.str());
                                return;
                        }
                        
                        std::vector<std::string> iniPlugNames = options.getNames("plugins");
                        
                        for (auto it = iniPlugNames.begin(), end = iniPlugNames.end(); it != end; it++)
                        {
                                iniPluginStruct temp;
                                if (options.hasKey("plugins", *it, "plugin"))
                                {
                                        temp.plugin = options.getValue<std::string>("plugins", *it, "plugin");
                                }
                                else
                                {
                                        scan_warn << "Plugin name is not defined under the \"" << *it << "\" tag.  "
                                                << "using the tag \"" << *it << "\" as the plugin name." << scan_end;
                                        temp.plugin = *it;
                                }
                                if (options.hasKey("plugins", *it, "version"))
                                        temp.version = options.getValue<std::string>("plugins", *it, "version");
                                if (options.hasKey("plugins", *it, "library"))
                                        temp.library = "ScannerBit/lib/" + options.getValue<std::string>("plugins", *it, "library");
                                if (options.hasKey("plugins", *it, "library_path"))
                                        temp.library = options.getValue<std::string>("plugins", *it, "library_path");
                                        
                                iniPlugs[*it] = temp;
                        }
                        
                        if (options.hasKey("use_likelihood_plugins"))
                        {
                                std::map<std::string, std::vector<IniFileInterface>> interfaces;
                                std::map<std::string, YAML::Node> nodes;
                                
                                if (options.getNode("use_likelihood_plugins").IsSequence())
                                {
                                        auto plugs = options.getValue<std::vector<std::string>>("use_likelihood_plugins");
                                        for (auto it = plugs.begin(), end = plugs.end(); it != end; it++)
                                        {
                                                auto it2 = iniPlugs.find(*it);
                                                if (it2 != iniPlugs.end())
                                                {
                                                        Plugin::PluginStruct pls = plugins.find("like", it2->second.plugin, it2->second.version, it2->second.library);
                                                        interfaces["Likelihood"].emplace_back(*it, pls, options.getOptions("plugins", *it));
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
                                                else
                                                {
                                                        scan_err << "Plugin \"" << *it << "\" (requested by \"use_likelihood_plugins:\") "
                                                                << "is not defined under the \"plugins\" subsection in the inifile" << scan_end;
                                                }
                                        }
                                }
                                else if (options.getNode("use_likelihood_plugins").IsScalar())
                                {
                                        std::string plug = options.getValue<std::string>("use_likelihood_plugins");
                                        auto it2 = iniPlugs.find(plug);
                                        if (it2 != iniPlugs.end())
                                        {
                                                Plugin::PluginStruct pls = plugins.find("like", it2->second.plugin, it2->second.version, it2->second.library);
                                                interfaces["Likelihood"].emplace_back(plug, pls, options.getOptions("plugins", plug));
                                                if (options.hasKey("plugins", plug, "parameters"))
                                                {
                                                        if (options.hasKey("parameters") && options.hasKey("parameters", plug))
                                                        {
                                                                scan_err << "Plugin \"" << plug << "\"'s parameters are defined in "
                                                                        << "both the \"parameters\" section and the \"plugins\" "
                                                                        << "section in the inifile." << scan_end;
                                                        }
                                                        nodes[plug] = options.getNode("plugins", plug, "parameters");
                                                }
                                        }
                                        else
                                        {
                                                scan_err << "Plugin \"" << plug << "\" (requested by \"use_likelihood_plugins:\") is not "
                                                        << "defined under the \"plugins\" subsection in the inifile" << scan_end;
                                        }
                                }
                                else
                                {
                                        scan_err << "\"use_likelihood_plugins:\" input value not usable in the inifile." << scan_end;
                                }
                                
                                if (interfaces.size() > 0)
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
                                        factory = new Plugin_Function_Factory(*prior, interfaces);
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
                
                int Gambit_Scanner::Run()
                {
                        Plugin::PluginStruct plugin;
                        std::string pluginName;
                        if (options.hasKey("use_scanner_plugin"))
                        {
                                auto it2 = iniPlugs.find(pluginName = options.getValue<std::string>("use_scanner_plugin"));
                                if (it2 != iniPlugs.end())
                                {
                                        plugin = plugins.find("scan", it2->second.plugin, it2->second.version, it2->second.library);
                                }
                                else
                                {
                                        scan_err << "Plugin \"" << pluginName << "\" (requested by \"use_scanner_plugin:\") is not defined under the \"plugins\""
                                                << " subsection in the inifile" << scan_end;
                                }
                        }
                        else
                        {
                                scan_err << "\"use_scanner_plugin:\" input value not usable in the inifile." << scan_end;
                        }

                        Gambit::Scanner::IniFileInterface interface(pluginName, plugin, options.getOptions("plugins", pluginName));
                        
                        unsigned int dim = factory->getDim();
                        
                        Plugin::Plugin_Interface<int ()> plugin_interface(interface.fileName(), plugin.full_string, dim, *factory, interface, *prior);
                        plugin_interface();
                        
                        return 0;
                }
                
                Gambit_Scanner::~Gambit_Scanner(){}
        }
}
