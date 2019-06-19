#include "sort.h"

/**
 * selection_sort - sort array of ints using selection sort
 * @array: pointer to array of ints
 * @size: size of array
 * Return: Void
 */
void selection_sort(int *array, size_t size)
{
	size_t x = 0, y = 0, min = 0;
	int temp = 0;

	if (!array)
		return;

	for (x = 0; x < size - 1; x++)
	{
		min = x;
		for (y = x + 1; y < size; y++)
		{
			if (array[y] < array[min])
				min = y;
		}
		if (min != x)
		{
			temp = array[x];
			array[x] = array[min];
			array[min] = temp;
			print_array(array, size);
		}
	}
}
