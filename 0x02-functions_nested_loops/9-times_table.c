#include "holberton.h"
/**
* times_table - prints the times table on a 9x9 grid
*/
void times_table(void)
{
	int X;
	int Y;
	int Z;

	for (X = 0; X <= 9; X++)
	{
		for (Y = 0; Y <= 9; Y++)
		{
			Z = (X * Y);
			_putchar('0' + Z);
			if (Y <= 8)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			if (Y == 9)
			{
				_putchar('\n');
			}
		}
	}
}
