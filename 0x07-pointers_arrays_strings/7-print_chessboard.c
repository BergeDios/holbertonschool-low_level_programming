#include "main.h"

/**
 * print_chessboard - print chessboard given set 2D array
 * @a: 2D array
 * Return: nothing
 */

void print_chessboard(char (*a)[8])
{

	int row = 0;
	int column = 0;

	while (row < 8)
	{
		while (column < 8)
		{
			_putchar(a[row][column]);
			column++;
		}
	_putchar('\n');
	row++;
	column = 0;
	}
}
