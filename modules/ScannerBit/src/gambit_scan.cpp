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
///  \date 2013 July/August 2013
///
///  \author Pat Scott
///          (patscott@physics.mcgill.ca)
///  \date 2013 Aug
///
///  *********************************************

#include <gambit_scan.hpp>
#include <module_interface.hpp>

namespace GAMBIT
{
        namespace Scanner
        { 
                bool GAMBIT_SCANNER_EXIT = true;
                int defOutExit;
                
                void gambitScannerExit(void)
                { 
                        if (GAMBIT_SCANNER_EXIT) 
                        {
                                dup2(defOutExit, STDOUT_FILENO); 
                                printf("Gambit has been terminated, please press enter to continue ... "); 
                                getchar();
                        }
                        abort();
                }
                
                Gambit_Scanner::Gambit_Scanner (const gambit_core &core, const IniParser::IniFile &iniFile, Graphs::DependencyResolver &a) 
                                : boundCore(&core), boundIniFile(&iniFile), dependencyResolver(&a), flag(0x00)
                {
                        //do you have xterm?
                        hasXTerm = (system("which xterm") == 0) ? true : false;
                        
                        //saving std output
                        defout = dup(STDOUT_FILENO);
                        
                        bool redirect = false;
                        if (iniFile.hasKey("enable_redirect"))
                        {
                                redirect = iniFile.getValue<bool>("enable_redirect");
                                if (redirect)
                                {
                                        hasXTerm = (system("which xterm") == 0) ? true : false;
                                        defOutExit = defout;
                                        atexit(gambitScannerExit);
                                }
                        }
                        
                        // Get model parameters from the inifile
                        std::vector <std::string> modelNames = iniFile.getModelNames();
                        models.resize(modelNames.size());
                        
                        //This is for saving parameters for later processing if those parameters are "same_as" another parameter
                        //format:  ((shared_model_name, shared_parameter), ((current_model_index, current_parameter_index), key_index))
                        std::vector<std::pair<std::pair<std::string, std::string>, std::pair<std::pair<int, int>, int>>> savedPtrs;
                        
                        //main loop to enter in parameter values
                        int msize = 0;
                        std::vector<Scanner::Model>::iterator mod_it = models.begin();
                        for (std::vector<std::string>::iterator it = modelNames.begin(); it != modelNames.end(); ++it)
                        {//loop over iniFile models
                                std::map<std::string, primary_model_functor *>::const_iterator act_it = boundCore->getActiveModelFunctors()->find(*it);
                                if (act_it != boundCore->getActiveModelFunctors()->end())
                                {//if model is in Gambit
                                        mod_it->name = *it;
                                        std::vector <std::string> parameterNames = iniFile.getModelParameters(*it);
                                        std::vector <std::string> paramkeys = act_it->second->getcontentsPtr()->getKeys();
                                        std::set <std::string> act_param_keys(paramkeys.begin(), paramkeys.end());
                                        
                                        mod_it->parameters.resize(parameterNames.size());
                                        lower_limits.reserve(lower_limits.size() + parameterNames.size());
                                        upper_limits.reserve(upper_limits.size() + parameterNames.size());
                                        keys.reserve(keys.size() + parameterNames.size());
                                        
                                        std::vector<Parameter *>::iterator p_it = mod_it->parameters.begin();
                                        int psize = 0;
                                        for (std::vector<std::string>::iterator it2 = parameterNames.begin(); it2 != parameterNames.end(); ++it2)
                                        {//loop over iniFile parameters
                                                
                                                if (act_param_keys.find(*it2) != act_param_keys.end())
                                                {//is parameter in Gambi?
                                                        if (iniFile.hasModelParameterEntry(*it, *it2, "same_as"))
                                                        {
                                                                std::string connectedName = iniFile.getModelParameterEntry<std::string>(*it, *it2, "same_as");
                                                                int pos = connectedName.rfind("::");
                                                                if (pos == std::string::npos)
                                                                {
                                                                        savedPtrs.push_back(std::pair<std::pair<std::string, std::string>, std::pair<std::pair<int, int>, int>>(std::pair<std::string, std::string>(connectedName, *it2),  std::pair<std::pair<int, int>, int>(std::pair<int, int>(msize, psize), keys.size())));
                                                                }
                                                                else
                                                                {
                                                                        savedPtrs.push_back(std::pair<std::pair<std::string, std::string>, std::pair<std::pair<int, int>, int>>(std::pair<std::string, std::string>(connectedName.substr(0, pos), connectedName.substr(pos+2)),  std::pair<std::pair<int, int>, int>(std::pair<int, int>(msize, psize), keys.size())));
                                                                }
                                                        }
                                                        
                                                        if (iniFile.hasModelParameterEntry(*it, *it2, "fixed_value"))
                                                        {
                                                                *(p_it++) = new FixedParameter(act_it->second, *it2, iniFile.getModelParameterEntry<double>(*it, *it2, "fixed_value"));
                                                                phantom_keys.push_back(*it + std::string("::") + *it2);
                                                        }
                                                        else   
                                                        {
                                                                *(p_it++) = new SingleParameter(act_it->second, *it2);
                                                                
                                                                if (iniFile.hasModelParameterEntry(*it, *it2, "range"))
                                                                {
                                                                        std::pair<double, double> range = iniFile.getModelParameterEntry< std::pair<double, double> >(*it, *it2, "range");
                                                                        if (range.first > range.second)
                                                                        {
                                                                                double temp = range.first;
                                                                                range.first = range.second;
                                                                                range.second = temp;
                                                                        }
                                                                        lower_limits.push_back(range.first);
                                                                        upper_limits.push_back(range.second);  
                                                                }
                                                                else
                                                                {//set to max double
                                                                        lower_limits.push_back(-DBL_MAX);
                                                                        upper_limits.push_back(DBL_MAX); 
                                                                        mod_it->flag |= noRange;
                                                                }
                                                                
                                                                keys.push_back(*it + std::string("::") + *it2);
                                                        }
                                                        
                                                        psize++;
                                                }
                                                else
                                                {
                                                        mod_it->flag |= tooManyParamters;
                                                }
                                        }
                                        
                                        //redirect output for this model?
                                        
                                        if (redirect)
                                        {
                                                if (iniFile.hasKey("redirect_output", mod_it->name))
                                                {
                                                        std::string file = iniFile.getValue<std::string>("redirect_output", mod_it->name);
                                                        
                                                        if (file == "xterm" && hasXTerm)
                                                        {
                                                                FILE *temp = LaunchLogWindow(mod_it->name);
                                                                mod_it->output = fileno(temp);
                                                        }
                                                        else
                                                        {
                                                                FILE *temp = fopen(file.c_str(), "w");
                                                                mod_it->output = fileno(temp);
                                                        }
                                                }
                                                else
                                                {
                                                        mod_it->output = defout;
                                                }
                                        }
                                        else
                                        {
                                                mod_it->output = defout;
                                        }
                                        
                                        if (psize != mod_it->parameters.size())
                                                mod_it->parameters.resize(psize);
                                        
                                        if (paramkeys.size() > mod_it->parameters.size())
                                                mod_it->flag |= missingParameter;
                                        
                                        mod_it++;
                                        msize++;
                                }
                                else
                                {
                                        flag |= tooManyModels;
                                }
                        }
                        
                        if (msize != models.size())
                                models.resize(msize);
                        
                        if (boundCore->getActiveModelFunctors()->size() > models.size())
                                flag |= missingModel;
                        
                        //if there are parameter that are the same as other parameters, this loop processes them
                        if (savedPtrs.size() > 0)
                        {//are there "same_as" parameters?
                                unsigned int oldSize = keys.size();
                                std::unordered_map<Parameter **, std::string> key_map;
                                std::unordered_map<std::string, std::unordered_map<std::string, std::vector<Parameter *>::iterator>> param_map;
                               
                                //make map (model_name, param_name) -> pointers
                                for (std::vector<Scanner::Model>::iterator mod_it = models.begin(); mod_it != models.end(); ++mod_it)
                                {//loop over models
                                        for(std::vector<Parameter *>::iterator p_it = mod_it->parameters.begin(); p_it != mod_it->parameters.end(); ++p_it)
                                        {//loop over parameters
                                                param_map[mod_it->name][(*p_it)->Name()] = p_it;
                                        }
                                }
                                
                                for (std::vector<std::pair<std::pair<std::string, std::string>, std::pair<std::pair<int, int>, int>>>::iterator it = savedPtrs.begin(); it != savedPtrs.end(); ++it)
                                {//loop over parameters in "same_as" to-do list
                                        if (param_map.find(it->first.first) != param_map.end())
                                        {
                                                if (param_map[it->first.first].find(it->first.second) != param_map[it->first.first].end())
                                                {
                                                        //this code "combines" the two parameters to be shared
                                                        Parameter **pPtr = &(*param_map[it->first.first][it->first.second]);
                                                        Parameter **paramPtr = &models[it->second.first.first].parameters[it->second.first.second];
                                                        
                                                        while(bool((*pPtr)->ID()&dummyParam))
                                                        {
                                                                pPtr = (static_cast<DummyParameter *>(*pPtr))->Ptr();
                                                        }
                                                        
                                                        if (paramPtr == pPtr) 
                                                        {
                                                                flag |= cyclicSames;
                                                        }
                                                        else
                                                        {
                                                                if (bool((*pPtr)->ID()&singleParam))
                                                                {
                                                                        MultiParameter *temp = new MultiParameter(static_cast<SingleParameter *>(*pPtr));
                                                                        delete (*pPtr);
                                                                        *pPtr = temp;
                                                                }
                                                                else if (bool((*pPtr)->ID()&fixedParam))
                                                                {
                                                                        FixedMultiParameter *temp = new FixedMultiParameter(static_cast<FixedParameter *>(*pPtr));
                                                                        delete (*pPtr);
                                                                        *pPtr = temp;
                                                                }
                                                                
                                                                if (bool((*paramPtr)->ID()&singleParam))
                                                                {
                                                                        (static_cast<MultiParameter *>(*pPtr))->InputFunctor(static_cast<SingleParameter *>(*paramPtr));
                                                                        upper_limits.erase(upper_limits.begin() + it->second.second + upper_limits.size() - oldSize);
                                                                        lower_limits.erase(lower_limits.begin() + it->second.second + lower_limits.size() - oldSize);
                                                                        phantom_keys.push_back(*(keys.begin() + it->second.second + keys.size() - oldSize));
                                                                        keys.erase(keys.begin() + it->second.second + keys.size() - oldSize);
                                                                }
                                                                else if (bool((*paramPtr)->ID()&fixedParam))
                                                                {
                                                                        (static_cast<MultiParameter *>(*pPtr))->InputFunctor(static_cast<FixedParameter *>(*paramPtr));
                                                                }
                                                                else if (bool((*paramPtr)->ID()&multiParam))
                                                                {
                                                                        (static_cast<MultiParameter *>(*pPtr))->InputFunctor(static_cast<MultiParameter *>(*paramPtr));
                                                                        upper_limits.erase(upper_limits.begin() + it->second.second + upper_limits.size() - oldSize);
                                                                        lower_limits.erase(lower_limits.begin() + it->second.second + lower_limits.size() - oldSize);
                                                                        phantom_keys.push_back(*(keys.begin() + it->second.second + keys.size() - oldSize));
                                                                        keys.erase(keys.begin() + it->second.second + keys.size() - oldSize);
                                                                }
                                                                else if (bool((*paramPtr)->ID()&fixedMultiParam))
                                                                {
                                                                        (static_cast<MultiParameter *>(*pPtr))->InputFunctor(static_cast<FixedMultiParameter *>(*paramPtr));
                                                                }
                                                                
                                                                Parameter *temp = new DummyParameter((*paramPtr)->Name(), pPtr);
                                                                delete (*paramPtr);
                                                                (*paramPtr) = temp;
                                                                
                                                                std::unordered_map<Parameter**, std::string>::iterator k_it = key_map.find(paramPtr);
                                                                if (k_it != key_map.end())
                                                                        key_map.erase(k_it);
                                                                
                                                                k_it = key_map.find(pPtr);
                                                                if (k_it == key_map.end())
                                                                        key_map[pPtr] = models[it->second.first.first].name + std::string ("::") + models[it->second.first.first].parameters[it->second.first.second]->Name() + std::string("+") + it->first.first + std::string("::") + it->first.second;
                                                                else
                                                                        k_it->second = models[it->second.first.first].name + std::string ("::") + models[it->second.first.first].parameters[it->second.first.second]->Name() + std::string("+") + k_it->second;
                                                        }
                                                }
                                                else
                                                {
                                                        models[it->second.first.first].flag |= badSames;
                                                }
                                        }
                                        else
                                        {
                                                models[it->second.first.first].flag |= badSames;
                                        }
                                }
                                
                                //update keys with new model info
                                std::unordered_map <std::string, std::string> string_map;
                                for (std::unordered_map <Parameter **, std::string>::iterator it = key_map.begin(); it != key_map.end(); ++it)
                                {
                                        int pos = it->second.rfind("+");
                                        
                                        string_map[it->second.substr((pos == 0) ? 0: pos+1)] = it->second;
                                }
                                
                                for (std::vector<std::string>::iterator it = keys.begin(); it != keys.end(); ++it)
                                {
                                        if (string_map.find(*it) != string_map.end())
                                        {
                                                *it = string_map[*it];
                                        }
                                }
                        }

                        //setup tracking for variable change
                        old_input = std::vector<double>(keys.size(), DBL_MAX);
                }
                
                //print errors and return true is there are fatal errors.
                bool Gambit_Scanner::printErrors(std::string errorsin)
                {
                        unsigned char flagTot = 0x00;
                        std::cout << "*******************************************\n";
                        std::cout << "********** Gambit Scanner Errors **********\n";
                        std::cout << "*******************************************\n\n";
                        
                        if (bool(flag&missingModel))
                        {
                                std::cout << "\e[00;31mERROR:\e[00m  missing model in ini-file that's needed by Gambit.\n";
                                std::set<std::string>s;
                                for (std::map<std::string, primary_model_functor *>::const_iterator 
                                    it  = boundCore->getActiveModelFunctors()->begin(); 
                                    it != boundCore->getActiveModelFunctors()->end();
                                    ++it)
                                {
                                        s.insert(it->first);
                                }
                                cout << "model(s) missing:  [";
                                for (std::vector<Scanner::Model>::iterator it = models.begin(); it != models.end(); ++it)
                                {
                                        if(s.find(it->name) == s.end())
                                                cout << it->name << ", ";
                                }
                                cout << "\033[2D]\n\n";
                                flagTot |= missingModel;
                        }
                        if (bool(flag&tooManyModels))
                        {
                                std::cout << "\e[01;33mWARNING:\e[00m  There are more models defined in ini-file that are not required by Gambit.\n";
                                std::set<std::string>s;
                                std::vector <std::string> modelNames = boundIniFile->getModelNames();
                                
                                for (std::vector<Scanner::Model>::iterator it = models.begin(); it != models.end(); ++it)
                                {
                                        s.insert(it->name);
                                        
                                }
                                cout << "model(s) not required:  [";
                                for (std::vector<std::string>::iterator it = modelNames.begin(); it != modelNames.end(); ++it)
                                {
                                        if(s.find(*it) == s.end())
                                                cout << *it << ", ";
                                }
                                cout << "\033[2D]\n\n";
                        }
                        if (bool(flag&cyclicSames))
                        {
                                std::cout << "\e[01;33mWARNING:\e[00m  same_as:  There are parameters that point to each other.\n\n";
                        }
                        
                        for (std::vector<Model>::iterator it = models.begin(); it != models.end(); ++it)
                        {
                                if (bool(it->flag&missingParameter))
                                {
                                        std::cout << "\e[00;31mERROR:\e[00m  Model " << it->name << " is missing parameter(s) in ini-file that's needed by Gambit.\n";
                                        std::map<str, primary_model_functor*> activeModels = *boundCore->getActiveModelFunctors();
                                        std::vector<std::string> vec;
                                        it->InputNames(vec);
                                        std::set <std::string> s(vec.begin(), vec.end());
                                        std::vector <std::string> paramkeys = activeModels[it->name]->getcontentsPtr()->getKeys();
                                        cout << "parameter(s) missing:  [";
                                        for (std::vector <std::string>::iterator it2 = paramkeys.begin(); it2 != paramkeys.end(); ++it2)
                                        {
                                                if (s.find(*it2) == s.end())
                                                        cout << *it2 << ", ";
                                        }
                                        cout << "\033[2D]\n\n";
                                        flagTot |= missingParameter;
                                }
                                if (bool(it->flag&tooManyParamters))
                                {
                                        std::cout << "\e[01;33mWARNING:\e[00m  Model " << it->name << " has parameter(s) defined in ini-file that are not required by Gambit.\n";             
                                        std::map<str, primary_model_functor*> activeModels = *boundCore->getActiveModelFunctors();
                                        std::vector <std::string> paramkeys = activeModels[it->name]->getcontentsPtr()->getKeys();
                                        std::set<std::string> s(paramkeys.begin(), paramkeys.end());
                                        std::vector <std::string> parameterNames = boundIniFile->getModelParameters(it->name);
                                        cout << "parameter(s) not required:  [";
                                        for (std::vector <std::string>::iterator it2 = parameterNames.begin(); it2 != parameterNames.end(); ++it2)
                                        {
                                                if (s.find(*it2) == s.end())
                                                        cout << *it2 << ", ";
                                        }
                                        cout << "\033[2D]\n\n";
                                }
                                if (bool(it->flag&noRange))
                                        std::cout << "\e[01;33mWARNING:\e[00m  Model " << it->name << " has parameter(s) with no defined range in ini-file\n\n";
                                if (bool(it->flag&badSames))
                                        std::cout << "\e[01;33mWARNING:\e[00m  same_as:  In model " << it->name << ", there is a least one parameter that points to an unknow parameter.\n\n";
                                if (errorsin != "no errors")
                                        std::cout << errorsin << "\n\n";
                        }
                        
                        std::cout << "*******************************************" << std::endl;

                        return bool(flagTot);
                }
                
                int Gambit_Scanner::Run()
                {
                        if (boundIniFile->hasKey("scanner", "file_path"))
                        {
                                std::string file = boundIniFile->getValue<std::string>("scanner", "file_path");
                                std::string name, errors;
                                if (boundIniFile->hasKey("scanner", "module")) 
                                {
                                        name = boundIniFile->getValue<std::string>("scanner", "module");
                                }
                                else
                                {
                                        name = "";
                                }
                                
                                Scanner_Function_Factory factory(this);
                                std::vector<void *> input = {(void *)&keys, (void *)&upper_limits, (void *)&lower_limits};
                                
                                Module::Module_Interface<int ()> interface(file, name, boundIniFile, &input, &factory);
                                errors = interface.printErrors();
                                
                                if (errors != "")
                                {
                                        printErrors(errors);
                                        return -1;
                                }

                                interface.main();
                                
                                  //could do this ...
                                  
                                  //let's use the "LogLikelihood" function from crapsample! ...
                                  //std::vector<double> some_vector;
                                  //typedef double (*funcType)(std::vector<double> &);
                                  //funcType func = (funcType) interface.getMember("func");
                                  //double some_value = func(some_vector); 
                                  
                                  //Or let's use the ran_export class from crapsample! ...
                                  
                                  //typedef class {public: virtual double Num()=0;} randomClass;
                                  //randomClass *ptr = (randomClass *)interface.getMember("random");
                                  //double some_value2 = ptr->Num();
                                  //interface.deleteMember((void *)ptr, "random"); 
                                  
                                  //int *ptrt = (int *)interface.getMember("temp");
                                  //std::cout << "temp = " << some_value2 << "   " << (*ptrt) << "   " << some_value << std::endl;
                                 
                        }
                        else
                        {
                                std::stringstream ss;
                                ss << "\e[00;31mERROR:\e[00m  Did not specify module library path." << std::endl;
                                printErrors(ss.str());
                                return -1;
                        }
                        
                        return 0;
                }
                
                Gambit_Scanner::~Gambit_Scanner(){GAMBIT_SCANNER_EXIT = false;}
        };
};
