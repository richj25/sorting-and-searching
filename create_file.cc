#include <iostream>
#include "file_gen.cc"
#include <sstream>

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		std::cout << "usage: create_file <path> <number of lines>\n" << std::endl;
	}
	else
	{
		int fileSize = 0;
		std::istringstream(std::string(argv[2])) >> fileSize;
		createRandomFile(std::string(argv[1]), fileSize);
	}
}
