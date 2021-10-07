#include <stdio.h>

/**
 * main - Prints the first 50 of the Fibonacci numbers
 *
 * Return: Always 0.
 */
int main(void)
{
	int c;
	long int n1, n2, nf;

	n1 = 1;
	n2 = 2;
	printf("%ld, %ld", n1, n2);
	for (c = 0; c < 48; c++)
	{
		nf = n1 + n2;
		printf(", %ld", nf);
		n1 = n2;
		n2 = nf;
	}
	printf("\n");
	return (0);
}
