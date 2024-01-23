#include "sort.h"

/**
 * check_tree - check the tree and fix it
 * @array: array
 * @size: size
 * @i: index
 * Return: Nothing
 */
void check_tree(int *array, size_t size, size_t i)
{
	int m, branch1, branch2;
	size_t br1, br2;

	br1 = i * 2 + 1;
	br2 = br1 + 1;
	branch1 = array[br1];
	branch2 = array[br2];
	if (((br1 < size) && (br2 < size) &&
		 (branch1 >= branch2 && branch1 > array[i])) ||
		((br1 == size - 1) && branch1 > array[i]))
	{
		m = array[i];
		array[i] = branch1;
		array[br1] = m;
		print_array(array, size);
	}
	else if ((br1 < size) && (br2 < size) &&
			 (branch2 > branch1 && branch2 > array[i]))
	{
		m = array[i];
		array[i] = branch2;
		array[br2] = m;
		print_array(array, size);
	}
	if (br1 < size - 1)
		check_tree(array, size, br1);
	if (br2 < size - 1)
		check_tree(array, size, br2);
}

/**
 * heap_sort - sorts an array of integers in ascending order
 * using the Heap sort algorithm
 * @array: array
 * @size: size
 * Return: Nothing
 */
void heap_sort(int *array, size_t size)
{
	size_t a;
	int m;

	if (!array)
		return;
	for (a = 0; a < size / 2; a++)
	{
		check_tree(array, size, size / 2 - 1 - a);
	}
	for (a = 0; a < size - 1; a++)
	{
		m = array[0];
		array[0] = array[size - 1 - a];
		array[size - 1 - a] = m;
		print_array(array, size);
		check_tree(array, size - a - 1, 0);
	}
}
