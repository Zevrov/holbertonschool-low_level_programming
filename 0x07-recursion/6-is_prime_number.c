#include "holberton.h"
/**
 *
 *
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

int is_prime_number(int n)
{
	if (isPrime(n, 2))
		return(1);
	else
		return(0);
}
