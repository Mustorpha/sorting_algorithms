#include "sort.h"

/**
 * bubble_sort - bubble sort implementation
 * @array: the array to be sorted
 * @size: number of element in the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t n = 0, t = size;
	int tmp;

	if (array == NULL)
		return;
	for (t = size; t > 0; t--)
	{
		for (n = 0; n < size - 1; n++)
		{
			if (array[n] > array[n + 1])
			{
				tmp = array[n];
				array[n] = array[n + 1];
				array[n + 1] = tmp;
				print_array(array, size);
			}
		}
	}
}
