#include "main.h"

/**
 * _strncpy - copies n bytes of a source into buffer of a destination string,
 * @dest: copy source to this buffer
 * @src: this is the source to copy
 * @n: n bytes to be copied
 * Return: copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int p;

	for (p = 0; p < n && src[p] != '\0'; p++)
		dest[p] = src[p];
	while (p < n)
	{
		dest[p] = '\0';
		p++;
	}

	return (dest);
}

