#include "holberton.h"
/**
 * isPrime - tells you if a number is prime or not
 * @n: the number
 * @i: the number testing n
 * Return: 1 if prime, 0 if not
 */
int isPrime(int n, int i)
{
	if (n <= 2)
		return (0);
	if (n % i == 0)
		return (0);
	if (i * i > n)
		return (1);
	return (isPrime(n, i + 1));
}
/**
 * is_prime_number - tells you if a number is prime or not
 * @n: the number
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
	if (isPrime(n, 2))
		return (1);
	else
		return (0);
}
