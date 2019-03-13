#include <stdio.h>
#include "3-calc.h"
/**
 * op_add - adds integers
 * @a: the first int
 * @b: the second int
 * Return: the sum
 */
int op_add(int a, int b)
{
	int sum = a + b;

	return (sum);
}
/**
 * op_sub - subtracts integers
 * @a: the first integer
 * @b the second integer
 * Return: the difference
 */
int op_sub(int a, int b)
{
	int diff = a - b;

	return (diff);
}
/**
 * op_mul - multiplies integers
 * @a: the first integer
 * @b: the second integer
 * Return: the product
 */
int op_mul(int a, int b)
{
	int prod = a * b;

	return (prod);
}
/**
 * op_div - divides integers
 * @a: the first integer
 * @b: the second integer
 * Return: the result
 */
int op_div(int a, int b)
{
	int result = a / b;

	return (result);
}
/**
 * op_mod - mods 2 integers
 * @a: the first integer
 * @b: the second integer
 * Return: the remainder of a by b
 */
int op_mod(int a, int b)
{
	int remain = a % b;

	return (remain);
}
