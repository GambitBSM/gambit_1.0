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

/*****************************************************************
 * To print a string directly through less, do                   *
 *                                                               *
 * print_to_screen(string, file_name);                           *
 *                                                               *
 * NOTE: this will automatically format the string for           *
 * output onto the screen -- including line breaks to            *
 * fit the screen and adding spaces to make it look good.        *
 *                                                               *
 * NOTE: print_to_screen will print to 'more' if                 *
 * 'less' is not detected.                                       *
 *                                                               *
 * NOTE: In the text, all lines that begin with "#" will         *
 * be ignored.  You can use "#remove_newlines" to                *
 * ignore newlines and #dont_remove_newlines to                  *
 * return to default mode.  See "config/scanner_plugins.dat"     *
 *                                                               *
 * NOTE: Table formatted with table_formatter will not be        *
 * reformatted                                                   *
 *                                                               *
 * If you want to formatt a string for output to the             *
 * screen but don't want to actually output it, do               *
 *                                                               *
 * std::string formatted_str = format_for_screen(string);        *
 *                                                               *
 * NOTE: You do not have to do this if you use                   *
 * print_to_screen().                                            *
 *                                                               *
 *****************************************************************/

#ifndef __SCREEN_PRINT_UTILS__
#define __SCREEN_PRINT_UTILS__

#include <string>

namespace Gambit
{
    /*********************************************/
    /****** formats output for the screen ********/
    /*********************************************/

    std::string format_for_screen(const std::string &input_string);
    
    /*************************************************/
    /****** pipes output through less or more ********/
    /*************************************************/
    
    void print_to_screen(const std::string &file_in, const std::string &name);
    
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
        
}

#endif