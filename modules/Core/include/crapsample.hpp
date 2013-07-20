#ifndef CRAPSAMPLE_HPP
#define CRAPSAMPLE_HPP

#include <master_like.hpp>
#include <vector>
#include <string>
#include <cmath>
#include <iostream>
#include <fstream>
#include <yaml_parser.hpp>
#include <gambit_scan.hpp>

namespace GAMBIT
{
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
    
  class CrapSample : public GAMBIT::Scanner::Gambit_Scanner
  {
  private:
    int N;
    std::string output_file;
    Scanner::Scanner_Function <double, vector <double>> LogLike;
    
  public:
    CrapSample(GAMBIT::Graphs::DependencyResolver &a, std::map<std::string, GAMBIT::primary_model_functor *> &activemodelFunctorMap, IniParser::IniFile &iniFile) 
        : GAMBIT::Scanner::Gambit_Scanner(a, activemodelFunctorMap, iniFile, "crapsampler"), LogLike(this, 0)
    {
      N = iniFile.getValue<int>(getName(), "point_number");
      output_file = iniFile.getValue<std::string>(getName(), "output_file");
    }
    
    int Run()
    {
      std::ofstream out(output_file.c_str());
      double ans, chisq, chisqnext;
      int mult = 1, count = 0, total = 0, ma = upper_limits.size();
      std::vector<double> a(ma);
      std::vector<double> aNext(ma);
      Ran gDev(0);
      
      for (int i = 0; i < ma; i++)
        a[i] = gDev.Doub();
      
      chisq = LogLike(a);
      
      cout << "Metropolis Hastings Algorthm Started" << endl; // << "tpoints = " << "\n\taccept ratio = " << endl;
      
      do
      {
        total++;
        for (int i = 0; i < ma; i++)
        {
          aNext[i] = lower_limits[i] + (upper_limits[i] - lower_limits[i])*gDev.Doub();
        }

        chisqnext = LogLike(aNext);

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
          out << "   " << 2.0*chisq << endl;
          
          chisq = chisqnext;
          mult = 1;
          count++;
          // cout << "\033[2A\tpoints = " << count << "\n\taccept ratio = " << "               \033[15D" << (double)count/(double)total << endl;
          cout << "points = " << count << "; accept ratio = " << (double)count/(double)total << endl;
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
}

#endif
