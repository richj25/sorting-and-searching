#include "sort_api.h"
#include "sort.h"
#include <iostream>
#include <ctime>

const std::string BUBBLESORT = "Bubble Sort";
const std::string QUICKSORT = "Quicksort";

void getSortMethods(StringList& sortMethods)
{
	sortMethods.push_back(BUBBLESORT);
	sortMethods.push_back(QUICKSORT);
}

void callSortMethod(const std::string method, IntegerList& list, double& elapsedTime)
{
	if (method == BUBBLESORT)
	{
		clock_t begin = clock();

		bubbleSort(list);

		clock_t end = clock();
		elapsedTime = double(end - begin) / CLOCKS_PER_SEC;
	}
	else if (method == QUICKSORT)
	{
		quickSort(list);
	}
	else
	{
		std::cout << "This is not a recognized method." << std::endl;
	}
}
