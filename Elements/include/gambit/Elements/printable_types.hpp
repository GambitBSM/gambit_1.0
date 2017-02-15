//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file                                       
///                                               
///  List of types which are printable by GAMBIT printers
///  NO LONGER AUTOMATICALLY GENERATED! Manually update this
///  list when you want to add a new printable type.
///                                               
///  *********************************************
///                                               
///  Authors:                                     
///                                               
///  \author Ben Farmer
///          (benjamin.farmer@fysik.su.se)
///  \date 2016 Jan
///                                               
///  *********************************************
                                                  
#ifndef __printable_types_hpp__                 
#define __printable_types_hpp__                 

#include <map>
#include "gambit/Utils/model_parameters.hpp"

typedef short int          sint;
typedef unsigned short int usint;
//typedef int                
typedef unsigned int       uint;
typedef long int           lint;
typedef unsigned long int  ulint;
typedef long long int      llint;
typedef unsigned long long int ullint;

typedef std::map<std::string,double> map_str_dbl; // can't have commas in macro input

// Complete set of distinct integer types 
#define ALL_INT_TYPES\
(sint)\
(usint)\
(int)\
(uint)\
(lint)\
(ulint)\
(llint)\
(ullint)

// Types that Gambit printers can output (if printer plugin is properly equipped)
#define PRINTABLE_TYPES  \
ALL_INT_TYPES            \
(bool)                   \
(float)(double)          \
(std::vector<bool>)      \
(std::vector<int>)       \
(std::vector<double>)    \
(Gambit::ModelParameters)\
(triplet<double>)        \
(map_str_dbl)            \

// Types that can be retrieved from Gambit printer output (if printer plugin is properly equipped)
// NEW: needs to be the same as the printable types, i.e. should be able to retrieve everything.
#define RETRIEVABLE_TYPES  \
  PRINTABLE_TYPES

#endif // defined __printable_types_hpp__
