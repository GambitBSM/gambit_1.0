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
        
}

#endif