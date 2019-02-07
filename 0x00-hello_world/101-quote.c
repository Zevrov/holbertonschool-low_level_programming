#include <unistd.h>
/**
* main - prints the standard error sandwiched around the standard outpu/t
*
* Return: returns 1
*/

int main(void)
{
	int A;
	int B;
	int C;

	A = sizeof("and that piece of art is useful");
	B = sizeof("\"");
	C = sizeof(" - Dora Korpar, 2015-10-19\n");

	write(2, "and that piece of art is useful", A);
	write(1, "\"", B);
	write(2, " - Dora Korpar, 2015-10-19\n", C);
	return (1);
}
