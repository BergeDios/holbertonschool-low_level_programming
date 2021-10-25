#include "main.h"

/**
 * findprime - checks if n is a prime number
 * @n: input number
 * @d: divisor
 * Return: 1 if n is prime, 0 otherwise
 */

int findprime(int n, int d)
{
	if (n % d == 0 && d < n)
		return (0);

	if (n == d)
		return (1);

	return (findprime(n, d + 1));
}

/**
 * is_prime_number - checks if input int n is a prime number
 * @n: input number
 * Return: 1 if prime, 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (findprime(n, 2));
}
