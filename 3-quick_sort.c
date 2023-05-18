#include "sort.h"

/**
 * swap - swaps two elements.
 * @x: first element.
 * @y: second element.
 */
void swap(int *x, int *y)
{
	int tmp;

	tmp = *y;
	*y = *x;
	*x = tmp;
}

/**
 * partitioner - returns the right location for the pivot.
 * @array: array.
 * @size: size of the array.
 * Return: the location of the pivot.
 */
int partitioner(int *array, size_t size)
{
	int pvt = array[size];
	size_t i = -1, j;

	for (j = 0; j < size; j++)
		if (array[j] <= pvt)
		{
			i++;
			if (i != j)
			{
				swap(&array[i], &array[j]);
				print_array(array, size + 1);
			}
		}
	i++;
	if (i != size)
	{
		swap(&array[i], &array[size]);
		print_array(array, size + 1);
	}

	return (i);

}

/**
 * quick_sort - sorts an array of ints using quick sort algorithm.
 * @array: array to be sorted.
 * @size: size of the array.
 */
void quick_sort(int *array, size_t size)
{
	size_t pvt;

	if (!array || size < 2)
		return;

	pvt = partitioner(array, size - 1);

	quick_sort(array, pvt);
	quick_sort(array + pvt, size - pvt);

}
