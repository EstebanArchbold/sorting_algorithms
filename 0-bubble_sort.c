#include "sort.h"

/**
 * bubble_sort - function that sorts an array of integers in ascending order
 * order using the Bubble sort algorithm.
 * @array: The array that is ordered.
 * @size: The size of the array.
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
