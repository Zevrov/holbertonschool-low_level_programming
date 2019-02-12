#include "holberton.h"
#include <stdio.h>
/**
* print_to_98 - prints the numbers from n to 98
* @n: the number you want to print to 98 from
*/
void print_to_98(int n)
{
	if (n > 98)
	{
		for (n = n; n > 98; n--)
		{
			printf("%d ,", n);
		}
	}
	if (n < 98)
	{
		for (n = n; n < 98; n++)
		{
			printf("%d ,", n);
		}
	}
	if (n == 98)
	{
		printf("%d\n", n);
	}
}
