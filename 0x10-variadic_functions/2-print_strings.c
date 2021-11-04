#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - prints a string followed by a line
 * @separator: string separator
 * @n numbers of string passed to the function
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list al;

	va_start(al, n);
	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			s = va_arg(al, char *);
			if (s == NULL)
				printf("(nil)");
			else
				printf("%s", s);
			if (i < (n - 1) && separator != NULL)
				printf("%s", separator);
		}
		va_end(al);
		printf("\n");
	}
}
