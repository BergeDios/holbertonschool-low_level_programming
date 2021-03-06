#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print sums of diagonals in matrix
 * @a: matrix
 * @size: size of matrix
 */

void print_diagsums(int *a, int size)
{

	int sum_1 = 0;
	int sum_2 = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		sum_1 += a[(size + 1) * i];
		sum_2 += a[(size - 1) * (i + 1)];
	}
	printf("%d, %d\n", sum_1, sum_2);

}
