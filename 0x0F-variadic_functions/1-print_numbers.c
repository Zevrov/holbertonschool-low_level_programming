#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_numbers - prints the numbers
 * @separator: separates the input
 * @n: number of arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	int z = 0;
	unsigned int count;

	va_start(args, n);
	for (count = 0; count < n; count++)
	{
		z = va_arg(args, int);
		printf("%d", z);
		if (separator != NULL && count < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
