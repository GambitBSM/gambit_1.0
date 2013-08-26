//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
///  \file
///
///  declaration for the class loader
///
///  *********************************************
///
///  Authors (add name and date if you modify):
//
///  \author Gregory Martinez
///          (gregory.david.martinez@gmail.com)
///  \date 2013 August 2013
///
///  *********************************************

/*
 * ClassLoader dynamically loads the class "std::string name" from the library "std::string file", 
 * with member functions "std::vector<std::string> vec = {... member names ...}".  The exact
 * member name with the appropriate space must be supplied (e.g. func(double, double)).
 * The internal function "Members" gets the address for a specific member function.
 * gambit_cast casts this address to the appropriate function.  
 * 
 * Remember that c++ inherently adds a "void *" entry to every member function parameter entry.  
 * This entry corresponds to the location of the declared or allocated data.  Where this entry 
 * occurs in the input may be compiler specific.  On my compiler, it's apparantly the first entry.
 * 
 * Alteratively, you can cast the dlsym output into a member function pointer instead of a regular
 * function pointer.  This way, you don't have to explicitly specify the "void *" entry.  But, the 
 * compiler *really* doesn't like this and can lead to some strange behavior.  The "member_cast"
 * function will do this cast.
 * 
 * On linux, it may be possible to need the command line tools "nm" and "c++filt" with the use of
 * the "dlinfo()" function in "link.h" (symbols http://www.unix.com/man-page/all/3c/dlinfo/) and
 * the "abi::__cxa_demangle" in the header "cxxabi.h".
 * 
 * Also it's important to note that you may reuse the header files that were used to compile the 
 * library.  But, you must remove any constructors or deconstructors from those files 
 * (both prototypes and declared).  Although, the header file used to compile the 
 * library *does not* need to be modified.  Also remember that inline functions (with the exception 
 * of virtual functions, consructors, deconstructors, and any function that you thought was inline 
 * but the compiler decided not to make inline) cannot be loaded this way since they will not 
 * appear on the link map (this also goes for expr functions in c++11).  But these functions usually 
 * appear in the header, which means you can still use them, if you include the appropriate header.  
 * Of course, this will not work if those inline functions call member functions.  In
 * this case, you'll have to hack the inline code directly if you wish to use those functions
 * directly.
 */

#ifndef CLASS_LOADER_HPP
#define CLASS_LOADER_HPP

#include <vector>
#include <unordered_map>
#include <map>
#include <string>
#include <cstdio>
#include <cstdlib>
#include <dlfcn.h>
#include <sstream>
//#include <mach-o/dyld.h>

template <typename T>
T* gambit_cast(void *in)
{
        return (T*)in;
}

template <typename T>
T member_cast(void *in)
{
        static union
        {
                void *ptr;
                T value;
        };
        ptr = in;
        
        return value;
}

void *loadCxxFunction(const char * func_name, const char *file, void *plugin)
{
        std::string str;
        char buffer[1024];
        int n;
        FILE *f;
        
        std::ostringstream ss;
        ss << "nm " << file << " | c++filt | grep \"" << func_name << "\"";
        if (f = popen(ss.str().c_str(), "r"))
        { 
                std::stringstream ss;
                while ((n = fread(buffer, 1, sizeof buffer, f)) > 0)
                {
                        ss << std::string(buffer, n);
                }
                ss >> str;
                
                pclose(f);
        }
        
        std::ostringstream ss2;
        ss2 << "nm " << file << " | grep \"" << str << "\"";
        if (f = popen(ss2.str().c_str(), "r"))
        {
                std::stringstream ss;
                while ((n = fread(buffer, 1, sizeof buffer, f)) > 0)
                {
                        ss << std::string(buffer, n);
                }
               
                getline(ss, str);
                int pos = str.find("_");
                str = str.substr(pos + 1);
                
                pclose(f);
        }
        
        return dlsym(plugin, str.c_str());
}

class LoadedClass
{
public:
        void *plugin;
        std::string name;
        std::map<std::string, void*> members;
        std::string errors;

        LoadedClass(std::string name) : name(name), errors("") {}
        
        LoadedClass(std::string name, std::vector<std::string> vec) : name(name)
        {

                for (std::vector<std::string>::iterator it = vec.begin(); it != vec.end(); it++)
                {
                        members[*it] = 0;
                }
        }
        
        LoadedClass(std::string file, std::string name, std::vector<std::string> vec) : name(name)
        {
                plugin = dlopen (file.c_str(), RTLD_LAZY);
                std::vector <std::string> missingFuncs;
                      
                if (plugin)
                {
                        for (std::vector<std::string>::iterator it = vec.begin(); it != vec.end(); it++)
                        {
                                void *ptr = loadCxxFunction((name + std::string("::") + *it).c_str(), file.c_str(), plugin);
                                if (ptr != 0)
                                {
                                        members[*it] = ptr;
                                }
                                else
                                {
                                        missingFuncs.push_back(*it);
                                }
                        }
                        
                        if (missingFuncs.size() > 0)
                        {
                                std::stringstream ss;
                                ss << "\e[00;31mERROR:\e[00m  Could not load these functions in class \"" << name << "\" (contained in file \"" << file << "\"):  [";
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
                
                if (errors != "")
                        std::cout << errors << std::endl;
        }
        
        std::string printErrors(){return errors;}
        
        void addMember(std::string in){members[in] = 0;}
        
        void *Member(std::string mem_in){return members[mem_in];}
        
        void load(std::string file)
        {
                plugin = dlopen (file.c_str(), RTLD_LAZY);
                std::vector <std::string> missingFuncs;
                      
                if (plugin)
                {
                        for (std::map<std::string, void*>::iterator it = members.begin(); it != members.end(); it++)
                        {
                                void *ptr = loadCxxFunction((name + std::string("::") + it->first).c_str(), file.c_str(), plugin);
                                if (ptr != 0)
                                {
                                        it->second = ptr;
                                }
                                else
                                {
                                        missingFuncs.push_back(it->first);
                                }
                        }
                        
                        if (missingFuncs.size() > 0)
                        {
                                std::stringstream ss;
                                ss << "\e[00;31mERROR:\e[00m  Could not load these functions in class \"" << name << "\" (contained in file \"" << file << "\"):  [";
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
                
                if (errors != "")
                        std::cout << errors << std::endl;
        }
        
        ~LoadedClass()
        {
                dlclose(plugin);
        }
};

#endif