#include "main.h"

/**
 * puts2 - prints one char out of 2 of a string.
 * @str: input string.
 * Return: no return.
 */
void puts2(char *str)
{
	int pos = 0;

	for (; str[pos] != 0; pos++)
	{
		if (pos % 2 == 0)
			_putchar(str[pos]);
	}
	_putchar(10);
}
