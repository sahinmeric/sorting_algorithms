#include "sort.h"

/**
 * bubble_sort - orts an array of integers in ascending order with Bubble sort
 * @array: the array of integers
 * @size: the size of the array
 * Return: nothing
 */
void bubble_sort(int *array, size_t size)
{
	unsigned int i, j, k;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				k = array[j];
				array[j] = array[j + 1];
				array[j + 1] = k;
				print_array(array, size);
			}
		}
	}
}
