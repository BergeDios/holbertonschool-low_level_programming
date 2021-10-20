#include "main.h"

/**
 * rootfinder - find square root of n, starting with root 0
 * @n: input num
 * @root: number to be tested as root
 * Return: natural square root, or -1 if not natural root
 */

int rootfinder(int n, int root)
{
	if (root * root > n)
		return (-1);

	if (root * root == n)
		return (root);

	return (rootfinder(n, root + 1));
}

/**
 * _sqrt_recursion - find square root of n
 * @n: input num
 * Return: natural square root of n, or -1 if not a natural root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (rootfinder(n, 0));
}
