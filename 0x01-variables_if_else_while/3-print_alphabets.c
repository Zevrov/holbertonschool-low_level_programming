#include <stdio.h>
/**
* main - prints the english alphabet in upper and lowercase
* Return: returns 0
*/
int main(void)
{
	char Z;
	char z;

	for (Z = 'a'; Z <= 'z'; Z++)
	{
	putchar (Z);
	}
	for (z = 'A'; z <= 'Z'; z++)
	{
	putchar (z);
	}
	putchar ('\n');

	return (0);
}
