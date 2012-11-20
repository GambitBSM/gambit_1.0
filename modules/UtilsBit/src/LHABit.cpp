namespace LHABit{

#include "LHABit.hh"

LHABlock::LHABlock& operator= (const LHABlock & other)
{
	if(this != &other)
	{
		NameLine = other.NameLine;
		DataLines = other.DataLines;
	}
	return *this
}

std::vector<LHABlock> readInFile(string fName)
{
	std::ifstream inFile(fname.c_str());
	if(!inFile) 
	{
		// TODO: Implement throw exception
	}
	// The vector of blocks to be returned
	std::vector<LHABlock> inBlocks;
	// Temporary variables
	LHABlock *block = new LHABlock; 
	std::string inLine;
	std::string tmpStr;
	std::vector<std::string> lineVec;
	// Loop over lines in input file
	while(std::getline(inFile,inLine))
	{
		lineVec.clear();														// Starting a new line, clear old contents
		std::stringstream lineStream(inLine);		
		while(lineStream >>	tmpStr)												// Split line into strings
		{
			if(tmpStr[0] == '#') break;											// Ignore comments
			lineVec.push_back(tmpStr);			
		}			
		if(lineVec.empty()) continue;											// Ignore the line if commented	or entriely whitespace
		tmpStr = lineVec[0];
		std::transform(tmpStr.begin(),tmpStr.end(),tmpStr.begin(),::toupper);	// Make uppercase
		if((tmpStr.compare("BLOCK")==0) || (tmpStr.compare("DECAY")==0))		// Check if new block has been found
		{			
			if(!block->NameLine.empty()) inBlocks.push_back(*block);			// Found new block, put the current one in the vector if applicable
			delete block;														// Delete old block,
			block = new LHABlock;												// start new block,
			block->NameLine = lineVec;											// and insert name line
		}
		else
			block->DataLines.push_back(lineVec);								// Add line to the current block
	}
	if(!block->NameLine.empty()) inBlocks.push_back(*block);					// Add the last block to the vector
	inFile.close();	
	delete block;
	return inBlocks;
}


} // namespace LHABit
