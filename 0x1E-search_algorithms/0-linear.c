#include "search_algos.h"
/**
 * linear_search - search using a linear search
 * @array: the array
 * @size: size of the array
 * @value: the search value
 * Return: index of first instance of value or -1 on fail
 */
int linear_search(int *array, size_t size, int value)
{
	int i = 0;

	while ((size_t) i < size)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}
