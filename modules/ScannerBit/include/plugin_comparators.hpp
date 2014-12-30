//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
///  \file
///
///  Advanced comparison utilities for scanner plugins.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
//
///  \author Gregory Martinez
///          (gregory.david.martinez@gmail.com)
///  \date 2013 August
///  \date 2014 Feb
///
///  \author Pat Scott
///          (p.scott@imperial.ac.uk)   
///  \date 2014 Dec
///
///  *********************************************

#ifndef __PLUGIN_COMPARATORS_HPP
#define __PLUGIN_COMPARATORS_HPP

#include <string>

#include "plugin_details.hpp"

namespace Gambit
{

        namespace Plugin
        {
                
                /// Base class for comparing scanner plugins
                class VersionCompareBase
                {
                private:
                        bool empty;

                public:
                        VersionCompareBase() : empty(false) {}                
                        virtual bool operator() (const Plugin_Details &) = 0;
                        bool isEmpty() const {return empty;}
                        void setEmpty(bool in) {empty = in;}
                        virtual ~VersionCompareBase() {}
                };
                
                class VersionCompareBottom : public VersionCompareBase
                {
                private:
                        const unsigned char GREATER;
                        const unsigned char EQUAL;
                        const unsigned char LESS;
                        const unsigned char NEG;
                        const unsigned char MAJOR;
                        const unsigned char MINOR;
                        const unsigned char PATCH;
                        const unsigned char RELEASE;
                        unsigned int major_version;
                        unsigned int minor_version;
                        unsigned int patch_version;
                        std::string release_version;
                        bool (*f)(int, int);
                        unsigned char flag;
                        
                        static bool gt (int a, int b) {return a > b;}
                        static bool lt (int a, int b) {return a < b;}
                        static bool gte (int a, int b) {return a >= b;}
                        static bool lte (int a, int b) {return a <= b;}
                        static bool eq (int a, int b) {return a == b;}
                        static bool neq (int a, int b) {return a != b;}
                        
                public:                        
                        VersionCompareBottom (const std::string&);
                        bool operator() (const Plugin_Details&);
                };
                
                class VersionCompare : public VersionCompareBase
                {
                private:
                        const unsigned char OR;
                        const unsigned char AND;                        
                        VersionCompareBase *compare1;
                        VersionCompareBase *compare2;
                        unsigned char flag;
                        
                public:
                        VersionCompare(const std::string&);                        
                        bool operator() (const Plugin_Details&);
                        ~VersionCompare();
                };
                
        }

}

#endif
