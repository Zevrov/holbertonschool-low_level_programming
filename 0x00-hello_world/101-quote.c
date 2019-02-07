#include <unistd.h>
/**
* main - prints the standard error sandwiched around the standard outpu/t
*
* Return: returns 1
*/

int main(void)
{
	write(2, "and that piece of art is useful", 31);
	write(1, "\"", 1);
	write(2, " - Dora Korpar, 2015-10-19\n", 27);
	return (1);
}
