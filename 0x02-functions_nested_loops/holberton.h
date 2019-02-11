#include <stdio.h>
void print_alphabet(void)
{
	char Z;

	for (Z = 'a'; Z <= 'z'; Z++)
	{
		putchar(Z);
	}
	putchar('\n');
}
void print_alphabet_x10()
{
	int x = 9;
	int i;

	for (i = 0; i <= x; i++)
	{
		print_alphabet();
	}
}
