#include "sort.h"

/**
 * swap_i - swap 2 indexs in an array.
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
 * bubble_sort - Sort an array of integers in ascending order.
 * @array: array
 * @size: size
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, len = size;
	int run = 1;

	if (array == NULL || size < 2)
		return;

	while (run == 1)
	{
		run = 0;
		for (i = 0; i < len - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap_i(array + i, array + i + 1);
				print_array(array, size);
				run = 1;
			}
		}
		len--;
	}
}
