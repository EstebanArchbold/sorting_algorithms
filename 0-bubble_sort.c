#include "sort.h"

/**
 * bubble_sort - sort an array of integers by ascendig order
 * organizing with the Bubble sort algorithm.
 * @array: orederd arrays
 * @size: array sizes.
 *
 * Return: Nothing.
 **/
void bubble_sort(int *array, size_t size)
{
	size_t total, position;
	int cont = 0;

	if (!array || !size || size < 2)
	{
		return;
	}

	total = 0;
	while (total < size)
	{
		position = 0;
		while (position < (size - 1))
		{
			if (array[position] > array[position + 1])
			{
				cont = array[position];
				array[position] = array[position + 1];
				array[position + 1] = cont;
				print_array(array, size);
			}
			position++;
		}
		total++;
	}
}
