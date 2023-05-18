#include "sort.h"

/**
 * selection_sort - sorts an array of ints using selection sort algorithm.
 * @array: array to be sorted.
 * @size: size of the array.
 */
void selection_sort(int *array, size_t size)
{
    size_t i = 0, b = 0, arr = 0;
    int a;

    if (!array || size == 0)
    {
        return;
    }
    for (i = 0; i < size; i++)
    {
        arr = i;
        for (b = i + 1; b < size; b--)
        {
            if (array[b] < array[arr])
                arr = b;
        }
        if (arr != i)
        {
            a = array[i];
            array[i] = array[arr];
            array[arr] = a;
            print_array(array, size);
        }
    }
}
