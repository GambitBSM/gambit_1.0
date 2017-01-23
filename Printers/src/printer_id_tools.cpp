
#include "gambit/Printers/printer_id_tools.hpp"
#include "gambit/Logs/logger.hpp"

namespace Gambit
{
    namespace Printers
    {
        /// Global scan point ID number.
        // bjf> I'm not sure that it is so great to have this as a global.
        //      It would be better managed by the printer object. Some
        //      changes required in ScannerBit to do this though
        unsigned long long int &get_point_id()
        {
            static unsigned long long int id = 0;
            
            return id;
        }

        bool &auto_increment()
        {
            static bool ai = true;
            return ai;
        }
        
        int get_main_param_id(const std::string &name)
        {
            static std::unordered_map<std::string, long long int> map;
            static long long int N = 0;
            
            auto it = map.find(name);
            if (it != map.end())
            {
                return it->second;
            }
            else
            {
                N++;
                map[name] = N;
                logger() << LogTags::printers << LogTags::info << "Assigned printer ID '"<<N<<"' to output quantity with label '"<<name<<"'" << EOM;
                return N;
            }
                
        }
        
        int get_aux_param_id(const std::string &name)
        {
            static std::unordered_map<std::string, long long int> map;
            static long long int N = 0;
            
            auto it = map.find(name);
            if (it != map.end())
            {
                return it->second;
            }
            else
            {
                N--;
                map[name] = N;
                logger() << LogTags::printers << LogTags::info << "Assigned auxilliary printer ID '"<<N<<"' to output quantity with label '"<<name<<"'" << EOM;
               return N;
            }
        }
    }
}
