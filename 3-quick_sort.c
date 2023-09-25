#include "sort.h"

void swap_integers(int *a, int *b);
int lomuto_partition(int *array, size_t size, int left, int right);
void lomuto_sort(int *array, size_t size, int left, int right);
void quick_sort(int *array, size_t size);

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
 * lomuto_partition - order a subset of an arr of int according to
 *                      the lomuto partition scheme last
 *                      elem as pivot
 * @array: arr of int
 * @size: size of the arr
 * @left: starting idx of the subset to order
 * @right: ending idx of the subset to order
 *
 * Return: final partition idx
 */
int lomuto_partition(int *array, size_t size, int left, int right)
{
	int *pivot, above, below;

	pivot = array + right;
	for (above = below = left; below < right; below++)
	{
		if (array[below] < *pivot)
		{
			if (above < below)
			{
				swap_integers(array + below, array + above);
				print_array(array, size);
			}
			above++;
		}
	}

	if (array[above] > *pivot)
	{
		swap_integers(array + above, pivot);
		print_array(array, size);
	}

	return (above);
}
/**
 * lomuto_sort - implement the quicksort algo through recursion
 * @array: arr int to sort
 * @size: the sorting of the arr
 * @left: the start idx of the arr partition
 * @right: end idx of -----
 *
 * Description: Uses the lomuto partition scheme
 */
void lomuto_sort(int *array, size_t size, int left, int right)
{
	int part;

	if (right - left > 0)
	{
		part = lomuto_partition(array, size, left, right);
		lomuto_sort(array, size, left, part - 1);
		lomuto_sort(array, size, part + 1, right);
	}
}
/**
 * quick_sort - sort an arr of int in ascending
 *
 * @array: an array of int
 * @size: the size of the array
 *
 * Description: uses the lamuto partition scheme.
 *              print the array after each swap of two elements
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	lomuto_sort(array, size, 0, size - 1);
}
