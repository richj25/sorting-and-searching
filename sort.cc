#include "sort_api.h"
#include <iostream>

const std::string BUBBLESORT = "Bubble Sort";
const std::string QUICKSORT = "Quicksort";

void getSortMethods(StringList& sortMethods)
{
	sortMethods.push_back(BUBBLESORT);
	sortMethods.push_back(QUICKSORT);
}

void callSortMethod(const std::string method, IntegerList& list)
{
	if (method == BUBBLESORT)
	{
		bubbleSort(list);
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
