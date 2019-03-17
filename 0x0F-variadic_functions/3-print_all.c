#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_int - prints an int
 * @args: the list of args
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}
/**
 * print_char - prints a char
 * @args: the list of args
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}
/**
 * print_string - prints a string
 * @args: the list of args
 */
void print_string(va_list args)
{
	char *z = va_arg(args, char *);

	if (!z)
	{
		printf("(nil)");
		return;
	}
	printf("%s", z);
}
/**
 * print_float - prints floats
 * @args: the list of args
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}
/**
 * print_all - prints all
 * @format: formats of arg
 */
void print_all(const char * const format, ...)
{
	types_t types[] = {
	{'c', print_char},
	{'i', print_int},
	{'f', print_float},
	{'s', print_string},
	{'\0', NULL}
	};
	va_list args;
	char *sep1 = "", *sep2 = ", ";
	int count1 = 0, count2 = 0;

	va_start(args, format);
	while (format !=  NULL && format[count1] != '\0')
	{
		count2 = 0;
		while (types[count2].z != '\0')
		{
			if (format[count1] == types[count2].z)
			{
				printf("%s", sep1);
				types[count2].f(args);
				sep1 = sep2;
			}
			count2++;
		}
		count1++;
	}
	printf("\n");
	va_end(args);
}
