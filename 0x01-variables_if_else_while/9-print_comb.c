#include <stdio.h>
/**
* main - prints all possible combinations of single digit numbers
* Return: returns 0
*/
int main(void)
{
	int Z;

	for (Z = '0'; Z <= '9'; Z++)
	{
	putchar(Z);
		if (Z < '9')
		{
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
