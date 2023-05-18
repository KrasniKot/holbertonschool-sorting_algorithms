#include "sort.h"

/**
 * selection_sort - sorts an array of ints using selection sort algorithm.
 * @array: array to be sorted.
 * @size: size of the array.
 */
void selection_sort(int *array, size_t size)
{
	size_t a, b, arr;
	int i;

	if (array == NULL || size < 2)
		return;

	for (a = 0; a < size; a++)
	{
		arr = a;
		for (b = a + 1; b < size; b++)
		{
			if (array[b] < array[arr])
				arr = b;
		}
		if (array[arr] != array[a])
		{
			i = array[arr];
			array[arr] = array[a];
			array[a] = i;
			print_array(array, size);
		}
	}
}
