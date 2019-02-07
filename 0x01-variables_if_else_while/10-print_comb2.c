#include <stdio.h>
/**
* main - prints out numbers 0-99 in decimal
* Return: returns 0
*/
int main(void)
{
	int X;
	int Z;

	for (X = '0'; X <= '9'; X++)
	{
		for (Z = '0'; Z <= '9'; Z++)
		{
			putchar(X);
			putchar(Z);
			if (X < '9' || Z < '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
