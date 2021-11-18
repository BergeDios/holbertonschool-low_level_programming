#include "main.h"
/**
 * clear_bit - sets the valu of a given index to 0
 * @n: pointer to number
 * @index: position of bit to change
 * Return: 1 if it worked or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int modifier;

	if (index > 63)
		return (-1);
	modifier = 1 << index;

	*n = (*n | modifier);
	*n = (*n ^ modifier);
	return (1);
}
