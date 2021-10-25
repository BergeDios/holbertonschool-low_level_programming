#include "main.h"
#include <stdio.h>
/**
 * _strspn - gets the length of a prefix substring
 * @s: string to be checked
 * @accept: substring to match
 * Return: number of bytes matched
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j = 0;
	unsigned int count = 0;

	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
			j++;
		}
		if (accept[j] == '\0' && count > 0)
			return (count);
		i++;
		j = 0;

	}
	return (count);
}
