#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @b: constant byte
 * @n: bytes of memory
 * @s: memory area
 * Return: pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
