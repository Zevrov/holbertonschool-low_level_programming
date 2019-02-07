#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - prints the last digit of n and some info about it
* Return: returns 0
*/
int main(void)
{
	int n, last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;
	printf("Last digit of %d is %d", n, last);

	if (last > 5)
	{
	printf(" and is greater than 5\n");
	}
	if (last == 0)
	{
	printf(" and is 0\n");
	}
	if (last < 6 && last != 0)
	{
	printf(" and is less than 6 and not 0\n");
	}
	return (0);
}
