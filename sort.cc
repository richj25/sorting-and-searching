#include "sort_api.h"
#include "sort.h"
#include <iostream>
#include <ctime>

const std::string BUBBLESORT = "Bubble Sort";
const std::string QUICKSORT = "Quicksort";
const std::string SELECTIONSORT = "Selection Sort";

void getSortMethods(StringList& sortMethods)
{
	sortMethods.push_back(BUBBLESORT);
	sortMethods.push_back(QUICKSORT);
	sortMethods.push_back(SELECTIONSORT);
}

void callSortMethod(const std::string method, Container& list, double& elapsedTime)
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
		clock_t begin = clock();

		quickSort(list);

		clock_t end = clock();
		elapsedTime = double(end - begin) / CLOCKS_PER_SEC;
	}
	else if (method == SELECTIONSORT)
	{
		clock_t begin = clock();

		selectionSort(list);

		clock_t end = clock();
		elapsedTime = double(end - begin) / CLOCKS_PER_SEC;
	}
}
