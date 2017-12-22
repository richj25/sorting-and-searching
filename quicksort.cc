#include "sort_api.h"
#include "sort.h"

void qSort(Container& list, int left, int right)
{
	int high = right;
	int low = left;
	int tmp;
	int pivot = list[(low + high) / 2];

	while (low <= high)
	{
		while (list[low] < pivot)
		{
			low++;
		}

		while (list[high] > pivot)
		{
			high--;
		}

		if (low <= high)
		{
			tmp = list[low];
			list[low] = list[high];
			list[high] = tmp;
			low++;
			high--;
		}
	}

	if (left < high)
	{
		qSort(list, left, high);
	}

	if (low < right)
	{
		qSort(list, low, right);
	}
}

void quickSort(Container& list)
{
	int left = 0;
	int right = list.size() -1;

	qSort(list, left, right);
}
