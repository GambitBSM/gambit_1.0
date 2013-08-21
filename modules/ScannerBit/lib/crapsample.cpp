#ifndef CRAPSAMPLE_HPP
#define CRAPSAMPLE_HPP

#include <vector>
#include <string>
#include <cmath>
#include <iostream>
#include <fstream>
#include <map>
#include <sstream>
#include <gambit_module.hpp>
  
class Ran
{
    private:
      unsigned long long int u, v, w;
      
    public:
      Ran(unsigned long long int j) : v(4101842887655102017LL), w(1)
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

//using GAMBIT::Module::entry_type

GAMBIT_MODULE (crapsample)
{
        REGISTER (point_number, int);
        REGISTER (output_file, std::string);
        REGISTER (like, GAMBIT::Scanner::Function_Base);
        REGISTER (keys, entry_type<std::vector<std::string>, 0>);
        REGISTER (ulim, entry_type<std::vector<double>, 1>);
        REGISTER (llim, entry_type<std::vector<double>, 2>);
        
        SET_DEFAULT(point_number, 5);
        SET_DEFAULT(output_file, "output_default");

        double LogLikelihood(std::vector<double> &in)
        {
                return GET_VALUE(like)(in);
        }

        LOAD_OBJECT(func, LogLikelihood, double (std::vector<double> &));
        
        int MODULE_MAIN (int a_in, int b)
        {
                std::vector<std::string> &keys     = GET_VALUE(keys);
                std::vector<double> &upper_limits  = GET_VALUE(ulim);
                std::vector<double> &lower_limits  = GET_VALUE(llim);
                std::string &output_file           = GET_VALUE(output_file);
                int &N                             = GET_VALUE(point_number);
                //GAMBIT::Scanner::Function_Base *LogLike = &GET_VALUE(like);
                double (*LogLike)(std::vector<double> &in) = LogLikelihood;
                //std::cout << GET_VALUE(point_number) << "   " << GET_VALUE(output_file) << "   " << GET_VALUE(keys)[0] << "   " << GET_VALUE(ulim)[0] << "   "  << std::endl;
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
                                aNext[i] = lower_limits[i] + (upper_limits[i] - lower_limits[i])*gDev.Doub();
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

GAMBIT_MODULE (loopsample)
{
        REGISTER (point_number, int);
        REGISTER (output_file, std::string);
        REGISTER (like, GAMBIT::Scanner::Function_Base);
        REGISTER (keys, entry_type<std::vector<std::string>, 0>);
        REGISTER (ulim, entry_type<std::vector<double>, 1>);
        REGISTER (llim, entry_type<std::vector<double>, 2>);
        
        SET_DEFAULT(point_number, 10);
        SET_DEFAULT(output_file, "default_output");
        SET_DEFAULT(like, "Likelihood");
        
        int MODULE_MAIN (void)
        {
                std::vector<std::string> &keys     = GET_VALUE(keys);
                std::vector<double> &upper_limits  = GET_VALUE(ulim);
                std::vector<double> &lower_limits  = GET_VALUE(llim);
                std::string &output_file           = GET_VALUE(output_file);
                int &N                             = GET_VALUE(point_number);
                auto *LogLike                      = &GET_VALUE(like);
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
                                a[i] = lower_limits[i] + (upper_limits[i] - lower_limits[i])*gDev.Doub();
                                out << a[i] << "   ";
                        }
                        out << (*LogLike)(a) << endl;
                }
                return 0;
        }
};

#endif
