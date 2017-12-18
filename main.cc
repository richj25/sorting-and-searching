#include "file_gen.h"
#include "sort_api.h"
#include <iostream>

int main(int argc, char **argv)
{
	std::list<int> randomList;

	if (argc != 2)
	{
		std::cout << "Usage: sorter <file path>" << std::endl;
	}
	else
	{
		readFile(argv[1], randomList);

		MethodMap sortMethods;
		getSortMethods(sortMethods);

		MethodMap::iterator methodIter = sortMethods.begin();
		for (; methodIter != sortMethods.end(); methodIter++)
		{
			std::cout << methodIter->first << "    " << methodIter->second << std::endl;
		}

		bubbleSort(randomList);

		std::list<int>::iterator iter = randomList.begin();
		for (; iter != randomList.end(); iter++)
		{
			std::cout << *iter << std::endl;
		}
	}
}
