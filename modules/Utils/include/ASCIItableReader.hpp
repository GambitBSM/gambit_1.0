//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Simple reader for ASCII tables
///
///  *********************************************
///
///  Authors (add name and date if you modify):
//
///  \author Christoph Weniger
///          <c.weniger@uva.nl>
///  \date Dec 2014
///
///  *********************************************

#include <iostream>
#include <cstdlib>
#include <fstream>
#include <vector>
#include <map>
#include <sstream>

#ifndef __ASCIItableReader__
#define __ASCIItableReader__

// Usage:
//    ASCIItableReader ascii(filename);
//    ascii.setmapping("mass", "BR1", "BR2");
//    std::cout << ascii["mass"][0] << std::endl;
//    std::cout << ascii["BR1"][1] << std::endl;
//    std::cout << ascii["BR2"][2] << std::endl;

namespace Gambit
{
  class ASCIItableReader
  {
    public:
      ASCIItableReader(std::string filename)
      {
        read(filename);
        ncol = data.size();
        nrow = data[0].size();
      };
      ~ASCIItableReader() {}

      int read(std::string filename);
      void setmapping(std::vector<std::string> names);

      template <typename... Args>
      void setmapping(std::string name, Args... args)
      {
        std::vector<std::string> vec;
        vec.push_back(name);
        setmapping(vec, args...);
      }
      template <typename... Args>
      void setmapping(std::vector<std::string> vec, std::string name, Args... args)
      {
        vec.push_back(name);
        setmapping(vec, args...);
      }

      const std::vector<double> & operator[] (int i) { return data[i]; };
      const std::vector<double> & operator[] (std::string name) { return data[mapping[name]]; };
      int getncol() { return ncol; }
      int getnrow() { return nrow; }

    private:
      std::vector<std::vector<double> > data;
      std::map<std::string, int> mapping;
      int ncol;
      int nrow;
  };
}

#endif // defined __ASCIItableReader__
