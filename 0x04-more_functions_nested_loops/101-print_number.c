#include "main.h"

/**
 * print_number - print an integer, without using long, arrays, or pointers
 * @n: number to be printed
 * Return: no return
 */

void print_number(int n)
{
	unsigned int positive = n;

	if (n < 0)
	{
		_putchar('-');
		positive = -n;
	}

	if (positive / 10)
		print_number(positive / 10);

	_putchar(positive % 10 + '0');
}
