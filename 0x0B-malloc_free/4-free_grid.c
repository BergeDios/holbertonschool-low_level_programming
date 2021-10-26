#include <stdlib.h>
#include "main.h"

/**
 * free_grid - free a 2D grid
 * @grid: multidimensional array
 * @height
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
