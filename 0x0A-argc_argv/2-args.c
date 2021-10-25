#include <stdio.h>
/**
 * main - prints all arguments it receives.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
	int pos;

	for (pos = 0; pos < argc; pos++)
		printf("%s\n", argv[pos]);
	return (0);
}
