#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of
 * a square matrix of integers
 * @a: the diagonal
 * @size: the size of the diagonals
 */
void print_diagsums(int *a, int size)
{
	int i, x = 0, y = 0;

	for (i = 0; i < size * size; i += (size + 1))
		x += a[i];
	for (i = size - 1; i < (size * size) - (size - 1); i += (size - 1))
		y += a[i];
	printf("%d, %d\n", x, y);
}
