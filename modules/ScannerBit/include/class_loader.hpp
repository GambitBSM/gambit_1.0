#ifndef CLASS_LOADER_HPP
#define CLASS_LOADER_HPP

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
#include <functors.hpp>
#include <graphs.hpp>
#include <dlfcn.h>

struct Member
{
        std::string name;
        void *f;
        Member(std::string name) : name(name) {}
        void load(void * in)
        {
                f = in;
        }
        template <typename T>
        T *func()
        {
                return (T *)f;
        }
};

class LoadedClass
{
public:
        void *plugin;
        std::string name;
        std::map<std::string, Member*> members;
        std::string errors;

        LoadedClass(std::string name) : name(name), errors("") {}
        
        std::string printErrors(){return errors;}
        
        void addMember(Member *in){members[in->name] = in;}
        
        void load(std::string file)
        {
                plugin = dlopen (file.c_str(), RTLD_LAZY);
                std::string str, addr;
                std::vector <std::string> missingFuncs;
                      
                if (plugin)
                {
                        for (std::map<std::string, Member*>::iterator it = members.begin(); it != members.end(); it++)
                        {
                                stringstream ss;
                                ss << "nm " << file << " | c++filt | grep \"" << name << "::" << it->first << "\"";
                                if (FILE* f = popen(ss.str().c_str(), "r"))
                                {
                                        char buffer[1024];
                                        int n;
                                        
                                        while ((n = fread(buffer, 1, sizeof buffer, f)) > 0)
                                        {
                                                std::stringstream ss(std::string(buffer, n));
                                                ss >> str;
                                        }
                                        
                                        pclose(f);
                                }
                                
                                stringstream ss2;
                                ss2 << "nm " << file << " | grep \"" << str << "\"";
                                if (FILE* f = popen(ss2.str().c_str(), "r"))
                                {
                                        char buffer[1024];
                                        int n;
                                        
                                        while ((n = fread(buffer, 1, sizeof buffer, f)) > 0)
                                        {
                                                std::stringstream ss(std::string(buffer, n));
                                                getline(ss, str);
                                                int pos = str.find("_");
                                                addr = str.substr(pos + 1);
                                                
                                        }
                                        
                                        pclose(f);
                                }
                                
                                void *ptr = dlsym(plugin, addr.c_str());
                                if (ptr != 0)
                                {
                                        members[it->first]->load(ptr);
                                }
                                else
                                {
                                        missingFuncs.push_back(it->first);
                                }
                        }
                        
                        if (missingFuncs.size() > 0)
                        {
                                std::stringstream ss;
                                ss << "\e[00;31mERROR:\e[00m  Could not load functions in class \"" << name << "\":  [";
                                for (std::vector<std::string>::iterator it = missingFuncs.begin(); it != missingFuncs.end(); it++)
                                        ss << (*it) << ", ";
                                ss << "\033[2D]\n";
                                errors = ss.str();
                        }
                }
                else
                {
                        std::stringstream ss;
                        ss << "\e[00;31mERROR:\e[00m  Cannot load " << file << ":  " << dlerror();
                        errors = ss.str();
                }
        }
        
        ~LoadedClass()
        {
                dlclose(plugin);
                for (std::map<std::string, Member*>::iterator it = members.begin(); it != members.end(); it++)
                {
                        delete it->second;
                }
        }
};;;;;;

#endif