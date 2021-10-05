#include <stdio.h>

/**
 * main - Prints the add of the even-valued
 * fibonacci numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
	long int n1, n2, nf, nfs;

	n1 = 1;
	n2 = 2;
	nf = 0;
	nfs = 0;
	while (fn <= 4000000)
	{
		nf = n1 + n2;
		n1 = n2;
		n2 = fn;
		if ((n1 % 2) == 0)
		{
			nfs += n1;
		}
	}
	printf("%ld\n", nfs);
	return (0);
}
