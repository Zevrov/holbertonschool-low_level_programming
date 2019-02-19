#include "holberton.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers followed
 * by a new line.
 * @a: the array
 * @n: the number of elements printed
 */
void print_array(int *a, int n)
{
	int m;

	for (m = 0; m < n; m++)
	{
		if (m == (n - 1))
			printf("%d\n", a[m]);
		else
			printf("%d, ", a[m]);
	}
}
