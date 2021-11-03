#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - test function to validate previous functions
 * user should provide operator and 2 ints
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0 on sucess
 */
int main(int argc, char *argv[])
{
	int a, b;
	int (*fgop)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	fgop = get_op_func(argv[2]);

	if (fgop == NULL || (argv[2][1]))
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", fgop(a, b));

	return (0);
}
