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
	Container::iterator saveRightMark = rightMark;

	if (leftMark != rightMark)
	{
		while (rightMark >= leftMark)
		{
			if (*leftMark < *pivot)
			{
				leftMark++;
			}

			if (*rightMark > *pivot)
			{
				rightMark--;
			}

			if (rightMark < leftMark)
			{
				std::swap(*pivot, *rightMark);
			}

			if ((*leftMark >=*pivot) && (*rightMark < *pivot))
			{
				std::swap(*leftMark, *rightMark);
			}
		}

		qSort(list, pivot, pivot + 1, rightMark - 1);
		qSort(list, leftMark, leftMark + 1, saveRightMark);
	}
}

void quickSort(Container& list)
{
	Container::iterator pivot = list.begin();
	Container::iterator rightMark = list.end() - 1;
	Container::iterator leftMark = pivot + 1;;

	qSort(list, pivot, leftMark, rightMark);
}
