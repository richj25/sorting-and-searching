#include "sort_api.h"
#include <algorithm>



void bubbleSort(IntegerList& file)
{
	bool swapPerformed;
	do
	{
		swapPerformed = false;
		IntegerList::iterator iter2 = file.begin();
		IntegerList::iterator iter1 = iter2++;

		while (iter2 != file.end())
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
