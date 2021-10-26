#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to new string or null if fail
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int p1 = 0, p2 = 0, p3 = 0, p4 = 0;
	char *conc;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	for (; s1[p1] != 0; p1++)
		;
	for (; s2[p2] != 0; p2++)
		;
	conc = malloc(sizeof(char) * (p1 + p2) + 1);
	if (conc == NULL)
		return (NULL);
	while (p3 < p1)
	{
		conc[p3] = s1[p3];
		p3++;
	}
	while (p3 <= (p1 + p2))
	{
		conc[p3] = s2[p4];
		p3++;
		p4++;
	}
	return (conc);
}
