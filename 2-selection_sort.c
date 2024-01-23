#include "sort.h"

/**
 * selection_sort - this function sorts an array of integers
 * in ascending order
 * @array: the array to be sorted
 * @size: the size of the array
 *
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	size_t i, step, min_idx;
	int tmp;

	for (step = 0; step < size - 1; step++)
	{
		min_idx = step;
		for (i = step + 1; i < size; i++)
		{
			if (array[i] < array[min_idx])
			min_idx = i;
		}

		if (min_idx != step)
		{
			tmp = array[step];
			array[step] = array[min_idx];
			array[min_idx] = tmp;
			print_array(array, size);
		}
	}
}
