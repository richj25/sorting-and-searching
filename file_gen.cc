#include "file_gen.h"
#include <stdlib.h>
#include <fstream>
#include <sstream>
#include <iostream>

const int randomSeed=12345;

void createRandomFile(std::string filePath, int fileSize)
{
	std::ofstream randomFile(filePath.c_str());

	srand(randomSeed);

	for (int i = 0; i < fileSize; i++)
	{
		std::stringstream ss;
		ss << rand();
		randomFile << ss.str() << std::endl;
	}

	randomFile.close();
}

void readFile(std::string filePath, std::list<int>& list)
{
	std::ifstream inFile;
	std::string line;

	inFile.open(filePath.c_str());

	if (inFile.is_open())
	{
		while(getline(inFile, line))
		{
			int value;
			std::istringstream(line) >> value;
			list.push_back(value);
		}
	}
	else
	{
		std::cout << "Unable to open file" << std::endl;
	}
}
