#include <stdio.h>
/**
* main - prints the lowercase english alphabet but not e or q
* Return: returns 0
*/
int main(void)
{
	char Z;

	for (Z = 'a' ; Z <= 'z' ; Z++)
	{
	if (Z != 'q' && Z != 'e')
		{
		putchar (Z);
		}
	}
	putchar ('\n');

	return (0);
}
