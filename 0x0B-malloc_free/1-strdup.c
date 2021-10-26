#include <stdlib.h>
#include "main.h"

/**
 * _strdup - return a pointer to new space with copied string
 * @str: string to be copied
 * Return: pointer to duplicated string or null if there's no memory
 */
char *_strdup(char *str)
{
	unsigned int i = 0, j = 0;
	char *da;

	if (str == NULL)
	{
		return (NULL);
	}
	for (; str[i] != 0; i++)
		;
	da = malloc(sizeof(char) * i + 1);
	if (da == NULL)
	{
		return (NULL);
	}
	while (j <= i)
	{
		da[j] = str[j];
		j++;
	}
	return (da);
}
