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
		for (X = '0'; X <= '9'; X++)
		{
			for (Y = '0'; Y <= '5'; Y++)
			{
				for (Z = '0'; Z <= '9'; Z++)
				{
					if (W >= '2' && X >= '4' && Y >= '0' && Z >= '0')
					break;
					else
					{
						_putchar(W);
						_putchar(X);
						_putchar(':');
						_putchar(Y);
						_putchar(Z);
						_putchar('\n');
					}
				}
			}
		}
	}
}
