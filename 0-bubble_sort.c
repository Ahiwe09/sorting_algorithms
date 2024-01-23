#include "sort.h"

/**
 * bubble_sort - sort an array of an int in asscending oder.
 *
 * @array: Array of int to be sorted
 * @size: Size of an array
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t k;
	int tmp, sort = 0;

	if (array == NULL || size == 0)
		return;
	while (sort == 0)
	{
		sort = 1;
		for (k = 0; k < size - 1; k++)
		{
			if (array[n] > array[k + 1])
			{
				sort = 0;
				tmp = array[k];
				array[k] = array[k + 1];
				array[k + 1] = tmp;
				print_array(array, size);
			}
		}
	}
}
