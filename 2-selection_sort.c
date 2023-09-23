#include "sort.h"

/**
 * swap_i - swap two index in an array.
 * @f: first index
 * @s: second index
 */
void swap_i(int *f, int *s)
{
	int tmp;

	tmp = *f;
	*f = *s;
	*s = tmp;
}

/**
 * selection_sort - sorts an array of integers in ascending order.
 * @array: array of integers.
 * @size: size of array.
 */
void selection_sort(int *array, size_t size)
{
	int *min;
	size_t i, j;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min = array + i;
		for (j = i + 1; j < size; j++)
			min = (array[j] < *min) ? (array + j) : min;

		if ((array + i) != min)
		{
			swap_ints(array + i, min);
			print_array(array, size);
		}
	}
}
