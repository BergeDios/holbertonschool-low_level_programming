#include <stdio.h>
/**
 * main - print al combinations of 2 digits without repeat
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, o;

	for (i = 48; i <= 57; i++)
	{
		for (o = (i + 1); o <= 57; o++)
		{
			putchar(i);
			putchar(o);
			if (i == 56 && o == 57)
			{
				putchar(10);
			}
			else
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	return (0);
}
