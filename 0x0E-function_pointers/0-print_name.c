#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - prints a name
 * @name: the name being printed
 * @f: the function being used to print
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	if (name == NULL)
		return;
	else
		f(name);
}
