#include <stdio.h>
/**
 * main - prints the name of this program
 *@argv: the argv
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[0]);
	}
       	return (0);
}
