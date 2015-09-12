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

/*
 * To get the screen, use
 * int width = get_screen_cols();
 * This will return -1 if it can't
 * To print a string through less, do
 * print_to_screen(string, file_name);
 * Will print to 'more' if there is no 'less
 */

#ifndef __SCREEN_PRINT_UTILS__
#define __SCREEN_PRINT_UTILS__

#include <cstdlib>
#include <sstream>
#include <iomanip>
#include <map>
#include <utility>
#include "gambit/Utils/variadic_functions.hpp"

namespace Gambit
{

    /*****************************************************/
    /****** convert string to upper case function ********/
    /*****************************************************/
    
    inline std::string stringToUpper(const std::string &s)
    {
            std::string ret;
            ret.resize(s.size());
            
            for(unsigned int l = 0; l < s.length(); l++)
            {
                    ret[l] = std::toupper(s[l]);
            }
            
            return ret;
    }
    
    /*******************************************/
    /****** get the width of the screen ********/
    /*******************************************/
    
    inline int get_screen_cols()
    {
        int ret = -1;
        if (FILE* f = popen("tput cols", "r"))
        {
            char buffer[1024];
            int n;
            
            while ((n = fread(buffer, 1, sizeof buffer, f)) > 0)
            {
                std::stringstream ss(std::string(buffer, n));
                if (! (ss >> ret))
                {
                    ret = -1;
                }
            }
            
            pclose(f);
        }
        
        return ret;
    }
    
    /********************************************/
    /****** separates line to fix length ********/
    /********************************************/
    
    inline std::string separate_line(std::string &line, std::string::size_type indent, std::string::size_type cols_pos)
    {
        std::string sub_line;
        std::string::size_type end_pos = 0;
        std::string::size_type end_pos_b = line.find_last_of(" ", cols_pos);
        if (end_pos_b != std::string::npos)
            end_pos_b = line.find_last_not_of(" ", end_pos_b);
        std::string::size_type end_pos_a = line.find_last_of("!.?;:,$#", cols_pos-1);
        std::string::size_type end_pos_ab = line.find_last_of("/-+=()[]{}*@&^%\\", cols_pos);
        if (end_pos_ab == cols_pos) end_pos_ab--;
        
        if (end_pos_b != std::string::npos && end_pos_b > end_pos)
        {
            end_pos = end_pos_b;
        }
        if (end_pos_ab != std::string::npos && end_pos_ab > end_pos)
        {
            end_pos = end_pos_ab;
        }
        if (end_pos_a != std::string::npos && end_pos_a > end_pos)
        {
            end_pos = end_pos_a;
        }
        if (end_pos == 0 || end_pos == std::string::npos)
            end_pos = cols_pos;
        else
            end_pos++;
        
        sub_line = line.substr(0, end_pos);
        line = std::string(indent, ' ') + line.substr(line.find_first_not_of(" ", end_pos));
        
        return sub_line;
    }
    
    /*************************************/
    /****** class to format lists ********/
    /*************************************/
    
    class list_formatter
    {
        const int col_num;
        int col;
        int row;
        int pad;
        bool wrap;
        std::vector<int> default_widths;
        std::vector<int> min_widths;
        std::vector<std::vector<std::string>> data;
        std::vector<std::string> titles;
        std::map<std::pair<int, int>, unsigned char> flags;
        std::map<int, unsigned char> row_flags;
        std::map<int, unsigned char> col_flags;
        
        inline void enter_titles(){}
        template<typename... T>
        void enter_titles (const std::string &str, const T&... params)
        {
            titles.push_back(str);
            enter_titles(params...);
        }
        
        void wrap_lines (const std::vector<int> &widths)
        {
            int j = 0;
            for (auto it = data.begin(), end = data.end(); it != end;)
            {
                std::vector<std::string> temp(col_num, "");
                bool wrapped = false;
                for (int i = 0; i < col_num; i++)
                {
                    if (min_widths[i] > 0)
                    {
                        int w = widths[i];
                        if (i != col_num-1)
                        {
                            w -= pad;
                        }
                        if (min_widths[i] > w)
                        {
                            w = min_widths[i];
                        }
                        if (w < (int)(*it)[i].length())
                        {
                            std::string sub = (*it)[i];
                            auto pos = sub.find_first_not_of(" ");
                            if (pos != std::string::npos)
                            {
                                (*it)[i] = separate_line(sub, pos, w);
                                temp[i] = sub;
                                set_row_flag(WRAP, j);
                                wrapped = true;
                            }
                            else
                            {
                                (*it)[i] = "";
                            }
                        }
                    }
                }
                ++it, ++j;
                if (wrapped)
                {
                    it = data.insert(it, temp);
                    end = data.end();
                }
            }
        }
        
    public:
        static const unsigned char RED = 0x01;
        static const unsigned char GREEN = 0x02;
        static const unsigned char YELLOW = 0x04;
        static const unsigned char COLOR = 0x07;
        static const unsigned char BOLD = 0x80;
        static const unsigned char JUST_RIGHT = 0x10;
        static const unsigned char JUST_CENTER = 0x20;
        static const unsigned char JUST = 0x30;
        static const unsigned char UNDERLINE = 0x40;
        static const unsigned char WRAP = 0x80;
        
        template <typename... T>
        list_formatter(const T& ...params) : col_num(sizeof...(T)), col(0), row(0), pad(0), wrap(false), default_widths(col_num, 25), min_widths(col_num, -1)
        {
            enter_titles(params...);
        }
        
        template<typename... T>
        void set_default_widths(const T&... in)
        {
            if (sizeof...(T) == col_num)
            {
                default_widths = initVector(in...);
            }
        }
        
        template<typename... T>
        void set_min_widths(const T&... in)
        {
            if (sizeof...(T) == col_num)
            {
                wrap = true;
                min_widths = initVector(in...);
            }
        }
        
        inline void set_padding(int p) {pad = p;}
        inline void set_wrap_around(bool b) {wrap = b;}
        
        inline void capitalize_title()
        {
            for (auto it = titles.begin(), end = titles.end(); it != end; ++it)
            {
                *it = stringToUpper(*it);
            }
        }
        
        inline int rows() const {return data.size();}
        inline int cols() const {return col_num;}
        inline int row_pos() const {return row;}
        inline int col_pos() const {return col;}
        
        list_formatter &new_row()
        {
            data.push_back(std::vector<std::string>(col_num));
            col = 0;
            row++;
            
            return *this;
        }
        
        template<typename T>
        list_formatter &operator << (const T &in)
        {
            std::stringstream ss;
            ss << in;
            if (col == 0)
            {
                data.push_back(std::vector<std::string>(col_num));
            }
            data[row][col] = ss.str();
            col++;
            if (col == col_num)
            {
                col = 0;
                row++;
            }
            
            return *this;
        }
        
        list_formatter& set_pt_flag(const unsigned char flag, int i, int j)
        {
            std::pair<int, int> key(i, j);
            if (flags.find(key) == flags.end())
            {
                flags[key] = flag;
            }
            else
            {
                if (bool(flags[key] & COLOR) && bool(flag & COLOR))
                {
                    flags[key] &= ~COLOR;
                }
                if (bool(flags[key] & JUST) && bool(flag & JUST))
                {
                    flags[key] &= ~JUST;
                }
                flags[key] |= flag;
            }
            
            return *this;
        }
        
        list_formatter& set_row_flag(const unsigned char flag, int i)
        {
            if (row_flags.find(row) == row_flags.end())
            {
                row_flags[i] = flag;
            }
            else
            {
                row_flags[i] |= flag;
            }
            
            return *this;
        }
        
        list_formatter& set_col_flag(const unsigned char flag, int i)
        {
            if (col_flags.find(i) == col_flags.end())
            {
                col_flags[i] = flag;
            }
            else
            {
                if (bool(col_flags[i] & JUST) && bool(flag & JUST))
                {
                    col_flags[i] &= ~JUST;
                }
                
                col_flags[i] |= flag;
            }
            
            return *this;
        }
        
        list_formatter& set_red(int i=-1, int j=-1)
        {
            return set_pt_flag(RED, (i == -1 ? row : i) , (j == -1 ? col : j));
        }
        
        list_formatter& set_green(int i=-1, int j=-1)
        {
            return set_pt_flag(GREEN, (i == -1 ? row : i) , (j == -1 ? col : j));
        }
        
        list_formatter& set_yellow(int i=-1, int j=-1)
        {
            return set_pt_flag(YELLOW, (i == -1 ? row : i) , (j == -1 ? col : j));
        }
        
        list_formatter& set_bold(int i=-1, int j=-1)
        {
            return set_pt_flag(BOLD, (i == -1 ? row : i) , (j == -1 ? col : j));
        }
        
        list_formatter& set_underline(int i=-1, int j=-1)
        {
            return set_pt_flag(UNDERLINE, (i == -1 ? row : i) , (j == -1 ? col : j));
        }
        
        list_formatter& set_right_justify(int j=-1)
        {
            return set_col_flag(JUST_RIGHT, (j == -1 ? col : j));
        }
        
        list_formatter& set_center_justify(int j=-1)
        {
            return set_col_flag(JUST_CENTER, (j == -1 ? col : j));
        }
        
        list_formatter& no_newline(int j=-1)
        {
            return set_row_flag(WRAP, (j == -1 ? row : j));
        }
        
        list_formatter& newline(int j=-1)
        {
            return set_row_flag(0x00, (j == -1 ? row : j));
        }
        
        std::vector<std::string> &operator[](int i)
        {
            return data[i];
        }
        
        std::string str()
        {
            int cols_screen = get_screen_cols();
            int row_num = data.size();
            std::vector<int> col_sizes;
            std::stringstream out;
            bool overflow = false;
            
            if (cols_screen > 0)
            {
                col_sizes = std::vector<int>(col_num, (cols_screen)/col_num);
                col_sizes[col_num-1] += (cols_screen-pad)%col_num;
            }
            else
            {
                col_sizes = default_widths;
            }
            
            if (wrap) 
                wrap_lines (col_sizes);
            
            std::vector<int> max_col(col_num, 0);
            for (int i = 0; i < col_num; i++)
            {
                max_col[i] = titles[i].length();
            }
            
            for (auto it = data.begin(), end = data.end(); it != end; ++it)
            {
                for (int i = 0; i < col_num; i++)
                {
                    if ((*it)[i].length() > (unsigned int)(max_col[i]))
                        max_col[i] = (*it)[i].length();
                    
                }
            }
            
            if (pad > 0) for (int i = 0, end = col_num-1; i < end; i++)
            {
                max_col[i] += pad;
            }
            
            for (int i = 0, end = col_num-1; i < end; i++)
            {
                if (col_sizes[i] < max_col[i])
                {
                    col_sizes[i+1] -= (max_col[i] - col_sizes[i]);
                    col_sizes[i] = max_col[i];
                }
            }
            
            if (col_num > 1)
            {
                if (col_sizes[col_num-1] < max_col[col_num-1])
                {
                    int diff = max_col[col_num-1] - col_sizes[col_num-1];
                    bool changed = true;
                    while (diff > 0 && changed)
                    {
                        changed = false;
                        for (int i = 0, end = col_num-1; i < end; i++)
                        {
                            if (col_sizes[i] > max_col[i] && diff > 0)
                            {
                                col_sizes[end]++;
                                col_sizes[i]--;
                                diff--;
                                changed = true;
                            }
                        }
                    }
                    
                    if (diff > 0)
                    {
                        col_sizes[col_num-1] = max_col[col_num-1];
                        overflow = true;
                    }
                }
            }

            std::vector<std::ios_base::fmtflags> ff(col_num);
            for (int i = 0; i < col_num; i++)
            {
                if (col_flags.find(i) != col_flags.end())
                {
                    if (col_flags[i] & JUST_RIGHT)
                    {
                        ff[i] = std::ios::right;
                    }
                    else if (col_flags[i] & JUST_CENTER)
                    {
                        ff[i] = std::ios::internal;
                    }
                    else
                    {
                        ff[i] = std::ios::left;
                    }
                }
                else
                {
                    ff[i] = std::ios::left;
                }
            }
            
            if (overflow && cols_screen > 0)
                out << "\x1b[33;01m" << std::setw(cols_screen) << "=== more here ==>" << "\x1b[0m" << std::endl;
            
            out << "\n\x1b[01m\x1b[04m";
            for (int i = 0; i < col_num; i++)
            {
                out << std::setiosflags(ff[i]);
                out << std::setw(col_sizes[i]) << titles[i];
                out << std::resetiosflags(ff[i]);
            }
            out << "\x1b[0m\n" << std::endl;
            
            for (int i = 0; i < row_num; i++)
            {
                out << "\x1b[0m";
                for (int j = 0; j < col_num; j++)
                {
                    std::pair<int, int> key(i, j);
                    if (flags.find(key) == flags.end())
                    {
                        out << std::setiosflags(ff[j]);
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
                        out << std::setw(col_sizes[j]) << data[i][j] << "\x1b[0m";
                        out << std::resetiosflags(ff[j]);
                    }
                }
                
                if (row_flags.find(i) != row_flags.end() && bool(row_flags[i] & WRAP))
                    out << std::endl;
                else
                    out << "\n" << std::endl;
            }
            
            out << std::flush;
            
            return out.str();
        }
    };
    
    /********************************************/
    /****** adds spaces to fit to screen ********/
    /********************************************/
    
    inline void add_screen_spaces(std::string &str, std::string::size_type size, std::string::size_type indent)
    {
        std::stringstream ss(str.substr(indent));
        std::string word;
        std::string::size_type words =0;
        
        while (ss >> word){words++;}
        words--;
        if (words <= 0)
            return;
        std::string::size_type to_add = (size - str.length())/(words);
        std::string::size_type extras = (size - str.length())%(words);
        std::string::size_type extras_even = words/2;
        std::string::size_type extras_odd = words - extras_even;
        if (extras > extras_odd)
        {
            extras_even = extras - extras_odd;
        }
        else
        {
            extras_odd = extras;
            extras_even = 0;
        }
        
        std::string::size_type pos = str.find_first_not_of(" ", indent);
        pos = str.find_first_of(" ", pos);
        int i = 0;
        while (pos != std::string::npos)
        {
            i++;
            if (i%2 == 0 && extras_even > 0)
            {
                str.insert(pos, to_add + 1, ' ');
                extras_even--;
            }
            else if (i%2 == 1 && extras_odd > 0)
            {
                str.insert(pos, to_add + 1, ' ');
                extras_odd--;
            }
            else if (to_add > 0)
            {
                str.insert(pos, to_add, ' ');
            }
            
            pos = str.find_first_not_of(" ", pos);
            pos = str.find_first_of(" ", pos);
        }
    }
    
    inline std::string format_for_screen(const std::string &input_string)
    {
        int cols = get_screen_cols();
        std::string output_string, str;
        std::stringstream ss(input_string);
        
        if (cols > 0)
        {
            std::string::size_type cols_pos = cols;
            while (std::getline(ss, str))
            {
                bool add_n = false;
                std::string line = str;
                
                if (str.length() >= 16 && str.substr(0, 16) == "#remove_newlines")
                {
                    bool ck_space = false;
                    line = "";
                    
                    while(std::getline(ss, str))
                    {
                        if (str.length() >= 21 && str.substr(0, 21) == "#dont_remove_newlines")
                        {
                            break;
                        }
                        else if (str.find_first_not_of(" ") == std::string::npos) 
                        {
                            add_n = true;
                            break;
                        }
                        else if (!(str.length() > 0 && str[0] == '#'))
                        {
                            if (ck_space)
                            {
                                if (str[0] != ' ')
                                    line += " ";
                                
                                ck_space = false;
                            }
                            
                            if (str[str.length()-1] != ' ')
                                ck_space = true;
                            
                            line += str;
                        }
                    }
                }
                
                std::string::size_type len = line.find_last_not_of(" ");
                if (len == std::string::npos || line.length() == 0)
                {
                    output_string += "\n";
                }
                else if (!(line.length() > 0 && line[0] == '#'))
                {
                    line = line.substr(0, len+1);
                    
                    std::string::size_type cols_corr = line.find_first_of("\x1b");
                    std::string::size_type indent = line.find_first_not_of(" ");
                    std::string::size_type colon_indent = line.find_first_of(":");
                    
                    if (colon_indent != std::string::npos && 2*colon_indent < cols_pos)
                    {
                        indent = line.find_first_not_of(" ", colon_indent +1);
                    }
                            
                    for (;;)
                    {
                        if ((cols_corr == std::string::npos) && (line.length() > cols_pos))
                        {
                            std::string temp = separate_line(line, indent, cols_pos);
                            add_screen_spaces(temp, cols_pos, indent);
                            output_string += temp + "\n";
                        }
                        else
                        {
                            output_string += line + "\n";
                            break;
                        }
                    }
                    
                    if (add_n)
                        output_string += "\n";
                }
            }
        }
        else
        {
            while(std::getline(ss, str))
            {
                if (!(str.length() > 0 && str[0] == '#'))
                {
                    str = str.substr(0, str.find_last_not_of(" ")+1);
                    output_string += str + "\n";
                }
            }
        }
        
        return output_string;
    }
    
    /*************************************************/
    /****** pipes output through less or more ********/
    /*************************************************/
    
    inline void print_to_screen(const std::string &file_in, const std::string &name)
    {
        std::string file = format_for_screen(file_in);
        char temp_file[20] = "_gambit_temp_XXXXXX";
        mkstemp(temp_file);
        std::ofstream out(temp_file);
        out << file << std::flush;
        if (std::system("command -v less >/dev/null"))
            std::system((std::string("more -d ") + std::string(temp_file)).c_str());
        else  
            std::system((std::string("less -S -R -P\"Gambit diagnostic ") + name + std::string(" line %l (press h for help or q to quit)\" ") + std::string(temp_file)).c_str());
        std::system(("rm -f " + std::string(temp_file) + " >/dev/null").c_str());
    }
        
}

#endif