#include "holberton.h"
/**
 * print_diagonal - prints a diagonal line
 * @n: the length of the diagonal
 */
void print_diagonal(int n)
{
	int Z;
	int Y;

	if (n > 0)
	{
		for (Z = 0; n >= Z; Z++)
		{
			for (Y = 0; Y < Z; Y++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
