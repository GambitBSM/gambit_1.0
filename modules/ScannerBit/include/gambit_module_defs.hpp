//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
///  \file
///
///  declaration for scanner module
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

#ifndef GAMBIT_MODULE_DEFS_HPP
#define GAMBIT_MODULE_DEFS_HPP

#include <vector>
#include <string>
#include <map>

using namespace std;

namespace Gambit
{
        namespace Module
        {
                struct factoryBase
                {
                        virtual void *operator()() = 0;
                        virtual void remove(void *) = 0;
                        virtual ~factoryBase(){}
                };
                
                template <typename T>
                struct funcFactory : factoryBase
                {
                        T *func;
                        funcFactory (T *in) : func(in) {}
                        void *operator()(){return *(void**)&func;}
                        void remove(void * in){};
                };
                
                template <typename T>
                struct classFactory : factoryBase
                {
                        void *operator()(){return (void*) new T;}
                        void remove(void *in){delete (T *) in;}
                };
                
                struct IniFileInterface
                {       
                        virtual bool hasKey(std::string name, std::string in) = 0;
                        virtual std::string getValue(std::string name, std::string in) = 0;                
                };
                
                /*Structure that contains all the data inputed by ScannerBit*/
                struct gambitData
                {
                        std::string name;
                        std::string version;
                        IniFileInterface *iniFile;
                        std::vector<void *> inputData;
                        std::vector <void (*)(gambitData &)> inits;
                        std::map<std::string, factoryBase *> outputFuncs;
                        
                        gambitData(std::string name) : name(name) {std::cout << "name = "<< name << std::endl;}
                        ~gambitData()
                        {
                                for (std::map<std::string, factoryBase *>::iterator it = outputFuncs.begin(); it != outputFuncs.end(); it++)
                                {
                                        delete it->second;
                                }
                        }
                };  
        };
        
        /*ScannerBit specific stuff.*/
        namespace Scanner
        {       
                /*Generic Functor*/
                class Function_Base
                {
                public:
                        typedef Function_Base type;
                        virtual double operator () (std::vector<double> &) = 0;
                };
                
                /*Factory inported by ScannerBit*/
                class Function_Factory_Base
                {
                public:
                        virtual void * operator() (std::string, std::string) = 0;
                        virtual void remove(std::string, void *) = 0;
                        virtual ~Function_Factory_Base(){}
                };
        };
};

#define GETKEYS() get_input_value<std::vector<std::string>>(0);
#define GETUPPERLIMITS() get_input_value<std::vector<double>>(1);
#define GETLOWERLIMITS() get_input_value<std::vector<double>>(2);
#define GETFUNCTOR(str1, str2) (Function_Base *)(get_input_value<Function_Factory_Base>(3))(str1, str2);

#endif