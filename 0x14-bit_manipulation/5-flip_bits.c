#include "main.h"
/**
 * flip_bits - returns the number of bits fliped for numa to numb
 * @n: first number
 * @m: second number
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bits = 0;
	unsigned long int new;

	new = n ^ m;

	while (new > 0)
	{
		bits += (new & 1);
		new = new >> 1;

	}
	return (bits);
}
