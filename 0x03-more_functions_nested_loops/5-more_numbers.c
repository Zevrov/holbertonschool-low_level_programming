#include "holberton.h"
/**
 * more_numbers - prints 10 times the numbers 0-14 followed by a new line
 */
void more_numbers(void)
{
	int Z;
	int Y;
	int X;

	for (Z = 0; Z < 9; Z++)
	{
		for (Y = '0'; Y <= '1'; Y++)
		{
			for (X = '0'; X <= '9'; X++)
			{
				if (Y == '1')
					_putchar(Y);
				_putchar(X);
				if (Y == '1' && X == '4')
					break;
			}
		}
		_putchar('\n');
	}
}
