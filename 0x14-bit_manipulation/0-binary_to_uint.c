#include "main.h"
/**
 * binary_to_uint - converts a binary num to an unsigned int
 * @b: pointer to string of chars 0 and 1
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int len = 0, pow = 0;
	unsigned int sum = 0;

	if (!b)
		return (sum);
	while (b[len])
		len++;
	len--;
	while (b[len])
	{
		if ((b[len] != '0') && (b[len] != '1'))
			return (0);
		if (b[len] == '1')
			sum += (1 * (1 << pow));
		pow++, len--;
	}
	return (sum);
}
