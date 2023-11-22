#include "sort.h"

/**
 * selection_sort - implementation of selection sort
 * @array: this is the unsorted array
 * @size: number of elements in the array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, c, k, tmp, swap;

	if (array == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		for (k = i, c = i; c < size; c++)
			if (array[c] < array[k])
			{
				k = c;
				swap = 1;
			}
		if (swap == 1)
		{
			tmp = array[k];
			array[k] = array[i];
			array[i] = tmp;
			print_array(array, size);
			swap = 0;
		}
	}
}
