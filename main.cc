#include "file_gen.h"
#include "sort.h"
#include <iostream>

int main(int argc, char **argv)
{
	std::list<int> randomList;

	if (argc == 2)
	{
		readFile(argv[1], randomList);

		std::list<int>::iterator iter = randomList.begin();

		bubbleSort(randomList);

		for (; iter != randomList.end(); iter++)
		{
			std::cout << *iter << std::endl;
		}
	}
	else
	{
		std::cout << "Usage: sorter <file path" << std::endl;
	}
}
