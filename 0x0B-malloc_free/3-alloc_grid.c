#include "main.h"
#include <stdlib.h>
/**
 * freegrid - freea grid
 * @grid: rows
 * @height: columns
 * Return: nothing
 */
void freegrid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
/**
 * alloc_grid - ALLOCATES MEMORY FOR 2D array
 * @width: rows
 * @height: columns
 * Return: pointer to first element pointer
 */
int **alloc_grid(int width, int height)
{
	int i;

	int j;

	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			freegrid(grid, height);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid);
}
