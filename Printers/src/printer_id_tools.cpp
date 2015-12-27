
#include "gambit/Printers/printer_id_tools.hpp"

namespace Gambit
{
    namespace Printers
    {
        unsigned long long int &get_point_id()
        {
            static unsigned long long int id = 0;
            
            return id;
        }
        
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