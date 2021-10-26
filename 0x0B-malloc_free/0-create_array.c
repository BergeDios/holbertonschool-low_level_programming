#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars initialized with a specific
 * @c: character to fill array
 * @size: size of array
 * Return: pointer to the array or null if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *array;

	if (size == 0)
	{
		return (NULL);
	}
	array = malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}

	while (i < size)
	{
		array[i] = c;
		i++;
	}
	return (array);
}
