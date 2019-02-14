#include "holberton.h"
/**
 * print_square - prints a square using the character '#'
 * @size: the size of the square's size
 */
void print_square(int size)
{
	int X, Y;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (X = 0; X < size; X++)
		{
			for (Y = 0; Y < size; Y++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
