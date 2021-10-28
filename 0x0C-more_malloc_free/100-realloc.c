#include "main.h"
#include <stdlib.h>

/**
 * _realloc - allocate memory and set all values to 0
 * @ptr: pointer to the memory of malloc(old size)
 * @old_size: size previously allocated
 * @new_size: new size to reallocate
 * Return: pointer to reallocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;
	unsigned int p1 = 0;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
		else
			return (p);
	}

	p = malloc(new_size);
	if (p == NULL)
		return (NULL);

	while (p1 < old_size && p1 < new_size)
	{
		*((char *)p + p1) = *((char *)ptr + p1);
		p1++;
	}
	free(ptr);
	return (p);
}
