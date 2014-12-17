//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
///  \file
///
///  declaration for the module interface
///
///  *********************************************
///
///  Authors (add name and date if you modify):
//
///  \author Gregory Martinez
///          (gregory.david.martinez@gmail.com)
///  \date 2013 August 2013 Feb 2014
///
///  *********************************************

#ifndef GAMBIT_PLUGIN_INTERFACE_HPP
#define GAMBIT_PLUGIN_INTERFACE_HPP

#include <vector>
#include <unordered_map>
#include <set>
#include <string>
#include <cfloat>
#include <cstdio>
#include <cstdlib>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <dlfcn.h>
#include <typeinfo>

#include "scanner_utils.hpp"
#include "plugin_exception.hpp"
#include "cmake_variables.hpp"

namespace Gambit
{
        namespace Plugin
        {
                const unsigned char FORCE = 0x01;
                const std::string sblank = std::string("       \033[7D");
                const std::string blank = std::string("               \033[15D");
                const std::string bblank = std::string("                              \033[30D");          
                
                inline bool vector_elem_check(std::vector<std::string> &vec, std::string elem)
                {
                        for (auto it = vec.begin(); it != vec.end(); it++)
                        {
                                if ((*it) == elem)
                                {
                                        return true;
                                }
                        }
                        
                        return false;
                }
                
                inline void clearInputBuffer()
                {
                        char c;
                        do 
                        {
                                c = getchar();
                        } 
                        while (c != '\n' && c != EOF);
                }
                
                inline std::string stringify_variadic_inputs()
                {
                        return "";
                }
                
                inline std::string stringify_variadic_inputs(const std::string &in)
                {
                        return in;
                }
                
                template <typename... args>
                inline std::string stringify_variadic_inputs(const std::string &in, const args&... params)
                {
                        return in + ", " + stringify_variadic_inputs(params...);
                }
                
                inline void input_variadic_vector(std::vector<void *> &input){}
                
                template <typename T, typename... args>
                inline void input_variadic_vector(std::vector<void *> &input, const T& value, const args&... params)
                {
                        input.push_back((void *)&value);
                        input_variadic_vector(input, params...);
                }
                
                inline int StringToInt(const std::string &str)
                {
                        int ret;
                        std::stringstream ss(str);
                        if (ss >> ret)
                                return ret;
                        else
                                return 0;
                }
                
                inline std::string IntToString(const int &in)
                {
                        std::stringstream ss;
                        ss << in;
                        return ss.str();
                }
                
                struct PluginStruct
                {
                        std::string version;
                        int major_version;
                        int minor_version;
                        int patch_version;
                        std::string release_version;
                        std::string library_path;
                        std::string library;
                        std::string plugin;
                        std::string type;
                        std::string full_string;
                        
                        std::string print() const
                        {
                                stringstream out;
                                out << "plugin:  " << plugin << std::endl;
                                out << "\tversion:  " << version << std::endl;
                                out << "\tmajor version:  " << major_version << std::endl;
                                out << "\tminor version:  " << minor_version << std::endl;
                                out << "\tpatch version:  " << patch_version << std::endl;
                                out << "\trelease version:  " << release_version << std::endl;
                                out << "\tlibrary_path:  " << library_path << std::endl;
                                out << "\tlibrary:  " << library << std::endl;
                                out << "\ttype:  " << type << std::endl;
                                
                                return out.str();
                        }
                };
                
                inline bool operator == (const PluginStruct &plug1, const PluginStruct &plug2)
                {
                        if ((plug1.major_version != plug2.major_version) ||
                                (plug1.major_version != plug2.major_version) ||
                                (plug1.minor_version != plug2.minor_version) ||
                                (plug1.release_version == "" && plug2.release_version != "") ||
                                (plug1.release_version != "" && plug2.release_version == ""))
                        {
                                return false;
                        }
                        
                        return false;
                }
                
                inline bool PluginStructComp(const PluginStruct &plug1, const PluginStruct &plug2)
                {
                        if (plug1.major_version > plug2.major_version)
                        {
                                return true;
                        }
                        else if (plug1.major_version == plug2.major_version)
                        {
                                if (plug1.minor_version > plug2.minor_version)
                                {
                                        return true;
                                }
                                else if (plug1.minor_version == plug2.minor_version)
                                {
                                        if (plug1.patch_version > plug2.patch_version)
                                        {
                                                return true;
                                        }
                                        else if (plug1.patch_version == plug2.patch_version)
                                        {
                                                if (plug1.release_version == "" && plug2.release_version != "")
                                                {
                                                        return true;
                                                }
                                        }
                                }
                        }
                        
                        return false;
                }
                
                class VersionCompareBase
                {
                private:
                        bool empty;
                public:
                        VersionCompareBase() : empty(false) {}
                        
                        virtual bool operator() (const PluginStruct &) = 0;
                        
                        bool isEmpty() const {return empty;}
                        
                        void setEmpty(bool in) {empty = in;}
                        
                        virtual ~VersionCompareBase() {}
                };
                
                class VersionCompareBottom : public VersionCompareBase
                {
                private:
                        const unsigned char GREATER = 0x01;
                        const unsigned char EQUAL = 0x02;
                        const unsigned char LESS = 0x04;
                        const unsigned char NEG = 0x08;
                        const unsigned char MAJOR = 0x10;
                        const unsigned char MINOR = 0x20;
                        const unsigned char PATCH = 0x40;
                        const unsigned char RELEASE = 0x80;
                        unsigned int major_version;
                        unsigned int minor_version;
                        unsigned int patch_version;
                        std::string release_version;
                        bool (*f)(int, int);
                        unsigned char flag;
                        
                        static bool gt (int a, int b) {return a > b;}
                        static bool lt (int a, int b) {return a < b;}
                        static bool gte (int a, int b) {return a >= b;}
                        static bool lte (int a, int b) {return a <= b;}
                        static bool eq (int a, int b) {return a == b;}
                        static bool neq (int a, int b) {return a != b;}
                        
                public:
                        
                        VersionCompareBottom (const std::string &version) : flag (0x00)
                        {
                                if (version.find_first_not_of(" !()|&=<>") == std::string::npos)
                                {
                                        flag = 0x00;
                                        setEmpty(true);
                                        return;
                                }
                                else
                                {
                                        std::string::size_type i;
                                        for (i = 0; i < version.length(); i++)
                                        {
                                                if (version[i] == '<')
                                                        flag |= LESS;
                                                else if (version[i] == '>')
                                                        flag |= GREATER;
                                                else if (version[i] == '=')
                                                        flag |= EQUAL;
                                                else if (version[i] == '!')
                                                        flag |= NEG;
                                                else if (version[i] != ' ' && version[i] != '|' && version[i] != '&')
                                                        break;
                                        }
                                        
                                        if (i == version.length())
                                        {
                                                flag = 0x00;
                                                return;
                                        }
                                        
                                        if (!bool(flag))
                                                flag = EQUAL;
                                        
                                        std::string::size_type pos = version.find("-", i);
                                        std::string number;
                                        
                                        if (pos != std::string::npos)
                                        {
                                                flag |= RELEASE;
                                                release_version = version.substr(pos + 1);
                                                number = version.substr(i, pos - i);
                                        }
                                        else
                                        {
                                                number = version.substr(i);
                                        }
                                        
                                        pos = number.find(".");
                                        if (pos != std::string::npos)
                                        {
                                                flag |= MAJOR;
                                                major_version = StringToInt(number.substr(0, pos));
                                                
                                                i = number.find(".", pos + 1);
                                                if (i != std::string::npos)
                                                {
                                                        flag |= MINOR;
                                                        minor_version = StringToInt(number.substr(pos + 1, i - pos - 1));
                                                        
                                                        pos = number.find(".", i + 1);
                                                        
                                                        if (pos != std::string::npos)
                                                        {
                                                                flag |= PATCH;
                                                                patch_version = StringToInt(number.substr(i + 1, pos - i - 1));
                                                                
                                                                if (!bool(flag&RELEASE))
                                                                {
                                                                        flag |= RELEASE;
                                                                        release_version = number.substr(pos + 1);
                                                                }
                                                        }
                                                        else
                                                        {
                                                                flag |= PATCH;
                                                                patch_version = StringToInt(number.substr(i + 1));
                                                        }
                                                }
                                        }
                                }
                                
                                unsigned char comp = (flag << 4);
                                comp >>= 4;
                                
                                if (comp == (EQUAL|GREATER|LESS|NEG) ||
                                        comp == (GREATER|LESS|NEG) ||
                                        comp == (EQUAL|NEG) ||
                                        comp == (NEG))
                                                f = neq;
                                else if (comp == (EQUAL|GREATER|LESS) ||
                                        comp == (GREATER|LESS) ||
                                        comp == (EQUAL))
                                                f = eq;
                                else if (comp == (EQUAL|GREATER|NEG) ||
                                        comp == (LESS))
                                                f = lt;
                                else if (comp == (EQUAL|LESS|NEG) ||
                                        comp == (GREATER))
                                                f = gt;
                                else if (comp == (LESS|NEG) ||
                                        comp == (EQUAL|GREATER))
                                                f = gte;
                                else if (comp == (GREATER|NEG) ||
                                        comp == (EQUAL|LESS))
                                                f = lte;
                        }
                        
                        bool operator() (const PluginStruct &plugin)
                        {
                                if ((bool(flag&MAJOR) && (!f(plugin.major_version, major_version))) ||
                                        (bool(flag&MINOR) && (!f(plugin.minor_version, minor_version))) ||
                                        (bool(flag&PATCH) && (!f(plugin.patch_version, patch_version))) ||
                                        (bool(flag&RELEASE) && plugin.release_version != release_version))
                                {
                                        return false;
                                }
                                
                                return true;
                        }
                };
                
                class VersionCompare : public VersionCompareBase
                {
                private:
                        const unsigned char OR = 0x02;
                        const unsigned char AND = 0x04;
                        
                        VersionCompareBase *compare1;
                        VersionCompareBase *compare2;
                        unsigned char flag;
                        
                public:
                        VersionCompare(const std::string &version) : compare1(NULL), compare2(NULL), flag(0x00)
                        {
                                std::string::size_type p_pos = version.find_first_of("(|&");
                                
                                if (version.find_first_not_of(" !()|&=<>") == std::string::npos)
                                {
                                        setEmpty(true);
                                }
                                else if (p_pos == std::string::npos)
                                {
                                        compare1 = new VersionCompareBottom(version);
                                }
                                else if (version[p_pos] == '|')
                                {
                                        flag |= OR;
                                        compare1 = new VersionCompare(version.substr(0, p_pos));
                                        compare2 = new VersionCompare(version.substr(p_pos + 1));
                                }
                                else if (version[p_pos] == '&')
                                {
                                        flag |= AND;
                                        compare1 = new VersionCompare(version.substr(0, p_pos));
                                        compare2 = new VersionCompare(version.substr(p_pos + 1));
                                }
                                else if (version[p_pos] == '(' && p_pos == version.find_first_not_of(" "))
                                {
                                        unsigned int p_num = 1;
                                        std::string::size_type pos = p_pos;
                                        
                                        for (;;)
                                        {
                                                pos = version.find_first_of("()", pos + 1);
                                                if (pos != std::string::npos)
                                                {
                                                        if (version[pos] == '(')
                                                        {
                                                                p_num++;
                                                        }
                                                        else
                                                        {
                                                                p_num--;
                                                                if (p_num == 0)
                                                                {
                                                                        compare1 = new VersionCompare(version.substr(p_pos +1, pos - p_pos - 1));
                                                                        pos = version.find_first_of("&|", pos + 1);
                                                                        if (pos == std::string::npos)
                                                                        {
                                                                        }
                                                                        else if (version[pos] == '|')
                                                                        {
                                                                                flag |= OR;
                                                                                compare2 = new VersionCompare(version.substr(pos + 1));
                                                                        }
                                                                        else if (version[pos] == '&')
                                                                        {
                                                                                flag |= AND;
                                                                                compare2 = new VersionCompare(version.substr(pos + 1));
                                                                        }
                                                                        
                                                                        break;
                                                                }
                                                        }
                                                }
                                                else
                                                {
                                                        compare1 = new VersionCompare(version.substr(pos + 1));
                                                        break;
                                                }
                                        }
                                }
                                else
                                {
                                        std::stringstream ss;
                                        ss << "Could not parse version string \"" << version << "\"." << std::endl;
                                        Scanner::scan_error().raise(LOCAL_INFO, ss.str());
                                }
                                
                                if (compare1 != NULL && compare1->isEmpty())
                                {
                                        delete compare1;
                                        compare1 = NULL;
                                }
                                
                                if (compare2 != NULL && compare2->isEmpty())
                                {
                                        delete compare1;
                                        compare2 = NULL;
                                }
                                
                                if (compare1 == NULL && compare2 == NULL)
                                        setEmpty(true);
                                
                                return;
                        }
                        
                        bool operator() (const PluginStruct &plugin)
                        {
                                if (compare1 == NULL && compare2 == NULL)
                                {
                                        return true;
                                }
                                else if (compare1 == NULL && compare2 != NULL)
                                {
                                        return (*compare2)(plugin);
                                }
                                else if (compare1 != NULL && compare2 == NULL)
                                {
                                        return (*compare1)(plugin);
                                }
                                else
                                {
                                        if (bool(flag&OR))
                                                return (*compare1)(plugin) || (*compare2)(plugin);
                                        else if (bool(flag&AND))
                                                return (*compare1)(plugin) && (*compare2)(plugin);
                                }
                        }
                        
                        ~VersionCompare()
                        {
                                if (compare1 != NULL)
                                        delete compare1;
                                if (compare2 != NULL)
                                        delete compare2;
                        }
                };
                
                class Plugin_Loader
                {
                private:
                        std::string path;
                        std::vector<PluginStruct> plugins;
                        std::map<std::string, std::map<std::string, std::vector<PluginStruct>>> plugin_map;
                        
                public:
                        Plugin_Loader() : path(GAMBIT_DIR "/ScannerBit/lib/")
                        {
                                std::string p_str;
                                if (FILE* p_f = popen((std::string("ls ") + path).c_str(), "r"))
                                {
                                        char path_buffer[1024];
                                        int p_n;
                                        while ((p_n = fread(path_buffer, 1, sizeof path_buffer, p_f)) > 0)
                                        {
                                                std::stringstream p_ss(std::string(path_buffer, p_n));
                                                while (p_ss >> p_str)
                                                {
                                                        if (p_str.find(".so") != std::string::npos)
                                                                loadLibrary (path + p_str);
                                                }
                                        }
                                        
                                        pclose(p_f);  
                                }
                        }
                                
                        void loadLibrary (const std::string &p_str, const std::string &plug = "")
                        {
                                std::string str;
                                if (FILE* f = popen((std::string("nm ") + p_str + std::string(" | grep \"__gambit_plugin_pluginInit_\"")).c_str(), "r"))
                                {
                                        char buffer[1024];
                                        int n;
                                        
                                        while ((n = fread(buffer, 1, sizeof buffer, f)) > 0)
                                        {
                                                std::stringstream ss(std::string(buffer, n));
                                                while(getline(ss, str))
                                                {
                                                        PluginStruct temp;
                                                        int pos = str.find("__gambit_plugin_pluginInit_");
                                                        int posLast = str.rfind("__");
                                                        int posMid = str.rfind("__v__", posLast - 1);
                                                        temp.full_string = str.substr(pos + 27, posLast - pos - 27);
                                                        temp.version = str.substr(posMid + 5, posLast - posMid - 5);
                                                        posLast = str.rfind("__t__", posMid - 1);
                                                        temp.type = str.substr(posLast + 5, posMid - posLast - 5);
                                                        temp.plugin = str.substr(pos + 27, posLast - pos - 27);
                                                        
                                                        if (plug == "" || temp.plugin == plug)
                                                        {
                                                                posLast = temp.version.find("_");
                                                                temp.major_version = StringToInt(temp.version.substr(0, posLast));
                                                                posMid = temp.version.find("_", posLast + 1);
                                                                temp.minor_version = StringToInt(temp.version.substr(posLast + 1, posMid - posLast - 1));
                                                                posLast = temp.version.find("_", posMid + 1);
                                                                temp.patch_version = StringToInt(temp.version.substr(posMid + 1, posLast - posMid - 1));
                                                                temp.release_version = temp.version.substr(posLast + 1);
                                                                temp.version = IntToString(temp.major_version) + "." + IntToString(temp.minor_version) + "." + IntToString(temp.patch_version);
                                                                if (temp.release_version != "") temp.version += "-" + temp.release_version;  
                                                                if (p_str.rfind("/") != std::string::npos)
                                                                        temp.library = p_str.substr(p_str.rfind("/") + 1);
                                                                else
                                                                        temp.library = p_str;
                                                                temp.library_path = p_str;
                                                                plugins.push_back(temp);
                                                                plugin_map[temp.type][temp.plugin].push_back(temp);
                                                        }
                                                }
                                        }
                                        
                                        pclose(f);
                                }
                        }
                        
                        std::vector<PluginStruct> getPluginsVec() const {return plugins;}
                        std::map<std::string, std::map<std::string, std::vector<PluginStruct>>> getPluginsMap() const {return plugin_map;}
                        
                        void print ()
                        {
                                for (auto it = plugins.begin(), end = plugins.end(); it != end; it++)
                                {
                                        std::cout << it->print() << std::endl;
                                }
                        }
                        
                        PluginStruct find (const std::string &type, const std::string &plugin, const std::string &version, const std::string &lib)
                        {
                                std::vector<PluginStruct> plugins;
                                for (auto it = plugin_map[type][plugin].begin(), end = plugin_map[type][plugin].end(); it != end; it++)
                                {
                                        if (VersionCompare(version)(*it) && (lib == "" || lib == it->library_path))
                                                plugins.push_back(*it);
                                }
                                
                                if (plugins.size() > 1)
                                {
                                        std::sort(plugins.begin(), plugins.end(), PluginStructComp);
                                        auto it2 = plugins.begin();
                                        for (auto it = it2 + 1, end = plugins.end(); it != end; it++)
                                        {
                                                if (*it == *it2)
                                                {
                                                        //NOTE:  put error message here
                                                }
                                                else
                                                {
                                                        break;
                                                }
                                        }
                                }
                                else if (plugins.size() == 0)
                                {
                                        std::stringstream ss;
                                        ss << "Plugin \"" << plugin << "\" is type \"" << type 
                                                << "\" version \"" << version << "\" is not found." << std::endl;
                                        Scanner::scan_error().raise(LOCAL_INFO, ss.str());
                                        plugins.resize(1);
                                }
                                
                                return plugins[0];
                        }
                };
                
                template <typename T> class Plugin_Interface;
                
                template <typename ret, typename... args>
                class Plugin_Interface <ret (args...)>
                {
                private:
                        void *plugin;
                        std::string name;
                        std::vector<std::string> mod_names;
                        std::vector<void *> input;
                        typedef const type_info &(*initFuncType)(std::vector<void *> *);                              
                        typedef void * (*getFuncType)(std::string);
                        typedef void (*rmFuncType)(void *, std::string);
                        typedef ret (*mainFuncType)(args...);
                        typedef void (*deconFuncType)();
                        initFuncType initFunc;
                        getFuncType getFunc;
                        rmFuncType rmFunc;
                        mainFuncType main;
                        deconFuncType deconFunc;
                        
                public:
                        template <typename... plug_args>
                        Plugin_Interface(const std::string &file, const std::string &name_in, const plug_args&... inputs) : name(name_in)
                        {
                                plugin = dlopen (file.c_str(), RTLD_NOW);
                                std::string str;
                                
                                input_variadic_vector(input, inputs...);
                                
                                if (FILE* f = popen((std::string("nm ") + file + std::string(" | grep \"__gambit_plugin_pluginInit_\"")).c_str(), "r"))
                                {
                                        char buffer[1024];
                                        int n;
                                        
                                        while ((n = fread(buffer, 1, sizeof buffer, f)) > 0)
                                        {
                                                std::stringstream ss(std::string(buffer, n));
                                                while(getline(ss, str))
                                                {
                                                        int pos = str.find("__gambit_plugin_pluginInit_");
                                                        int posLast = str.rfind("__");
                                                        mod_names.push_back(str.substr(pos + 27, posLast - pos - 27));
                                                }
                                        }
                                        
                                        pclose(f);
                                }
                                
                                if (bool(plugin))
                                {
                                        if (mod_names.size() > 0)
                                        {
                                                if (!vector_elem_check(mod_names, name))
                                                {
                                                        
                                                        if (name !=  "")
                                                                std::cout << "\n\e[01;33mWARNING:\e[00m  Plugin \"" << name << "\" is not in file \"" << file << "\".\n\n";
                                                        else
                                                                std::cout << "\n\e[01;33mWARNING:\e[00m  Plugin was not specified in ini-file.\n\n";
                                                        
                                                        std::cout << "Plugins in \"" << file << "\" are:\n";
                                                        for (int i = 0; i < mod_names.size(); i++)
                                                        {
                                                                std::cout << "   Plugin " << i << ":  " << mod_names[i] << "\n";
                                                        }
                                                        std::cout << "\nPlease choose a module number:  " << std::flush;
                                                        int iin;
                                                        std::getline(std::cin, str);
                                                        std::istringstream ss(str);
                                                        bool is_not_int = !(ss >> iin);
                                                        while(iin < 0 || iin >= mod_names.size() || is_not_int)
                                                        {
                                                                std::cout << "\033[1APlease choose a module number:  " << bblank << std::flush;
                                                                std::getline(std::cin, str);
                                                                std::stringstream ss(str);
                                                                is_not_int = !(ss >> iin);
                                                        }
                                                        name = mod_names[iin];
                                                }
                                        
                                                initFunc = (initFuncType)dlsym(plugin, (std::string("__gambit_plugin_pluginInit_") + name + std::string("__")).c_str());
                                                getFunc = (getFuncType)dlsym(plugin, (std::string("__gambit_plugin_getMember_") + name + std::string("__")).c_str());
                                                rmFunc = (rmFuncType)dlsym(plugin, (std::string("__gambit_plugin_rmMember_") + name + std::string("__")).c_str());
                                                bool diff = typeid(ret (args...)) != initFunc(&input);
                                                
                                                main = (mainFuncType)getFunc(name);
                                                
                                                if (main == 0)
                                                {
                                                        ostringstream ss;
                                                        ss << "Could not find main function in plugin \"" << name << "\".";
                                                        throw Gambit::Plugin::PluginException(ss.str());
                                                }
                                                
                                                if(diff)
                                                {
                                                        ostringstream ss;
                                                        ss << "Plugin interface requires the plugin_main function in plugin \"" << name << "\" to be of the form \"" << typeid(ret).name() << " (" << stringify_variadic_inputs(typeid(args).name()...) << ")\"";
                                                        throw Gambit::Plugin::PluginException(ss.str());
                                                }
                                                
                                                deconFunc = (deconFuncType)getFunc("__gambit_plugin_deconstructor__");
                                        }
                                        else
                                        {
                                                ostringstream ss;
                                                ss << "Could not find any modules in file \"" << file << "\".";
                                                throw Gambit::Plugin::PluginException(ss.str()); 
                                        }
                                }
                                else
                                {
                                        ostringstream ss;
                                        ss << "Cannot load " << file << ":  " << dlerror();
                                        plugin = 0;
                                        throw Gambit::Plugin::PluginException(ss.str()); 
                                }
                        }
                        
                        ret operator() (const args&... params) 
                        {
                                return main(params...);
                        }
                        
                        void *getMember(std::string in){return getFunc(in);}
                        void deleteMember(void *ptr, std::string in){rmFunc(ptr, in);}
                        
                        ~Plugin_Interface()
                        {
                                if (deconFunc != NULL)
                                        deconFunc();
                                
                                if (plugin != 0) dlclose(plugin);
                        }
                };
        }
}

#endif
