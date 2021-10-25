#include "main.h"

/**
 * _strlen - returns the length of a string
 *@s : input string
 *Return: string length
 */

int _strlen(char *s)
{
	int j = 0;

	while (s[j] != 0)
	{
		j++;
	}
	return (j);
}
