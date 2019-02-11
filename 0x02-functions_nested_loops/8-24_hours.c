#include "holberton.h"
/**
* jack_bauer - runs a 24 hour clock simulation
*/
void jack_bauer(void)
{
	int W;
	int X;
	int Y;
	int Z;

	for (W = '0'; W <= '2'; W++)
	{
		if (W != '2')
		{
			for (X = '0'; X <= '9'; X++)
		}
		else
		{
			for (X = '0'; X <= '4'; X++)
		}
			if (X != '4')
			{
			for (Y = '0'; Y <= '5'; Y++)
			{
				for (Z = '0'; Z <= '9'; Z++)
				{
				_putchar(W);
				_putchar(X);
				_putchar(':');
				_putchar(Y);
				_putchar(Z);
				_putchar('\n');
				}
			else
			
			}
		}
	}
}
