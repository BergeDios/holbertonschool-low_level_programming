#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array
 * @height: height of the grid
 * @width: width of the grid
 * Return: pointer to array or null
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i = 0, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * width);
	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}
	while (i < height)
	{
		grid[i] = malloc(sizeof(int) * height);
		if (grid[i] == NULL)
		{
			free(grid[i]);
			free(grid);
			return (NULL);
		}
		i++;
	}
	i = 0;
	while (i < width)
	{
		while (j < height)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
	return (grid);
}
