#include "sort.h"

/**
 * selection_sort - sorting algorithm: comparison sort, time complexity O(n^^2)
 * @array: the array
 * @size: size of array
 */

void selection_sort(int *array, size_t size)
{
	size_t n, m, min;
	int tmp;

	for (n = 0; n < (size - 1); n++)
	{
		min = n;
		for (m = i + 1; m < size; m++)
		{
			if (array[m] < array[min])
				min = m;
		}
		if (min != n)
		{
			tmp = array[min];
			array[min] = array[n];
			array[n] = tmp;
			print_array(array, size);
		}
	}
}
