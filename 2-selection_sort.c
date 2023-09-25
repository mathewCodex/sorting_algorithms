#include "sort.h"

/**
 * swap_integers - Swap two int in an array
 * @a: The first int to swap
 * @b: The second int to swap
 */
 void swap_integers(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * selection_sort - sort an arr of int in ascending order
 * @array: an arr of int
 * @size: size of the arr
 *
 * Description: print the array after each swap
 */
void selection_sort(int *array, size_t size)
{
	int *minimum;
	size_t i, k;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		minimum = array + i;
		for (k = i + 1; k < size; k++)
			minimum = (array[k] < *minimum) ? (array + k) : minimum;

		if ((array + i) != minimum)
		{
			swap_integers(array + i, minimum);
			print_array(array, size);
		}
	}
}
