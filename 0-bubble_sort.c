#include "sort.h"

/**
 * bubble_sort - sorts an array of ints using bubble sort algorithm.
 * @array: array to be sorted.
 * @size: size of the array.
 *
*/
void bubble_sort(int *array, size_t size)
{
	size_t temp, i, j;

	for (j = 0; j < size; j++)
	{
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] < array[i + 1])
			{
				temp = array[i + 1];
				array[i + 1] = array[i];
				array[i] = temp;
				print_array(array, size);
			}
		}
	}
}
