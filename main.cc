#include "file_gen.h"
#include "sort_api.h"
#include <map>
#include <iostream>
#include <cstdlib>
#include <sstream>
#include <ctime>

typedef std::map<int, std::string> MethodMap;

void createMethodMap(const StringList methods, MethodMap& methodMap)
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

void createRandomList(int size, Container& randomList)
{
	srand(time(NULL));

	for (int i = 0; i < size; i++)
	{
		randomList.push_back(rand());
	}
}

int main(int argc, char **argv)
{
	std::list<int> randomList;

	int listSize;
	std::cout << "Enter the size of the random list of integers" << std::endl;
	std::cin >> listSize;



	StringList sortMethods;
	getSortMethods(sortMethods);

	MethodMap methodMap;
	createMethodMap(sortMethods, methodMap);

	printMethodList(sortMethods);

	int methodNumber;
	std::cout << "Enter the number of the sort method or \"q\" to quit" << std::endl;
	std::cin >> methodNumber;

	while (methodNumber != 0)
	{
		double elapsedTime;

		Container randomList;
		createRandomList(listSize, randomList);

		callSortMethod(methodMap[methodNumber], randomList, elapsedTime);

		std::cout << "Sort method - " << methodMap[methodNumber] << std::endl;
		std::cout << "Sorted " << listSize << " integers in " << elapsedTime << "seconds." << std::endl;

		printMethodList(sortMethods);

		std::cout << "Enter the number of the sort method or \"0\" to quit" << std::endl;
		std::cin >> methodNumber;
	}

}
