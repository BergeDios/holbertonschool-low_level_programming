#include "main.h"

/**
 * _strncat - concatenate n bytes to destination string
 * @dest: string to be appended to
 * @src: string to append
 * @n: append n number of bytes(chars)
 * Return: concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int p1 = 0;
	int p2 = 0;

	while (dest[p1] != '\0')
		p1++;

	while (src[p2] != src[n])
	{
		dest[p1 + p2] = src[p2];
		p2++;
	}
	dest[p1 + p2] = '\0';

	return (dest);
}
