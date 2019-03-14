#include "3-calc.h"
#include <stdio.h>
/**
 * get_op_func - gets the right func for the operation
 * @s: the input
 * Return: the right function or NULL
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
	int i;

	for (i = 0; ops[i].op != NULL; i++)
	{
		if (ops[i].op[0] == s[0])
			return (ops[i].f);
	}
	return (NULL);
}
