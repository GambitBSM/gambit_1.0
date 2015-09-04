
#include "gambit/ScannerBit/printer_interface.hpp"

namespace Gambit
{
        namespace Scanner
        {
                int get_main_param_id(const std::string &name)
                {
                        static std::unordered_map<std::string, int> map;
                        static unsigned long long int N = 0;
                        
                        auto it = map.find(name);
                        if (it != map.end())
                        {
                                return it->second;
                        }
                        else
                        {
                                N++;
                                map[name] = N;
                                return N;
                        }
                        
                }
                
                int get_aux_param_id(const std::string &name)
                {
                        static std::unordered_map<std::string, int> map;
                        static unsigned long long int N = 0;
                        
                        auto it = map.find(name);
                        if (it != map.end())
                        {
                                return it->second;
                        }
                        else
                        {
                                N--;
                                map[name] = N;
                                return N;
                        }
                        
                }
        }
}