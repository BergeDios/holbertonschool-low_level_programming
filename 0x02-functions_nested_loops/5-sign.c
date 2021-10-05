#include "main.h"

/**
 * print_sign - Determines if the given number is greater, equal or less than 0
 *
 * @n: The input number as an integer.
 *
 * Return: 1 is greater than zero. 0 is zero. -1 if less than 0.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
