#include "sort_api.h"
#include <iostream>

void printList(const Container& list)
{
	Container::const_iterator iter = list.begin();
	for (; iter != list.end(); iter++)
	{
		std::cout << *iter << std::endl;
	}
}

void qSort(Container& list, Container::iterator pivot, Container::iterator leftMark, Container::iterator rightMark)
{
	printList(list);
	std::cout << "pivot = " << *pivot << std::endl;
	std::cout << "leftmark = " << *leftMark << std::endl;
	std::cout << "rightMark = " << *rightMark << std::endl;

	char input;
	while (rightMark >= leftMark)
	{
		while (*leftMark < *pivot)
		{
			leftMark++;
		}

		while (*rightMark > *pivot)
		{
			rightMark++;
		}

		std::cout << "swapping " << *leftMark << " with " << *rightMark << std::endl;

		std::swap(*leftMark, *rightMark);
		printList(list);
		std::cout << "pivot = " << *pivot << std::endl;
		std::cout << "leftmark = " << *leftMark << std::endl;
		std::cout << "rightMark = " << *rightMark << std::endl << std::endl;
		std::cin >> input;
	}

	std::swap(*pivot, *rightMark);
	std::cout << "pivot = " << *pivot << std::endl;
	std::cout << "leftmark = " << *leftMark << std::endl;
	std::cout << "rightMark = " << *rightMark << std::endl;

	printList(list);
}

void quickSort(Container& list)
{
	Container::iterator pivot = list.begin();
	Container::iterator rightMark = list.end() -1;
	Container::iterator leftMark = pivot + 1;;

	std::cout << "pivot = " << *pivot << std::endl;
	std::cout << "leftmark = " << *leftMark << std::endl;
	std::cout << "rightMark = " << *rightMark << std::endl;
	std::cout << "calling qsort" << std::endl;
	qSort(list, pivot, leftMark, rightMark);
}
