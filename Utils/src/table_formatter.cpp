//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
/// \file
///  Utility Functions for the Gambit Scanner
///
///  *********************************************
///
///  Authors
///  =======
///
///  (add name and date if you modify)
///
///  \author Gregory Martinez
///          (gregory.david.martinez@gmail.com)
///  \date 2015 Sep
///
///  *********************************************

#include <cstdlib>
#include <sstream>
#include <iomanip>
#include <map>
#include <utility>
#include "gambit/Utils/variadic_functions.hpp"
#include "gambit/Utils/table_formatter.hpp"
#include "gambit/Utils/screen_print_utils.hpp"

namespace Gambit
{
    /********************************************/
    /****** table formatter output funcs ********/
    /********************************************/
    
    inline void wrap_lines (std::vector<std::vector<std::string>> &data_in, const std::vector<int> &widths, const std::vector<int> &minWidths, double pad, std::vector<unsigned char> *row_flags = 0)
    {
        std::vector<unsigned char>::iterator f_it;
        if (row_flags)
            f_it= row_flags->begin();
        for (auto it = data_in.begin(), end = data_in.end(); it != end;)
        {
            int col_num = it->size();
            std::vector<std::string> temp(col_num, "");
            bool wrapped = false;
            for (int i = 0; i < col_num; i++)
            {
                if (minWidths.at(i) > 0)
                {
                    int w = widths[i];
                    if (i != col_num-1)
                    {
                        w -= pad;
                    }
                    if (minWidths.at(i) > w)
                    {
                        w = minWidths.at(i);
                    }
                    if (w < (int)(*it)[i].length())
                    {
                        std::string sub = (*it)[i];
                        auto pos = sub.find_first_not_of(" ");
                        if (pos != std::string::npos)
                        {
                            (*it)[i] = separate_line(sub, pos, w);
                            temp[i] = sub;
                            wrapped = true;
                        }
                        else
                        {
                            (*it)[i] = "";
                        }
                    }
                }
            }
            
            ++it;
            
            if (wrapped)
            {
                if (row_flags)
                    f_it = row_flags->insert(f_it, 0x80);
                it = data_in.insert(it, temp);
                end = data_in.end();
            }
            
            if (row_flags)
                ++f_it;
        }
    }

    std::string table_formatter::str()
    {
        int cols_screen = get_screen_cols();
        int cols_tot = 0;
        int row_num = data.size();
        int col_last = col_num - 1;
        int row_last = row_num - 1;
        std::vector<int> col_sizes;
        std::stringstream out;
        bool overflow = false;
        
        if (cols_screen > 0)
        {
            col_sizes = std::vector<int>(col_num, (cols_screen)/col_num);
            col_sizes[col_last] += cols_screen%col_num;
        }
        else
        {
            col_sizes = defaultWidths;
        }
        
        if (wrap) 
        {
            wrap_lines (data, col_sizes, minWidths, pad, &row_flags);
            wrap_lines (titles, col_sizes, minWidths, pad);
        }
        
        std::vector<int> max_col(col_num, 0);
        
        for (auto it = titles.begin(), end = titles.end(); it != end; ++it)
        {
            for (int i = 0; i < col_num; i++)
            {
                if ((unsigned int)max_col[i] < (*it)[i].length())
                    max_col[i] = (*it)[i].length();
            }
        }
            
        for (auto it = data.begin(), end = data.end(); it != end; ++it)
        {
            for (int i = 0; i < col_num; i++)
            {
                if ((*it)[i].length() > (unsigned int)(max_col[i]))
                    max_col[i] = (*it)[i].length();
                
            }
        }
        
        if (pad > 0) for (int i = 0; i < col_last; i++)
        {
            max_col[i] += pad;
        }
        
        for (int i = 0; i < col_last; i++)
        {
            if (col_sizes[i] < max_col[i])
            {
                col_sizes[i+1] -= (max_col[i] - col_sizes[i]);
                col_sizes[i] = max_col[i];
            }
        }
        
        if (col_num > 1)
        {
            if (col_sizes[col_last] < max_col[col_last])
            {
                int diff = max_col[col_last] - col_sizes[col_last];
                bool changed = true;
                while (diff > 0 && changed)
                {
                    changed = false;
                    for (int i = 0; i < col_last; i++)
                    {
                        if (col_sizes[i] > max_col[i] && diff > 0)
                        {
                            col_sizes[col_last]++;
                            col_sizes[i]--;
                            diff--;
                            changed = true;
                        }
                    }
                }
                
                if (diff > 0)
                {
                    col_sizes[col_last] = max_col[col_last];
                    overflow = true;
                }
            }
        }
        
        std::string spaces(pad, ' ');

        std::vector<std::ios_base::fmtflags> ff(col_num);
        for (int i = 0; i < col_num; i++)
        {
            if (col_flags[i] & JUST_RIGHT)
            {
                ff[i] = std::ios::right;
            }
            else if (col_flags[i] & JUST_CENTER)
            {
                ff[i] = std::ios::left;
            }
            else
            {
                ff[i] = std::ios::left;
            }
            
            cols_tot += col_sizes[i];
        }
        
        if (pad > 0) for (int i = 0; i < col_last; i++)
        {
            col_sizes[i] -= pad;
        }
        
        if (overflow && cols_screen > 0)
            out << "\x1b[33;01m" << std::setw(cols_screen) << "=== more here ==>" << "\x1b[0m" << std::endl;
        
        if(top)
        {
            out << "\x1b[01m\x1b[04m" << std::setw(cols_tot) << "" << "\x1b[0m";
        }
        out << std::endl;
        
        for (auto it = titles.begin(), end = titles.end(); it != end; ++it)
        {
            if (it == end - 1)
            {
                out << "\x1b[01m\x1b[04m";
            }
            else
            {
                out << "\x1b[01m";
            }
            int temp = 0;
            for (int i = 0; i < col_num; i++)
            {
                out << std::setiosflags(ff[i]);
                if (col_flags[i] & JUST_CENTER)
                    out << std::setw(col_sizes[i]) << std::string((col_sizes[i]-it->size())/2, ' ') + (*it)[i];
                else
                    out << std::setw(col_sizes[i]) << (*it)[i];
                out << std::resetiosflags(ff[i]);

                if (i < col_last)
                    out << spaces;
            }
            out << "\x1b[0m" << std::endl;
        }
        
        out << std::endl;
        
        for (int i = 0; i < row_num; i++)
        {
            if (bottom && i == row_last && bool(row_flags[i] & WRAP))
            {
                out << "\x1b[01m\x1b[04m";
            }
            else
            {
                out << "\x1b[0m";
            }
            
            for (int j = 0; j < col_num; j++)
            {
                std::pair<int, int> key(i, j);
                if (flags.find(key) == flags.end())
                {
                    out << std::setiosflags(ff[j]);
                    if (col_flags[j] & JUST_CENTER)
                        out << std::setw(col_sizes[j]) << std::string((col_sizes[j]-data[i][j].size())/2, ' ') + data[i][j];
                    else
                        out << std::setw(col_sizes[j]) << data[i][j];
                    out << std::resetiosflags(ff[j]);
                }
                else
                {
                    out << std::setiosflags(ff[j]);
                    if (flags[key] & RED)
                    {
                        out << "\x1b[31;01m";
                    }
                    if (flags[key] & GREEN)
                    {
                        out << "\x1b[32;01m";
                    }
                    if (flags[key] & YELLOW)
                    {
                        out << "\x1b[33;01m";
                    }
                    if (flags[key] & BOLD)
                    {
                        out << "\x1b[01m";
                    }
                    if (flags[key] & UNDERLINE)
                    {
                        out << "\x1b[04m";
                    }
                    if (col_flags[j] & JUST_CENTER)
                    {
                        out << std::setw(col_sizes[j]) << std::string((col_sizes[j]-data[i][j].size())/2, ' ') + data[i][j];
                    }
                    else
                    {
                        out << std::setw(col_sizes[j]) << data[i][j];
                    }
                    out << "\x1b[0m";
                    out << std::resetiosflags(ff[j]);
                }
                
                if (j < col_last)
                    out << spaces;
            }
            
            if (bool(row_flags[i] & WRAP))
            {
                if (bottom && i == row_last)
                {
                    out << "\x1b[0m";
                }
                out << std::endl;
            }
            else
            {
                out << "\n";
                if (bottom && i == row_last)
                {
                    out << "\x1b[01m\x1b[04m" << std::setw(cols_tot) << "" << "\x1b[0m";
                }
                out << std::endl;
            }
        }
        
        out << std::flush;
        
        return out.str();
    }
  
}