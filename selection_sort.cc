/*
 * selection_sort.cc
 *
 *  Created on: Dec 21, 2017
 *      Author: richj
 */

#include "sort.h"
#include "sort_api.h"

#include "utilities.cc"

void selectionSort(Container &list)
{
	Container::iterator iter1 = list.begin();
	for (; iter1 != list.end(); iter1++)
	{
	    Container::iterator lowest = iter1;
		Container::iterator iter2 = iter1 + 1;
		for (; iter2 != list.end(); iter2++)
		{
			if (*iter2 < *lowest)
			{
				lowest = iter2;
			}
			std::swap(*iter1, *lowest);
		}
		printList(list);
	}


}



