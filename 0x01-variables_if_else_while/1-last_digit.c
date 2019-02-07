#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - prints the last digit of n and if it is grater than 5,
* less than 5 or =0
* Return: returns 0
*/

int main(void)
{
	int n, last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;
	if (n > 5)
	{
	printf("Last digit of %d is %d and greater than 5\n", n, last);
	}
	if (n == 0)
	{
	printf("Last digit of %d is %d and is 0\n", n, last);
	}
	if (n < 6 != 0)
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last);
	}
	return (0);
}
