#include "main.h"
/**
 * get_bit - value of a bit at a given index
 * @n: input number
 * @index: bit position starting at 0
 * Return: value of bit at index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;


	if (index < 64)
	{
		bit = ((n >> index) & 1);
		return (bit);
	}
	else
		return (-1);
}
