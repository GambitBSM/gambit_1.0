//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
///  \file
///
///  a bunch of test modules
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

#include <vector>
#include <string>
#include <cmath>
#include <iostream>
#include <fstream>
#include <map>
#include <sstream>
#include <gambit_plugin.hpp>
#include <typeinfo>
#include <cxxabi.h>
  
class Ran
{
    private:
      unsigned long long int u, v, w;
      
    public:
      Ran(unsigned long long int j = 0) : v(4101842887655102017LL), w(1)
      {
        u = j ^ v; int64();
        v = u; int64(); int64();
        w = v; int64(); int64();
      }
      inline unsigned long long int int64()
      {
        u = u * 2862933555777941757LL + 7046029254386353087LL;
        v ^= v >> 17; v ^= v << 31; v ^= v >> 8;
        w = 4294957665U*(w & 0xffffffff) + (w >> 32);
        unsigned long long int x = u ^ (u << 21); x ^= x >> 35; x ^= x << 4;
        return (x + v) ^ w;
      }
      inline double Doub(){return 5.42101086242752217E-20 * int64();}
      inline unsigned int int32(){return (unsigned int)int64();}
};  

SCANNER_PLUGIN (crapsample)
{
        VERSION(1.0-beta);
        
        using namespace Gambit::Scanner;
        
        /*defined main module function.  Can input and return any types or type (exp. cannot return void).*/
        int PLUGIN_MAIN (int input_int)
        {
                std::vector<std::string> &keys     = GETKEYS();
                std::string output_file            = get_inifile_value<std::string>("output_file", "default_output");
                int N                              = get_inifile_value<int>("point_number", 10);
                Function_Base *LogLike             = GETFUNCTOR("Scanner_Function", "Likelihood");

                int ma = keys.size();
                std::ofstream out(output_file.c_str());
                double ans, chisq, chisqnext;
                int mult = 1, count = 0, total = 0;
                std::vector<double> a(ma);
                std::vector<double> aNext(ma);
                Ran gDev(0);
                
                for (int i = 0; i < ma; i++)
                        a[i] = gDev.Doub();
                
                std::cout << "Metropolis Hastings Algorthm Started" << std::endl; // << "tpoints = " << "\n\taccept ratio = " << std::endl;
                
                chisq = (*LogLike)(a);
                
                do
                {
                        total++;
                        for (int i = 0; i < ma; i++)
                        {
                                aNext[i] = gDev.Doub();
                        }

                        chisqnext = (*LogLike)(aNext);

                        ans = chisqnext - chisq;
                        // if ((ans <= 0.0)||(-std::log(gDev.Doub()) >= ans))
                        if (true)
                        {
                                out << mult << "   ";
                                for (int k = 0; k < ma; k++)
                                {
                                        out << a[k] << "   ";
                                        a[k] = aNext[k];
                                }
                                out << "   " << 2.0*chisq << std::endl;
                                
                                chisq = chisqnext;
                                mult = 1;
                                count++;
                                // cout << "\033[2A\tpoints = " << count << "\n\taccept ratio = " << "               \033[15D" << (double)count/(double)total << endl;
                                std::cout << "points = " << count << "; accept ratio = " << (double)count/(double)total << std::endl;
                        }
                        else
                        {
                                mult++;
                        }
                }
                while(count < N);
                
                return 0;
        }
};

SCANNER_PLUGIN (loopsample)
{
        using namespace Gambit::Scanner;
        
        int PLUGIN_MAIN ()
        {
                std::vector<std::string> &keys     = get_input_value<std::vector<std::string>>(0);
                std::string output_file            = get_inifile_value<std::string>("output_file", "default_output");
                int N                              = get_inifile_value<int>("point_number", 10);
                Function_Base *LogLike             = (Function_Base *)(get_input_value<Function_Factory_Base>(1))("Scanner_Function", get_inifile_value<std::string>("like"));
                typedef void (*func)(double a);
                std::ofstream out(output_file.c_str());
                int ma = keys.size();
                std::vector<double> a(ma);
                Ran gDev(0);

                std::cout << "entering loop sampler.  \n\tOutputing to:  " << output_file << "\n\tnumber of points to calculate:  " << N << "\n\tFirst key is:  " << keys[0] << std::endl;
                for (int k = 0; k < N; k++)
                {
                        for (int i = 0; i < ma; i++)
                        {
                                a[i] = gDev.Doub();
                                out << a[i] << "   ";
                        }
                        out << (*LogLike)(a) << endl;
                }
                return 0;
        }
        
        extern "C" void fuck(){__scanner_module_main__();}
};

#include <test-recon.h>

SCANNER_PLUGIN (classtest)
{        
        int PLUGIN_MAIN(void)
        {
                ran_test testing(2.0);
                load.set(&testing);
                
                cout << "double = " << testing.Num(2.0) << ", " << testing.baseNum(2.0) << ", " << testing.baseNum2(2.0) << std::endl;
                getchar();
        }
};