//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
///  \file
///
///  Yaml Node functions.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///
///  \author Ben Farmer
///          (benjamin.farmer@monash.edu.au)
///  \date 2013 Dec
///
///  \author Gregory Martinez
///          (gregory.david.martinez@gmail.com)
///  \date Feb, Mar 2014
///
///  *********************************************

#ifndef __OPTIONS_NODE_HPP__
#define __OPTIONS_NODE_HPP__

#include <sstream>
#include <variadic_functions.hpp>
#include <exception>

namespace Gambit
{
        class Options
        {
        private:
                YAML::Node options;
                
        public:
                Options(const YAML::Node &options) : options(options) {} 

                template <typename... args>
                bool hasKey(const args&... keys) const
                {
                        return getVariadicNode(options, keys...);
                }

                template<typename TYPE, typename... args> 
                TYPE getValue(const args&... keys) const
                {
                        const YAML::Node node = getVariadicNode(options, keys...);
                        //if (not node)
                        //{
                        //        std::ostringstream os;
                        //        os << "No entry for [" << stringifyVariadic(keys...) << "]\n Node contents:  " << options;
                        //        throw temp_exception(os.str());
                        //}
                        
                        return node.as<TYPE>();
                }
                
                template<typename... args>
                const Options getOptions(const args&... keys) const
                {
                        const YAML::Node node = getVariadicNode(options, keys...);
                        if (node["options"])
                        {
                                return Options(node["options"]);
                        }
                        else
                        {
                                return Options(node);
                        }
                }
                
                const std::vector<std::string> getNames() const
                {
                        std::vector<std::string> result;

                        for (auto it = options.begin(), end = options.end(); it != end; ++it)
                        {
                                result.push_back( it->first.as<std::string>() );
                        }

                        return result;
                }
                
                template<typename... args>
                const std::vector<std::string> getNames(const args&... keys) const
                {
                        std::vector<std::string> result;
                        const YAML::Node node = getVariadicNode(options, keys...);

                        if (node)
                        {
                                for (auto it = node.begin(), end = node.end(); it != end; ++it)
                                {
                                        result.push_back( it->first.as<std::string>() );
                                }
                        }

                        return result;
                }
        };
}

#endif