#include "sort.h"

/**
 * swap_integers - Swap two int in an array
 * @a: The first int to swap
 * @b: The second int to swap
 */
void swap_integers(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * bubble_sort - sorting arr of int in ascending order
 * @array: An arr of int
 * @size: the size of arr
 *
 * Description: point the arr after each swap
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	if (size < 2)
		return;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap_integers(&array[j], &array[j + 1]);
				print_array(array, size);
			}
		}
	}
}
