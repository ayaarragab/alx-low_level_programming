#include <stdlib.h>
#include "main.h"
/**
 * free_grid - free a grid
 * @grid: 2d array
 * @height: columns
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
