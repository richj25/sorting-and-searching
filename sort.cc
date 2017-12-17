#include "sort_api.h"
#include <iostream>

void getSortMethods(MethodMap& sortMethods)
{
	sortMethods[BUBBLESORT] = "Bubble Sort";
	sortMethods[QUICKSORT] = "Quicksort";
}

void callSortMethod(int method, std::list<int> list)
{
	switch (method)
	{
		case BUBBLESORT: bubbleSort(list);
						 break;

		case QUICKSORT: quickSort(list);
						 break;

		default: std::cout << "This is not a recognized method." << std::endl;
	}
}
