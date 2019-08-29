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
	size_t i, validate, end = size - 1, beg = 0;

	if (array == NULL || array[0] > value)
		return (-1);
	validate = end / 2;
	while (1)
	{
		if (end < beg)
			return (-1);
		printf("Searching in array: ");
		for (i = beg; i <= end; i++)
			printf(i < end ? "%d, " : "%d\n", array[i]);
		if (array[validate] == value)
			return ((int) validate);
		if (array[validate] < value)
		{
			beg = validate + 1;
		}
		else if (array[validate] > value)
		{
			beg = validate - 1;
		}
		validate = (end - beg) / 2 + beg;
	}
}
