#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns sum of all parameters except count
 * @n: count of integers to add
 * Return: sum of all args
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list al;
	unsigned int i = 0, sum = 0;

	va_start(al, n);
	if (n == 0)
		return (0);
	while (i < n)
	{
		sum += va_arg(al, int);
		i++;
	}
	va_end(al);
	return (sum);
}
