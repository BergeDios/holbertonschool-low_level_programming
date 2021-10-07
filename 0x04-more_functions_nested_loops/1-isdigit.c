#include "main.h"
/**
 * _isdigit - checks for char c if it is digit
 *
 *@c: The character in ASCII code
 *
 * Return: 1 if its true 0 if false
 */

int _isdigit(int c)
{
	if (c <= 57 && c >= 48)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
