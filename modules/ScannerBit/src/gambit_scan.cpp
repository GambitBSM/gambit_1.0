//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
///  \file
///
///  Scanner factory method implementations.
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
///  \date 2013 July/August 2013/Feb 2014
///
///  \author Pat Scott
///          (patscott@physics.mcgill.ca)
///  \date 2013 Aug
///
///  *********************************************

#include <gambit_scan.hpp>
#include <plugin_interface.hpp>

namespace Gambit
{
        namespace Scanner
        {
                Gambit_Scanner::Gambit_Scanner (Scanner_Function_Factory &factory, const IniParser::IniFile &iniFile) 
                                : factory(&factory), boundIniFile(&iniFile), flag(0x00)
                {       
                        bool redirect = false;
                        if (iniFile.hasKey("enable_redirect"))
                        {
                                redirect = iniFile.getValue<bool>("enable_redirect");
                        }

                        if (redirect)
                        {
                                if (iniFile.hasKey("redirect_output", "scanner"))
                                {
                                        std::string file = iniFile.getValue<std::string>("redirect_output", "scanner");
                                        
                                        outputHandler::out.set("scanner", file);
                                }
                        }
                }
                
                int Gambit_Scanner::Run()
                {
                        if (boundIniFile->hasKey("scanner", "file_path"))
                        {
                                std::string file = boundIniFile->getValue<std::string>("scanner", "file_path");
                                std::string name, errors, version;
                                if (boundIniFile->hasKey("scanner", "module")) 
                                {
                                        name = boundIniFile->getValue<std::string>("scanner", "module");
                                        
                                        if (boundIniFile->hasKey("scanner", "version"))
                                        {
                                                std::string version = boundIniFile->getValue<std::string>("scanner", "version");
                                        }
                                        else
                                        {
                                                version = "";
                                        }
                                }
                                else
                                {
                                        name = "";
                                }
                                
                                std::vector<void *> input(2);
                                input[0] = (void *)(&factory->getKeys());
                                input[1] = (void *)factory;
                                
                                Plugin::Plugin_Interface<int ()> interface(file, name, version, boundIniFile, &input);
                                scanLog::err.print();

                                outputHandler::out.redir("scanner");
                                interface.main();
                                outputHandler::out.defout();
                                
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
                                  
                                  //std::cout << "real value = " << ptr->Num() << "   " << ptr->Num() << std::endl;
                                  
                                  //or this get the interger ...
                                
                                  //int *ptrt = (int *)interface.getMember("temp");
                                  
                                  //and output stuff
                                
                                  //std::cout << "temp = " << some_value2 << "   " << (*ptrt) << "   " << some_value << std::endl;
                                 
                        }
                        else
                        {
                                //std::stringstream ss;
                                scanLog::err << "Did not specify module library path." << scanLog::endl;
                                scanLog::err.print();
                        }
                        
                        return 0;
                }
                
                Gambit_Scanner::~Gambit_Scanner(){}
        };
};
