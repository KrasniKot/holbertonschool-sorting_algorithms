#include "sort.h"

/**
 * partitioner - returns a pivot in order to sort a sub array.
 * @array: array to sort.
 * @start: start.
 * @end: end.
 * @size: size of the array.
 * Return: the pivot.
 */
int partitioner(int *array, int start, int end, size_t size)
{
	int i = start - 1, j, temp;

	for (j = start; j <= end - 1; j++)
	{
		if (array[j] < array[end])
		{
			i++;
			if (i < j)
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
				print_array(array, size);
			}
		}
	}

	i++;
	if (array[i] > array[end])
	{
		temp = array[i];
		array[i] = array[end];
		array[end] = temp;
		print_array(array, size);
	}
	return (i);

}

/**
 * sorter - sorts an array of ints using quick sort algorithm.
 * @array: array to sort.
 * @start: start.
 * @end: end.
 * @size: size.
 */
void sorter(int *array, int start, int end, size_t size)
{
	int pvt;

	if (start < end)
	{
		pvt = partitioner(array, start, end, size);
		sorter(array, start, pvt - 1, size);
		sorter(array, pvt + 1, end, size);
	}
}

/**
 * quick_sort - calls to sorter.
 * @array: array to be sorted.
 * @size: size of the array.
 */
void quick_sort(int *array, size_t size)
{
	sorter(array, 0, size - 1, size);
}
