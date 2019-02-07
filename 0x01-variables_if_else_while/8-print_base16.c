#include <stdio.h>
/**
* main - prints the singular digits of hexadecimal
* Return: returns 0
*/
int main(void)
{
	int Z;
	char z;

	for (Z = '0' ; Z <= '9' ; Z++)
	{
	putchar(Z);
	}
	for (z = 'a' ; z <= 'f' ; z++)
	{
	putchar(z);
	}
	putchar('\n');
	return (0);
}
