#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates 2 strings
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 * @n: amount of bytes from s2
 * Return: pointer to callocated memory or null if fail
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concs;
	unsigned int les1, les2, leconcs, p;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (les1 = 0; s1[les1] != '\0'; les1++)
		;

	for (les2 = 0; s2[les2] != '\0'; les2++)
		;

	if (n >= les2)
		n = les2;

	leconcs = les1 + n;

	concs = malloc(leconcs + 1);

	if (concs == NULL)
		return (NULL);

	for (p = 0; p < leconcs; p++)
	{
		if (p < les1)
			concs[p] = s1[p];
		else
			concs[p] = s2[p - les1];
	}
	return (concs);
}
