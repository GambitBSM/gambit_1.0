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

namespace Gambit
{
    
    namespace Scanner
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
        /****** adds spaces to fit to screen ********/
        /********************************************/
        
        inline void add_screen_spaces(std::string &str, std::string::size_type size, std::string::size_type indent)
        {
            std::stringstream ss(str.substr(indent));
            std::string word;
            std::string::size_type words =0;
            
            while (ss >> word){words++;}
            words--;
            
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
                    
                    line = line.substr(0, line.find_last_not_of(" ")+1);
                    if (!(line.length() > 0 && line[0] == '#'))
                    {
                        std::string::size_type indent = line.find_first_not_of(" ");
                        std::string::size_type colon_indent = line.find_first_of(":");
                        std::string::size_type cols_corr = line.find_first_of("\x1b");
                        
                        if (colon_indent != std::string::npos)
                        {
                            colon_indent = line.find_first_not_of(" ", colon_indent +1);
                            if (2*colon_indent < cols_pos)
                                indent = colon_indent;
                        }
                        
                        for (;;)
                        {
                            if ((cols_corr == std::string::npos) && (line.length() > cols_pos))
                            {
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
                                
                                if (end_pos > 0)
                                {
                                    std::string sub_line = line.substr(0, end_pos+1);
                                    line = std::string(indent, ' ') + line.substr(line.find_first_not_of(" ", end_pos+1));
                                    
                                    add_screen_spaces(sub_line, cols_pos, indent);
                                    
                                    output_string += sub_line + "\n";
                                }
                                else
                                {
                                    output_string += line + "\n";
                                    break;
                                }
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
                std::system((std::string("less -R -P\"Gambit diagnostic ") + name + std::string(" line %l (press h for help or q to quit)\" ") + std::string(temp_file)).c_str());
            std::system(("rm -f " + std::string(temp_file) + " >/dev/null").c_str());
        }
        
    }
    
}

#endif