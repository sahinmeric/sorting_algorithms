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

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - i; j++)
		{
			k = j + 1;
			if (k < size)
			{
				if (array[j] > array[k])
				{
					array[j] = array[j] ^ array[k];
					array[k] = array[j] ^ array[k];
					array[j] = array[j] ^ array[k];
					print_array(array, size);
				}
			}
		}
	}
}
