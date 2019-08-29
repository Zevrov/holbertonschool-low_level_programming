#include "search_algos.h"
/**
 * binary_search - search using a binary search
 * @array: the array
 * @size: array size
 * @value: the search value
 * Return: where the value is located or -1 on fail
 */
int binary_search(int *array, size_t size, int value)
{
	int low = 0, middle, high, index;

	if (array[0] > value || array == NULL)
		return (-1);
	high = size - 1;
	while (low <= high)
	{
		printf("Searching in array: ");
		for (index = low; index <= high; index++)
		{
			if (index < high)
			{
				printf("%i, ", array[index]);
			}
			if (index == high)
			{
				printf("%i\n", array[index]);
			}
		}
		middle = (high + low) / 2;
		if (array[middle] < value)
		{
			low = middle + 1;
		}
		else if (array[middle] > value)
		{
			high = middle - 1;
		}
		else
		{
			return (middle);
		}
	}
	return (-1);
}
