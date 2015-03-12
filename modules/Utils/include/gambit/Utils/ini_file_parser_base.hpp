#ifndef __INI_FILE_PARSER_BASE__
#define __INI_FILE_PARSER_BASE__

#include "gambit/Utils/util_types.hpp"
#include "gambit/Utils/standalone_error_handlers.hpp"
#include "gambit/Utils/variadic_functions.hpp"
#include "gambit/Utils/yaml_options.hpp"
#include "gambit/Utils/util_functions.hpp"
#include "gambit/Logs/log.hpp"

namespace Gambit
{
        class ini_file_parser_base
        {

        public:
                // Read the file
                void readFile(const std::string &filename);

                
                /// Getters for yaml nodes
                /// @{
                YAML::Node getParametersNode()   const {return parametersNode;}
                YAML::Node getPriorsNode()       const {return priorsNode;}
                YAML::Node getPrinterNode()      const {return printerNode;}
                YAML::Node getScannerNode()      const {return scannerNode;}
                YAML::Node getKeyValuePairNode() const {return keyValuePairNode;}
                YAML::Node getRootNode()         const {return rootNode;}
                /// @}
                
                /// Getters for key/value section
                /// @{
                template <typename... args>
                bool hasKey(args... keys) const
                {
                        return getVariadicNode(keyValuePairNode, keys...);
                }

                template<typename TYPE, typename... args> TYPE getValue(args... keys) const
                {
                        const YAML::Node node = getVariadicNode(keyValuePairNode, keys...);
                        if (not node) utils_error().raise(LOCAL_INFO,"No inifile entry for [" + stringifyVariadic(keys...) + "]");
                        return node.as<TYPE>();
                }

                template<typename TYPE, typename... args> TYPE getValueOrDef(TYPE def, const args&... keys) const
                {
                        const YAML::Node node = getVariadicNode(keyValuePairNode, keys...);
                        if (not node)
                        {
                                return def;
                        }
                        return node.as<TYPE>();
                }
                /// @}

                /// Getters for model/parameter section
                /// @{
                template<typename TYPE> TYPE getModelParameterEntry(const std::string &model,
                const std::string &param, const std::string &key) const
                {
                        if (not parametersNode[model][param][key]) utils_error().raise(LOCAL_INFO,model + "." + param + "." + key + "not found in inifile.");
                        return parametersNode[model][param][key].as<TYPE>();
                }
                bool hasModelParameterEntry(const std::string &model, const std::string &param, const std::string &key) const;
                /// Return list of model names (without "adhoc" model!)
                const std::set<std::string> getModelNames() const;
                const std::vector<std::string> getModelParameters(const std::string &model) const;
                /// @}

                /// Getter for options
                const Options getOptions(const std::string &key) const;

        private:
                YAML::Node rootNode;
                YAML::Node keyValuePairNode;
                YAML::Node parametersNode;
                YAML::Node priorsNode;
                YAML::Node printerNode;
                YAML::Node scannerNode;
        };
}

#endif