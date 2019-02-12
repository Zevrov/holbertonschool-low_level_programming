#include "holberton.h"
/**
* times_table - prints the times table on a 9x9 grid
*/
void times_table(void)
{
	int X;
	int Y;

	for (X = 0; X <= 9; X++)
	{
		for (Y = 0; Y <= 9; Y++)
		{
			if (X == 0 && Y == 0)
			{
				_putchar('0');
			}
			if ((X * Y) > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + (((X * Y) % 100) / 10));
				_putchar('0' + ((X * Y) % 10));
			}
			if ((X * Y) <= 9 && (X * Y) > 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + (X * Y));
			}
			if (Y == 9)
			{
				_putchar('\n');
			}
		}
	}
}
