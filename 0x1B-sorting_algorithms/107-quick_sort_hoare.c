#include <stdio.h>

/**
 * quick_sort
 * @array: the array to be sorted
 * @size: the size of the array
 */
void quick_sort(int *array, size_t size)
{
	if (!array)
		return;
	kwik_e_sort(array, size, 0, size - 1);
}

/**
 * kwik_e_sort - helper for quicksort with hoare's partitions
 * @array: the array being sorted
 * @size: the size of the array
 * @first: the start of the array
 * @last: the last index of the array
 */
void kwik_e_sort(int *array, size_t size, size_t first, size_t last)
{
	unsigned int x, y, pivot, temp;

	if (first < last)
	{
		pivot = first;
		x = first;
		y = last;

		while (x < y)
		{
			while (array[x] <= array[pivot] && x < last)
				x++;
			while (array[y] > array[pivot])
				y--;
			if (x < y)
			{
				temp = array[x];
				array[x] = array[y];
				array[y] = temp;
				print_array(array, size);
			}
		}
		temp = array[pivot];
		array[pivot] = array[y];
		array[y] = temp;
		print_array(array, size);
		kwik_e_sort(array, size, first, y - 1);
		kwik_e_sort(array, size, y + 1, last);
	}
}
