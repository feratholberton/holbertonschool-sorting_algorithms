#include "sort.h"
/**
 * swap - swap two elements in an array
 * @a: pointer to the first element
 * @b: pointer to the second element
 */
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * function_aux - sort a subarray using Quick Sort
 * @array: array to sort
 * @low: start index of the subarray
 * @high: ending index of the subarray
 * @size: total size of the array
 */
void function_aux(int *array, int low, int high, size_t size)
{
	if (low < high)
	{
		int pivot = array[high];
		int i = low - 1;
		int j;

		for (j = low; j < high; j++)
		{
			if (array[j] <= pivot)
			{
				i++;
				swap(&array[i], &array[j]);
			}
		}

		swap(&array[i + 1], &array[high]);

		print_array(array, size);

		function_aux(array, low, i, size);
		function_aux(array, i + 1, high, size);
	}
}

/**
 * quick_sort - sort an array of integers in ascending order using Quick Sort
 * @array: array to sort
 * @size: size of the array
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	function_aux(array, 0, size - 1, size);
}

