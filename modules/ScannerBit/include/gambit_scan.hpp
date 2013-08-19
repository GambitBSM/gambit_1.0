//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
///  \file
///
///  Scanner method implementations.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Christoph Weniger
///          (c.weniger@uva.nl)
///  \date 2013 May, June, July
//
///  \author Gregory Martinez
///          (gregory.david.martinez@gmail.com)
///  \date 2013 July 2013
///
///  \author Pat Scott
///          (patscott@physics.mcgill.ca)
///  \date 2013 Aug
///
///  *********************************************

#ifndef __gambit_scan_hpp__
#define __gambit_scan_hpp__

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
#include <scanner_utils.hpp>
#include <scanner_params.hpp>
#include <gambit_scan.hpp>
#include <dlfcn.h>


/// \todo FIXME PS: Greg, pls remove the explicit tabs in gambit_scan!!!

#define INPUT_SCANNER_FUNCTION(map, func) \
map[ #func ].first = factory_template <func>::factory; \
map[ #func ].second = factory_template <func>::remove; \

namespace GAMBIT
{
        namespace Scanner
        {
                class Gambit_Scanner
                {
                protected:
                        const gambit_core *boundCore;
                        const IniParser::IniFile *boundIniFile;
                        std::vector <double> upper_limits;
                        std::vector <double> lower_limits;
                        std::vector <std::string> keys;
                        std::vector <std::string> phantom_keys;
                        Graphs::DependencyResolver *dependencyResolver;
                        std::vector<Scanner::Model> models;
			//std::string name; // Sampler name
                        std::vector<double> old_input;
                        int defout;
                        bool hasXTerm;
                        unsigned char flag;
			
		public:
			Gambit_Scanner (const gambit_core&, const IniParser::IniFile&, Graphs::DependencyResolver&);
                        
                        //print errors and return true if there are fatal errors.
                        bool printErrors(std::string errorsin = "no errors");
			
                        const IniParser::IniFile *getIniFile() const {return boundIniFile;}
                        
			std::vector<std::string> getKeys() const {return keys;}
			
			std::vector<std::string> getPhantomKeys() const {return phantom_keys;}
			
			std::vector<double> getUpperLimits() const {return upper_limits;}
			
			std::vector<double> getLowerLimits() const {return lower_limits;}
			
			void setParameters (std::vector<double> &vec) 
			{
                                std::vector<double>::iterator vec_it = vec.begin();
				for (std::vector<Model>::iterator it = models.begin(); it != models.end(); ++it)
                                {
                                        dup2(it->output, STDOUT_FILENO);

                                        for (std::vector<Parameter *>::iterator it2 = it->parameters.begin(); it2 != it->parameters.end(); ++it2)
                                        {
                                                (*it2)->InputParam(vec_it);
                                        }
                                 }
                                 
                                 dup2(defout, STDOUT_FILENO);
                        }
			
			void calcObsLike(Graphs::VertexID &it) 
                        {
                                dup2(models[0].output, STDOUT_FILENO);
                                dependencyResolver->calcObsLike(it);
                                dup2(defout, STDOUT_FILENO);
                        }

			double getObsLike(Graphs::VertexID &it) 
                        {
                                dup2(models[0].output, STDOUT_FILENO);
                                double temp = dependencyResolver->getObsLike(it);
                                dup2(defout, STDOUT_FILENO);
                                return temp;
                        }
			
			//const std::string getName() const 
                        //{
                        //        return name;
                        //}
			
			void resetAll() 
                        {
                                dependencyResolver->resetAll();
                        }
			
			int Run();
			
			friend class Scanner_Function_Base;
                        
                        ~Gambit_Scanner();
		};
		
		class Scanner_Function_Base
		{
		protected:
			std::vector<Graphs::VertexID> vertices;
			Gambit_Scanner *parent;
			
		public:
			Scanner_Function_Base(void *a, std::string purpose) : parent(static_cast<Gambit_Scanner *>(a))
			{
                                // Find subset of vertices that match requested purpose
				vertices = parent->dependencyResolver->getObsLikeOrder();
				int size = 0;
				for (std::vector<Graphs::VertexID>::iterator it = vertices.begin(), it2 = vertices.begin(); it != vertices.end(); ++it)
				{
					if (parent->dependencyResolver->getIniEntry(*it)->purpose == purpose)
					{
						*it2 = *it;
						it2++;
						size++;
					}
				}

				vertices.resize(size);
			}
			
			virtual double operator () (std::vector<double> &) = 0;
                        virtual ~Scanner_Function_Base(){}
		};
		
		class Scanner_Function : public Scanner_Function_Base
		{
		public:
			Scanner_Function (void *a, std::string purpose) : Scanner_Function_Base (a, purpose) {}
			
			virtual double operator () (std::vector<double> &in)
			{
				double ret = 0;
				parent->setParameters(in);
				//std::vector<Graphs::VertexID> OL = dependencyResolver.getObsLikeOrder();
                                std::cout << "Number of vertices to calculate: " << vertices.size() << std::endl;
				for (std::vector<Graphs::VertexID>::iterator it = vertices.begin(); it != vertices.end(); ++it)
				{
                                        std::cout << "__________calculating vertex " << *it << std::endl;
					parent->calcObsLike(*it);
                                        std::cout << "----------done " << std::endl;
					//dependencyResolver.notifyOfInvalidation(*it);
					ret += parent->getObsLike(*it);
                                        std::cout << "...collected double" << endl;
				}
				
				parent->resetAll();
				
				return ret;
			}
		};
                
                template <class T>
                struct factory_template
                {
                        static void *factory(void *a, std::string purpose){return new T(a, purpose);}
                        static void remove(void *a){delete (T *)a;}
                };
                
                class Scanner_Function_Factory
                {
                private:
                        Gambit_Scanner *parent;
                        std::map<std::string, std::pair<void *(*)(void *, std::string), void (*)(void *)>> factoryMap;
                       
                public:
                        Scanner_Function_Factory(Gambit_Scanner *parent) : parent (parent)
                        {
                                INPUT_SCANNER_FUNCTION (factoryMap, Scanner_Function);
                        }
                        
                        virtual void * operator() (std::string in, std::string purpose)
                        {
                                return (*factoryMap[in].first)(parent, purpose);
                        }
                        
                        virtual void remove(std::string in, void *a)
                        {
                                (*factoryMap[in].second)(a);
                        }
                        
                        virtual ~Scanner_Function_Factory(){}
                };
                
                class Scanner_Interface
                {
                private:
                        bool open;
                        void *plugin;
                        std::string errors;
                        std::string name;
                        std::vector<std::string> mod_names;
                        typedef void (*inputFuncType)(std::string, std::string);
                        typedef void (*initFuncType)(std::vector<std::string> &, std::vector<double> &, std::vector<double> &, std::string &, std::vector<std::string> &, void *);                              
                        typedef bool (*defFuncType)(std::string);
                        typedef void (*scanFuncType)();
                        inputFuncType inputFunc;
                        initFuncType initFunc;
                        defFuncType defFunc;
                        scanFuncType func;
                        
                public:
                        Scanner_Interface(std::string file, std::string name_in) : errors(""), open(true), name(name_in)
                        {
                                plugin = dlopen (file.c_str(), RTLD_NOW);
                                char *tempFile = tempnam(NULL, NULL);
                                system((std::string("nm ") + file + std::string(" | grep \"__scanner_module_moduleInit_\" >& ") + std::string(tempFile)).c_str());
                                std::ifstream in(tempFile);
                                std::string str;
                                while(getline(in, str))
                                {
                                        int pos = str.find("__scanner_module_moduleInit_");
                                        int posLast = str.rfind("__");
                                        mod_names.push_back(str.substr(pos + 28, posLast - pos - 28));
                                }
                                in.close();
                                
                                if (bool(plugin))
                                {
                                        if (mod_names.size() > 0)
                                        {
                                                if (!vector_elem_check(mod_names, name))
                                                {
                                                        
                                                        if (name !=  "")
                                                                std::cout << "\n\e[01;33mWARNING:\e[00m  Module \"" << name << "\" is not in file \"" << file << "\".\n\n";
                                                        else
                                                                std::cout << "\n\e[01;33mWARNING:\e[00m  Module was not specified in ini-file.\n\n";
                                                        
                                                        std::cout << "Modules in \"" << file << "\" are:\n";
                                                        for (int i = 0; i < mod_names.size(); i++)
                                                        {
                                                                std::cout << "   Module " << i << ":  " << mod_names[i] << "\n";
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
                                        
                                                inputFunc = (inputFuncType)dlsym(plugin, (std::string("__scanner_module_setValue_") + name + std::string("__")).c_str());
                                                initFunc = (initFuncType)dlsym(plugin, (std::string("__scanner_module_moduleInit_") + name + std::string("__")).c_str());
                                                defFunc = (defFuncType)dlsym(plugin, (std::string("__scanner_module_setDefault_") + name + std::string("__")).c_str());
                                        }
                                        else
                                        {
                                                std::stringstream ss;
                                                ss << "\e[00;31mERROR:\e[00m  Could not any modules in file \"" << file << "\".";
                                                errors = ss.str();
                                        }
                                }
                                else
                                {
                                        std::stringstream ss;
                                        ss << "\e[00;31mERROR:\e[00m  Cannot load " << file << ":  " << dlerror();
                                        errors = ss.str();
                                        open = false;
                                }
                        }
                        
                        void Init(std::vector<std::string> &keys, std::vector<double> &upper_limits, std::vector<double> &lower_limits, void *factory, const IniParser::IniFile *boundIniFile)
                        {
                                bool good = true;
                                std::vector<std::string> missingParams;
                                std::vector<std::string> iniKeys;
                                std::string mainName;
                                initFunc(keys, upper_limits, lower_limits, mainName, iniKeys, factory);
                                
                                //std::cout << name.c_str() << "   " << iniKeys << "   " << funcKeys << std::endl;
                                for (std::vector<std::string>::iterator it = iniKeys.begin(); it != iniKeys.end(); it++)
                                {
                                        if (boundIniFile->hasKey(name, *it)) 
                                        {
                                                std::string value = boundIniFile->getValue<std::string>(name, *it);
                                                inputFunc(value, *it);
                                        }
                                        else if (!defFunc(*it))
                                        {
                                                missingParams.push_back(*it);
                                                good = false;
                                        }
                                }
                                
                                if (good)
                                {
                                        
                                        func = (scanFuncType)dlsym (plugin, (std::string("__scanner_module_main_") + mainName + std::string("__")).c_str());
                                        
                                        if (bool(dlerror()))
                                        {
                                                std::stringstream ss;
                                                ss << "\e[00;31mERROR:\e[00m  Could not find main function in module \"" << name << "\".";
                                                errors = ss.str();
                                        }
                                }
                                else
                                {
                                        std::stringstream ss;
                                        ss << "\e[00;31mERROR:\e[00m  Missing entries needed by scanner module \"" << name << "\":  " << missingParams;
                                        errors = ss.str();
                                }
                        }
                        
                        void Run(){func();}
                        
                        const std::string printErrors() const {return errors;}
                        
                        ~Scanner_Interface(){if (open) dlclose(plugin);}
                };
	};
};

#endif
