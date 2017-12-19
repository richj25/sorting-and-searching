#include "file_gen.h"
#include "sort_api.h"
#include <map>
#include <iostream>

typedef std::map<int, std::string> MethodMap;

void getMethodMap(const StringList methods, MethodMap& methodMap)
{
	int count = 1;

	StringList::const_iterator iter = methods.begin();
	for (; iter != methods.end(); iter++)
	{
		methodMap[count] = *iter;
		count++;
	}
}

void printMethodList(const StringList sortMethods)
{
	int count = 1;

	StringList::const_iterator iter = sortMethods.begin();
	for (; iter != sortMethods.end(); iter++)
	{
		std::cout << count << ":  " << *iter << std::endl;
		count++;
	}
}

int main(int argc, char **argv)
{
	std::list<int> randomList;

	if (argc != 2)
	{
		std::cout << "Usage: sorter <file path>" << std::endl;
	}
	else
	{
		int listSize;

		readFile(argv[1], randomList);
		listSize = randomList.size();

		StringList sortMethods;
		getSortMethods(sortMethods);

		MethodMap methodMap;
		getMethodMap(sortMethods, methodMap);

		printMethodList(sortMethods);

		int methodNumber;
		std::cout << "Enter the number of the sort method or \"0\" to quit" << std::endl;
		std::cin >> methodNumber;

		while (methodNumber != 0)
		{
			double elapsedTime;
			StringList
			callSortMethod(methodMap[methodNumber], randomList, sortedList, elapsedTime);

			std::cout << "Sort method - " << methodMap[methodNumber] << std::endl;
			std::cout << "Sorted " << listSize << " integers in " << elapsedTime << "seconds." << std::endl;

			printMethodList(sortMethods);

			std::cout << "Enter the number of the sort method or \"0\" to quit" << std::endl;
			std::cin >> methodNumber;
		}
	}
}
