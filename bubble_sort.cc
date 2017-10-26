#include "sort.h"

typedef std::list<int>::iterator listIter;

void swap(listIter first, listIter second)
{
	int temp(*first);
	*first = *second;
	*second = temp;
}

void bubbleSort(std::list<int>& file)
{
	bool swapPerformed;
	do
	{
		swapPerformed = false;
		listIter iter2 = file.begin();
		listIter iter1 = iter2++;

		while (iter2 != file.end())
		{
			if (*iter1 > *iter2)
			{
				swap(iter1, iter2);
				swapPerformed = true;
			}
			iter1++;
			iter2++;
		}

	}
	while (swapPerformed);
}
