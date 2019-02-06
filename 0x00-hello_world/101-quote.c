#include <stdio.h>
#include <unistd.h>
/**
* main - prints
*
* Return: returns 1
*/

int main(void)
{
	int Z;

	Z = sizeof("and that piece of art is useful - Dora Korpar, 2015-10-19");
	write(2, "and that piece of art is useful - Dora Korpar, 2015-10-19\n", Z);
	return (1);
}
