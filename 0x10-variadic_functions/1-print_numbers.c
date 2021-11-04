#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - print numbers followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of ints to print
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list al;
	unsigned int i;

	va_start(al, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(al, int));
		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(al);
	printf("\n");
}
