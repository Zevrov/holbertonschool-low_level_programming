#include <stdio.h>
/**
 * main - prints the fizzbuzz test from 1-100
 * Return: Always 0
 */
int main(void)
{
	int X;

	for (X = 1; X <= 100; X++)
	{
		if ((X % 3) == 0 && (X % 5) == 0)
			printf("FizzBuzz ");
		if ((X % 3) == 0)
			printf("Fizz ");
		if ((X % 5) == 0)
			printf("Buzz ");
		if ((X % 5) != 0 && (X % 3) != 0)
			printf("%d ", X);
	}
	printf("\n");
	return (0);
}
