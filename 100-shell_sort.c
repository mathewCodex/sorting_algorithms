#include "sort.h"

void swap_integers(int *a, int *b);
int lomuto_partition(int *array, size_t size, int left, int right);
void lomuto_sort(int *array, size_t size, int left, int right);
void quick_sort(int *array, size_t size);

/**
 * shell_sort - Sort an arr of int in ascending order
 *              using shell sort algorithm
 * @array: arr of int
 * @size: the size of the arr
 *
 * Description: uses the knuth interval sequence
 */
void shell_sort(int *array, size_t size)
{
	size_t gap, i, j;

	if (array == NULL || size < 2)
		return;

	for (gap = 1; gap < (size / 3);)
		gap = gap * 3 + 1;

	for (; gap >= 1; gap /= 3)
	{
		for (i = gap; i < size; i++)
		{
			j = i;
			while (j >= gap && array[j - gap] > array[j])
			{
				swap_integers(array + j, array + (j - gap));
				j -= gap;
			}
		}
		print_array(array, size);
	}
}
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
