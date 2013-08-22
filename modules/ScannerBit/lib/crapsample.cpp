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

class ran_export : Ran
{
public:
        ran_export() : Ran(0) {}
        virtual double Num(){return Doub();}
        virtual ~ran_export() {}
};

GAMBIT_MODULE (crapsample)
{
        /*get inputs from ini-file and inputed vector*/
        IMPORT (point_number, int);                                     //get "point_number" of type "int" from ini-file
        IMPORT (output_file, std::string);                              //get "output_file" of type "std::string" from ini-file
        IMPORT (like, GAMBIT::Scanner::Function_Base);                  //get scanner functor of purpose specified by "like:" in the ini-file
        IMPORT (keys, gt_entry<std::vector<std::string>, 0>);           //gets the first input data of type "std::vector<std::string>"
        IMPORT (ulim, gt_entry<std::vector<double>, 1>);                //gets the first input data of type "std::vector<std::string>"
        IMPORT (llim, gt_entry<std::vector<double>, 2>);                //gets the first input data of type "std::vector<std::string>"
        
        /*sets default values if not in ini-file.*/
        SET_DEFAULT(point_number, 5);                                   //set default of "point_number" to 5
        SET_DEFAULT(output_file, "output_default");                     //set default of "output_file" to "output_default"

        int output_int = 1;
        double LogLikelihood(std::vector<double> &in)
        {
                return GET_VALUE(like)(in);
        }

        /*functions and classes that can be used by Gambit*/
        EXPORT_OBJECT(func, LogLikelihood);                             //allows for "LogLikelihood" function to be used by Gambit
        EXPORT_OBJECT(temp, output_int);                                      //allows for "temp" integer to be used by Gambit
        EXPORT_ABSTRACT(random, ran_export);                            //allows for "ran_export" class to be used by Gambit
        
        /*defined main module function.  Can input and return any types or type (exp. cannot return void).*/
        int MODULE_MAIN (void)
        {
                std::vector<std::string> &keys     = GET_VALUE(keys);
                std::vector<double> &upper_limits  = GET_VALUE(ulim);
                std::vector<double> &lower_limits  = GET_VALUE(llim);
                std::string &output_file           = GET_VALUE(output_file);
                int &N                             = GET_VALUE(point_number);
                //auto *LogLike                      = &GET_VALUE(like);
                double (*LogLike)(std::vector<double> &in) = LogLikelihood;
                
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
        IMPORT (point_number, int);
        IMPORT (output_file, std::string);
        IMPORT (like, GAMBIT::Scanner::Function_Base);
        IMPORT (keys, GAMBIT::Scanner::gambitKeys);
        IMPORT (ulim, GAMBIT::Scanner::gambitUpperLimits);
        IMPORT (llim, GAMBIT::Scanner::gambitLowerLimits);
        
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
