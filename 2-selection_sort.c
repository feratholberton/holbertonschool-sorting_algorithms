#include "sort.h"

/**
 * swap - to elements in an arrray
 * @a: pointer to element a
 * @b: pointer to element b
 */

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * selection_sort - sort type
 * @array: of integers
 * @size: of the array
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, min_index;

	if (size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min_index = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_index])
				min_index = j;
		}

		if (min_index != i)
		{
			swap(&array[i], &array[min_index]);
			print_array(array, size);
		}
	}
}
