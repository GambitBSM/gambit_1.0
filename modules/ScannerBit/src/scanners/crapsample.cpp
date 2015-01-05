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
#include <typeinfo>
#include <cxxabi.h>

#include "scanner_plugin.hpp"
//#include "scanner_utils.hpp"
  
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

scanner_plugin(crapsample, version(0, 0, 1))
{      
        void hiFunc(){std::cout << "This is crapsample " << std::endl;}
        plugin_constructor
        {
                hiFunc();
        }
        
        /*defined main module function.  Can input and return any types or type (exp. cannot return void).*/
        int plugin_main (void)
        {
                std::string output_file            = get_inifile_value<std::string>("output_file", "default_output");
                int N                              = get_inifile_value<int>("point_number", 10);
                Function_Base *LogLike             = get_functor("Scanner_Function", "Likelihood");
                int ma                             = get_dimension();
                //int na = get_inifile_value<int>("not_there");
                //std::ofstream out(output_file.c_str());
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
                                //out << mult << "   ";
                                for (int k = 0; k < ma; k++)
                                {
                                        //out << a[k] << "   ";
                                        a[k] = aNext[k];
                                }
                                //out << "   " << 2.0*chisq << std::endl;
                                
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
}
//int no_func(double);
scanner_plugin(loopsample, version(0, 0, 1, beta))
{
        plugin_constructor
        {
                //int i = no_func(0.0);
        }
        
        int plugin_main ()
        {
                //SET_SCAN_IOS(files);
                std::string output_file            = get_inifile_value<std::string>("output_file", "default_output");
                int N                              = get_inifile_value<int>("point_number", 10);
                Function_Base *LogLike             = get_functor("Scanner_Function", get_inifile_value<std::string>("like"));
                typedef void (*func)(double a);
                std::ofstream out(output_file.c_str());
                int ma = get_dimension();
                std::vector<double> a(ma);
                Ran gDev(0);

                std::cout << "entering loop sampler.  \n\tOutputing to:  " << output_file << "\n\tnumber of points to calculate:  " << N << std::endl;
                //int b = no_func(0.0);
                for (int k = 0; k < N; k++)
                {
                        for (int i = 0; i < ma; i++)
                        {
                                a[i] = gDev.Doub();
                                
                        }
                        //double aux = 2;
                        (*LogLike)(a);
                        //scan_ios << a << scan::endl;
                }
                
                //scanner_ios.setOutput(output_file.c_str());
                //for (int k = 0; k < N; k++)
                //{
                //        double weight = 1;
                        //scan_ios[k] << scan::aux("weight", weight);
                        //scanner_ios.output(k);
                //}
                //scan_ios.print();
                
                return 0;
        }
}

scanner_plugin(square_grid, version(1, 0, 0))
{
        int plugin_main()
        {
                int N = std::abs(get_inifile_value<int>("grid_pts", 2));
                if (N == 0) N = 1;
                int ma = get_dimension();
                Function_Base *LogLike = get_functor("Scanner_Function", get_inifile_value<std::string>("purpose", "Likelihood"));
                std::vector<double> vec(ma, 0.0);
                
                if (N == 1)
                {
                        for (int i = 0; i < ma; i++)
                                vec[i] = 0.5;
                        
                        (*LogLike)(vec);
                }
                else
                {
                        for (int i = 0, end = std::pow(N, ma); i < end; i++)
                        {
                                int n = i;
                                for (int j = 0; j < ma; j++)
                                {
                                        vec[j] = double(n%N)/double(N-1);
                                        n /= N;
                                }
                                
                                (*LogLike)(vec);
                        }
                }
                
                return 0;
        }
}

scanner_plugin(grid, version(1, 0, 0, beta))
{
        int plugin_main()
        {
                int ma = get_dimension();
                
                std::vector<int> N = get_inifile_value<std::vector<int>>("grid_pts");
                int NTot = 1;

                for (auto it = N.begin(), end = N.end(); it != end; it++)
                {
                        if (*it < 0)
                                *it = -*it;
                        else if (*it == 0) 
                                *it= 1;
                        NTot *= *it;
                }
                
                if (N.size() != (unsigned int)ma)
                        scan_err << "Grid Plugin:  The dimension of gambit (" << ma 
                        << ") does not match the dimension of the inputed grid_pts (" << N.size() << ")" << scan_end;
                
                Function_Base *LogLike = get_functor("Scanner_Function", get_inifile_value<std::string>("purpose", "Likelihood"));
                std::vector<double> vec(ma, 0.0);
                
                for (int i = 0, end = NTot; i < end; i++)
                {
                        int n = i;
                        for (int j = 0; j < ma; j++)
                        {
                                if (N[j] == 1)
                                        vec[j] = 0.5;
                                else
                                        vec[j] = double(n%N[j])/double(N[j]-1);
                                
                                n /= N[j];
                        }
                        
                        (*LogLike)(vec);
                }
                
                return 0;
        }
}