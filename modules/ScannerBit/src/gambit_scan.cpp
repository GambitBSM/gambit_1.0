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
#include <plugin/plugin_interface.hpp>

namespace Gambit
{
        namespace Scanner
        { 
                int Gambit_Scanner::Run()
                {
                        if (interface.fileName() == "")
                        {
                                scanLog::err << "Did not specify module library path." << scanLog::endl;
                        }
                        
                        std::string version = "";
                        unsigned int dim = factory.getDim();
                        auto keys = factory.getKeys();
                        std::vector<void *> input(4);
                        input[0] = (void *)(&dim);
                        input[1] = (void *)(&keys);
                        input[2] = (void *)&factory;
                        input[3] = (void *)&interface;
                        
                        Plugin::Plugin_Interface<int ()> plugin_interface(interface.fileName(), interface.pluginName(), version, &input);
                        scanLog::err.check();

                        outputHandler::out.redir("scanner");
                        try
                        {
                                plugin_interface.main();
                        }
                        catch (Plugin::PluginException exception)
                        {
                                scanLog::err << exception.Print() << scanLog::endl;
                        }
                        outputHandler::out.defout();
                        scanLog::err.check();
                        
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
                
                        return 0;
                }
                
                Gambit_Scanner::~Gambit_Scanner(){}
        };
};
