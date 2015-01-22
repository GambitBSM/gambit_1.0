
#include <cstdlib>
#include "cmake_variables.hpp"
#include <string>
#include <iostream>

int main(int argc, char *argv[])
{
        bool hdrs = false;
        bool cflags = false;
        bool gnu = true;
        bool compiler_flagged = false;
        
        for (int i = 1; i < argc; i++)
        {
                std::string arg(argv[i]);
                if(arg == "--hdrs" || arg == "--headers")
                {
                        hdrs = true;
                }
                else if (arg == "--cflags")
                {
                        cflags = true;
                }
                else if (arg == "--g++" || arg == "--gnu")
                {
                        gnu = true;
                        if (compiler_flagged)
                        {
                                std::cout << "Cannot use both --g++ and --icc flags" << std::endl;
                                return 1;
                        }
                        compiler_flagged = true;
                }
                else if (arg == "--icc" || arg == "--intel")
                {
                        gnu = false;
                        if (compiler_flagged)
                        {
                                std::cout << "Cannot use both --g++ and --icc flags" << std::endl;
                                return 1;
                        }
                        compiler_flagged = true;
                }
                else if (arg == "--help" || arg == "-h")
                {
                        std::cout << "\nUsage:  scanlibs [options]\n\n"
                        << "options:\n"
                        << "    --hdrs, --headers    prints header flags\n"
                        << "    --cflags             prints compiler flags\n"
                        << "    --g++, --gnu         specifies the g++ compiler (default)\n"
                        << "    --icc, --intel       specifies the icc compiler\n"
                        << "    --help, -h           help\n" << std::endl;
                        
                        return 0;
                }
                else
                {
                        std::cerr << "\nFlag \"" << arg << "\" is not defined.\n\n"
                        << "options:\n"
                        << "    --hdrs, --headers    prints header flags\n"
                        << "    --cflags             prints compiler flags\n"
                        << "    --g++, --gnu         specifies the g++ compiler (default)\n"
                        << "    --icc, --intel       specifies the icc compiler\n"
                        << "    --help, -h           help\n" << std::endl;
                        
                        return 1;
                }
        }
        
        std::string str = " ";
        if (hdrs)
        {
                str += "-I" GAMBIT_DIR " "; 
                str += "-I" GAMBIT_DIR "/Utils/include ";
                str += "-I" GAMBIT_DIR "/ScannerBit/include ";
                str += "-I" GAMBIT_DIR "/Logs/include ";
                str += "-I" GAMBIT_DIR "/contrib/yaml-cpp-0.5.1/include ";
        }
        
        if (cflags)
        {
                if (gnu)
                        str += "--std=c++11 -shared -fPIC ";
                else
                        str += "-std=c++11 -shared -fPIC ";
        }
        
        std::cout << str << std::flush;
}