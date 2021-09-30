#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of char: %u bytes\n", sizeof(char));
	printf("Size of int: %u bytes\n", sizeof(int));
	printf("Size of long int: %zu bytes\n", sizeof(long int));
	printf("Size of long long int: %zu byte\n", sizeof(long long int));
	printf("Size of float: %u bytes\n", sizeof(float));
	return 0;
}
