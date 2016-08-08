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
///
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
        
        Scan_Manager::Scan_Manager (const YAML::Node &main_node, printer_interface *printerInterface, const Factory_Base *factoryIn) 
        : printerInterface(printerInterface), has_local_factory(false)
        {
            options = main_node["Scanner"];
            
            Plugins::plugin_info.iniFile(options);
            
            if (options.hasKey("use_objectives"))
            {
                std::map< std::string, std::vector<std::pair<std::string, std::string>> > names;
                std::map< std::string, YAML::Node > nodes;
                std::vector <std::string> plugs = get_yaml_vector<std::string>(options.getNode("use_objectives"));
                        
                for (auto it = plugs.begin(), end = plugs.end(); it != end; it++)
                {
                    if (options.hasKey("objectives") && options.hasKey("objectives", *it))
                    {
                        std::string plugin_name;
                        if (options.hasKey("objectives", *it, "purpose") && options.hasKey("objectives", *it, "plugin"))
                        {
                            std::vector <std::string> purposes = get_yaml_vector<std::string>(options.getNode("objectives", *it, "purpose"));
                            plugin_name = options.getValue<std::string>("objectives", *it, "plugin");
                            for (auto it2 = purposes.begin(), end = purposes.end(); it2 != end; it2++)
                                    names[*it2].push_back(std::pair<std::string, std::string>(*it, plugin_name));
                        }
                        else
                        {
                            scan_err << "Must specify a plugin and a purpose under the plugin tag \"" << *it << "\"." << scan_end;
                        }
                        
                        if (options.hasKey("objectives", *it, "parameters"))
                        {
                            if (options.hasKey("parameters") && options.hasKey("parameters", *it))
                            {
                                    scan_err << "Plugin \"" << *it << "\"'s parameters are defined in "
                                            << "both the \"parameters\" section and the \"plugins\" "
                                            << "section in the inifile." << scan_end;
                            }
                            
                            nodes[plugin_name] = options.getNode("objectives", *it, "parameters");
                            //nodes[*it] = options.getNode("objectives", *it, "parameters");
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
                    
                    if (nodes.size() > 0)
                    {
                        paramNode = combineNodes(nodes, main_node["Parameters"]);
                    }
                    else
                    {
                        paramNode = main_node["Parameters"];
                    }

                    prior = new Gambit::Priors::CompositePrior(paramNode, main_node["Priors"]);
                    factory = new Plugin_Function_Factory(prior->getParameters(), names);
                    Plugins::plugin_info.printer_prior(*printerInterface, *prior);
                    has_local_factory = true;                        
                }
                else
                {
                    prior = new Gambit::Priors::CompositePrior(main_node["Parameters"], main_node["Priors"]);
                    factory = factoryIn;
                    Plugins::plugin_info.printer_prior(*printerInterface, *prior);
                }
            }
            else
            {
                prior = new Gambit::Priors::CompositePrior(main_node["Parameters"], main_node["Priors"]);
                factory = factoryIn;
                Plugins::plugin_info.printer_prior(*printerInterface, *prior);
            }   
        }
        
        int Scan_Manager::Run()
        {
            std::vector<std::string> pluginNames;
            if (options.hasKey("use_scanner") && options.getNode("use_scanner").IsScalar())
            {
                    pluginNames = get_yaml_vector<std::string>(options.getNode("use_scanner"));
            }
            else
            {
                    scan_err << "\"use_scanner:\" input value not usable in the inifile." << scan_end;
            }

            unsigned int dim = prior->size();
            
            for(auto &&pluginName : pluginNames)
            {
                Plugins::Plugin_Interface<int ()> plugin_interface("scanner", pluginName, dim, *factory);
                plugin_interface();
                if(Plugins::plugin_info.early_shutdown_in_progress())
                {
                  #ifdef WITH_MPI
                    int rank = GMPI::Comm().Get_rank();
                  #else
                    int rank = 0;
                  #endif
                  if (rank == 0) cout << "ScannerBit has received a shutdown signal and will terminate early. Finalising resume data..." << endl;
                  printerInterface->finalise(true); // abnormal (early) termination
                }
                else
                {
                  printerInterface->finalise();
                }
            }

            return 0;
        }
        
        Scan_Manager::~Scan_Manager()
        {
            if (has_local_factory)
            {
                delete factory;
            }
            
            delete prior;
        }
    }
}
