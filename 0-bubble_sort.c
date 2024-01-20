#include "sort.h"

/**
 * bubble_sort - Sort an array of integers in ascending order
 * using the Bubble sort algorithm
 *
 * @array: The array to be sorted
 * @size: The number of elements in the array
 *
 * Return: Nothing
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	int temp;
	int sorted;

	if (array == NULL || size < 2)
		return;

	do
	{

		sorted = 1;
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				print_array(array, size);
				sorted = 0;
			}
		}
	} while (sorted == 0);
}
