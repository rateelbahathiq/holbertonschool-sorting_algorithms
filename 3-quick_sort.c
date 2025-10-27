#include "sort.h"

/**
 * swap_ints - Swap two integers in an array
 * @a: The first integer
 * @b: The second integer
 */
void swap_ints(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * lomuto_partition - Lomuto partition scheme
 * @array: The array to partition
 * @low: The starting index of the partition
 * @high: The ending index of the partition
 * @size: The size of the array
 *
 * Return: The final index of the pivot
 */
int lomuto_partition(int *array, int low, int high, size_t size)
{
	int *pivot, i, j;

	pivot = array + high;
	i = low;

	for (j = low; j < high; j++)
	{
		if (array[j] < *pivot)
		{
			if (i != j)
			{
				swap_ints(array + i, array + j);
				print_array(array, size);
			}
			i++;
		}
	}

	if (array[i] > *pivot)
	{
		swap_ints(array + i, pivot);
		print_array(array, size);
	}

	return (i);
}

/**
 * quick_sort_recursion - Recursive function for quick sort
 * @array: The array to sort
 * @low: The starting index
 * @high: The ending index
 * @size: The size of the array
 */
void quick_sort_recursion(int *array, int low, int high, size_t size)
{
	int p;

	if (low < high)
	{
		p = lomuto_partition(array, low, high, size);
		quick_sort_recursion(array, low, p - 1, size);
		quick_sort_recursion(array, p + 1, high, size);
	}
}

/**
 * quick_sort - Sort an array of integers in ascending order using Quick sort
 *              (Lomuto partition scheme)
 * @array: The array to sort
 * @size: The size of the array
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	quick_sort_recursion(array, 0, (int)size - 1, size);
}
