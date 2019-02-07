#include <stdio.h>
/**
* main - prints the lower case alphabet backwards
* Return: returns 0
*/
int main(void)
{
	int Z;

	for (Z = 'z'; Z >= 'a'; Z--)
	{
	putchar(Z);
	}
	putchar('\n');
	return (0);
}
