#include "main.h"

/**
 * rev_string - reverse a string
 *@s: string
 *Return: nothing
 */
void rev_string(char *s)
{
	int a = 0;
	int c, b = 0;

	while (s[a] != 0)
		a++;
	a--;
	while (a > b)
	{
		c = s[a];
		s[a--] = s[b];
		s[b++] = c;
	}
}
