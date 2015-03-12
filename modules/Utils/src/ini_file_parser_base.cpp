
#include "gambit/Utils/ini_file_parser_base.hpp"

namespace Gambit
{
        /// Recursive import
        int importRound(YAML::Node node)
        {
                int counter = 0;
                if (node.IsScalar())
                {
                        if ( node.Tag() == "!import" )
                        {
                                YAML::Node import;
                                std::string filename = node.as<std::string>();
                                std::cout << "Importing: " << filename << std::endl;
                                try 
                                { 
                                        import = YAML::LoadFile(filename);
                                } 
                                catch (YAML::Exception &e) 
                                {
                                        std::ostringstream msg;
                                        msg << "Error reading Inifile \""<<filename<<"\" recursively! ";
                                        msg << "Please check that file exist!" << endl;
                                        msg << "(yaml-cpp error: "<<e.what()<<" )";
                                        utils_error().raise(LOCAL_INFO,msg.str());
                                }
                                node = import;
                                return 1;
                        }
                        return 0;
                }
                if (node.IsSequence())
                {
                        for (unsigned int i = 0; i<node.size(); ++i)
                        {
                                counter += importRound(node[i]);
                        }
                        return counter;
                }
                if (node.IsMap())
                {
                        for (YAML::const_iterator it = node.begin(); it != node.end(); ++it)
                        {
                                counter += importRound(it->second);  // Only values are processed
                        }
                        return counter;
                }
                return 0;
        }

        void recursiveImport(YAML::Node node)
        {
                int import_counter = 0;
                int last_import_counter = 0;
                for ( int i = 0; i < 10; ++i)
                {
                        last_import_counter = importRound(node);
                        import_counter += last_import_counter;
                }
                if (last_import_counter > 0)
                {
                        std::cout << last_import_counter << std::endl;
                        std::cout << "WARNING: YAML imports were truncated after 10 recursions." << std::endl;
                }
        }


        // Implementations of main inifile class

        void ini_file_parser_base::readFile(const std::string &filename)
        {
                // Read inifile file
                try 
                { 
                        rootNode = YAML::LoadFile(filename);
                } 
                catch (YAML::Exception &e) 
                {
                        std::ostringstream msg;
                        msg << "Error reading Inifile \""<<filename<<"\"! ";
                        msg << "Please check that file exist!" << endl;
                        msg << "(yaml-cpp error: "<<e.what()<<" )";
                        utils_error().raise(LOCAL_INFO,msg.str());
                }

                recursiveImport(rootNode);
                parametersNode = rootNode["Parameters"];
                priorsNode = rootNode["Priors"];
                printerNode = rootNode["Printer"];
                scannerNode = rootNode["Scanner"];
                YAML::Node logNode = rootNode["Logger"];
                keyValuePairNode = rootNode["KeyValues"];

                // Set fatality of exceptions
                if (hasKey("exceptions"))
                {       
                        // Iterate over the map of all recognised exception objects
                        std::map<const char*,exception*>::iterator iter;
                        for (iter = exception::exception_map.begin(); iter != exception::exception_map.end(); ++iter)
                        {
                                // Check if the exception has an entry in the YAML file
                                if (hasKey("exceptions",iter->first))
                                { 
                                        // Retrieve the entry and set the exception's 'fatal' flag accordingly.
                                        std::string value = getValue<std::string>("exceptions",iter->first);
                                        if (value == "fatal")
                                        {
                                                iter->second->set_fatal(true);
                                        }
                                        else if (value == "non-fatal")
                                        {
                                                iter->second->set_fatal(false);
                                        }
                                        else
                                        {
                                                std::string error_msg = "Unrecognised entry \"" + value + "\" for exceptions key \"" + iter->first + "\" in input file.";
                                                utils_error().raise(LOCAL_INFO,error_msg);
                                        }
                                }
                        }
                }

                // Parse the logging setup node, and initialise the LogMaster object
                std::string prefix = logNode["prefix"].as<std::string>();
                YAML::Node redir = logNode["redirection"];
                // map storing info used to set up logger objects
                std::map<std::set<std::string>,std::string> loggerinfo;
                for(YAML::const_iterator it=redir.begin(); it!=redir.end(); ++it) 
                {
                        std::set<std::string> tags;
                        std::string filename;
                        // Iterate through tags and add them to the set 
                        YAML::Node yamltags = it->first;
                        for(YAML::const_iterator it2=yamltags.begin();it2!=yamltags.end();++it2)         
                        {
                                tags.insert( it2->as<std::string>() );
                        }
                        filename = (it->second).as<std::string>();
                
                        // Add entry to the loggerinfo map
                        if((filename=="stdout") or (filename=="stderr"))
                        {
                                // Special cases to trigger redirection to standard output streams
                                loggerinfo[tags] = filename;
                        }
                        else
                        {
                                // The logger won't be able to create the log files if the prefix 
                                // directory doesn't exist, so let us now make sure that it does
                                loggerinfo[tags] = Utils::ensure_path_exists(prefix + filename);
                        }
                }
                // Initialise global LogMaster object
                logger().initialise(loggerinfo);
        }

        /// Getters for model/parameter section
        /// @{
        bool ini_file_parser_base::hasModelParameterEntry(const std::string &model, const std::string &param, const std::string &key) const
        {
                return parametersNode[model][param][key];
        }

        /// Return list of model names (without "adhoc" model!)
        const std::set<std::string> ini_file_parser_base::getModelNames() const
        {
                std::set<std::string> result;
                for (YAML::const_iterator it = parametersNode.begin(); it!=parametersNode.end(); ++it)
                {
                        if (it->first.as<std::string>() != "adhoc")
                                result.insert( it->first.as<std::string>() );
                }
                return result;
        }

        const std::vector<std::string> ini_file_parser_base::getModelParameters(const std::string &model) const
        {
                std::vector<std::string> result;
                if (parametersNode[model])
                {
                        for (YAML::const_iterator it = parametersNode[model].begin(); it!=parametersNode[model].end(); ++it)
                        {
                                result.push_back( it->first.as<std::string>() );
                        }
                }
                return result;
        }

        /// Getter for options
        const Options ini_file_parser_base::getOptions(const std::string &key) const
        {
                if (hasKey(key, "options"))
                {
                        return Options(keyValuePairNode[key]["options"]);
                }
                else
                {
                        return Options(keyValuePairNode[key]);
                }
        }

        /// @}
}