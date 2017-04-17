
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

        // Access the global parameter ID map. Not declared in header, so
        // can only be accessed in this file.
        std::unordered_map<std::string, long long int> &get_param_id_map()
        {
           static std::unordered_map<std::string, long long int> map;
           return map;
        }
 
        /// Get names of all parameters known to printer system (vector index corresponds to ID number)
        /// Assumes IDs were assigned starting at zero and incrementing upwards! This should be what
        /// is happening, but just keep note of this in case of future changes!
        std::vector<std::string> get_all_params()
        {
           std::vector<std::string> out(get_param_id_map().size());
           std::cout <<"size? " << out.size() << std::endl;
           for( auto it = get_param_id_map().begin(); it!=get_param_id_map().end(); ++it)
           {
              std::cout << it->second << ", " << it->first << std::endl;
              out.at(it->second) = it->first;
           }
           return out;
        }

        /// bjf> I think that there is actually no need or reason
        /// to maintain two separate lists of IDs. I am changing this
        /// to now use only one list, although both old ways of accessing
        /// the IDs (main vs aux) will still exist for backwards
        /// compatibility.
        int get_param_id(const std::string& name, bool& is_new)
        {
            static long long int N = 0; // Next unused index
            
            auto it = get_param_id_map().find(name);
            if (it != get_param_id_map().end())
            {
                is_new = false;
                return it->second;
            }
            else
            {
                get_param_id_map()[name] = N;
                logger() << LogTags::printers << LogTags::info << "Assigned printer ID '"<<N<<"' to output quantity with label '"<<name<<"'" << EOM;
                is_new = true;
                N++;
                return N-1;
            }
        }

        int get_param_id(const std::string &name)
        {
            bool is_new; // Dummy for optional return argument
            return get_param_id(name, is_new);
        }       

        int get_main_param_id(const std::string& name, bool& is_new)
        {
            return get_param_id(name,is_new);        
        }

        int get_main_param_id(const std::string &name)
        {
            bool is_new; // Dummy for optional return argument
            return get_main_param_id(name, is_new);
        }       
 
        int get_aux_param_id(const std::string &name, bool& is_new)
        {
            return get_param_id(name,is_new);        
        }

        int get_aux_param_id(const std::string &name)
        {
            bool is_new; // Dummy for optional return argument
            return get_aux_param_id(name, is_new);
        }

    }
}
