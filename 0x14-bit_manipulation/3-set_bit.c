#include "main.h"
/**
 * set_bit - sets the value of a given bit to 1
 * @n: pointer to num
 * @index: number if bit
 * Return: 1 if it worked or -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int modifier;

	if (index < 64)
	{
		modifier = 1 << index;
		*n = (*n | modifier);
		return (1);
	}
	return (-1);
}
