#include "main.h"
/**
 * _islower - checks for argument c if it is lowercase
 *
 *@c: The character in ASCII code
 *
 * Return: 1 if its lowercase 0 otherwise
 */

int _islower(int c)
{
	if (c <= 122 && c >= 97)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
