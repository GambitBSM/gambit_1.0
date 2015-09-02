//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Base functions objects for use in GAMBIT.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Gregory Martinez
///           (gregory.david.martinez@gmail.com)
///  \date 2014 May
///
///  *********************************************
#ifndef TWALK_HPP
#define TWALK_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

#include "scanner_plugin.hpp"
#include "random_tools.hpp"
#include "mpi.h"

inline bool notUnit(const std::vector<double> &in)
{
        for (auto it = in.begin(), end = in.end(); it != end; ++it)
        {
                if(*it < 0.0 || *it > 1.0 || *it == -(*it))
                        return true;
        }
        
        return false;
}

template <typename T>
inline typename T::iterator::pointer c_ptr(T &it){return &(*it.begin());}

inline std::vector<std::vector<double>> calcCov(const std::vector<std::vector<double>> &pts)
{
        static size_t dim = pts[0].size();
        static size_t N = pts.size();

        std::vector<std::vector<double>> covar(dim, std::vector<double>(dim, 0.0));
        std::vector<double> avg(dim, 0.0);
        size_t i, j;
        
        for (auto it = pts.begin(), pt_end = pts.end(); it != pt_end; ++it)
        {
                for (i = 0; i < dim; i++)
                {
                        avg[i] += (*it)[i];
                        for (j = 0; j < dim; j++)
                        {
                                covar[i][j] += (*it)[i]*(*it)[j];
                        }
                }
        }
        
        for (i = 0; i < dim; i++)
        {
                for (j = 0; j < dim; j++)
                {
                        covar[i][j] = covar[i][j]/N - avg[i]*avg[j]/N/N;
                }
        }
        
        return covar;
}

inline std::vector<std::vector<double>> calcIndent (const std::vector<std::vector<double>> &pts)
{
        static size_t dim = pts[0].size();
        
        std::vector<std::vector<double>> covar(dim, std::vector<double>(dim, 0.0));
        std::vector<double> hi(dim, 1.0), low(dim, 0.0);
        size_t i;
        
        for (auto it = pts.begin(), end = pts.end(); it != end; ++it)
        {
                for (i = 0; i < dim; i++)
                {
                        if (hi[i] < (*it)[i])
                        {
                                hi[i] = (*it)[i];
                        }
                        
                        if (low[i] > (*it)[i])
                        {
                                low[i] = (*it)[i];
                        }
                }
        }
        
        for (i = 0; i < dim; i++)
        {
                covar[i][i] = (hi[i] - low[i])*(hi[i] - low[i])/12.0;
        }
        
        return covar;
}

void TWalk(Gambit::Scanner::scan_ptr<double(const std::vector<double>&)> LogLike, Gambit::Scanner::printer_interface &printer, const int ma, const double div, const int proj, const double din, const double alim, const double alimt, const long long rand, const double tol, const int NThreads, const bool hyper_grid, const int cut);

#endif
