#ifndef LHABIT_H
#define LHABIT_H

namespace LHABit{

#include <vector> 
#include <sstream>
#include <string>
#include <fstream>
#include <algorithm>

struct LHABlock
{
	std::vector<std::string> NameLine;
	std::vector<std::vector<std::string> > DataLines; 
	LHABlock & operator= (const LHABlock & other);
};

std::vector<LHABlock> readInFile(std::string fName);


} // namespace LHABit

#endif // LHABIT_H
