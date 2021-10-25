#include "main.h"
/**
 * _memcpy - copies n bytes from src to dest.
 * @n: numbers of bytes from memory area src.
 * @src: memory area to be copied from.
 * @dest: memory area to be copied to.
 * Return: pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int p = 0;

	while (p < n)
	{
		*(dest + p) = *(src + p);
		p++;
	}
	return (dest);
}
