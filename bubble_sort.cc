#include "sort_api.h"
#include <algorithm>



void bubbleSort(Container& randomIntegers)
{
	bool swapPerformed;
	do
	{
		swapPerformed = false;
		Container::iterator iter2 = randomIntegers.begin();
		Container::iterator iter1 = iter2++;

		while (iter2 != randomIntegers.end())
		{
			if (*iter1 > *iter2)
			{
				std::swap(*iter1, *iter2);
				swapPerformed = true;
			}
			iter1++;
			iter2++;
		}
	}
	while (swapPerformed);
}
