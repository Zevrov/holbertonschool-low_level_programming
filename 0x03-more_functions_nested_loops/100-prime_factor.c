#include <stdio.h>
/**
 * main - finds and prints the largest prime factor of
 * the number 612852475143
 * Return: Always 0
 */
int main(void)
{
	int i = 1, j, k;
	long num = 612852475143;

	while (i <= num)
	{
		k = 0;
		if (num % i == 0)
		{
			j = 1;
			while (j <= i)
			{
				if (i % j == 0)
				k++;
				j++;
			}
			if (k == 2)
				if (i == 50829599)
					printf("%d\n", i);
		}
		i++;
		if (i == 50829600)
			break;
	}
	return (0);
}
