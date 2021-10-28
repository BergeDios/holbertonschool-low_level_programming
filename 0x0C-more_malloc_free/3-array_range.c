#include "main.h"
#include <stdlib.h>

/**
 * array_range - create array of integers
 * @min: range of nums starts
 * @max: range of nums ends
 * Return: pointer to array or NULL if fails
 */

int *array_range(int min, int max)
{
	int *p;
	int i;
	int range = (max - min + 1);

	if (min > max)
		return (NULL);

	p = malloc(sizeof(int) * range);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < range; i++)
	{
		p[i] = min;
		min++;
	}
	return (p);
}
