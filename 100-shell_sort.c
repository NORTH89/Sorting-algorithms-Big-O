#include "sort.h"
#include <stdio.h>

/**
 * _swap - Swaps two elements in an array
 *
 * @array: The array to be sorted
 * @i: The index of the first element
 * @j: The index of the second element
 *
 * Return: Nothing
 */
void _swap(int *array, int i, int j)
{
	int cmp;

	if (array[i] != array[j])
	{
		cmp = array[i];
		array[i] = array[j];
		array[j] = cmp;
	}
}

/**
 * shell_sort - Sort an array of integers in ascending order
 * using the Shell sort algorithm
 *
 * @array: The array to be sorted
 * @size: The number of elements in the array
 *
 * Return: Nothing
 */
void shell_sort(int *array, size_t size)
{
	size_t e = 0, a, b;

	if (size < 2)
		return;

	while (e <= size / 3)
		e = e * 3 + 1;

	while (e >= 1)
	{
		for (a = e; a < size; a++)
			for (b = a; b >= e && array[b] < array[b - e]; b -= e)
				_swap(array, b, b - e);
		e /= 3;
		print_array(array, size);
	}
}
