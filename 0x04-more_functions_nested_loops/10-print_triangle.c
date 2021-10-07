#include "main.h"

/**
 * print_triangle - prints a triangle with hashes
 * @size: size of the triangle
 * Return: no return.
 */
void print_triangle(int size)
{
	int i, j;

	j = 0;
	for (i = 0; i < size; i++)
	{
		for (j = 1; j < (size - i); j++)
		{
			_putchar(32);
		}
		for (j--; j < size; j++)
		{
			_putchar(35);
		}
		if (i < (size - 1))
			_putchar(10);
	}
	_putchar(10);
}
