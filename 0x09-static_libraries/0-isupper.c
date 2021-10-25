#include "main.h"
/**
 * _isupper - checks for char c if it is uppercase
 *
 *@c: The character in ASCII code
 *
 * Return: 1 if true 0 if false
 */

int _isupper(int c)
{
	if (c <= 90 && c >= 65)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
