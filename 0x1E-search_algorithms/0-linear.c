#include "search_algos.h"
/**
 * linear_search - search for a value in an array of ints using linear search
 * @array: array to search through
 * @size: number of elements in array
 * @value: value to search for
 * Return: index of first instance of value or -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
    int i = 0;

    while ((size_t) i < size;)
    {
        printf("Value checked array[%d] = [%d]\n", i, array[i]);
        if (array[i] == value)
            return (i);
        i++;
    }
    return (-1);
}
