#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - print sum if all arguments given are numbers
 * @argc: argument counter
 * @argv: arguments
 * Return: 0 on success, 1 if an argument wasn't a number
 */

int main(int argc, char *argv[])
{
	int i = 1, j = 0;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	while (i < argc)
	{
		while (argv[i][j] != '\0')
		{
			printf("entered second while");
			if (argv[i][j] >= '0' && argv[i][j] <= '9')
			{
				j++;
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += (atoi(argv[i]));
		j = 0;
		i++;
	}
	printf("%d\n", sum);

	return (0);
}
