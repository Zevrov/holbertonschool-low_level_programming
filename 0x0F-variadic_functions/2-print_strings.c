#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_strings - prints strings
 * @separator: the separator character
 * @n: the number of args
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	char *z;
	unsigned int count;

	va_start(args, n);
	for (count = 0; count < n; count++)
	{
		z = va_arg(args, char *);
		if (z != NULL)
			printf("%s", z);
		else
			printf("(nil)");
		if (separator != NULL && count < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
