#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints half of a string.
 * @str: input string.
 * Return: no return.
 */
void puts_half(char *str)
{
	int count = 0, i;

	for (; str[count] != 0;)
	{
		count++;
	}
	if (count % 2 != 0)
		i = (count - 1) / 2;

	else
		i = count / 2;

	while (i < count)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar(10);
}
