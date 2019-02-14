#include "holberton.h"
/**
 * print_triangle - prints a triangle
 * @size: the size of the triangle's height
 */
void print_triangle(int size)
{
	int X, Y;

	if (size >= 0)
	{
		for (X = 1; size >= X; X++)
		{
			for (Y = 0; size - X > Y; Y++)
				_putchar(' ');
			for (Y = 0; Y < X; Y++)
				_putchar('#');
			if (X != 0)
				_putchar('\n');
		}
	}
	if (size <= 0)
		_putchar('\n');
}
