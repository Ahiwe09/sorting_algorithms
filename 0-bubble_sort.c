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
	size_t n;
	int tmp, sort = 0;

	if (array == NULL || size == 0)
		return;
	while (sort == 0)
	{
		sort = 1;
		for (n = 0; n < size - 1; n++)
		{
			if (array[n] > array[n + 1])
			{
				sort = 0;
				tmp = array[n];
				array[n] = array[n + 1];
				array[n + 1] = tmp;
				print_array(array, size);
			}
		}
	}
}
