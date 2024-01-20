#include "sort.h"

void selection_sort(int *arr, size_t length)
{
	size_t i, minIndex;
	int temp;

	for (i = 0; i < length - 1; i++)
	{

		minIndex = i;
		for (size_t j = i + 1; j < length; j++)
		{
			if (arr[j] < arr[minIndex])
				minIndex = j;
		}

		if (minIndex != i)
		{
			temp = arr[i];
			arr[i] = arr[minIndex];
			arr[minIndex] = temp;

			print_array(arr, length);
		}
	}
}
