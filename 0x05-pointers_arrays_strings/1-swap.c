#include "main.h"

/**
 * swap_int - swaps the value of two ints
 *@a @b : int variables
 * Return : nothing.
 */
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}


