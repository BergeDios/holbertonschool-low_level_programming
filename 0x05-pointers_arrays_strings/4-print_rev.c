#include "main.h"
#include <stdio.h>

/**
 * print_rev - print a strin in reverse
 *@s: string
 *Return: nothing
 */
void print_rev(char *s)
{
	int j = 0;

	for (; s[j] != 0;)
	{
		j++;
	}
	for (j--; j >= 0; j--)
		_putchar(s[j]);
	_putchar(10);
}
