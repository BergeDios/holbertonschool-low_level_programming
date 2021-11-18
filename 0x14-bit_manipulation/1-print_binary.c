#include "main.h"
/**
 * print_binary - prints the bianry representation of a number
 * @n: unsigned long int to convert
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int aux_n = n;
	int i = 0;

	while (aux_n > 0)
	{
		i++;
		aux_n = aux_n >> 1;
	}
	i--;

	if (n == 0)
		_putchar('0');

	while (i >= 0)
	{
		if ((n >> i) & 1)
			_putchar('1');
		else
			_putchar('0');
		i--;
	}
}
