#include "main.h"

/**
 * swap_int - swaps the value of two ints
 *@a : int variable
 *@b : int variable
 * Return : nothing.
 */
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}


