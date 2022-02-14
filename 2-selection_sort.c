#include "sort.h"
/**
 * selection_sort - sorts an array of integers in ascending order
 * using the Selection sort algorithm
 * @array: array of integers
 * @size: size of array
 *
 * Return: Void
 */

void selection_sort(int *array, size_t size)
{
	int aux, idx_min;
	size_t i, j;

	if (array == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		idx_min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[idx_min])
			{
				idx_min = j;
			}
		}
		if (array[idx_min] < array[i])
		{
			aux = array[idx_min];
			array[idx_min] = array[i];
			array[i] = aux;
			print_array(array, size);
		}
	}
}
