#include "main.h"
/**
 * _strchr - locates a character in a string,
 * @s: string.
 * @c: character.
 * Return: the pointer to the first occurrence of the character c.
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; *(s + i) != '\0' && *(s + i) == c; i++)
		;

	if (*(s + i) == c)
		return (s + i);
	else
		return ('\0');
}
