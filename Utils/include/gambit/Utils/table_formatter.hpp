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

/**********************************************************************************
 * The table formatter class will formatt a table for you to fit the              *
 * screen as best as it can.  Here is an example of its use:                      *
 *                                                                                *
 * This will declare a 3 column table with each column title being                *
 * "file", "locate", "status":                                                    *
 *                                                                                *
 *   table formatter table("file", "locate", "status");                           *
 *                                                                                *
 * Just in case something bad happens, the formatter will make                    *
 * the column widths equal to its default values which you can set by:            *
 *                                                                                *
 *   table.default_widths(10, 20, 5);                                             *
 *                                                                                *
 * And if you want to capitalize the titles, do                                   *
 *                                                                                *
 *   table.capitalize_title();                                                    *
 *                                                                                *
 * Also, you may want to add a padding space between the columns like this:       *
 *                                                                                *
 *   table.padding(1);                                                            *
 *                                                                                *
 * To fill the table you just do:                                                 *
 *                                                                                *
 *   table << "cookie" << "/cookie" << "OK";                                      *
 *   table << "cookie2" << "/cookie2" << "NOT OK";                                *
 *                                                                                *
 * If you want to change the "OK" to green, you can either do:                    *
 *                                                                                *
 *   table.green(0, 2); // (row, column)                                          *
 *                                                                                *
 * or you can do:                                                                 *
 *                                                                                *
 *   table << "cookie" << "/cookie";                                              *
 *   table.green() << "OK";                                                       *
 *                                                                                *
 * The same goes or red(), yellow(), bold(), underline() or reset()               *
 * to reset the values.                                                           *
 *                                                                                *
 * if you want to change the column justification, do                             *
 *                                                                                *
 *   table.center_justify(2); // no value will default to the current column      *
 *                                                                                *
 * same is true for left_justify (the default) and right_justify.  And if you     *
 * don't want the extra newline after a row:                                      *
 *                                                                                *
 * table.no_newline(2); // again defaults to current row                          *
 *                                                                                *
 * This can be undone with table.newline(2).                                      *
 *                                                                                *
 * To access a specific element, do:                                              *
 *                                                                                *
 *   table[1][1] = "/cookie/2";                                                   *
 *                                                                                *
 * And the current row/column to be entered are given by the member functions     *
 * row_pos() and col_pos().  Also, new_row(int N = 1) adds N rows.                *
 *                                                                                *
 * Now, if you want to allow lines to be wrapped within each column, set a        *
 * minimum length for each column to be wrapped:                                  *
 *                                                                                *
 *   table.min_widths(5, 5, 2);                                                   *
 *                                                                                *
 * and each column will be wrapped down to this minimum width.  You can undo      *
 * this by either setting the min_widths to be -1 or by                           *
 *                                                                                *
 *   table.wrap_around(false);                                                    *
 *                                                                                *
 * After you're finished, you can output the formatted string with:               *
 *                                                                                *
 *   std::string output = table.str();                                            *
 *                                                                                *
 **********************************************************************************/

#ifndef __TABLE_FORMATTER__
#define __TABLE_FORMATTER__

#include <cstdlib>
#include <sstream>
#include <iomanip>
#include <map>
#include <utility>
#include "gambit/Utils/variadic_functions.hpp"

namespace Gambit
{

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
    
    class table_formatter
    {
    private:
        const int col_num;
        int col;
        int row;
        int pad;
        bool wrap;
        std::vector<int> defaultWidths;
        std::vector<int> minWidths;
        std::vector<std::vector<std::string>> data;
        std::vector<std::string> titles;
        std::map<std::pair<int, int>, unsigned char> flags;
        std::vector<unsigned char> row_flags;
        std::vector<unsigned char> col_flags;
        
        inline void enter_titles(){}
        template<typename... T>
        void enter_titles (const std::string &str, const T&... params)
        {
            titles.push_back(str);
            enter_titles(params...);
        }
        
        void wrap_lines (const std::vector<int> &widths);

    public:
        static const unsigned char RESET = 0x00;
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
        table_formatter(const T& ...params) : col_num(sizeof...(T)), col(0), row(0), pad(0), wrap(false), defaultWidths(col_num, 25), minWidths(col_num, -1), row_flags(1, 0x00), col_flags(sizeof...(T), 0x00)
        {
            enter_titles(params...);
        }
        
        template<typename... T>
        void default_widths(const T&... in)
        {
            if (sizeof...(T) == col_num)
            {
                defaultWidths = initVector(in...);
            }
        }
        
        template<typename... T>
        void min_widths(const T&... in)
        {
            if (sizeof...(T) == col_num)
            {
                wrap = true;
                minWidths = initVector(in...);
            }
        }
        
        inline void padding(int p) {pad = p;}
        inline void wrap_around(bool b) {wrap = b;}
        
        inline void capitalize_title()
        {
            for (auto it = titles.begin(), end = titles.end(); it != end; ++it)
            {
                for(auto s_it = it->begin(), s_end = it->end(); s_it != s_end; ++s_it)
                {
                    *s_it = std::toupper(*s_it);
                }
            }
        }
        
        inline int rows() const {return data.size();}
        inline int cols() const {return col_num;}
        inline int row_pos() const {return row;}
        inline int col_pos() const {return col;}
        
        inline table_formatter &new_row(int n = 1)
        {
            for (int i = 0; i < n; i++)
            {
                data.push_back(std::vector<std::string>(col_num));
                row_flags.push_back(0x00);
            }
            
            col = 0;
            row += n;
            
            return *this;
        }
        
        template<typename T>
        inline table_formatter &operator << (const T &in)
        {
            std::stringstream ss;
            ss << in;
            if (col == 0)
            {
                data.push_back(std::vector<std::string>(col_num));
                row_flags.push_back(0x00);
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
        
        inline table_formatter& reset_pt_flag(const unsigned char flag, int i, int j)
        {
            std::pair<int, int> key(i, j);
            flags[key] = flag;
            
            return *this;
        }
        
        inline table_formatter& reset_row_flag(const unsigned char flag, int i)
        {
            if (i < (int)row_flags.size())
                row_flags[i] = flag;
            
            return *this;
        }
        
        inline table_formatter& reset_col_flag(const unsigned char flag, int i)
        {
            if (i < (int)col_flags.size())
                col_flags[i] = flag;
            
            return *this;
        }
        
        
        inline table_formatter& set_pt_flag(const unsigned char flag, int i, int j)
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
        
        inline table_formatter& set_row_flag(const unsigned char flag, int i)
        {
            if (i < (int)row_flags.size())
                row_flags[i] |= flag;
            
            return *this;
        }
        
        inline table_formatter& set_col_flag(const unsigned char flag, int i)
        {
            if (i < (int)col_flags.size())
            {
                if (bool(col_flags[i] & JUST) && bool(flag & JUST))
                {
                    col_flags[i] &= ~JUST;
                }
                
                col_flags[i] |= flag;
            }
            
            return *this;
        }
        
        inline table_formatter& reset(int i=-1, int j=-1)
        {
            return reset_pt_flag(RESET, (i == -1 ? row : i) , (j == -1 ? col : j));
        }
        
        inline table_formatter& red(int i=-1, int j=-1)
        {
            return set_pt_flag(RED, (i == -1 ? row : i) , (j == -1 ? col : j));
        }
        
        inline table_formatter& green(int i=-1, int j=-1)
        {
            return set_pt_flag(GREEN, (i == -1 ? row : i) , (j == -1 ? col : j));
        }
        
        inline table_formatter& yellow(int i=-1, int j=-1)
        {
            return set_pt_flag(YELLOW, (i == -1 ? row : i) , (j == -1 ? col : j));
        }
        
        inline table_formatter& bold(int i=-1, int j=-1)
        {
            return set_pt_flag(BOLD, (i == -1 ? row : i) , (j == -1 ? col : j));
        }
        
        inline table_formatter& underline(int i=-1, int j=-1)
        {
            return set_pt_flag(UNDERLINE, (i == -1 ? row : i) , (j == -1 ? col : j));
        }
        
        inline table_formatter& right_justify(int j=-1)
        {
            return set_col_flag(JUST_RIGHT, (j == -1 ? col : j));
        }
        
        inline table_formatter& center_justify(int j=-1)
        {
            return set_col_flag(JUST_CENTER, (j == -1 ? col : j));
        }
        
        inline table_formatter& left_justify(int j=-1)
        {
            return reset_col_flag(RESET, (j == -1 ? col : j));
        }
        
        inline table_formatter& no_newline(int j=-1)
        {
            return set_row_flag(WRAP, (j == -1 ? row : j));
        }
        
        inline table_formatter& newline(int j=-1)
        {
            return reset_row_flag(RESET, (j == -1 ? row : j));
        }
        
        inline std::vector<std::string> &operator[](int i)
        {
            return data[i];
        }
        
        std::string str();
    };
        
}

#endif